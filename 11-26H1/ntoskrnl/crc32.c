/*
 * XREFs of crc32 @ 0x14047DD24
 * Callers:
 *     SmDecompressBuffer @ 0x140463934 (SmDecompressBuffer.c)
 *     QatSubmitWorkToCpu @ 0x1406E5330 (QatSubmitWorkToCpu.c)
 *     IaaSubmitWorkToCpu @ 0x1406E59C8 (IaaSubmitWorkToCpu.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14071EA38 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14071EAC0 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14071EF00 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14071F1D4 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ExpSingleStringCheck @ 0x140CEAAB8 (ExpSingleStringCheck.c)
 * Callees:
 *     crc32_z @ 0x14047DD70 (crc32_z.c)
 */

__int64 __fastcall crc32(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 )
    return crc32_z(a1, a2, a3);
  else
    return 0LL;
}
