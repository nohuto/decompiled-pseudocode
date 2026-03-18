/*
 * XREFs of TtmpStopCallout @ 0x1407E6244
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1407E52B0 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x1407E5580 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1407E561C (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1407E569C (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1407E574C (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1407E6314 (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x1407E5BB8 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmiLogCalloutStop @ 0x1407E8644 (TtmiLogCalloutStop.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     TtmpAcquireSessionLock @ 0x140A3ACCC (TtmpAcquireSessionLock.c)
 */

__int64 __fastcall TtmpStopCallout(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  int CalloutTagFromCalloutType; // eax
  __int64 v7; // r10
  int InputBuffer; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+38h] [rbp-60h]
  char v11; // [rsp+88h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    memset_0(&InputBuffer, 0, 0x60uLL);
    InputBuffer = 21;
    v11 = 1;
    v10 = v3;
    *(_QWORD *)(a1 + 24) = 0LL;
    NtPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
  }
  CalloutTagFromCalloutType = TtmpGetCalloutTagFromCalloutType(*(_DWORD *)(a1 + 16));
  TtmiLogCalloutStop(
    *(_DWORD *)(v7 + 16),
    *(_DWORD *)(v7 + 72),
    *(_QWORD *)(v7 + 24),
    CalloutTagFromCalloutType,
    a2,
    v4);
  return TtmpAcquireSessionLock();
}
