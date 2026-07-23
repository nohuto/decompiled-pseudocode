/*
 * XREFs of KeFirstGroupAffinityEx @ 0x14049BCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFirstGroupAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // r8d
  unsigned __int16 i; // ax

  v2 = 0;
  for ( i = 0; i < *a2; ++i )
  {
    if ( *(_QWORD *)&a2[4 * i + 4] )
    {
      *(_OWORD *)a1 = 0LL;
      *(_WORD *)(a1 + 8) = i;
      *(_QWORD *)a1 = *(_QWORD *)&a2[4 * i + 4];
      return v2;
    }
  }
  return (unsigned int)-1073741275;
}
