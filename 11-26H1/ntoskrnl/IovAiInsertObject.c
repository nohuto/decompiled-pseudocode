/*
 * XREFs of IovAiInsertObject @ 0x14053207C
 * Callers:
 *     IopAllocateMdl @ 0x14039EBE0 (IopAllocateMdl.c)
 *     IoAllocateMdl @ 0x14040BA40 (IoAllocateMdl.c)
 *     IovpLocalCompletionRoutine @ 0x140C45570 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403B88C0 (RtlInsertElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x140641D9C (ViPtRaiseIrqlSafe.c)
 *     IovAiAcquireDbLockAtDpcLevelSafe @ 0x140641E40 (IovAiAcquireDbLockAtDpcLevelSafe.c)
 *     IovAiCleanDbLockContext @ 0x140641EC0 (IovAiCleanDbLockContext.c)
 *     IovAiReleaseDbLockFromDpcLevel @ 0x140642220 (IovAiReleaseDbLockFromDpcLevel.c)
 */

__int64 __fastcall IovAiInsertObject(__int64 a1)
{
  __int64 result; // rax
  _DWORD *inserted; // rax
  __int128 v3; // [rsp+20h] [rbp-30h] BYREF
  __int64 Buffer; // [rsp+30h] [rbp-20h] BYREF
  int v5; // [rsp+38h] [rbp-18h]
  __int64 v6; // [rsp+3Ch] [rbp-14h]
  int v7; // [rsp+44h] [rbp-Ch]
  BOOLEAN NewElement; // [rsp+68h] [rbp+18h] BYREF

  result = (unsigned int)IovAiDbInitialized;
  NewElement = 0;
  if ( IovAiDbInitialized && IovAiDb )
  {
    Buffer = a1;
    v3 = 0LL;
    BYTE9(v3) = 4;
    v6 = 0LL;
    v7 = 0;
    v5 = 1;
    ViPtRaiseIrqlSafe(&v3);
    IovAiAcquireDbLockAtDpcLevelSafe(&v3);
    if ( IovAiDb->NumberGenericTableElements < 0x186A0 )
    {
      inserted = RtlInsertElementGenericTableAvl(IovAiDb, &Buffer, 0x18u, &NewElement);
      if ( !NewElement )
      {
        if ( inserted )
        {
          if ( *(_QWORD *)inserted == Buffer )
            ++inserted[2];
        }
      }
    }
    IovAiReleaseDbLockFromDpcLevel(&v3);
    return IovAiCleanDbLockContext(&v3);
  }
  return result;
}
