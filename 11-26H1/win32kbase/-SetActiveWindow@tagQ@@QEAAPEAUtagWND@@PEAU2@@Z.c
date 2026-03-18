/*
 * XREFs of ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x140190850
 * Callers:
 *     <none>
 * Callees:
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 */

struct tagWND *__fastcall tagQ::SetActiveWindow(tagQ *this, struct tagWND *a2)
{
  __int64 v3; // r8
  __int64 i; // rcx
  __int64 *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
    v3 = *(_QWORD *)a2;
  else
    v3 = 0LL;
  for ( i = *((_QWORD *)this + 66); i; i = *(_QWORD *)(i + 1688) )
    *(_QWORD *)(*(_QWORD *)(i + 480) + 40LL) = v3;
  if ( !a2 )
    return (struct tagWND *)HMAssignmentUnlock((__int64 *)this + 16);
  v6[0] = (__int64 *)((char *)this + 128);
  v6[1] = (__int64 *)a2;
  return (struct tagWND *)HMAssignmentLock(v6, 0, v3);
}
