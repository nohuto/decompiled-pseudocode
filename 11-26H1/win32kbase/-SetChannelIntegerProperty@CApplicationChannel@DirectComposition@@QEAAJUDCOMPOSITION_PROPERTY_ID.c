/*
 * XREFs of ?SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJUDCOMPOSITION_PROPERTY_ID@@_J@Z @ 0x1401B62B4
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x140228790 (DCompositionEnableHwProtectionTeardown.c)
 * Callees:
 *     ?SetIntegerProperty@CChannelMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401B6300 (-SetIntegerProperty@CChannelMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@UDCOMPOS.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetChannelIntegerProperty(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 result; // rax
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  result = DirectComposition::CChannelMarshaler::SetIntegerProperty(a1 + 56, a1, a2, a3, &v5);
  if ( (int)result >= 0 )
  {
    if ( v5 )
      *(_BYTE *)(a1 + 264) |= 1u;
  }
  return result;
}
