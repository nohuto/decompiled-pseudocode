/*
 * XREFs of ?SetPositioningAnchorRect@XamlLauncher@@UEAAJUtagRECT@@0@Z @ 0x1801C40E0
 * Callers:
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x180250D60 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801C437C (--$As@UIImmersiveLauncherCortana@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::SetPositioningAnchorRect(XamlLauncher *this, struct tagRECT *a2, struct tagRECT *a3)
{
  _QWORD *v5; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v12[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = (_QWORD *)((char *)this + 312);
  if ( !*v5 )
    return 2147943568LL;
  v15 = 0LL;
  v7 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(v5, &v15);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = *v15;
    *(struct tagRECT *)v12 = *a3;
    v13 = (__int128)*a2;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, int *))(v9 + 24))(v15, &v13, v12);
    v8 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x446,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v10);
    v11 = (__int64)v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x445,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  }
  return v8;
}
