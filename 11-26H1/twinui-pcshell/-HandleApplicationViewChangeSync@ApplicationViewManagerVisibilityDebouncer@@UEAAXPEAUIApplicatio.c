/*
 * XREFs of ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180087880
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180087E6C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPo.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x180087FEC (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync(
        RTL_SRWLOCK *a1,
        struct IApplicationView *a2,
        int a3)
{
  struct IApplicationView *v3; // rbx
  RTL_SRWLOCK *v5; // rdi
  RTL_SRWLOCK *v6; // rsi
  int v7; // eax
  char *Ptr; // rdx
  int *v9; // r8
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v5 = a1 + 23;
      AcquireSRWLockExclusive(a1 + 23);
      v6 = a1 + 24;
      *(_QWORD *)v10 = v3;
      if ( v3 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v3 + 8LL))(v3);
      v7 = 0;
      Ptr = (char *)v6[1].Ptr;
      if ( Ptr != v6[3].Ptr
        || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::_EnsureCapacity(
                   v6,
                   Ptr + 1),
            v7 >= 0) )
      {
        v9 = (int *)((char *)v6->Ptr + 8 * (__int64)v6[1].Ptr++);
        if ( v9 )
        {
          *(_QWORD *)v9 = 0LL;
          if ( v9 != v10 )
          {
            *(_QWORD *)v9 = v3;
            v3 = 0LL;
          }
        }
      }
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x102,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
          (const char *)(unsigned int)v7);
      if ( v3 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v3 + 16LL))(v3);
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
    }
  }
  else
  {
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView((ApplicationViewManagerVisibilityDebouncer *)a1, a2);
  }
}
