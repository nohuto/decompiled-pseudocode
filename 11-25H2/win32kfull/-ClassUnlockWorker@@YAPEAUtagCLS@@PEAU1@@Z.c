/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1400C32D0
 * Callers:
 *     xxxSetClassData @ 0x1400C2294 (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1400C2F84 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ClassUnlock @ 0x1400C3290 (ClassUnlock.c)
 * Callees:
 *     DestroyClass @ 0x1400B2E28 (DestroyClass.c)
 */

struct _CALLPROCDATA **__fastcall ClassUnlockWorker(struct _CALLPROCDATA **a1)
{
  struct _CALLPROCDATA *v1; // rax
  struct _CALLPROCDATA ***v3; // rbx
  struct _CALLPROCDATA **i; // rdx
  unsigned __int64 CurrentProcessWin32Process; // rax

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
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  DestroyClass((struct tagPROCESSINFO *)CurrentProcessWin32Process, v3);
  return 0LL;
}
