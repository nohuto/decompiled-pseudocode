/*
 * XREFs of ?RecalculateCopyOfAllDesktops@CVirtualDesktopCollection@@AEAAXXZ @ 0x18054ED5C
 * Callers:
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18054E47C (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z @ 0x18054EBA0 (-MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180086F00 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800CA0DC (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 */

void __fastcall CVirtualDesktopCollection::RecalculateCopyOfAllDesktops(CVirtualDesktopCollection *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  __int64 *v5; // rsi
  __int64 *v6; // r15
  __int64 v7; // rbx
  void *v8; // r8
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 *v11; // rsi
  __int64 *v12; // rbp
  __int64 v13; // rbx
  void *v14; // r8
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 112);
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)this + 112);
  v3 = *((_BYTE *)this + 152) != 0 ? 0x20 : 0;
  v4 = -(__int64)(*((_BYTE *)this + 152) != 0) & 0xFFFFFFFFFFFFFFE0uLL;
  v5 = *(__int64 **)((char *)this + v3 + 48);
  v6 = &v5[*(_QWORD *)((char *)this + v3 + 56)];
  if ( v5 != v6 )
  {
    do
    {
      v7 = *v5;
      v17 = *v5;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
      v9 = v2[1];
      if ( v9 != v2[3]
        || (int)CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                  (__int64)v2,
                  v9 + 1,
                  v8) >= 0 )
      {
        v10 = (__int64 *)(*v2 + 8 * v2[1]++);
        if ( v10 )
        {
          *v10 = v7;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      ++v5;
    }
    while ( v5 != v6 );
    v2 = (_QWORD *)((char *)this + 112);
  }
  v11 = *(__int64 **)((char *)this + v4 + 80);
  v12 = &v11[*(_QWORD *)((char *)this + v4 + 88)];
  while ( v11 != v12 )
  {
    v13 = *v11;
    v17 = *v11;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
    v15 = v2[1];
    if ( v15 != v2[3]
      || (int)CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                (__int64)v2,
                v15 + 1,
                v14) >= 0 )
    {
      v16 = (__int64 *)(*v2 + 8 * v2[1]++);
      if ( v16 )
      {
        *v16 = v13;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    ++v11;
  }
}
