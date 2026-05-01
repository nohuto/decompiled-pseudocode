/*
 * XREFs of ?ApplicationViewShown@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationView@@_K@Z @ 0x18018AE80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K@Z @ 0x180566E70 (-RemoveAt@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTPolicyCo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopWindowMoveManager::ApplicationViewShown(
        VirtualDesktopWindowMoveManager *this,
        struct IApplicationView *a2,
        unsigned __int64 a3)
{
  __int64 *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(struct IApplicationView *, GUID *, __int64 *); // rbx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, char *, __int64 *); // rbx
  int v23; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // [rsp+20h] [rbp-39h] BYREF
  __int64 v27; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v28[6]; // [rsp+30h] [rbp-29h] BYREF
  _OWORD Buf1[2]; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 8) )
  {
    v10 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)0x8007139FLL);
    return v10;
  }
  v6 = (__int64 *)((char *)this + 88);
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    v8 = 32 * v7;
    do
    {
      if ( *(_QWORD *)(v8 + *v6 - 8) + 500LL < a3 )
      {
        v19 = CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt(
                v6,
                v7 - 1);
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x81,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
            (const char *)(unsigned int)v19);
      }
      v8 -= 32LL;
      --v7;
    }
    while ( v7 );
  }
  v26 = 0LL;
  v9 = **(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  v10 = v9(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v26);
  if ( (v10 & 0x80000000) != 0 )
  {
    v18 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v10;
  }
  v28[0] = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 24LL))(v26, v28);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)(unsigned int)v11);
    v17 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v10;
  }
  v12 = 0LL;
  v13 = 0LL;
  while ( v12 < v6[1] )
  {
    v16 = *v6;
    if ( *(_QWORD *)(v13 + *v6) == v28[0] )
    {
      Buf1[0] = *(_OWORD *)(32 * v12 + v16);
      Buf1[1] = *(_OWORD *)(32 * v12 + v16 + 16);
      CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt(
        v6,
        v12);
      if ( !memcmp_0((char *)Buf1 + 8, &unk_1807B6980, 0x10uLL) )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 6) + 216LL))(
                *((_QWORD *)this + 6),
                a2);
        v10 = v20;
        if ( v20 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6E,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
            (const char *)(unsigned int)v20);
        goto LABEL_31;
      }
      v27 = 0LL;
      v21 = *((_QWORD *)this + 7);
      v22 = *(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v21 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      v23 = v22(v21, (char *)Buf1 + 8, &v27);
      v10 = v23;
      if ( v23 < 0 )
      {
        v24 = (unsigned int)v23;
        v25 = 115LL;
        goto LABEL_29;
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 6) + 200LL))(
              *((_QWORD *)this + 6),
              a2,
              v27);
      if ( (v10 & 0x80000000) != 0 )
      {
        v24 = v10;
        v25 = 116LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
          (const char *)v24);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
LABEL_31:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      return v10;
    }
    ++v12;
    v13 += 32LL;
  }
  v14 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 2147647531LL;
}
