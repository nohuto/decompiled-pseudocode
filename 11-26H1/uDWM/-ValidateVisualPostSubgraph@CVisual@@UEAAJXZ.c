/*
 * XREFs of ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x1800689C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@07$00@@YA?AVDirtyFlags@@XZ @ 0x180068A30 (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@07$00@@YA-AVDirtyFlags@@XZ.c)
 *     ?UpdateHidden@CVisual@@AEAAJXZ @ 0x180068A44 (-UpdateHidden@CVisual@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisual::ValidateVisualPostSubgraph(CVisual *this, __int64 a2, __int64 a3, __int64 a4)
{
  int updated; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v13; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__07_00__YA_AVDirtyFlags__XZ(&v13, a2, a3, a4) & *((_DWORD *)this + 8)) == 0 )
    return 0LL;
  updated = CVisual::UpdateHidden(this);
  v10 = updated;
  if ( updated >= 0 )
  {
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__07_00__YA_AVDirtyFlags__XZ(
                                           &v13,
                                           v7,
                                           v8,
                                           v9);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)updated,
    v11);
  return v10;
}
