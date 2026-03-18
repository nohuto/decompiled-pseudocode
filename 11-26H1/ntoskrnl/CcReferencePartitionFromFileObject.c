/*
 * XREFs of CcReferencePartitionFromFileObject @ 0x14038462C
 * Callers:
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 *     CcZeroData @ 0x14046D2D0 (CcZeroData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcReferencePartitionFromFileObject(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 8)) != 0 )
    result = *(_QWORD *)(v2 + 536);
  else
    result = *((_QWORD *)PspSystemPartition + 1);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(result + 1296)) <= 1 )
    __fastfail(0xEu);
  return result;
}
