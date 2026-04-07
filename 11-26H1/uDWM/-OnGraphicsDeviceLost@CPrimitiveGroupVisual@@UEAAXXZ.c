/*
 * XREFs of ?OnGraphicsDeviceLost@CPrimitiveGroupVisual@@UEAAXXZ @ 0x1800BDBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroupVisual::OnGraphicsDeviceLost(CPrimitiveGroupVisual *this)
{
  _DWORD *v2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)this + 6);
  v2 = ___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v3);
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 23) + 24LL))((char *)this - 184, (unsigned int)*v2);
}
