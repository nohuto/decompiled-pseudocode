/*
 * XREFs of ?VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022B260
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005E4D0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402B2FA4 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x14040DFBC (DxgkpAcquireKeyedMutexFromHandle.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusReleaseKeyedMutexSync(struct DXGPROCESS **a1)
{
  __int64 v2; // rdi
  unsigned int *v3; // rax
  DXGKEYEDMUTEX *v4; // rbx
  size_t Size; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
  if ( !v2 )
    return 0;
  v3 = (unsigned int *)DxgkpAcquireKeyedMutexFromHandle(a1[12]);
  v4 = (DXGKEYEDMUTEX *)v3;
  if ( !v3 )
    return 0;
  if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 48 < v3[42] )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 0x2000;
    DXGKEYEDMUTEX::ReleaseReference(v4);
    return 0;
  }
  LODWORD(Size) = v3[42];
  v7 = DXGKEYEDMUTEX::ReleaseSync(
         (DXGKEYEDMUTEX *)v3,
         *(_DWORD *)(v2 + 28),
         *(_QWORD *)(v2 + 32),
         *(_QWORD *)(v2 + 40),
         (void *)(v2 + 48),
         Size,
         0);
  DXGKEYEDMUTEX::ReleaseReference(v4);
  VmBusCompletePacket(a1[16], &v7, 4u);
  return 1;
}
