/*
 * XREFs of ?SetProperty@CPathGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180177350
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x180055580 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180177460 (-SetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 */

__int64 __fastcall CPathGeometry::SetProperty(CPathGeometry *a1, int a2, int a3, const struct CPathData *a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( a2 == 5 )
  {
    if ( a3 != 11 )
    {
      v5 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x68u, 0LL);
      return v5;
    }
    CPathGeometry::SetPath(a1, a4);
  }
  else
  {
    v4 = CGeometry::SetProperty();
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x70u, 0LL);
      return v5;
    }
  }
  return 0;
}
