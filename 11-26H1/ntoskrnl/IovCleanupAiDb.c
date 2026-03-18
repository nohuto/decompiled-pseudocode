/*
 * XREFs of IovCleanupAiDb @ 0x14064238C
 * Callers:
 *     ViIovPluginUnload @ 0x1406429A0 (ViIovPluginUnload.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403B8060 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x140641D9C (ViPtRaiseIrqlSafe.c)
 *     IovAiAcquireDbLockAtDpcLevelSafe @ 0x140641E40 (IovAiAcquireDbLockAtDpcLevelSafe.c)
 *     IovAiCleanDbLockContext @ 0x140641EC0 (IovAiCleanDbLockContext.c)
 *     IovAiReleaseDbLockFromDpcLevel @ 0x140642220 (IovAiReleaseDbLockFromDpcLevel.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfIsRuleClassEnabled @ 0x140C46310 (VfIsRuleClassEnabled.c)
 */

void IovCleanupAiDb()
{
  RTL_AVL_TABLE *v0; // rbx
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
      v2 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27B08.WaitBlockFill11[120]);
      if ( !v2 )
        break;
      ExFreePoolWithTag(v2, 0);
    }
    *(_OWORD *)&stru_140E27B08.WaitBlockFill11[120] = 0LL;
    *(_OWORD *)&stru_140E27B08.WaitBlockFill11[136] = 0LL;
    IovAiResourceCount = 0;
    ExFreePoolWithTag(IovAiDb, 0);
  }
}
