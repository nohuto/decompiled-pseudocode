/*
 * XREFs of InitializeNumaNodeCompletionAffinity @ 0x14011F22C
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     <none>
 */

void InitializeNumaNodeCompletionAffinity()
{
  _QWORD *v0; // rcx
  unsigned __int16 i; // bp
  __int64 v2; // rdi
  __int64 v3; // rbx
  ULONGLONG v4; // rcx
  unsigned __int8 LeastSignificantBit; // si
  unsigned __int8 MostSignificantBit; // r10
  __int64 v7; // r9

  v0 = g_CpuInfo;
  if ( g_CpuInfo )
  {
    for ( i = 0; i < *((_WORD *)g_CpuInfo + 2); ++i )
    {
      v2 = v0[3];
      v3 = 80LL * i;
      KeInitializeSpinLock((PKSPIN_LOCK)(v3 + v2 + 24));
      *(_QWORD *)(v3 + v2 + 40) = 0LL;
      *(_QWORD *)(v3 + v2 + 48) = 0LL;
      *(_DWORD *)(v3 + v2 + 32) = 0;
      *(_DWORD *)(v3 + v2 + 36) = -1;
      if ( *(_WORD *)(v3 + v2 + 2) )
      {
        v4 = *(_QWORD *)(v3 + v2 + 8);
        *(_QWORD *)(v3 + v2 + 40) = v4;
        LeastSignificantBit = RtlFindLeastSignificantBit(v4);
        MostSignificantBit = RtlFindMostSignificantBit(*(_QWORD *)(v3 + v2 + 40));
        if ( LeastSignificantBit <= MostSignificantBit )
        {
          v7 = *(_QWORD *)(v3 + v2 + 40);
          do
          {
            if ( _bittest64(&v7, LeastSignificantBit) )
            {
              v7 &= ~(*(_QWORD *)(*(_QWORD *)(56LL * LeastSignificantBit + *((_QWORD *)g_CpuInfo + 4) + 40) + 8LL) & ~(1LL << LeastSignificantBit));
              *(_QWORD *)(v3 + v2 + 48) |= 1LL << LeastSignificantBit;
              ++*(_DWORD *)(v3 + v2 + 32);
              *(_QWORD *)(v3 + v2 + 40) = v7;
            }
            ++LeastSignificantBit;
          }
          while ( LeastSignificantBit <= MostSignificantBit );
        }
      }
      v0 = g_CpuInfo;
    }
  }
}
