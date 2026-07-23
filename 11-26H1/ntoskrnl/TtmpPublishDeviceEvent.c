/*
 * XREFs of TtmpPublishDeviceEvent @ 0x1407EB890
 * Callers:
 *     TtmiAssignDevice @ 0x1407EABB4 (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1407EAD7C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSessionDeviceListWorker @ 0x1407EAE10 (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmiWriteEventToAllQueues @ 0x1407EC734 (TtmiWriteEventToAllQueues.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1407EE650 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceAssignedTerminalEvent @ 0x1407EE780 (TtmiLogDeviceAssignedTerminalEvent.c)
 *     TtmiLogDeviceDepartedTerminalEvent @ 0x1407EE858 (TtmiLogDeviceDepartedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1407EEA08 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407F2C4C (TtmiWriteEventToSingleQueue.c)
 */

__int64 __fastcall TtmpPublishDeviceEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v8; // esi
  int v9; // edx
  __int64 v10; // r11
  int v11; // r9d
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h]
  int v19; // [rsp+44h] [rbp-C4h]
  int v20; // [rsp+48h] [rbp-C0h]
  int v21; // [rsp+4Ch] [rbp-BCh]
  wchar_t pszDest[260]; // [rsp+50h] [rbp-B8h] BYREF

  memset_0(&v17, 0, 0x21CuLL);
  v8 = 0;
  v16 = a4;
  switch ( a4 )
  {
    case 0:
    case 3:
      v18 = *(_DWORD *)(a3 + 32);
      v19 = *(_DWORD *)(a3 + 596);
      v20 = *(_DWORD *)(a3 + 16);
      v21 = *(_DWORD *)(a3 + 72);
      RtlStringCchCopyW(pszDest, 0x104uLL, (NTSTRSAFE_PCWSTR)(a3 + 76));
      v11 = *(_DWORD *)(a3 + 72);
      v12 = *(_DWORD *)(a3 + 16);
      v13 = *(_DWORD *)(a3 + 596);
      v14 = *(_DWORD *)(a3 + 32);
      if ( a4 )
        TtmiLogDeviceArrivedTerminalEvent(v14, v13, v12, v11, v10);
      else
        TtmiLogDeviceEnumeratedTerminalEvent(v14, v13, v12, v11, v10);
      break;
    case 4:
      v9 = *(_DWORD *)(a3 + 596);
      v18 = *(_DWORD *)(a3 + 32);
      v19 = v9;
      TtmiLogDeviceAssignedTerminalEvent();
      break;
    case 5:
      v18 = *(_DWORD *)(a3 + 32);
      TtmiLogDeviceDepartedTerminalEvent();
      break;
  }
  if ( a2 )
    return (unsigned int)TtmiWriteEventToSingleQueue(a2, &v16);
  else
    TtmiWriteEventToAllQueues(a1, &v16);
  return v8;
}
