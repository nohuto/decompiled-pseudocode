/*
 * XREFs of PspModifyAncestorBits @ 0x1407F8E78
 * Callers:
 *     PspRemoveRateControl @ 0x1407F9160 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1407F987C (PspSetJobRateControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspModifyAncestorBits(__int64 a1, unsigned int a2, char a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 1304); i; i = *(_QWORD *)(i + 1304) )
  {
    if ( a3 )
    {
      _InterlockedOr((volatile signed __int32 *)(i + 1552), a2);
    }
    else
    {
      result = ~a2;
      _InterlockedAnd((volatile signed __int32 *)(i + 1552), result);
    }
  }
  return result;
}
