/*
 * XREFs of PpmPerfApplyDomainStates @ 0x140483E00
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyDomainState @ 0x140483F90 (PpmPerfApplyDomainState.c)
 */

void PpmPerfApplyDomainStates()
{
  PBOOLEAN i; // r8
  PBOOLEAN k; // rbx
  PBOOLEAN v2; // r10
  unsigned __int16 v3; // r9
  unsigned __int16 Count; // bx
  struct _KAFFINITY_EX *v5; // r11
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  PBOOLEAN j; // r8
  PBOOLEAN v9; // r10
  unsigned __int16 v10; // r9
  unsigned __int16 v11; // bx
  struct _KAFFINITY_EX *v12; // r11
  unsigned __int16 v13; // dx
  __int64 v14; // rcx

  if ( PpmPerfArtificialDomainEnabled )
  {
    for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
          i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
          i = *(PBOOLEAN *)i )
    {
      if ( i[1445] )
      {
        v2 = i + 24;
        v3 = *((_WORD *)i + 12);
        Count = PpmPerfNewCoreParkingMask.Count;
        v5 = &PpmPerfNewCoreParkingMask;
        v6 = 0;
        if ( v3 >= PpmPerfNewCoreParkingMask.Count )
        {
          Count = *((_WORD *)i + 12);
          v5 = (struct _KAFFINITY_EX *)(i + 24);
          v3 = PpmPerfNewCoreParkingMask.Count;
        }
        while ( v6 < v3 )
        {
          v7 = *(_QWORD *)&v2[8 * v6 + 8];
          if ( (v7 & PpmPerfNewCoreParkingMask.Bitmap[v6]) != v7 )
          {
LABEL_22:
            for ( j = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
                  j != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
                  j = *(PBOOLEAN *)j )
            {
              v9 = j + 24;
              v10 = *((_WORD *)j + 12);
              v11 = PpmPerfNewCoreParkingMask.Count;
              v12 = &PpmPerfNewCoreParkingMask;
              v13 = 0;
              if ( v10 >= PpmPerfNewCoreParkingMask.Count )
              {
                v11 = *((_WORD *)j + 12);
                v12 = (struct _KAFFINITY_EX *)(j + 24);
                v10 = PpmPerfNewCoreParkingMask.Count;
              }
              while ( v13 < v10 )
              {
                v14 = *(_QWORD *)&v9[8 * v13 + 8];
                if ( (v14 & PpmPerfNewCoreParkingMask.Bitmap[v13]) != v14 )
                {
LABEL_32:
                  j[1445] = 1;
                  goto LABEL_25;
                }
                ++v13;
              }
              if ( v12 != &PpmPerfNewCoreParkingMask )
              {
                while ( v13 < v11 )
                {
                  if ( *(_QWORD *)&v9[8 * v13 + 8] )
                    goto LABEL_32;
                  ++v13;
                }
              }
LABEL_25:
              ;
            }
            goto LABEL_6;
          }
          ++v6;
        }
        if ( v5 != &PpmPerfNewCoreParkingMask )
        {
          while ( v6 < Count )
          {
            if ( *(_QWORD *)&v2[8 * v6 + 8] )
              goto LABEL_22;
            ++v6;
          }
        }
      }
    }
  }
LABEL_6:
  for ( k = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        k != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        k = *(PBOOLEAN *)k )
  {
    if ( k[1445] )
    {
      if ( (unsigned __int8)PpmPerfApplyDomainState(k) )
        k[1446] = 1;
      k[1445] = 0;
    }
  }
}
