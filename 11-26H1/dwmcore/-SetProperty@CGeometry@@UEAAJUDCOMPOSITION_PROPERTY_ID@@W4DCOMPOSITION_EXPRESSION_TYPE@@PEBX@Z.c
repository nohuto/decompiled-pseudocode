/*
 * XREFs of ?SetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180177460
 * Callers:
 *     ?SetProperty@CPathGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180177350 (-SetProperty@CPathGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX.c)
 *     ?SetProperty@CLineGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801773C0 (-SetProperty@CLineGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX.c)
 *     ?SetProperty@CRectangleGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18018B980 (-SetProperty@CRectangleGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::SetProperty(__int64 a1, int a2, int a3, __int64 a4)
{
  void **i; // r10
  __int64 (__fastcall **v5)(__int64, void *, __int64); // rax
  __int64 result; // rax
  unsigned int v7; // ebx

  for ( i = (void **)&CGeometry::k_rgAnimDef; ; ++i )
  {
    if ( i == &CReconstructableDrawListEntry::`vftable' )
      goto LABEL_12;
    v5 = (__int64 (__fastcall **)(__int64, void *, __int64))*i;
    if ( a2 == *(_DWORD *)*i && (a3 == *((_DWORD *)v5 + 1) || !a3) )
      break;
  }
  if ( !v5 )
  {
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x32u, 0LL);
    return 2147942487LL;
  }
  result = v5[3](a1, *i, a4);
  v7 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0x2Eu, 0LL);
    return v7;
  }
  return result;
}
