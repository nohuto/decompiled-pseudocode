/*
 * XREFs of ??_ECBatchDeferralMarshaler@DirectComposition@@MEAAPEAXI@Z @ 0x1402284E0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CBatchDeferralMarshaler@DirectComposition@@MEAA@XZ @ 0x14023D270 (--1CBatchDeferralMarshaler@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CBatchDeferralMarshaler *__fastcall DirectComposition::CBatchDeferralMarshaler::`vector deleting destructor'(
        DirectComposition::CBatchDeferralMarshaler *Buffer,
        char a2)
{
  DirectComposition::CBatchDeferralMarshaler::~CBatchDeferralMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
