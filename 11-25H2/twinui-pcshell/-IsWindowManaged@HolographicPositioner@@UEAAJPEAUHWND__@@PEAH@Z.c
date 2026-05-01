/*
 * XREFs of ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180171B70
 * Callers:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002DCB0 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180171C50 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::IsWindowManaged(HolographicPositioner *this, HWND a2, int *a3)
{
  __int64 v6; // r14
  int (__fastcall *v7)(__int64, HWND, struct IApplicationView **); // rbx
  struct IApplicationView *v8; // rcx
  int IsViewManaged; // eax
  unsigned int v11; // ebx
  struct IApplicationView *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v14; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v14 = 0LL;
  v6 = *((_QWORD *)this + 12);
  if ( v6
    && (v7 = *(int (__fastcall **)(__int64, HWND, struct IApplicationView **))(*(_QWORD *)v6 + 48LL),
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14),
        v7(v6, a2, &v14) >= 0)
    && (IsViewManaged = HolographicPositioner::IsViewManaged(this, v14, a3), v11 = IsViewManaged, IsViewManaged < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x474,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v11;
  }
  else
  {
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return 0LL;
  }
}
