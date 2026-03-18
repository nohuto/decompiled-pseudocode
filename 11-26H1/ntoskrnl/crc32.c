/*
 * XREFs of crc32 @ 0x1404843B4
 * Callers:
 *     SmDecompressBuffer @ 0x14046A1B4 (SmDecompressBuffer.c)
 *     QatSubmitWorkToCpu @ 0x1406E10B0 (QatSubmitWorkToCpu.c)
 *     IaaSubmitWorkToCpu @ 0x1406E1748 (IaaSubmitWorkToCpu.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x140719DA8 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140719E30 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14071A270 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14071A544 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ExpSingleStringCheck @ 0x140CE4718 (ExpSingleStringCheck.c)
 * Callees:
 *     crc32_z @ 0x140484400 (crc32_z.c)
 */

__int64 __fastcall crc32(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 )
    return crc32_z(a1, a2, a3);
  else
    return 0LL;
}
