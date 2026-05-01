/*
 * XREFs of ?Compare@VirtualDesktopGuidFinder@@QEBAHV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z @ 0x18054E808
 * Callers:
 *     ??$FindEx@UVirtualDesktopGuidFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBUVirtualDesktopGuidFinder@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18054E19C (--$FindEx@UVirtualDesktopGuidFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Micr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGuidFinder::Compare(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*a2 + 32LL))(*a2, &v10);
  v7 = 0;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v6);
LABEL_6:
    v7 = -1;
    goto LABEL_7;
  }
  v8 = v10 - *a1;
  if ( (_QWORD)v10 == *a1 )
    v8 = *((_QWORD *)&v10 + 1) - a1[1];
  if ( v8 )
    goto LABEL_6;
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a3);
  return v7;
}
