/*
 * XREFs of ?AnimateShownElement@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUComponentInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1804E1590
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktopAddAnimationCoordinator::AnimateShownElement(
        VirtualDesktopAddAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::ComponentInfo *a2)
{
  int v2; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 62);
  v4 = *((_QWORD *)a2 + 3);
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_OWORD *)a2 + 1);
  HIDWORD(v6) = v2 + HIDWORD(v4);
  DWORD1(v6) += v2;
  (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v5 + 512LL))(v5, &v6, 0LL, 0LL);
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)a2 + 1) + 512LL))(
    *((_QWORD *)a2 + 1),
    (char *)a2 + 16,
    23LL);
}
