/*
 * XREFs of ?SetProperty@CRectangleGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18018B980
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180177460 (-SetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRectangleGeometry::SetProperty(__int64 a1, int a2, int a3, __int64 a4)
{
  void **i; // r10
  __int64 (__fastcall **v5)(__int64, void *, __int64); // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax

  for ( i = (void **)&CRectangleGeometry::k_rgAnimDef; i != &CDrawListEntry::`vftable'; ++i )
  {
    v5 = (__int64 (__fastcall **)(__int64, void *, __int64))*i;
    if ( a2 == *(_DWORD *)*i && (a3 == *((_DWORD *)v5 + 1) || !a3) )
    {
      if ( v5 )
      {
        v6 = v5[3](a1, *i, a4);
        v7 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xD2u, 0LL);
        return v7;
      }
      break;
    }
  }
  v9 = CGeometry::SetProperty(a1, a2, a3, a4);
  v7 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xD6u, 0LL);
  return v7;
}
