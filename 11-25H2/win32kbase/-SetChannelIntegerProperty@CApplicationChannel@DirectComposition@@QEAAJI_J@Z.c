/*
 * XREFs of ?SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJI_J@Z @ 0x140116538
 * Callers:
 *     DCompositionEnableHwProtectionTeardown @ 0x140226544 (DCompositionEnableHwProtectionTeardown.c)
 * Callees:
 *     ?SetIntegerProperty@CChannelMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140116584 (-SetIntegerProperty@CChannelMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_JPEA_N.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetChannelIntegerProperty(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 result; // rax
  bool v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  result = DirectComposition::CChannelMarshaler::SetIntegerProperty(
             (DirectComposition::CApplicationChannel *)((char *)this + 56),
             this,
             a2,
             a3,
             &v5);
  if ( (int)result >= 0 && v5 )
    *((_BYTE *)this + 264) |= 1u;
  return result;
}
