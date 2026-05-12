/*
 * XREFs of sub_1401219EC @ 0x1401219EC
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     <none>
 */

void sub_1401219EC()
{
  _QWORD *v0; // rcx
  unsigned __int16 i; // di
  __int64 v2; // rbx
  ULONGLONG v3; // rcx
  unsigned __int8 LeastSignificantBit; // si
  unsigned __int8 MostSignificantBit; // r10
  __int64 v6; // r9

  v0 = qword_140168E40;
  if ( qword_140168E40 )
  {
    for ( i = 0; i < *((_WORD *)qword_140168E40 + 2); ++i )
    {
      v2 = v0[3] + 80LL * i;
      KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 24));
      *(_DWORD *)(v2 + 36) = -1;
      *(_QWORD *)(v2 + 40) = 0LL;
      *(_QWORD *)(v2 + 48) = 0LL;
      *(_DWORD *)(v2 + 32) = 0;
      if ( *(_WORD *)(v2 + 2) )
      {
        v3 = *(_QWORD *)(v2 + 8);
        *(_QWORD *)(v2 + 40) = v3;
        LeastSignificantBit = RtlFindLeastSignificantBit(v3);
        MostSignificantBit = RtlFindMostSignificantBit(*(_QWORD *)(v2 + 40));
        if ( LeastSignificantBit <= MostSignificantBit )
        {
          v6 = *(_QWORD *)(v2 + 40);
          do
          {
            if ( _bittest64(&v6, LeastSignificantBit) )
            {
              v6 &= ~(*(_QWORD *)(*(_QWORD *)(56LL * LeastSignificantBit + *((_QWORD *)qword_140168E40 + 4) + 40) + 8LL) & ~(1LL << LeastSignificantBit));
              *(_QWORD *)(v2 + 48) |= 1LL << LeastSignificantBit;
              ++*(_DWORD *)(v2 + 32);
              *(_QWORD *)(v2 + 40) = v6;
            }
            ++LeastSignificantBit;
          }
          while ( LeastSignificantBit <= MostSignificantBit );
        }
      }
      v0 = qword_140168E40;
    }
  }
}
