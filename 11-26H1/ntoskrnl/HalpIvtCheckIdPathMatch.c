/*
 * XREFs of HalpIvtCheckIdPathMatch @ 0x140530258
 * Callers:
 *     IvtIommuFindDevice @ 0x1405B1DE8 (IvtIommuFindDevice.c)
 *     IvtCheckForReservedRegion @ 0x14078A510 (IvtCheckForReservedRegion.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpIvtCheckIdPathMatch(__int64 a1, char *a2)
{
  char v2; // r9
  char v3; // r8
  unsigned int v4; // r10d
  unsigned int v5; // eax
  unsigned int i; // r8d

  v2 = 0;
  if ( *(_DWORD *)a1 == 1 )
  {
    v3 = *a2;
    if ( (*a2 == 1 || v3 == 2) && *(_BYTE *)(a1 + 11) == a2[5] )
    {
      v4 = *(unsigned __int16 *)(a1 + 14);
      v5 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
      if ( v3 != 1 || v4 == v5 )
      {
        if ( v4 >= v5 )
        {
          v4 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
        }
        else if ( v3 == 2 )
        {
          return v2;
        }
        for ( i = 0; i < v4; ++i )
        {
          if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2LL * i) != *(_WORD *)&a2[2 * i + 6] )
            return v2;
        }
        return 1;
      }
    }
  }
  return v2;
}
