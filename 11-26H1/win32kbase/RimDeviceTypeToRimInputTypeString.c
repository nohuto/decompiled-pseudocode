/*
 * XREFs of RimDeviceTypeToRimInputTypeString @ 0x14015EB68
 * Callers:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140096FAC (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     RIMStartDeviceSpecificRead @ 0x1400996FC (RIMStartDeviceSpecificRead.c)
 *     rimInputApc @ 0x14009DFA0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMDeliverConfigRequest @ 0x1400F1398 (RIMDeliverConfigRequest.c)
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     RIMLogDeviceHealthTelemetry @ 0x14020216C (RIMLogDeviceHealthTelemetry.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 */

const wchar_t *__fastcall RimDeviceTypeToRimInputTypeString(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 v4; // rcx
  const wchar_t *result; // rax
  __int64 v6; // rcx
  const WCHAR *v7; // rdx
  int v8; // eax

  if ( !a2 )
    return L"RIM_INPUT_TYPE_MOUSE";
  v2 = a2 - 1;
  if ( !v2 )
    return L"RIM_INPUT_TYPE_KEYBOARD";
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = L"RIM_INPUT_TYPE_PTP_CONFIG";
      if ( (*(_DWORD *)(a1 + 168) & 0x1000) == 0 )
        return L"RIM_INPUT_TYPE_TCH_CONFIG";
    }
    else
    {
      return &word_14026AF94;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 )
    {
      v7 = &word_14026AF94;
      if ( *(_DWORD *)(a1 + 48) != 3 )
        return L"RIM_INPUT_TYPE_HID_GEN";
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 456);
      if ( *(_DWORD *)(v4 + 24) == 7 )
        return L"RIM_INPUT_TYPE_HID_PTP";
      if ( (unsigned int)RIMIsPenPointerDevice(v4) )
        return L"RIM_INPUT_TYPE_HID_PEN";
      v8 = RIMIsTouchPointerDevice(v6);
      v7 = &word_14026AF94;
      if ( v8 )
        return L"RIM_INPUT_TYPE_HID_TCH";
    }
    return v7;
  }
  return result;
}
