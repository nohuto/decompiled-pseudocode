/*
 * XREFs of ?_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x180603E00
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180601CC0 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800C9D94 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLaunc.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CLauncherTipContextMenu::_EnumerateAndBuildShutdownMenu(CLauncherTipContextMenu *this)
{
  HMENU i; // rcx
  int v3; // edi
  LPVOID v4; // rbx
  __int64 (__fastcall *v5)(LPVOID, __int64 *); // rdi
  int v6; // r15d
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  void *v9; // r8
  __int64 v10; // rdx
  __int64 *v11; // rcx
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v17; // [rsp+50h] [rbp-B8h] BYREF
  WCHAR NewItem[264]; // [rsp+58h] [rbp-B0h] BYREF

  for ( i = (HMENU)*((_QWORD *)this + 42); GetMenuItemCount(i) > 0; i = (HMENU)*((_QWORD *)this + 42) )
    DeleteMenu(*((HMENU *)this + 42), 0, 0x400u);
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand>>>>::RemoveAll((__int64)this + 208);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v3 = CoCreateInstance(&CLSID_AuthUIShutdownChoices, 0LL, 1u, &GUID_bfdc5e2f_3402_49b3_8740_91d6dc5dbb15, &ppv);
  if ( v3 >= 0 )
  {
    v13 = 0;
    (*(void (__fastcall **)(LPVOID, int *))(*(_QWORD *)ppv + 48LL))(ppv, &v13);
    v13 |= 1u;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 32LL))(ppv);
    v16 = 0LL;
    v4 = ppv;
    v5 = *(__int64 (__fastcall **)(LPVOID, __int64 *))(*(_QWORD *)ppv + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v3 = v5(v4, &v16);
    if ( v3 >= 0 )
    {
      v14 = 0;
      v6 = 4000;
      do
      {
        if ( (*(unsigned int (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v16 + 24LL))(v16, 1LL, &v14) )
          break;
        v3 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, WCHAR *, int))(*(_QWORD *)ppv + 88LL))(
               ppv,
               v14,
               1LL,
               NewItem,
               260);
        if ( v3 >= 0 )
        {
          v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
          v8 = v7;
          if ( v7 )
          {
            *((_QWORD *)v7 + 1) = 0LL;
            *((_QWORD *)v7 + 2) = 0LL;
            *((_QWORD *)v7 + 3) = 0LL;
            *((_QWORD *)v7 + 4) = 0LL;
            *(_QWORD *)v7 = &CRefCountedObject<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand>::`vftable';
            v7[10] = 0;
          }
          else
          {
            v8 = 0LL;
          }
          v17 = v8;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
          if ( !v8 )
            goto LABEL_20;
          v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                 (__int64)(v8 + 4),
                 (__int64)NewItem,
                 0xFFFFFFFFFFFFFFFFuLL);
          if ( v3 >= 0 )
            v8[2] = v14;
          v10 = *((_QWORD *)this + 27);
          if ( v10 != *((_QWORD *)this + 29)
            || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      (__int64)this + 208,
                      v10 + 1,
                      v9) >= 0 )
          {
            v11 = (__int64 *)(*((_QWORD *)this + 26) + 8 * (*((_QWORD *)this + 27))++);
            if ( v11 )
            {
              *v11 = (__int64)v8;
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
            }
          }
          if ( v3 >= 0 )
LABEL_20:
            AppendMenuW(*((HMENU *)this + 42), 0, v6, NewItem);
          if ( v8 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
        }
        ++v6;
      }
      while ( v3 >= 0 );
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v3;
}
