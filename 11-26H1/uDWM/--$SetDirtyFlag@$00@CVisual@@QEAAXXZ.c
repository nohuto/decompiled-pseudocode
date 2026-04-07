/*
 * XREFs of ??$SetDirtyFlag@$00@CVisual@@QEAAXXZ @ 0x180017474
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180008A14 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180062F20 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CVisual::SetDirtyFlag<1>()
{
  _DWORD *v0; // rax
  __int64 v1; // r9
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(&v3);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 24LL))(v1, (unsigned int)*v0);
}
