/*
 * XREFs of PpmHeteroComputeRelativePerformance @ 0x140AFF6E4
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 */

char PpmHeteroComputeRelativePerformance()
{
  unsigned __int16 i; // cx
  unsigned __int16 Count; // r8
  unsigned __int16 v3; // r9
  $B38C3B1372D6E954799962D5DD404846 *v4; // r10
  unsigned __int16 j; // dx
  PBOOLEAN v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  char v9; // di
  char v10; // cl
  unsigned __int64 v11; // rbx
  __int64 Prcb; // rax
  PBOOLEAN v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // r10d
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 k; // r11
  int v21; // edx
  unsigned __int64 v22; // r9
  unsigned __int8 m; // r8
  PBOOLEAN v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r10
  PBOOLEAN v27; // rax
  char v28; // r9
  unsigned __int8 v29; // dl
  unsigned __int64 v30; // r10
  PBOOLEAN v31; // rax
  unsigned int v32; // ecx
  unsigned __int64 v33; // r11
  PBOOLEAN v34; // rax
  unsigned int v35; // edi

  for ( i = 0; ; ++i )
  {
    Count = PpmCheckRegistered.Count;
    if ( i >= PpmCheckRegistered.Count )
      break;
    if ( PpmCheckRegistered.Bitmap[i] )
    {
      if ( LOWORD(PpmPerfStatesRegistered[0]) >= PpmCheckRegistered.Count )
      {
        v3 = PpmCheckRegistered.Count;
        v4 = ($B38C3B1372D6E954799962D5DD404846 *)qword_140E0B498;
        Count = PpmPerfStatesRegistered[0];
      }
      else
      {
        v3 = PpmPerfStatesRegistered[0];
        v4 = &PpmCheckRegistered.8;
      }
      for ( j = 0; j < v3; ++j )
      {
        if ( qword_140E0B498[j] != PpmCheckRegistered.Bitmap[j] )
          return 0;
      }
      while ( j < Count )
      {
        if ( v4->Bitmap[j] )
          return 0;
        ++j;
      }
      if ( PpmPerfDomainCount != 1 )
      {
        v6 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        v7 = 0LL;
        if ( *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
        {
          do
          {
            v8 = *((_QWORD *)v6 + 61);
            v6 = *(PBOOLEAN *)v6;
            if ( v7 > v8 )
              v8 = v7;
            v7 = v8;
          }
          while ( v6 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) );
          if ( v8 )
          {
            v9 = 0;
            v10 = 0;
            if ( v8 >= 0x7FFFFFFFFFFFLL )
            {
              _BitScanReverse(&v35, HIDWORD(v8) + 0xFFFF);
              v9 = v35 - 14;
              v10 = v9;
            }
            v11 = v8 >> v10;
            Prcb = KeGetPrcb(0);
            v13 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
            v14 = *(_QWORD *)(Prcb + 35264);
            while ( v13 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
            {
              v17 = *((_QWORD *)v13 + 61);
              v13[496] = 100 * (v17 >> v9) / v11;
              if ( v17 >> v9 == v11 )
              {
                LODWORD(v18) = 0x10000;
              }
              else
              {
                v18 = ((v17 >> v9 << 16) + (v11 >> 1)) / v11;
                if ( v18 <= 1 )
                  LODWORD(v18) = 1;
              }
              v19 = v17 * *(unsigned int *)(v14 + 456);
              v16 = 0;
              for ( k = (v19 << 16) / (*(_QWORD *)(v14 + 488) * (unsigned __int64)*((unsigned int *)v13 + 114));
                    v16 < *((_DWORD *)v13 + 74);
                    ++v16 )
              {
                v15 = *(_QWORD *)(1224LL * v16 + *((_QWORD *)v13 + 39));
                if ( v15 )
                {
                  if ( *(_BYTE *)(v15 + 68) )
                    *(_DWORD *)(v15 - 776) = k;
                  *(_DWORD *)(v15 + 64) = v18;
                }
              }
              v13 = *(PBOOLEAN *)v13;
            }
            v21 = PpmPerfDomainCount;
            v22 = 0LL;
            for ( m = 0; v21; ++m )
            {
              v24 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
              v25 = -1LL;
              if ( *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) == (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
              {
                v22 = -1LL;
              }
              else
              {
                do
                {
                  v26 = *((_QWORD *)v24 + 61);
                  if ( v26 > v22 && v25 >= v26 )
                    v25 = *((_QWORD *)v24 + 61);
                  v24 = *(PBOOLEAN *)v24;
                }
                while ( v24 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) );
                v22 = v25;
                v27 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
                do
                {
                  if ( *((_QWORD *)v27 + 61) == v22 )
                  {
                    v27[301] = m;
                    --v21;
                  }
                  v27 = *(PBOOLEAN *)v27;
                }
                while ( v27 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) );
              }
            }
            PpmHeteroNominalPerformanceClasses = m;
            v28 = 0;
            v29 = 0;
            v30 = 0LL;
            if ( m )
            {
              while ( v29 < m )
              {
                v31 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
                v32 = -1;
                if ( *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) == (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
                  goto LABEL_59;
                do
                {
                  if ( v31[301] == v29 )
                  {
                    v33 = *((unsigned int *)v31 + 115);
                    if ( v33 > v30 && v32 >= (unsigned int)v33 )
                      v32 = *((_DWORD *)v31 + 115);
                  }
                  v31 = *(PBOOLEAN *)v31;
                }
                while ( v31 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) );
                if ( v32 == -1 )
                {
LABEL_59:
                  ++v29;
                  v30 = 0LL;
                }
                else
                {
                  v34 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
                  do
                  {
                    if ( v34[301] == v29 && *((_DWORD *)v34 + 115) == v32 )
                      v34[302] = v28;
                    v34 = *(PBOOLEAN *)v34;
                  }
                  while ( v34 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) );
                  v30 = v32;
                  ++v28;
                }
              }
            }
            PpmHeteroPerformanceClasses = v28;
          }
        }
      }
      return 0;
    }
  }
  return 0;
}
