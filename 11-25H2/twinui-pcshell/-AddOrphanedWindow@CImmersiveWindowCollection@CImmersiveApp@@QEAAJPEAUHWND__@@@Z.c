/*
 * XREFs of ?AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180300F74
 * Callers:
 *     ?HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x180302970 (-HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_MakeRoomAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1802A3664 (-_MakeRoomAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?s_CreateInstance@CTaskWindow@@SAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A9D0C (-s_CreateInstance@CTaskWindow@@SAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddOrphanedWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2)
{
  __int64 v3; // rax
  const struct _GUID *v4; // rdx
  int Instance; // ebx
  void *v6; // r8
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 *v9; // rcx
  void *v11[6]; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-19h] BYREF
  int v13; // [rsp+68h] [rbp-9h]
  int v14; // [rsp+6Ch] [rbp-5h]
  __int128 v15; // [rsp+70h] [rbp-1h]
  __int128 v16; // [rsp+80h] [rbp+Fh]
  __int128 v17; // [rsp+90h] [rbp+1Fh]
  __int64 v18; // [rsp+A0h] [rbp+2Fh]
  __int64 v19; // [rsp+A8h] [rbp+37h]
  int v20; // [rsp+B0h] [rbp+3Fh]
  int v21; // [rsp+B4h] [rbp+43h]

  v3 = *((_QWORD *)this + 19);
  v12[0] = a2;
  v12[1] = 0LL;
  v13 = 3;
  v14 = 0;
  v15 = 0LL;
  v11[5] = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = (v3 + 112) & -(__int64)(v3 != 0);
  v20 = 3;
  v21 = 15;
  v11[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v11);
  Instance = CTaskWindow::s_CreateInstance((const struct TASKWINDOW_INIT_DATA *)v12, v4, v11);
  if ( Instance >= 0 )
  {
    v7 = (_QWORD *)((char *)this + 248);
    v8 = *((_QWORD *)this + 32);
    Instance = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::_MakeRoomAt(
                 v7,
                 v8,
                 v6);
    if ( Instance >= 0 )
    {
      v9 = (__int64 *)(*v7 + 8 * v8);
      if ( v9 )
      {
        *v9 = (__int64)v11[0];
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v11);
  return (unsigned int)Instance;
}
