/*
 * XREFs of ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x1801696FC
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector2@@@Z @ 0x180169548 (--$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 * Callees:
 *     ?PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z @ 0x1800230E0 (-PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DVector2>(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx

  if ( a2 < *(_DWORD *)(a1 + 112) && (v4 = *(_QWORD *)(a1 + 88), *(_DWORD *)(v4 + 8LL * a2) == a3) )
  {
    v5 = *(_QWORD *)(a1 + 120);
    v6 = *(_DWORD *)(v4 + 8LL * a2 + 4) & 0x1FFFFFFF;
    if ( *a4 == *(_QWORD *)(v6 + v5) )
      return 0;
    *(_QWORD *)(v6 + v5) = *a4;
    v7 = CPropertySet::PropertyUpdated(a1, a2, 2);
    v8 = v7;
    if ( v7 >= 0 )
      return 0;
    else
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1A2u, 0LL);
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x199u, 0LL);
  }
  return v8;
}
