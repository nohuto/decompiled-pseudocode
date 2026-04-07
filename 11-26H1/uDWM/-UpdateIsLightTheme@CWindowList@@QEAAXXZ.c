/*
 * XREFs of ?UpdateIsLightTheme@CWindowList@@QEAAXXZ @ 0x180072D44
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18004AD98 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::UpdateIsLightTheme(CWindowList *this)
{
  CDesktopManager *v1; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  *((_BYTE *)this + 635) = 0;
  v3 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)v1 + 9) + 24LL))(
         *((_QWORD *)v1 + 9),
         L"SystemUsesLightTheme",
         &v3) >= 0 )
    *((_BYTE *)this + 635) = v3 != 0;
}
