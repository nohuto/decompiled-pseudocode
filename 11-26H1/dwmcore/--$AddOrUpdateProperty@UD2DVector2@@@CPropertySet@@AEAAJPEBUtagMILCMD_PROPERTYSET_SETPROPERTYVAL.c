/*
 * XREFs of ??$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector2@@@Z @ 0x180169548
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180167FC8 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAIUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180168AD0 (-GetLocalOffset@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAIUDCO.c)
 *     ??$AddProperty@UD2DVector2@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x18016961C (--$AddProperty@UD2DVector2@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRE.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x1801696FC (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXP.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2DVector2>(__int64 a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  int v9; // ebx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<D2DVector2>(
                a1,
                *(_DWORD *)(a2 + 8),
                *(_DWORD *)(a2 + 12),
                *(_DWORD *)(a2 + 16),
                a3);
    v7 = updated;
    if ( updated >= 0 )
      return 0;
    v10 = 328;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v10, 0LL);
    return v7;
  }
  v9 = *(_DWORD *)(a2 + 12);
  if ( v9 != (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetLocalOffset(
                             a1 + 88,
                             *(_DWORD *)(a2 + 8)) )
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Fu, 0LL);
    return v7;
  }
  updated = CPropertySet::UpdateProperty<D2DVector2>(a1, *(unsigned int *)(a2 + 8), *(unsigned int *)(a2 + 16), a3);
  v7 = updated;
  if ( updated < 0 )
  {
    v10 = 338;
    goto LABEL_10;
  }
  return 0;
}
