/*
 * XREFs of ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x18009D190
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18009D10C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x1801BA51C (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18027DEF0 (-IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 */

void __fastcall CPrimitiveGroup::ProcessHeatMapChanges(CPrimitiveGroup *this)
{
  CPrimitiveGroup *v1; // r9
  char v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rcx
  char v5; // al
  bool v6; // zf
  __int64 TopByReference; // rax
  struct _D3DCOLORVALUE *v8; // r9
  struct _D3DCOLORVALUE *v9; // rcx
  const struct _D3DCOLORVALUE *v10; // rdx
  char v11; // r10

  v1 = this;
  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( !*(_DWORD *)(v3 + 6272) )
  {
    v4 = v3 + 6264;
LABEL_3:
    v5 = v2;
    goto LABEL_4;
  }
  v6 = *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v3 + 6264) == 1;
  v5 = 1;
  if ( !v6 )
    goto LABEL_3;
LABEL_4:
  if ( v5 )
  {
    TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v4);
    v9 = v8 + 26;
    v10 = (const struct _D3DCOLORVALUE *)(TopByReference + 4);
    if ( BYTE1(v8[25].r) == v11 || !IsCloseColorF(v9, v10) )
    {
      BYTE1(v8[25].r) = 1;
      *(struct _D3DCOLORVALUE *)&v9->r = *(const struct _D3DCOLORVALUE *)&v10->r;
      CPrimitiveGroup::BuildHeatMap((CPrimitiveGroup *)v8);
    }
  }
  else if ( *((_BYTE *)v1 + 401) != v2 )
  {
    *((_BYTE *)v1 + 401) = v2;
    CPrimitiveGroup::ReleaseHeatMap(v1);
  }
}
