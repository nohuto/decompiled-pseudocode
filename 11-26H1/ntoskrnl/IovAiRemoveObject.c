/*
 * XREFs of IovAiRemoveObject @ 0x1405321F0
 * Callers:
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x140641D9C (ViPtRaiseIrqlSafe.c)
 *     IovAiAcquireDbLockAtDpcLevelSafe @ 0x140641E40 (IovAiAcquireDbLockAtDpcLevelSafe.c)
 *     IovAiCleanDbLockContext @ 0x140641EC0 (IovAiCleanDbLockContext.c)
 *     IovAiReleaseDbLockFromDpcLevel @ 0x140642220 (IovAiReleaseDbLockFromDpcLevel.c)
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
