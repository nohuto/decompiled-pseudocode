/*
 * XREFs of VidSchiSubmitCommandPacketToQueue @ 0x140011854
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchWaitForSingleSyncObject @ 0x14002D9C0 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSubmitGlobalCommand @ 0x140108A8C (VidSchSubmitGlobalCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x140108B90 (VidSchEnqueueCpuEvent.c)
 *     VidSchSubmitPagingCommand @ 0x1401092D8 (VidSchSubmitPagingCommand.c)
 *     VidSchSubmitCommand @ 0x14010A830 (VidSchSubmitCommand.c)
 *     VidSchFlushPendingCommand @ 0x14011DCA0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x140020A30 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x1400303B0 (VidSchiAdjustWorkerThreadPriority.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140055344 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E2070 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1400FDA70 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueue(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // r15
  _QWORD *v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  VIDMM_DEVICE *v9; // rcx
  _QWORD v10[4]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 88);
  v3 = v1[12];
  v4 = (_QWORD *)v1[13];
  v5 = *(_QWORD *)(v3 + 24);
  if ( (*(_DWORD *)(v5 + 2824) & 2) != 0 )
  {
    VidSchiSubmitCommandPacketToQueueDirectSubmitAware();
  }
  else
  {
    VidSchiEnsureVSyncEnabled(a1, v1[13]);
    v11 = 0;
    v10[0] = v5 + 2016;
    AcquireSpinLock::Acquire((Acquire *)v10);
    v6 = v1[19];
    v1[19] = v6 + 1;
    *(_QWORD *)(a1 + 112) = v6;
    v7 = MEMORY[0xFFFFF78000000320];
    v4[25] = v7 * KeQueryTimeIncrement();
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v1[23] = *(_QWORD *)(a1 + 112);
      ++v4[232];
    }
    VidSchiProfilePerformanceTick(4, v5, v3, 0, 0LL, a1, 0LL, 0LL);
    v12 = 0;
    VidSchiInsertCommandToSoftwareQueue(a1, &v12);
    AcquireSpinLock::Release((AcquireSpinLock *)v10);
    VidSchiAdjustWorkerThreadPriority(v1);
    if ( v12 )
    {
      *(_QWORD *)(v5 + 1496) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v5 + 1464), 0, 0);
    }
    v8 = v4[1];
    if ( v8 )
    {
      v9 = *(VIDMM_DEVICE **)(v8 + 792);
      if ( v9 )
        VIDMM_DEVICE::EnsureSchedulable(v9, 1);
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v10);
  }
}
