/*
 * XREFs of VfDeadlockInitializeResource @ 0x140B880D0
 * Callers:
 *     ViDeadlockKeInitializeMutant_Exit @ 0x140B89730 (ViDeadlockKeInitializeMutant_Exit.c)
 *     ViDeadlockKeInitializeMutex_Exit @ 0x140B89780 (ViDeadlockKeInitializeMutex_Exit.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     ViLowerIrql @ 0x1406082A8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406082E0 (ViRaiseIrqlToDpcLevel.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ViDeadlockAddResource @ 0x140B888A0 (ViDeadlockAddResource.c)
 *     ViDeadlockAllocate @ 0x140B88BA8 (ViDeadlockAllocate.c)
 *     ViDeadlockDetectionLock @ 0x140B891F4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140B8922C (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140B896A0 (ViDeadlockFree.c)
 *     ViDeadlockCanProceed @ 0x140B97BB4 (ViDeadlockCanProceed.c)
 */

__int64 __fastcall VfDeadlockInitializeResource(__int64 a1, __int64 a2, void *a3)
{
  void *v5; // rdi
  USHORT v6; // ax
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned __int8 v9; // bl
  unsigned int v10; // esi
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  PVOID Entry; // [rsp+30h] [rbp-78h] BYREF
  PVOID v15; // [rsp+38h] [rbp-70h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-68h] BYREF

  Entry = 0LL;
  v15 = 0LL;
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
  v7 = v6;
  if ( !v6 )
    BackTrace[0] = a3;
  v8 = (unsigned int)v6 + 1;
  if ( (_WORD)v7 )
    v8 = v7;
  if ( (unsigned int)v8 < 8 )
    BackTrace[v8] = 0LL;
  v9 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v10 = ViDeadlockAddResource(a1, (__int64)&Entry, (__int64)&v15);
  ViDeadlockDetectionUnlock(1LL);
  ViLowerIrql(v9);
  if ( !v10 )
    ViDeadlockFree(v5);
  if ( Entry )
    ViDeadlockFree(Entry);
  v11 = v15;
  if ( v15 )
  {
    do
    {
      v12 = (_QWORD *)*v11;
      ViDeadlockFree(v11);
      v11 = v12;
    }
    while ( v12 );
  }
  return v10;
}
