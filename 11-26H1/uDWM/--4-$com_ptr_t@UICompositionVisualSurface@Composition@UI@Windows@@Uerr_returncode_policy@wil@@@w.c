/*
 * XREFs of ??4?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180095D4C
 * Callers:
 *     ??4CVisualBrush@@QEAAAEAV0@AEBV0@@Z @ 0x180095DA0 (--4CVisualBrush@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Clone@CVisualBrush@@QEBAJPEAV1@@Z @ 0x18009B2A0 (-Clone@CVisualBrush@@QEBAJPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx

  v3 = *a2;
  v4 = *a1;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
