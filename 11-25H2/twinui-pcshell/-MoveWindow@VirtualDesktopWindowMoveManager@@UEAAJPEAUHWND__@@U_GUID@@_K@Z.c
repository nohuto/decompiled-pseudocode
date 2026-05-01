/*
 * XREFs of ?MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z @ 0x180542CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z @ 0x180214070 (-TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K0@Z @ 0x1804CE240 (-_EnsureCapacity@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, struct _GUID *, __int64 *); // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __m256i *v17; // rdx
  __int64 v18; // rdi
  int (__fastcall *v19)(__int64, __int64, __int64 *); // rbx
  int v20; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // [rsp+20h] [rbp-40h] BYREF
  int v26; // [rsp+28h] [rbp-38h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  __m256i v28; // [rsp+38h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  if ( *((_QWORD *)this + 8) )
  {
    VirtualDesktopWindowMoveManager::TrimPendingMoves(this, a4);
    v27 = 0LL;
    v10 = *(_QWORD *)&a3->Data1 - 0x4CF966F2C2DDEA68LL;
    if ( *(_QWORD *)&a3->Data1 == 0x4CF966F2C2DDEA68LL )
      v10 = *(_QWORD *)a3->Data4 + 0x534404FF02E49B7ELL;
    if ( v10 )
    {
      v11 = *((_QWORD *)this + 7);
      v12 = *(__int64 (__fastcall **)(__int64, struct _GUID *, __int64 *))(*(_QWORD *)v11 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      v13 = v12(v11, a3, &v27);
      v8 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
          (const char *)(unsigned int)v13);
LABEL_18:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
        return v8;
      }
    }
    v28.m256i_i64[0] = a2;
    *(struct _GUID *)&v28.m256i_u64[1] = *a3;
    v28.m256i_i64[3] = a4;
    v14 = 0;
    v15 = *((_QWORD *)this + 12);
    if ( v15 != *((_QWORD *)this + 14)
      || (v14 = CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::_EnsureCapacity(
                  (_QWORD *)this + 11,
                  v15 + 1,
                  v9),
          v14 >= 0) )
    {
      v16 = *((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = v16 + 1;
      v17 = (__m256i *)(*((_QWORD *)this + 11) + 32 * v16);
      if ( v17 )
        *v17 = v28;
    }
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x42,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
        (const char *)(unsigned int)v14);
    v25 = 0LL;
    v26 = 0;
    v18 = *((_QWORD *)this + 8);
    v19 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v18 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    if ( v19(v18, a2, &v25) >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 216LL))(v25, &v26);
      if ( v20 >= 0 )
      {
        if ( v26 )
        {
          v22 = *(_QWORD *)&a3->Data1 - 0x4CF966F2C2DDEA68LL;
          if ( *(_QWORD *)&a3->Data1 == 0x4CF966F2C2DDEA68LL )
            v22 = *(_QWORD *)a3->Data4 + 0x534404FF02E49B7ELL;
          if ( v22 )
          {
            v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 6) + 360LL))(
                    *((_QWORD *)this + 6),
                    v25,
                    v27);
            v8 = v23;
            if ( v23 >= 0 )
              goto LABEL_17;
            v24 = 79LL;
          }
          else
          {
            v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 96LL))(
                    *((_QWORD *)this + 10),
                    v25);
            v8 = v23;
            if ( v23 >= 0 )
              goto LABEL_17;
            v24 = 75LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v24,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
            (const char *)(unsigned int)v23);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
          goto LABEL_18;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x47,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
          (const char *)(unsigned int)v20);
      }
    }
LABEL_17:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    v8 = 0;
    goto LABEL_18;
  }
  v8 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
    (const char *)0x8007139FLL);
  return v8;
}
