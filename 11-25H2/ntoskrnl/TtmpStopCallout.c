/*
 * XREFs of TtmpStopCallout @ 0x14075A004
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x140759080 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x140759350 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1407593EC (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x14075946C (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x14075951C (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x14075A0CC (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     TtmpAcquireSessionLock @ 0x1406EBB64 (TtmpAcquireSessionLock.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x140759980 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmiLogCalloutStop @ 0x14075C3F4 (TtmiLogCalloutStop.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 */

BOOLEAN __fastcall TtmpStopCallout(__int64 a1, int a2)
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
    *(_QWORD *)(a1 + 24) = 0LL;
    InputBuffer = 21;
    v11 = 1;
    v10 = v3;
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
