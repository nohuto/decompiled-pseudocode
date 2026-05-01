/*
 * XREFs of ?ForgetView@ScreenManager@@AEAAXPEAUIApplicationView@@@Z @ 0x180521758
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___::Run @ 0x1805220F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___--Run.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAJ_K@Z @ 0x180522070 (-RemoveAt@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntry.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ScreenManager::ForgetView(ScreenManager *this, struct IUnknown *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rsi

  v2 = *((_QWORD *)this + 40);
  if ( v2 )
  {
    v4 = 24 * v2;
    v5 = (_QWORD *)((char *)this + 312);
    do
    {
      if ( SHIsSameObject(*(struct IUnknown **)(v4 + *v5 - 8), a2)
        || (*(unsigned int (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(v4 + *v5 - 24) + 184LL))(
             *(_QWORD *)(v4 + *v5 - 24),
             a2)
        || (*(unsigned int (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(v4 + *v5 - 16) + 184LL))(
             *(_QWORD *)(v4 + *v5 - 16),
             a2) )
      {
        CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAt(
          v5,
          v2 - 1);
      }
      v4 -= 24LL;
      --v2;
    }
    while ( v2 );
  }
}
