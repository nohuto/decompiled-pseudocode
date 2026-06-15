/*
 * XREFs of ?GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z @ 0x18000BE08
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002E644 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18010BD70 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 * Callees:
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000DA5C (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800866D8 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ?GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18013A130 (-GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::GetProcessingPeriod(
        CEndpointCharacteristics **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        BSTR *a3,
        __int64 *a4)
{
  unsigned int MinProcessingPeriodForExclusiveMode; // ebx
  __int64 v9; // rdx
  int v10; // esi
  int PropertyStoreProperty; // eax
  BSTR v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
  {
    if ( !a4 )
      goto LABEL_4;
  }
  else if ( !a4 )
  {
    MinProcessingPeriodForExclusiveMode = -2147467261;
    v9 = 8452LL;
    goto LABEL_9;
  }
  MinProcessingPeriodForExclusiveMode = EffectPack::GetMinProcessingPeriodForExclusiveMode((EffectPack *)this, a2, a4);
  if ( (MinProcessingPeriodForExclusiveMode & 0x80000000) != 0 )
  {
    v9 = 8457LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)MinProcessingPeriodForExclusiveMode,
      *(int *)&pvar.vt);
    return MinProcessingPeriodForExclusiveMode;
  }
LABEL_4:
  if ( !a3 )
    return 0LL;
  if ( a2 )
  {
    *a3 = (BSTR)100000;
    return 0LL;
  }
  v10 = 0;
  while ( 1 )
  {
    memset(&pvar, 0, sizeof(pvar));
    PropertyStoreProperty = CEndpointCharacteristics::GetPropertyStoreProperty(
                              this[198],
                              &PKEY_AudioEngine_Period,
                              &pvar);
    MinProcessingPeriodForExclusiveMode = PropertyStoreProperty;
    if ( PropertyStoreProperty < 0 )
    {
      v14 = 8477LL;
      goto LABEL_28;
    }
    if ( pvar.vt != 65 )
      break;
    if ( pvar.lVal != 8 )
      goto LABEL_26;
    v12 = *pvar.cabstr.pElems;
    *a3 = *pvar.cabstr.pElems;
    if ( v12 )
      goto LABEL_25;
    if ( (unsigned int)++v10 >= 0x7D0 )
    {
      MinProcessingPeriodForExclusiveMode = -2147467259;
      v13 = 2147500037LL;
      v14 = 8490LL;
      goto LABEL_29;
    }
    Sleep(5u);
    PropVariantClear((PROPVARIANT *)&pvar);
  }
  if ( pvar.vt )
  {
LABEL_26:
    MinProcessingPeriodForExclusiveMode = -2147024809;
    v13 = 2147942487LL;
    v14 = 8503LL;
    goto LABEL_29;
  }
  *a3 = (BSTR)100000;
  PropertyStoreProperty = CEndpointCharacteristics::SetProcessingPeriod(this[198], (const __int64 *)a3);
  MinProcessingPeriodForExclusiveMode = PropertyStoreProperty;
  if ( PropertyStoreProperty >= 0 )
  {
LABEL_25:
    PropVariantClear((PROPVARIANT *)&pvar);
    return 0LL;
  }
  v14 = 8499LL;
LABEL_28:
  v13 = (unsigned int)PropertyStoreProperty;
LABEL_29:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v13,
    *(int *)&pvar.vt);
  PropVariantClear((PROPVARIANT *)&pvar);
  return MinProcessingPeriodForExclusiveMode;
}
