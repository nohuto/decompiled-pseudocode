/*
 * XREFs of RtlNumberOfSetBitsEx @ 0x140200820
 * Callers:
 *     KeFindBiasedSetBitGroupMask @ 0x1402005D0 (KeFindBiasedSetBitGroupMask.c)
 *     KeFindFirstSetLeftGroupMask @ 0x140200760 (KeFindFirstSetLeftGroupMask.c)
 *     KeCountSetBitsGroupMask @ 0x1402007F0 (KeCountSetBitsGroupMask.c)
 *     IopLiveDumpWriteDumpFile @ 0x140345D88 (IopLiveDumpWriteDumpFile.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140500CE0 (MiCreateFileOnlyImageFixupExtents.c)
 *     HvlIsSingleGroupRequired @ 0x1405BB054 (HvlIsSingleGroupRequired.c)
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 *     IopLiveDumpCollectPages @ 0x1405D1168 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405D18A8 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x1405D583C (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     RtlNumberOfClearBitsEx @ 0x14061BBA0 (RtlNumberOfClearBitsEx.c)
 *     MiMakeEntireHugePfnGood @ 0x1406F1358 (MiMakeEntireHugePfnGood.c)
 *     MiInsertPartitionPageNodes @ 0x14070DBDC (MiInsertPartitionPageNodes.c)
 *     MiFinishChildPartitionHotAdd @ 0x1408821A0 (MiFinishChildPartitionHotAdd.c)
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNumberOfSetBitsEx(__int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  unsigned __int64 *v3; // r10
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  int v6; // r11d
  unsigned __int64 v7; // rbx
  int v8; // r8d
  int v9; // esi
  unsigned __int64 v10; // rdi
  int i; // r11d
  char v12; // dl
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  int v16; // r14d
  char v17; // dl
  int v18; // edx

  v1 = *a1;
  result = 0LL;
  v3 = (unsigned __int64 *)a1[1];
  v4 = *a1 & 7;
  v5 = (unsigned __int64)*a1 >> 3;
  v6 = (unsigned __int8)v3 & 7;
  v7 = v5 + (v4 != 0);
  if ( 8 - (unsigned __int64)((unsigned __int8)v3 & 7) <= v5 )
  {
    v8 = 8 - v6;
    v18 = ((_BYTE)v5 - (8 - (_BYTE)v6)) & 7;
    v9 = v18 + 1;
    if ( !v4 )
      v9 = v18;
    v10 = v7 - (unsigned int)(v9 + v8);
  }
  else
  {
    v8 = v5 + (v4 != 0);
    v9 = 0;
    v10 = 0LL;
  }
  for ( i = 0; v8; --v8 )
  {
    v12 = *(_BYTE *)v3;
    v3 = (unsigned __int64 *)((char *)v3 + 1);
    if ( i == v7 - 1 && v4 )
      v12 &= byte_1400327C0[v4];
    ++i;
    result += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v12);
  }
  if ( v10 )
  {
    v13 = ((v10 - 1) >> 3) + 1;
    i += 8 * v13;
    do
    {
      v14 = *v3++;
      result += (unsigned int)__popcnt(v14);
      --v13;
    }
    while ( v13 );
  }
  if ( v9 )
  {
    v15 = v7 - 1;
    v16 = v1 & 7;
    do
    {
      v17 = *(_BYTE *)v3;
      v3 = (unsigned __int64 *)((char *)v3 + 1);
      if ( i == v15 )
      {
        if ( v16 )
          v17 &= byte_1400327C0[v16];
      }
      ++i;
      result += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v17);
      --v9;
    }
    while ( v9 );
  }
  return result;
}
