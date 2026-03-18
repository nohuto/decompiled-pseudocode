/*
 * XREFs of ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x180167C8C
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180167FC8 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x180167D68 (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_E.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAIUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180168AD0 (-GetLocalOffset@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAIUDCO.c)
 *     ??$UpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@@Z @ 0x180168EEC (--$UpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXP.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2DVector4>(__int64 a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  unsigned int v6; // ebx
  int v8; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( !*(_BYTE *)(a2 + 20) )
  {
    v8 = *(_DWORD *)(a2 + 12);
    if ( v8 != (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetLocalOffset(
                               a1 + 88,
                               *(unsigned int *)(a2 + 8)) )
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Fu, 0LL);
      return v6;
    }
    updated = CPropertySet::UpdateProperty<D2DVector4>(a1, *(unsigned int *)(a2 + 8));
    v6 = updated;
    if ( updated >= 0 )
      return 0;
    v9 = 338;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v9, 0LL);
    return v6;
  }
  updated = CPropertySet::AddProperty<_D3DCOLORVALUE>(
              a1,
              *(_DWORD *)(a2 + 8),
              *(_DWORD *)(a2 + 12),
              *(_DWORD *)(a2 + 16),
              a3);
  v6 = updated;
  if ( updated < 0 )
  {
    v9 = 328;
    goto LABEL_5;
  }
  return 0;
}
