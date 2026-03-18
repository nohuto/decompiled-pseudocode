/*
 * XREFs of ?GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A1CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridBrush::GetBounds(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax

  v3 = *(_QWORD *)(a1 + 144);
  v4 = 0;
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x66u, 0LL);
  }
  else
  {
    a3[1] = 0LL;
    *a3 = 0LL;
  }
  return v4;
}
