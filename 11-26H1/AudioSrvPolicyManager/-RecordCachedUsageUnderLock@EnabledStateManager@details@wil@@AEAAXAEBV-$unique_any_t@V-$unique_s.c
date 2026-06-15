/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x180033EAC
 * Callers:
 *     ?ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18002C7E4 (-ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180035B48 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_RecordCachedUsage @ 0x180036948 (wil_details_RecordCachedUsage.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int *v5; // rbx
  unsigned int *v6; // rdi
  const char *v7; // [rsp+20h] [rbp-8h]

  v5 = *(unsigned int **)(a1 + 32);
  v6 = *(unsigned int **)(a1 + 40);
  if ( (unsigned __int64)((char *)v6 - (char *)v5) >= 0x10 )
  {
    while ( v5 != v6 )
    {
      wil_details_RecordCachedUsage(*v5, *((_QWORD *)v5 + 1));
      v5 += 4;
    }
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 32);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, a4, v7);
  }
}
