/*
 * XREFs of ?SendHapticFeedbackForPlayCount@PenHapticInterface@@QEAAJGMII@Z @ 0x180193274
 * Callers:
 *     ?SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z @ 0x18018C420 (-SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendHapticFeedbackForPlayCount@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMII@Z @ 0x18018AA68 (-SendHapticFeedbackForPlayCount@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GM.c)
 *     ?SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z @ 0x180193308 (-SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z.c)
 */

__int64 __fastcall PenHapticInterface::SendHapticFeedbackForPlayCount(
        PenHapticInterface *this,
        __int16 a2,
        float a3,
        unsigned int a4,
        unsigned int a5)
{
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  InputTraceLogging::Haptics::SendHapticFeedbackForPlayCount(IMDT_PEN, a2, a3, a4, a5);
  v8 = PenHapticInterface::SendHapticFeedbackInternal(this, a2, a3, a4, a5, 0);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x68,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penhapticinterface.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}
