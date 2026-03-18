/*
 * XREFs of ?SetProperty@CEllipseGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18018D670
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEllipseGeometry::SetProperty(__int64 a1, int a2, int a3, __int64 a4)
{
  void **i; // r10
  __int64 (__fastcall **v6)(__int64, void *, __int64); // rax
  void **j; // rcx
  __int64 (__fastcall **v8)(__int64, void *, __int64); // rax
  int v9; // edi
  unsigned int v10; // ebx
  int v12; // eax
  unsigned int v13; // eax

  for ( i = (void **)&CEllipseGeometry::k_rgAnimDef; i != &CVisualOcclusionInfo::`vftable'; ++i )
  {
    v6 = (__int64 (__fastcall **)(__int64, void *, __int64))*i;
    if ( a2 == *(_DWORD *)*i && (a3 == *((_DWORD *)v6 + 1) || !a3) )
    {
      if ( v6 )
      {
        v12 = v6[3](a1, *i, a4);
        v10 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x20u, 0LL);
        return v10;
      }
      break;
    }
  }
  for ( j = (void **)&CGeometry::k_rgAnimDef; ; ++j )
  {
    if ( j == &CReconstructableDrawListEntry::`vftable' )
      goto LABEL_21;
    v8 = (__int64 (__fastcall **)(__int64, void *, __int64))*j;
    if ( a2 == *(_DWORD *)*j && (a3 == *((_DWORD *)v8 + 1) || !a3) )
      break;
  }
  if ( !v8 )
  {
LABEL_21:
    v10 = -2147024809;
    v13 = 50;
    v9 = -2147024809;
    goto LABEL_22;
  }
  v9 = v8[3](a1, *j, a4);
  v10 = v9;
  if ( v9 >= 0 )
    return v10;
  v13 = 46;
LABEL_22:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v13, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x24u, 0LL);
  return v10;
}
