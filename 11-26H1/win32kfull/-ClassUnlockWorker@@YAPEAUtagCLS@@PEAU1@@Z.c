/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x140151BB0
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x140150B00 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 *     ClassUnlock @ 0x140151B6C (ClassUnlock.c)
 * Callees:
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 */

struct _CALLPROCDATA **__fastcall ClassUnlockWorker(struct _CALLPROCDATA **a1)
{
  struct _CALLPROCDATA *v1; // rax
  struct _CALLPROCDATA ***v3; // rbx
  struct _CALLPROCDATA **i; // rdx
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v6; // rcx

  --*((_DWORD *)a1 + 18);
  v1 = a1[7];
  if ( a1 == (struct _CALLPROCDATA **)v1 )
    return a1;
  --*((_DWORD *)v1 + 18);
  if ( *((_DWORD *)a1 + 18) )
    return a1;
  v3 = (struct _CALLPROCDATA ***)((char *)a1[7] + 64);
  for ( i = *v3; i != a1; i = (struct _CALLPROCDATA **)*i )
    v3 = (struct _CALLPROCDATA ***)i;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  DestroyClass(v6, v3);
  return 0LL;
}
