/*
 * XREFs of ?HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x180585F38
 * Callers:
 *     ?SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x180586480 (-SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCAT.c)
 * Callees:
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x180018764 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18011691C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180116BF4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x180585CBC (-GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapServiceProvider::HandleDesktopModeSnapping(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        char a4,
        _OWORD *a5)
{
  unsigned int SnapRectForDesktopMode; // ebx
  __int64 v9; // rdx
  ApplicationViewOperation *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  ApplicationViewOperation *v16; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v17 = 0LL;
  SnapRectForDesktopMode = SnapServiceProvider::GetSnapRectForDesktopMode(a1, a2, a3, (__int64)&v17);
  if ( (SnapRectForDesktopMode & 0x80000000) == 0 )
  {
    if ( Geometry::CRect::IsEmpty((Geometry::CRect *)&v17) )
    {
      SnapRectForDesktopMode = -2147024809;
      v9 = 84LL;
      goto LABEL_3;
    }
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v16);
    v10 = v16;
    if ( v16 )
    {
      *(_OWORD *)((char *)v16 + 88) = v17;
      *((_BYTE *)v10 + 84) = 1;
      *((_DWORD *)v10 + 18) = (a3 != 2) + 3;
      v13 = 2 * (a4 & 1);
      if ( (a4 & 2) != 0 )
        v13 |= 1u;
      *((_DWORD *)v10 + 19) = v13;
      *((_DWORD *)v10 + 20) = 1;
      *((_WORD *)v10 + 52) = 257;
      v14 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 320LL))(a2);
      SnapRectForDesktopMode = v14;
      if ( v14 >= 0 )
      {
        if ( a5 )
          *a5 = v17;
        SnapRectForDesktopMode = 0;
        goto LABEL_16;
      }
      v11 = (unsigned int)v14;
      v12 = 113LL;
    }
    else
    {
      SnapRectForDesktopMode = -2147024882;
      v11 = 2147942414LL;
      v12 = 87LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
      (const char *)v11);
LABEL_16:
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v16);
    return SnapRectForDesktopMode;
  }
  v9 = 80LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
    (const char *)SnapRectForDesktopMode);
  return SnapRectForDesktopMode;
}
