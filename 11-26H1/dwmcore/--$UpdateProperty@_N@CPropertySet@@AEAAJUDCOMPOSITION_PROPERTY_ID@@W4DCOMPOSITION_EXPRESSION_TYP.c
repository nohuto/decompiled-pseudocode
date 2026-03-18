/*
 * XREFs of ??$UpdateProperty@_N@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180167A04
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800234D0 (-SetProperty@CPropertySet@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@.c)
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x180167850 (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 * Callees:
 *     ?PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z @ 0x1800230E0 (-PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$GetPropertyValue@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DQuaternion@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167AB0 (--$GetPropertyValue@UD2DQuaternion@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeA.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<bool>(__int64 a1, unsigned int a2, int a3, _BYTE *a4)
{
  _QWORD *v7; // rcx
  _BYTE *Property; // rax
  int v9; // eax
  unsigned int v10; // ebx

  if ( a2 < *(_DWORD *)(a1 + 112) && (v7 = (_QWORD *)(a1 + 88), *(_DWORD *)(*v7 + 8LL * a2) == a3) )
  {
    Property = (_BYTE *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(v7);
    if ( *a4 == *Property )
      return 0;
    *Property = *a4;
    v9 = CPropertySet::PropertyUpdated(a1, a2, 2);
    v10 = v9;
    if ( v9 >= 0 )
      return 0;
    else
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1A2u, 0LL);
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x199u, 0LL);
  }
  return v10;
}
