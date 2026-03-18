/*
 * XREFs of ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x180169488
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x180168D38 (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 * Callees:
 *     ?PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z @ 0x1800230E0 (-PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DVector3>(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx

  if ( a2 < *(_DWORD *)(a1 + 112) && (v5 = *(_QWORD *)(a1 + 88), *(_DWORD *)(v5 + 8LL * a2) == a3) )
  {
    v6 = *(_QWORD *)(a1 + 120);
    v7 = *(_DWORD *)(v5 + 8LL * a2 + 4) & 0x1FFFFFFF;
    v8 = *(_QWORD *)a4 - *(_QWORD *)(v7 + v6);
    if ( *(_QWORD *)a4 == *(_QWORD *)(v7 + v6) )
      v8 = *(unsigned int *)(a4 + 8) - (unsigned __int64)*(unsigned int *)(v7 + v6 + 8);
    if ( v8
      && (*(_QWORD *)(v7 + v6) = *(_QWORD *)a4,
          *(_DWORD *)(v7 + v6 + 8) = *(_DWORD *)(a4 + 8),
          v9 = CPropertySet::PropertyUpdated(a1, a2, 2),
          v10 = v9,
          v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1A2u, 0LL);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x199u, 0LL);
  }
  return v10;
}
