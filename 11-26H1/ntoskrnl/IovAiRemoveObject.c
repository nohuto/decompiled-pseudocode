/*
 * XREFs of IovAiRemoveObject @ 0x140534690
 * Callers:
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14064597C (ViPtRaiseIrqlSafe.c)
 *     IovAiAcquireDbLockAtDpcLevelSafe @ 0x140645A20 (IovAiAcquireDbLockAtDpcLevelSafe.c)
 *     IovAiCleanDbLockContext @ 0x140645AA0 (IovAiCleanDbLockContext.c)
 *     IovAiReleaseDbLockFromDpcLevel @ 0x140645E00 (IovAiReleaseDbLockFromDpcLevel.c)
 */

__int64 __fastcall IovAiRemoveObject(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int64 Buffer; // [rsp+30h] [rbp-28h] BYREF
  __int128 v5; // [rsp+38h] [rbp-20h]

  if ( IovAiDbInitialized && IovAiDb )
  {
    Buffer = a1;
    v3 = 0LL;
    BYTE9(v3) = 4;
    v5 = 0LL;
    ViPtRaiseIrqlSafe(&v3);
    IovAiAcquireDbLockAtDpcLevelSafe(&v3);
    RtlDeleteElementGenericTableAvl(IovAiDb, &Buffer);
    IovAiReleaseDbLockFromDpcLevel(&v3);
    IovAiCleanDbLockContext(&v3);
  }
  return a1;
}
