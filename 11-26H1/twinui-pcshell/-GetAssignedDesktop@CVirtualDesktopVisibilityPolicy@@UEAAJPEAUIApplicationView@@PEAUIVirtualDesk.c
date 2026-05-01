/*
 * XREFs of ?GetAssignedDesktop@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktopCollection@@PEAPEAUIVirtualDesktop@@@Z @ 0x18054D600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::GetAssignedDesktop(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktopCollection *a3,
        struct IVirtualDesktop **a4)
{
  __int64 v4; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int128 Buf1; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  v4 = *(_QWORD *)a2;
  Buf1 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(v4 + 200))(a2, &Buf1);
  if ( v7 < 0 )
  {
    v8 = 278LL;
    goto LABEL_3;
  }
  if ( memcmp_0(&Buf1, &GUID_NULL, 0x10uLL)
    && memcmp_0(&Buf1, &unk_180788160, 0x10uLL)
    && memcmp_0(&Buf1, &unk_180788180, 0x10uLL) )
  {
    v7 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *, __int128 *, struct IVirtualDesktop **))(*(_QWORD *)a3 + 88LL))(
           a3,
           &Buf1,
           a4);
    if ( v7 >= 0 )
      return (unsigned int)v7;
    v8 = 280LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  return 2147943568LL;
}
