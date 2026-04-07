/*
 * XREFs of ?RenderRecursive@CVisual@@UEAAXXZ @ 0x1800DE2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA?AVDirtyFlags@@XZ @ 0x180016010 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA-AVDirtyFl.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::RenderRecursive(CVisual *this)
{
  _DWORD *v1; // rax
  _DWORD *v2; // r8
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__0A__00__YA_AVDirtyFlags__XZ(&v5);
  if ( (~*v1 & v2[8]) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 32LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x122,
        (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v3);
  }
}
