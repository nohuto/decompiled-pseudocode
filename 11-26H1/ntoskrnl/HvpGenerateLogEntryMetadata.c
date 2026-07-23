/*
 * XREFs of HvpGenerateLogEntryMetadata @ 0x1403580A8
 * Callers:
 *     HvpGenerateLogEntry @ 0x1408BD3E8 (HvpGenerateLogEntry.c)
 * Callees:
 *     HvpCopyDataToOffsetArray @ 0x140358210 (HvpCopyDataToOffsetArray.c)
 *     HvpGenerateLogMetadata @ 0x1408BD694 (HvpGenerateLogMetadata.c)
 */

__int64 __fastcall HvpGenerateLogEntryMetadata(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v9; // r9d

  HvpGenerateLogMetadata((PRTL_BITMAP)(a1 + 88));
  return HvpCopyDataToOffsetArray(a6, 8 * a7, a2, v9, a4, a5);
}
