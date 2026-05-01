/*
 * XREFs of ?Close@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804D314C
 * Callers:
 *     ?KeyDown@SwitchItemThumbnailElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804D37C0 (-KeyDown@SwitchItemThumbnailElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?v_OnClick@SwitchItemThumbnailElement@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804D4250 (-v_OnClick@SwitchItemThumbnailElement@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputAr.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SwitchItemThumbnailElement::Close(SwitchItemThumbnailElement *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 73);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, *((_QWORD *)this + 72));
}
