/*
 * XREFs of VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140055344
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiUpdatePriorityTables @ 0x1400209D0 (VidSchiUpdatePriorityTables.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x1400303B0 (VidSchiAdjustWorkerThreadPriority.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x14005555C (VidSchiSubmitQueueCommandDirect.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E2070 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1400FDA70 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueueDirectSubmitAware(__int64 a1)
{
  _QWORD *v1; // r13
  __int64 v3; // r14
  _QWORD *v4; // rbp
  __int64 v5; // rdi
  bool v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // ebx
  __int64 v10; // rcx
  VIDMM_DEVICE *v11; // rcx
  _BYTE v12[48]; // [rsp+40h] [rbp-58h] BYREF
  int v13; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 88);
  v3 = v1[12];
  v4 = (_QWORD *)v1[13];
  v5 = *(_QWORD *)(v3 + 24);
  v6 = KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 176);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 1256), 1u);
  VidSchiEnsureVSyncEnabled(a1, v4);
  v7 = v1[19];
  v1[19] = v7 + 1;
  *(_QWORD *)(a1 + 112) = v7;
  v8 = MEMORY[0xFFFFF78000000320];
  v4[25] = v8 * KeQueryTimeIncrement();
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v1[23] = *(_QWORD *)(a1 + 112);
    ++v4[232];
  }
  VidSchiProfilePerformanceTick(4LL, v5, v3, 0LL, 0LL, a1, 0LL, 0LL);
  v13 = 1;
  if ( !v6
    || (*(_DWORD *)(v5 + 2824) & 2) == 0 && *(_DWORD *)(a1 + 48) != 2
    || !ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 1152), 0)
    || (v9 = VidSchiSubmitQueueCommandDirect(a1, &v13), ExReleaseResourceLite((PERESOURCE)(v5 + 1152)), !v9) )
  {
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v12, (unsigned __int64 *)(v5 + 2016), 1, 0);
    VidSchiUpdatePriorityTables(v5, a1, &v13);
    AcquireSpinLock::Release((AcquireSpinLock *)v12);
    if ( v6 )
      VidSchiAdjustWorkerThreadPriority((__int64)v1);
    else
      ExReleaseResourceLite((PERESOURCE)(v5 + 1256));
  }
  if ( v13 && v6 )
  {
    *(_QWORD *)(v5 + 1496) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1464), 0, 0);
  }
  v10 = v4[1];
  if ( v10 )
  {
    v11 = *(VIDMM_DEVICE **)(v10 + 792);
    if ( v11 )
      VIDMM_DEVICE::EnsureSchedulable(v11, 1);
  }
}
