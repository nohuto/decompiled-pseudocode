/*
 * XREFs of ??1CLightMarshaler@DirectComposition@@UEAA@XZ @ 0x14023B66C
 * Callers:
 *     ??_G?$CSharedResourceMarshaler@VCAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14023B750 (--_G-$CSharedResourceMarshaler@VCAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@.c)
 *     ??_G?$CSharedResourceMarshaler@VCDistantLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14023B7E0 (--_G-$CSharedResourceMarshaler@VCDistantLightMarshaler@DirectComposition@@$01@DirectComposition@.c)
 *     ??_G?$CSharedResourceMarshaler@VCPointLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14023B8B0 (--_G-$CSharedResourceMarshaler@VCPointLightMarshaler@DirectComposition@@$01@DirectComposition@@U.c)
 *     ??_E?$CSharedResourceMarshaler@VCSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14023B950 (--_E-$CSharedResourceMarshaler@VCSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UE.c)
 *     ??_ECLightMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14023BA50 (--_ECLightMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CLightMarshaler::~CLightMarshaler(char **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 11,
    a2,
    a3,
    a4);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 8,
    v5,
    v6,
    v7);
}
