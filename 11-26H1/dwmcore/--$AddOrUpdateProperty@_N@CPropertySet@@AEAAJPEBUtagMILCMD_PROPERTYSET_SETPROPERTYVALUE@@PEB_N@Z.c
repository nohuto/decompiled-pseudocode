/*
 * XREFs of ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x180167850
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180167FC8 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@_N@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180167924 (--$AddProperty@_N@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180167A04 (--$UpdateProperty@_N@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAIUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180168AD0 (-GetLocalOffset@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAIUDCO.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<bool>(__int64 a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  unsigned int v6; // ebx
  int v8; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<bool>(a1, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), *(_DWORD *)(a2 + 16), a3);
    v6 = updated;
    if ( updated >= 0 )
      return 0;
    v9 = 328;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v9, 0LL);
    return v6;
  }
  v8 = *(_DWORD *)(a2 + 12);
  if ( v8 != (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetLocalOffset(
                             a1 + 88,
                             *(unsigned int *)(a2 + 8)) )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Fu, 0LL);
    return v6;
  }
  updated = CPropertySet::UpdateProperty<bool>(a1, *(unsigned int *)(a2 + 8));
  v6 = updated;
  if ( updated < 0 )
  {
    v9 = 338;
    goto LABEL_10;
  }
  return 0;
}
