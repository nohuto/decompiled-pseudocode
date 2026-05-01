/*
 * XREFs of ?MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z @ 0x180566B80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z @ 0x180205714 (-TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K0@Z @ 0x1804E0444 (-_EnsureCapacity@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopWindowMoveManager::MoveWindow(
        VirtualDesktopWindowMoveManager *this,
        __int64 a2,
        struct _GUID *a3,
        unsigned __int64 a4)
{
  unsigned int v8; // ebx
  unsigned __int64 v9; // r8
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, struct _GUID *, __int64 *); // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __m256i *v15; // r8
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, __int64, __int64 *); // rbx
  int v18; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  int v23; // [rsp+28h] [rbp-38h] BYREF
  __int64 v24; // [rsp+30h] [rbp-30h] BYREF
  __m256i v25; // [rsp+38h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  if ( *((_QWORD *)this + 8) )
  {
    VirtualDesktopWindowMoveManager::TrimPendingMoves(this, a4);
    v24 = 0LL;
    if ( memcmp_0(a3, &unk_1807B6980, 0x10uLL) )
    {
      v10 = *((_QWORD *)this + 7);
      v11 = *(__int64 (__fastcall **)(__int64, struct _GUID *, __int64 *))(*(_QWORD *)v10 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v12 = v11(v10, a3, &v24);
      v8 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_16:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        return v8;
      }
    }
    v25.m256i_i64[0] = a2;
    *(struct _GUID *)&v25.m256i_u64[1] = *a3;
    v25.m256i_i64[3] = a4;
    v13 = 0;
    v14 = *((_QWORD *)this + 12);
    if ( v14 != *((_QWORD *)this + 14)
      || (v13 = CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::_EnsureCapacity(
                  (_QWORD *)this + 11,
                  v14 + 1,
                  v9),
          v13 >= 0) )
    {
      ++*((_QWORD *)this + 12);
      v15 = (__m256i *)(32LL * *((_QWORD *)this + 12) + *((_QWORD *)this + 11) - 32LL);
      if ( v15 )
        *v15 = v25;
    }
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x42,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
        (const char *)(unsigned int)v13);
    v22 = 0LL;
    v23 = 0;
    v16 = *((_QWORD *)this + 8);
    v17 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v16 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    if ( v17(v16, a2, &v22) >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 216LL))(v22, &v23);
      if ( v18 >= 0 )
      {
        if ( v23 )
        {
          if ( !memcmp_0(a3, &unk_1807B6980, 0x10uLL) )
          {
            v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 96LL))(
                    *((_QWORD *)this + 10),
                    v22);
            v8 = v20;
            if ( v20 >= 0 )
              goto LABEL_15;
            v21 = 75LL;
          }
          else
          {
            v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 6) + 360LL))(
                    *((_QWORD *)this + 6),
                    v22,
                    v24);
            v8 = v20;
            if ( v20 >= 0 )
              goto LABEL_15;
            v21 = 79LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
            (const char *)(unsigned int)v20);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
          goto LABEL_16;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x47,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
          (const char *)(unsigned int)v18);
      }
    }
LABEL_15:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    v8 = 0;
    goto LABEL_16;
  }
  v8 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
    (const char *)0x8007139FLL);
  return v8;
}
