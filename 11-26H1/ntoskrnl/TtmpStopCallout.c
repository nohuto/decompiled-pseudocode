/*
 * XREFs of TtmpStopCallout @ 0x1407EBDA4
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1407EAE10 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x1407EB0E0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1407EB17C (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1407EB1FC (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1407EB2AC (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1407EBE74 (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x1407EB718 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmiLogCalloutStop @ 0x1407EE1A4 (TtmiLogCalloutStop.c)
 *     TtmpAcquireSessionLock @ 0x1409F68CC (TtmpAcquireSessionLock.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
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
