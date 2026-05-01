/*
 * XREFs of PiiFilterDelete @ 0x1802CDF8C
 * Callers:
 *     PiiFilterCreate @ 0x18013A97C (PiiFilterCreate.c)
 *     ??1IsGameManager@@UEAA@XZ @ 0x18013EEE0 (--1IsGameManager@@UEAA@XZ.c)
 * Callees:
 *     ?Free@RtlNameValueArray@@QEAAXXZ @ 0x18013A890 (-Free@RtlNameValueArray@@QEAAXXZ.c)
 *     AslFree @ 0x18013CDD4 (AslFree.c)
 */

BOOLEAN __fastcall PiiFilterDelete(__int64 a1)
{
  BOOLEAN result; // al

  if ( a1 )
  {
    RtlNameValueArray::Free((RtlNameValueArray *)a1);
    RtlNameValueArray::Free((RtlNameValueArray *)(a1 + 48));
    return AslFree(NtCurrentPeb()->ProcessHeap, (void *)a1);
  }
  return result;
}
