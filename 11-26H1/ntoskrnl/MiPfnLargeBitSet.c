/*
 * XREFs of MiPfnLargeBitSet @ 0x14041DD70
 * Callers:
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 *     MiExpandWrongPartitionSkipRange @ 0x140529324 (MiExpandWrongPartitionSkipRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPfnLargeBitSet(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16486) )
  {
    for ( result = 0LL; (unsigned int)result < 2; result = (unsigned int)(result + 1) )
    {
      if ( *(_QWORD *)(a1 + 16LL * (unsigned int)result + 16712)
        && _bittest64(
             *(const signed __int64 **)(a1 + 16LL * (unsigned int)result + 16720),
             a2 >> MiLargePageShifts[result]) )
      {
        return result;
      }
    }
  }
  return 3LL;
}
