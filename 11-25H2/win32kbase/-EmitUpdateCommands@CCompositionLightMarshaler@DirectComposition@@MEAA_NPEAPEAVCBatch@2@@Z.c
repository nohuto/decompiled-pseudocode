/*
 * XREFs of ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F9390
 * Callers:
 *     ?EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F8F50 (-EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitUpdateCommands@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F9000 (-EmitUpdateCommands@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F9090 (-EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14023A010 (-EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??$EmitClearTargets@UtagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@W4CompositionLightMarshalerFlag@01@W4MILCMD@@@Z @ 0x1400F9444 (--$EmitClearTargets@UtagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS@@@CCompositionLightMarshaler@Dir.c)
 *     ??$EmitClearTargets@UtagMILCMD_COMPOSITIONLIGHT_CLEARTARGETS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@W4CompositionLightMarshalerFlag@01@W4MILCMD@@@Z @ 0x1400F94B8 (--$EmitClearTargets@UtagMILCMD_COMPOSITIONLIGHT_CLEARTARGETS@@@CCompositionLightMarshaler@Direct.c)
 *     ??$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1400F952C (--$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComp.c)
 *     ??$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1400F9658 (--$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectC.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_48c6d4f09838988d70deae7b70419805___ @ 0x1400F99C8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_48c6d4f09838988d70deae7b7041980.c)
 */

char __fastcall DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CCompositionLightMarshaler *v7; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CCompositionLightMarshaler::EmitClearTargets<tagMILCMD_COMPOSITIONLIGHT_CLEARTARGETS>()
    && (unsigned __int8)DirectComposition::CCompositionLightMarshaler::EmitClearTargets<tagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS>(
                          this,
                          a2)
    && (unsigned __int8)DirectComposition::CCompositionLightMarshaler::EmitAddTargets<tagMILCMD_COMPOSITIONLIGHT_ADDTARGETS>(
                          this,
                          a2,
                          *((_QWORD *)this + 7),
                          (char *)this + 64,
                          (char *)this + 68)
    && (unsigned __int8)DirectComposition::CCompositionLightMarshaler::EmitAddTargets<tagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS>(
                          this,
                          a2,
                          *((_QWORD *)this + 9),
                          (char *)this + 80,
                          (char *)this + 84) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_48c6d4f09838988d70deae7b70419805___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    return 1;
  }
  return v4;
}
