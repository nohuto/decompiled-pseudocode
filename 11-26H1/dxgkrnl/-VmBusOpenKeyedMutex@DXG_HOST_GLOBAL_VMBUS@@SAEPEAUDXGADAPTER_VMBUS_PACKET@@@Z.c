/*
 * XREFs of ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14040DE30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005C2E0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B003C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x14040DFBC (DxgkpAcquireKeyedMutexFromHandle.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenKeyedMutex(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  unsigned int *v3; // rbx
  unsigned int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // rbx
  struct DXGPROCESS *v8; // rcx
  DXGKEYEDMUTEX *v9; // rax
  DXGKEYEDMUTEX *v10; // rsi
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v3 = (unsigned int *)v2;
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 28) + 32;
  if ( *(_DWORD *)(v2 + 28) >= 0xFFFFFFE0 )
    return 0;
  v5 = *((_DWORD *)a1 + 36);
  if ( v5 < v4 )
  {
    v6 = v4;
    WdLogSingleEntry2(2LL, v5, v4);
    v11 = *((unsigned int *)a1 + 36);
    WdLogGlobalForLineNumber = 8093;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size (%u < %u)", v11, v6, 0LL, 0LL, 0LL);
    return 0;
  }
  v8 = (struct DXGPROCESS *)*((_QWORD *)a1 + 12);
  v13 = 0LL;
  v9 = (DXGKEYEDMUTEX *)DxgkpAcquireKeyedMutexFromHandle(v8);
  v10 = v9;
  if ( v9 )
  {
    HIDWORD(v13) = DXGKEYEDMUTEX::Open(v9, (unsigned int *)&v13, v3 + 8, v3[7], 0);
    if ( v13 < 0 )
    {
      WdLogSingleEntry2(2LL, v3[6], -1073741811LL);
      v12 = v3[6];
      WdLogGlobalForLineNumber = 8116;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to open keyed mutex (0x%I64x), returning 0x%I64x",
        v12,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    DXGKEYEDMUTEX::ReleaseReference(v10);
  }
  else
  {
    HIDWORD(v13) = -1073741811;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v13, 8u);
  return 1;
}
