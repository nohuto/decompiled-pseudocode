/*
 * XREFs of ??$_InsertAt@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@_K@Z @ 0x18054E234
 * Callers:
 *     ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z @ 0x18054EBA0 (-MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180086F00 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::_InsertAt<Microsoft::WRL::ComPtr<IVirtualDesktop> const &>(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v3; // r14
  int v4; // esi
  unsigned __int64 v5; // rax
  unsigned __int64 *v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 *v12; // rcx

  v3 = a1 + 1;
  v4 = 0;
  v5 = a1[1];
  v9 = a1 + 1;
  if ( a3 >= v5 )
    v5 = a3;
  v10 = v5 + 1;
  if ( v5 + 1 > a1[3] )
  {
    v4 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
           (__int64)a1,
           v5 + 1,
           (void *)a3);
    if ( v4 < 0 )
      return (unsigned int)v4;
    v9 = a1 + 1;
  }
  if ( a3 < *v3 )
  {
    memmove_0((void *)(*a1 + 8 * a3 + 8), (const void *)(*a1 + 8 * a3), 8 * (*v3 - a3));
    v3 = v9;
  }
  v11 = *a1;
  *v3 = v10;
  v12 = (__int64 *)(v11 + 8 * a3);
  if ( v12 )
  {
    *v12 = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
  }
  return (unsigned int)v4;
}
