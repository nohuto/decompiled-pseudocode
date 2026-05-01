/*
 * XREFs of ?GetWindowForThumbnail@CSwitchItemElement@@UEAAPEAUHWND__@@XZ @ 0x1804AE2F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HWND __fastcall CSwitchItemElement::GetWindowForThumbnail(CSwitchItemElement *this)
{
  return *(HWND *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 40LL))(*((_QWORD *)this + 45));
}
