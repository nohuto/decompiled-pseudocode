/*
 * XREFs of _lambda_3d7494e9d27b7fd2e8e892ddeaab5a34_::operator() @ 0x18054F214
 * Callers:
 *     ?GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIApplicationView@@PEA_N@Z @ 0x180262410 (-GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_3d7494e9d27b7fd2e8e892ddeaab5a34_::operator()(_QWORD **a1, __int64 *a2)
{
  __int64 v2; // rax
  int v5; // edi
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 *v9; // rdi
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v15; // [rsp+58h] [rbp+28h] BYREF
  HWND hWnd; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  v2 = *a2;
  v15 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, int *))(v2 + 216))(a2, &v15);
  if ( v5 < 0 )
  {
    v6 = 103LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v15
    && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)(*a1)[3] + 24LL))((*a1)[3], a2, *a1[1]) )
  {
    v8 = *a2;
    hWnd = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, HWND *))(v8 + 72))(a2, &hWnd);
    if ( v5 < 0 )
    {
      v6 = 108LL;
      goto LABEL_3;
    }
    if ( !IsIconic(hWnd) )
    {
      v9 = *(_QWORD **)((char *)a1
                      + (-(__int64)((*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)(*a1)[3]
                                                                                                 + 120LL))(
                                      (*a1)[3],
                                      a2,
                                      0LL) != 0) & 0xFFFFFFFFFFFFFFF8uLL)
                      + 24);
      if ( !*v9 )
        goto LABEL_16;
      v17 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)*v9 + 184LL))(*v9, &v17);
      if ( v10 < 0 )
      {
        v11 = 119LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
      v12 = *a2;
      v13 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *))(v12 + 184))(a2, &v13);
      if ( v10 < 0 )
      {
        v11 = 122LL;
        goto LABEL_12;
      }
      if ( v13 > v17 )
LABEL_16:
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v9, (__int64)a2);
    }
  }
  return 0LL;
}
