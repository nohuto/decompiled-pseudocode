/*
 * XREFs of ?SendHapticFeedbackForPlayCountImpl@TouchpadHapticDevice@@QEAAJGMII@Z @ 0x18018AB50
 * Callers:
 *     ?InvokeSendHapticFeedbackForPlayCount@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@GAEBUtagINPUT_HAPTIC_SETTINGS@@II@Z @ 0x1800C9A60 (-InvokeSendHapticFeedbackForPlayCount@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincip.c)
 *     ?SendHapticFeedbackForPlayCount@TouchpadHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@Z @ 0x18018AB30 (-SendHapticFeedbackForPlayCount@TouchpadHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendHapticFeedbackForPlayCount@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMII@Z @ 0x18018AA68 (-SendHapticFeedbackForPlayCount@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GM.c)
 *     ?TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z @ 0x18019EE5C (-TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z.c)
 */

__int64 __fastcall TouchpadHapticDevice::SendHapticFeedbackForPlayCountImpl(
        TouchpadHapticDevice *this,
        unsigned __int16 a2,
        float a3,
        int a4,
        unsigned int a5)
{
  __int64 v8; // rdx
  int v9; // eax
  _DWORD v11[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  InputTraceLogging::Haptics::SendHapticFeedbackForPlayCount((enum tagINPUT_MESSAGE_DEVICE_TYPE)16, a2, a3, a4, a5);
  *(float *)v11 = a3;
  v11[3] = 0;
  v11[1] = a4;
  v11[2] = a5;
  v9 = CompliantHapticInterface::TriggerHapticsForOrdinal((char *)this + 88, v8, a2, v11);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x72,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\touchpadhapticdevice.cpp",
      (const char *)(unsigned int)v9);
  return 0LL;
}
