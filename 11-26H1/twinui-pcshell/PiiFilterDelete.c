/*
 * XREFs of PiiFilterDelete @ 0x1802C555C
 * Callers:
 *     PiiFilterCreate @ 0x18015A54C (PiiFilterCreate.c)
 *     ??1IsGameManager@@UEAA@XZ @ 0x1801B8144 (--1IsGameManager@@UEAA@XZ.c)
 * Callees:
 *     ?Free@RtlNameValueArray@@QEAAXXZ @ 0x18015A67C (-Free@RtlNameValueArray@@QEAAXXZ.c)
 *     AslFree @ 0x18015C31C (AslFree.c)
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
