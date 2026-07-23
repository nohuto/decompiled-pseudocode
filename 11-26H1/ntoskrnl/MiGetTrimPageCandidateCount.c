/*
 * XREFs of MiGetTrimPageCandidateCount @ 0x1403C31EC
 * Callers:
 *     MiForcedTrim @ 0x1403C3240 (MiForcedTrim.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetTrimPageCandidateCount(__int64 a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // r10
  unsigned __int8 i; // r9
  unsigned __int64 result; // rax
  char v6; // cl

  *a3 = 0;
  v3 = 0LL;
  for ( i = 7; i; --i )
  {
    v3 += *(_QWORD *)(a1 + 8LL * i + 56);
    if ( v3 >= a2 )
    {
      v3 = a2;
      break;
    }
  }
  if ( !v3 )
    return 0LL;
  v6 = i;
  if ( !i )
    v6 = 1;
  result = v3;
  *a3 = v6;
  return result;
}
