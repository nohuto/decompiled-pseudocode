/*
 * XREFs of ?GetCountInternal@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x1805530A0
 * Callers:
 *     ?GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x180553000 (-GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetCountInternal(CVirtualDesktopManager *this, unsigned int *a2)
{
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
  return 0LL;
}
