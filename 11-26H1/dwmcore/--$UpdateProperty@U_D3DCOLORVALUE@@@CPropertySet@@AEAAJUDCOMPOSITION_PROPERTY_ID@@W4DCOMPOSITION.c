/*
 * XREFs of ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x180168FAC
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800234D0 (-SetProperty@CPropertySet@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@.c)
 *     ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x180168C58 (--$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERT.c)
 * Callees:
 *     ?PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z @ 0x1800230E0 (-PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<_D3DCOLORVALUE>(__int64 a1, unsigned int a2, int a3, float *a4)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v11; // eax

  if ( a2 < *(_DWORD *)(a1 + 112) && (v5 = *(_QWORD *)(a1 + 88), *(_DWORD *)(v5 + 8LL * a2) == a3) )
  {
    v6 = *(_DWORD *)(v5 + 8LL * a2 + 4);
    v7 = *(_QWORD *)(a1 + 120);
    v8 = v6 & 0x1FFFFFFF;
    if ( *a4 == *(float *)(v8 + v7)
      && a4[1] == *(float *)(v8 + v7 + 4)
      && a4[2] == *(float *)(v8 + v7 + 8)
      && a4[3] == *(float *)(v8 + v7 + 12) )
    {
      return 0;
    }
    *(_OWORD *)(v8 + v7) = *(_OWORD *)a4;
    v11 = CPropertySet::PropertyUpdated(a1, a2, 2);
    v9 = v11;
    if ( v11 >= 0 )
      return 0;
    else
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1A2u, 0LL);
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x199u, 0LL);
  }
  return v9;
}
