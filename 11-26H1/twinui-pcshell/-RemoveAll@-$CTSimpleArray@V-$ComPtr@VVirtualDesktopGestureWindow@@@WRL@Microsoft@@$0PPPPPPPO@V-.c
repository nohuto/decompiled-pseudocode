/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180561F4C
 * Callers:
 *     ??1VirtualDesktopGestureContext@@QEAA@XZ @ 0x18055CB78 (--1VirtualDesktopGestureContext@@QEAA@XZ.c)
 *     ?Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ @ 0x1805635E4 (-Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ.c)
 *     ??1VirtualDesktopSwitchAnimator@@UEAA@XZ @ 0x1805674F0 (--1VirtualDesktopSwitchAnimator@@UEAA@XZ.c)
 *     ?Cleanup@VirtualDesktopSwitchAnimator@@UEAAXXZ @ 0x180567F50 (-Cleanup@VirtualDesktopSwitchAnimator@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>>::RemoveAll(
        __int64 a1)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rsi
  __int64 v4; // rcx

  v2 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; i < *v2; ++i )
    {
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      if ( v4 )
      {
        *(_QWORD *)(*(_QWORD *)a1 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 16LL))(v4 + 16);
      }
    }
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v2 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
