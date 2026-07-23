/*
 * XREFs of MiSetPfnNodeBlinkLow @ 0x140448AF0
 * Callers:
 *     MiUpdateLargePageSectionPfns @ 0x1406F4F60 (MiUpdateLargePageSectionPfns.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnNodeBlinkLow(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdx
  signed __int64 result; // rax
  signed __int64 v6; // rcx
  signed __int64 v7; // rcx

  v3 = a2 << 40;
  if ( a3 )
  {
    result = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v3 ^ (result ^ v3) & 0xF80000FFFFFFFFFFuLL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(a1 + 24),
               v3 ^ (v6 ^ v3) & 0xF80000FFFFFFFFFFuLL,
               v6);
    if ( v6 != result )
    {
      do
      {
        v7 = result;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v3 ^ (result ^ v3) & 0xF80000FFFFFFFFFFuLL,
                   result);
      }
      while ( v7 != result );
    }
  }
  return result;
}
