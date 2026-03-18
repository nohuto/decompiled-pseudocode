/*
 * XREFs of ??_ECBatchDeferralMarshaler@DirectComposition@@MEAAPEAXI@Z @ 0x14022A870
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CBatchDeferralMarshaler@DirectComposition@@MEAA@XZ @ 0x140247A20 (--1CBatchDeferralMarshaler@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CBatchDeferralMarshaler *__fastcall DirectComposition::CBatchDeferralMarshaler::`vector deleting destructor'(
        DirectComposition::CBatchDeferralMarshaler *Buffer,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CBatchDeferralMarshaler::~CBatchDeferralMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
