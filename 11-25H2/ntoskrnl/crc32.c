/*
 * XREFs of crc32 @ 0x1404F120C
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14034B5FC (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmDecompressBuffer @ 0x1403CC850 (SmDecompressBuffer.c)
 *     RtlComputeCrc32 @ 0x14048AC80 (RtlComputeCrc32.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14069127C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140691304 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x140691718 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1406919E8 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ExpSingleStringCheck @ 0x140C2FAE8 (ExpSingleStringCheck.c)
 * Callees:
 *     crc32_z @ 0x1404F1230 (crc32_z.c)
 */

__int64 __fastcall crc32(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 )
    return crc32_z(a1, a2, a3);
  else
    return 0LL;
}
