/*
 * XREFs of ?AnimateHiddenElement@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUComponentInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1804E1A30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktopRemoveAnimationCoordinator::AnimateHiddenElement(
        VirtualDesktopRemoveAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::ComponentInfo *a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)a2 == 8 )
  {
    v3 = *((_DWORD *)this + 186);
    v4 = v3 + HIDWORD(*((_QWORD *)a2 + 3));
    v8 = *((_OWORD *)a2 + 1);
    HIDWORD(v8) = v4;
    v5 = v3 + DWORD1(v8);
    v6 = *((_QWORD *)a2 + 1);
    DWORD1(v8) = v5;
    (*(void (__fastcall **)(__int64, const struct ItemAnimationCoordinatorBase::ComponentInfo *, _QWORD, _QWORD))(*(_QWORD *)v6 + 504LL))(
      v6,
      a2,
      0LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 512LL))(
      *((_QWORD *)a2 + 1),
      (char *)a2 + 16,
      0LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, __int128 *, __int64))(**((_QWORD **)a2 + 1) + 512LL))(
      *((_QWORD *)a2 + 1),
      &v8,
      24LL);
  }
  else if ( *(_DWORD *)a2 == 9 )
  {
    (*(void (__fastcall **)(_QWORD, const struct ItemAnimationCoordinatorBase::ComponentInfo *, _QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 504LL))(
      *((_QWORD *)a2 + 1),
      a2,
      0LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)a2 + 1) + 504LL))(*((_QWORD *)a2 + 1), v7, 28LL);
  }
}
