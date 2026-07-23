/*
 * XREFs of IovCleanupAiDb @ 0x140645F6C
 * Callers:
 *     ViIovPluginUnload @ 0x140646580 (ViIovPluginUnload.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403C1F60 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14064597C (ViPtRaiseIrqlSafe.c)
 *     IovAiAcquireDbLockAtDpcLevelSafe @ 0x140645A20 (IovAiAcquireDbLockAtDpcLevelSafe.c)
 *     IovAiCleanDbLockContext @ 0x140645AA0 (IovAiCleanDbLockContext.c)
 *     IovAiReleaseDbLockFromDpcLevel @ 0x140645E00 (IovAiReleaseDbLockFromDpcLevel.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfIsRuleClassEnabled @ 0x140C4C320 (VfIsRuleClassEnabled.c)
 */

void IovCleanupAiDb()
{
  _RTL_AVL_TABLE *v0; // rbx
  PVOID v1; // rax
  PSLIST_ENTRY v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)VfIsRuleClassEnabled(53LL) && KernelVerifier == 1 && IovAiDbInitialized )
  {
    v3 = 0LL;
    BYTE9(v3) = 4;
    ViPtRaiseIrqlSafe((__int64)&v3);
    IovAiAcquireDbLockAtDpcLevelSafe((__int64)&v3);
    while ( 1 )
    {
      v0 = IovAiDb;
      v1 = RtlEnumerateGenericTableAvl(IovAiDb, 1u);
      if ( !v1 )
        break;
      RtlDeleteElementGenericTableAvl(v0, v1);
    }
    IovAiDbInitialized = 0;
    IovAiReleaseDbLockFromDpcLevel((__int64)&v3);
    IovAiCleanDbLockContext((__int64)&v3);
    while ( 1 )
    {
      v2 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27C48.WaitBlockFill11[120]);
      if ( !v2 )
        break;
      ExFreePoolWithTag(v2, 0);
    }
    *(_OWORD *)&stru_140E27C48.WaitBlockFill11[120] = 0LL;
    *(_OWORD *)&stru_140E27C48.WaitBlockFill11[136] = 0LL;
    IovAiResourceCount = 0;
    ExFreePoolWithTag(IovAiDb, 0);
  }
}
