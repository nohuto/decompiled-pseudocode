/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180544BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A2584 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?IsRemoteVirtualDesktop@VirtualDesktopPersistence@@AEAA_NPEAUIVirtualDesktop@@@Z @ 0x180544D28 (-IsRemoteVirtualDesktop@VirtualDesktopPersistence@@AEAA_NPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualDesktopPersistence::CurrentVirtualDesktopChanged(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2)
{
  __int64 v2; // rax
  VirtualDesktopPersistence *v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, const wchar_t *, int, __int128 *, __int64); // rbx
  __int64 v11; // rdx
  int v12; // [rsp+40h] [rbp-28h] BYREF
  __int128 v13; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(_QWORD *)a2;
  v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int128 *))(v2 + 32))(a2, &v13);
  if ( v6 < 0 )
  {
    v7 = 74LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( v13 != __PAIR128__(0x1012647F7CCD4687LL, 0x4658059A45DB96FFLL) )
  {
    v12 = 1;
    if ( !VirtualDesktopPersistence::IsRemoteVirtualDesktop(v5, a2) )
    {
      v9 = *((_QWORD *)this + 2);
      v12 = 0;
      v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, const wchar_t *, int, __int128 *, __int64))(*(_QWORD *)v9 + 32LL);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::__private_IsEnabledPreCheck(
        `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
        3u);
      LOBYTE(v11) = 1;
      v6 = v10(v9, v11, 0LL, L"CurrentVirtualDesktop", 3, &v13, 16LL);
      if ( v6 < 0 )
      {
        v7 = 85LL;
        goto LABEL_3;
      }
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const WCHAR *, int, int *, __int64))(**((_QWORD **)this + 2)
                                                                                               + 32LL))(
           *((_QWORD *)this + 2),
           0LL,
           0LL,
           L"IsCurrentVDRemote",
           4,
           &v12,
           4LL);
    if ( v6 < 0 )
    {
      v7 = 88LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
