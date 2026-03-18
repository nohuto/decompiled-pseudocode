/*
 * XREFs of VfDeadlockInitializeResource @ 0x140C36320
 * Callers:
 *     ViDeadlockKeInitializeMutant_Exit @ 0x140C379A0 (ViDeadlockKeInitializeMutant_Exit.c)
 *     ViDeadlockKeInitializeMutex_Exit @ 0x140C379F0 (ViDeadlockKeInitializeMutex_Exit.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140261920 (RtlCaptureStackBackTrace.c)
 *     ViLowerIrql @ 0x14064738C (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406473C4 (ViRaiseIrqlToDpcLevel.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ViDeadlockAddResource @ 0x140C36AF0 (ViDeadlockAddResource.c)
 *     ViDeadlockAllocate @ 0x140C36DFC (ViDeadlockAllocate.c)
 *     ViDeadlockDetectionLock @ 0x140C37460 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140C37498 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140C37910 (ViDeadlockFree.c)
 *     ViDeadlockCanProceed @ 0x140C45460 (ViDeadlockCanProceed.c)
 */

__int64 __fastcall VfDeadlockInitializeResource(__int64 a1, __int64 a2, void *a3)
{
  void *v5; // rdi
  USHORT v6; // ax
  PVOID v7; // rcx
  unsigned int v8; // edx
  bool v9; // zf
  __int64 v10; // rax
  unsigned __int8 v11; // bl
  unsigned int v12; // esi
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  PVOID Entry; // [rsp+38h] [rbp-19h] BYREF
  PVOID v17; // [rsp+40h] [rbp-11h] BYREF
  PVOID BackTrace[8]; // [rsp+48h] [rbp-9h] BYREF

  Entry = 0LL;
  v17 = 0LL;
  memset_0(BackTrace, 0, sizeof(BackTrace));
  if ( !(unsigned int)ViDeadlockCanProceed(a1) )
    return 0LL;
  if ( *((_DWORD *)ViDeadlockGlobals + 8196) )
    return 0LL;
  if ( *((int *)ViDeadlockGlobals + 8282) > 1024 )
    return 0LL;
  v5 = (void *)ViDeadlockAllocate(1LL);
  if ( !v5 )
    return 0LL;
  v6 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v7 = BackTrace[0];
  v8 = v6;
  v9 = v6 == 0;
  if ( !v6 )
    v7 = a3;
  v10 = (unsigned int)v6 + 1;
  BackTrace[0] = v7;
  if ( !v9 )
    v10 = v8;
  if ( (unsigned int)v10 < 8 )
    BackTrace[v10] = 0LL;
  v11 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v12 = ViDeadlockAddResource(a1, (__int64)&Entry, (__int64)&v17);
  ViDeadlockDetectionUnlock(1LL);
  ViLowerIrql(v11);
  if ( !v12 )
    ViDeadlockFree(v5);
  if ( Entry )
    ViDeadlockFree(Entry);
  v13 = v17;
  if ( v17 )
  {
    do
    {
      v14 = (_QWORD *)*v13;
      ViDeadlockFree(v13);
      v13 = v14;
    }
    while ( v14 );
  }
  return v12;
}
