/*
 * XREFs of ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180183F30
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180038BAC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPo.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x18003A068 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync(
        RTL_SRWLOCK *a1,
        struct IApplicationView *a2,
        int a3)
{
  struct IApplicationView *v3; // rbx
  RTL_SRWLOCK *v5; // rdi
  void *v6; // r8
  RTL_SRWLOCK *v7; // rsi
  int v8; // eax
  PVOID Ptr; // rdx
  PVOID v10; // rdx
  int *v11; // r8
  int v12[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v5 = a1 + 23;
      AcquireSRWLockExclusive(a1 + 23);
      v7 = a1 + 24;
      *(_QWORD *)v12 = v3;
      if ( v3 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v3 + 8LL))(v3);
      v8 = 0;
      Ptr = v7[1].Ptr;
      if ( Ptr != v7[3].Ptr
        || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::_EnsureCapacity(
                   (__int64)v7,
                   (unsigned __int64)Ptr + 1,
                   v6),
            v8 >= 0) )
      {
        v10 = v7[1].Ptr;
        v7[1].Ptr = (char *)v10 + 1;
        v11 = (int *)((char *)v7->Ptr + 8 * (_QWORD)v10);
        if ( v11 )
        {
          *(_QWORD *)v11 = 0LL;
          if ( v11 != v12 )
          {
            *(_QWORD *)v11 = v3;
            v3 = 0LL;
          }
        }
      }
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x102,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
          (const char *)(unsigned int)v8);
      if ( v3 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v3 + 16LL))(v3);
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
    }
  }
  else
  {
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(a1, a2);
  }
}
