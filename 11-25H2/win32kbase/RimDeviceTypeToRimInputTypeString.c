/*
 * XREFs of RimDeviceTypeToRimInputTypeString @ 0x140114428
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x140033FDC (RIMStartDeviceSpecificRead.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     RIMDeliverConfigRequest @ 0x1400B3038 (RIMDeliverConfigRequest.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1401140A0 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     rimInputApc @ 0x140182D20 (rimInputApc.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1401DBAD8 (RIMLogDeviceHealthTelemetry.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall RimDeviceTypeToRimInputTypeString(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // ecx
  const wchar_t *result; // rax

  if ( !a2 )
    return L"RIM_INPUT_TYPE_MOUSE";
  v2 = a2 - 1;
  if ( !v2 )
    return L"RIM_INPUT_TYPE_KEYBOARD";
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return &word_14025FAA8;
    result = L"RIM_INPUT_TYPE_PTP_CONFIG";
    if ( (*(_DWORD *)(a1 + 168) & 0x1000) == 0 )
      return L"RIM_INPUT_TYPE_TCH_CONFIG";
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
      if ( v4 == 7 )
        return L"RIM_INPUT_TYPE_HID_PTP";
      if ( (unsigned int)(v4 - 5) <= 1 )
        return L"RIM_INPUT_TYPE_HID_PEN";
      if ( (unsigned int)(v4 - 1) <= 3 )
        return L"RIM_INPUT_TYPE_HID_TCH";
      return &word_14025FAA8;
    }
    result = &word_14025FAA8;
    if ( *(_DWORD *)(a1 + 48) != 3 )
      return L"RIM_INPUT_TYPE_HID_GEN";
  }
  return result;
}
