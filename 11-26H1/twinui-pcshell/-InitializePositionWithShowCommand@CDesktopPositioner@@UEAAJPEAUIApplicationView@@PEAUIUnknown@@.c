/*
 * XREFs of ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x180510380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18008E1BC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18022FFA4 (-TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QEAA_NXZ @ 0x1802E7AA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QE.c)
 *     ?ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180511E08 (-ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect@Foundation@Windows@@@Z @ 0x180511E64 (-TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopPositioner::InitializePositionWithShowCommand(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        unsigned int *a5,
        struct tagRECT *a6)
{
  CDesktopPositioner *v10; // r14
  LONG v11; // r8d
  LONG v12; // edx
  LONG v13; // ecx
  unsigned int SnapId; // r9d
  LONG v15; // ebx
  LONG v16; // r11d
  LONG v17; // r10d
  int v18; // eax
  unsigned int v19; // ebx
  __int128 v21; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]

  *a5 = 0;
  *a6 = 0LL;
  v10 = (CDesktopPositioner *)((char *)this - 144);
  if ( CDesktopPositioner::ShouldMaximizeWindow((CDesktopPositioner *)((char *)this - 144), a2) )
  {
    *a5 = 2;
  }
  else if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapLauncherAPI>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SnapLauncherAPI>::GetImpl'::`2'::impl) )
  {
    v21 = 0LL;
    if ( CDesktopPositioner::TryGetSnapRectForAppView(v10, a2, a3, (struct Windows::Foundation::Rect *)&v21) )
    {
      *a5 = 3;
      v11 = (int)*((float *)&v21 + 1);
      v12 = (int)(float)(*((float *)&v21 + 2) + *(float *)&v21);
      v13 = (int)(float)(*((float *)&v21 + 3) + *((float *)&v21 + 1));
      a6->left = (int)*(float *)&v21;
      a6->top = v11;
      a6->right = v12;
      a6->bottom = v13;
    }
  }
  else
  {
    SnapId = CDesktopPositioner::TryGetSnapId(
               v10,
               (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
               a3);
    if ( SnapId != -1 )
    {
      v21 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 26) + 80LL))(
             *((_QWORD *)this + 26),
             SnapId,
             &v21) >= 0 )
      {
        *a5 = 3;
        v15 = (int)*((float *)&v21 + 1);
        v16 = (int)(float)(*((float *)&v21 + 2) + *(float *)&v21);
        v17 = (int)(float)(*((float *)&v21 + 3) + *((float *)&v21 + 1));
        a6->left = (int)*(float *)&v21;
        a6->top = v15;
        a6->right = v16;
        a6->bottom = v17;
      }
    }
  }
  v18 = CDesktopPositioner::InitializePositionHelper(v10, a2, a3, a4);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x45A,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
