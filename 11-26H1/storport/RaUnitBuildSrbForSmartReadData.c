/*
 * XREFs of RaUnitBuildSrbForSmartReadData @ 0x1400997D8
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1400A1658 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     <none>
 */

char __fastcall RaUnitBuildSrbForSmartReadData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        char a8)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // bl
  unsigned int i; // r10d
  __int64 v13; // rcx
  unsigned __int64 v14; // r11
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rdx
  char v19; // si
  unsigned int v20; // edi
  unsigned int j; // r11d
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // r10
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rcx
  char result; // al

  if ( a8 == 1 )
  {
    v9 = *(unsigned int *)(a3 + 52);
    *(_DWORD *)(a3 + 20) = 0;
    *(_BYTE *)(v9 + a3 + 8) = *(_BYTE *)(a1 + 104);
    *(_BYTE *)(v9 + a3 + 9) = *(_BYTE *)(a1 + 105);
    *(_BYTE *)(v9 + a3 + 10) = *(_BYTE *)(a1 + 106);
    v10 = *(unsigned int *)(a3 + 120);
    *(_DWORD *)(a3 + 24) = 322;
    *(_QWORD *)(a3 + 64) = a4;
    *(_DWORD *)(a3 + 60) = 512;
    *(_QWORD *)(a3 + 80) = a2;
    *(_DWORD *)(a3 + 40) = *(_DWORD *)(a1 + 1392);
    *(_DWORD *)(v10 + a3) = 64;
    *(_DWORD *)(v10 + a3 + 4) = 32;
    *(_BYTE *)(v10 + a3 + 9) = -1;
    *(_QWORD *)(v10 + a3 + 16) = a6;
  }
  else
  {
    *(_WORD *)a3 = 88;
    *(_BYTE *)(a3 + 2) = 0;
    *(_BYTE *)(a3 + 5) = *(_BYTE *)(a1 + 104);
    *(_BYTE *)(a3 + 6) = *(_BYTE *)(a1 + 105);
    *(_BYTE *)(a3 + 7) = *(_BYTE *)(a1 + 106);
    *(_DWORD *)(a3 + 12) = 322;
    *(_QWORD *)(a3 + 24) = a4;
    *(_DWORD *)(a3 + 16) = 512;
    *(_QWORD *)(a3 + 48) = a2;
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 1392);
    *(_QWORD *)(a3 + 32) = a6;
    *(_BYTE *)(a3 + 11) = -1;
  }
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    *(_WORD *)(a3 + 38) = 32;
    v11 = 0;
    if ( !*(_DWORD *)(a3 + 20) )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 56); ++i )
      {
        v13 = *(unsigned int *)(a3 + 4LL * i + 120);
        if ( (unsigned int)v13 >= 0x80 )
        {
          v14 = *(unsigned int *)(a3 + 16);
          if ( (unsigned int)v13 < (unsigned int)v14 )
          {
            v15 = (unsigned int)v13;
            v16 = *(_DWORD *)(v13 + a3) - 64;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                if ( v17 == 1 && v15 + 40 <= v14 )
                  break;
              }
              else if ( v15 + 56 <= v14 )
              {
                v11 = 1;
                *(_BYTE *)(v15 + a3 + 10) = 16;
              }
            }
            else if ( v15 + 40 <= v14 )
            {
              *(_BYTE *)(v15 + a3 + 10) = 16;
              break;
            }
            if ( v11 )
              break;
          }
        }
      }
    }
  }
  else
  {
    *(_WORD *)(a3 + 9) = 4128;
  }
  if ( *(_BYTE *)(a3 + 2) != 40 )
  {
    v18 = a3 + 72;
    goto LABEL_44;
  }
  v18 = 0LL;
  v19 = 0;
  if ( !*(_DWORD *)(a3 + 20) )
  {
    v20 = *(_DWORD *)(a3 + 56);
    for ( j = 0; j < v20; ++j )
    {
      v22 = *(unsigned int *)(a3 + 4LL * j + 120);
      if ( (unsigned int)v22 >= 0x80 )
      {
        v23 = *(unsigned int *)(a3 + 16);
        if ( (unsigned int)v22 < (unsigned int)v23 )
        {
          v24 = (unsigned int)v22;
          v25 = *(_DWORD *)(v22 + a3) - 64;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              if ( v26 == 1 && v24 + 40 <= v23 )
              {
                v27 = v24 + a3 + 32;
                if ( !*(_DWORD *)(v24 + a3 + 12) )
                  v27 = v18;
                v18 = v27;
                break;
              }
            }
            else if ( v24 + 56 <= v23 )
            {
              v19 = 1;
              if ( !*(_BYTE *)(v24 + a3 + 10) )
                break;
              v18 = v24 + a3 + 24;
            }
          }
          else if ( v24 + 40 <= v23 )
          {
            if ( *(_BYTE *)(v24 + a3 + 10) )
              v18 = v24 + a3 + 24;
            break;
          }
          if ( v19 )
            break;
        }
      }
    }
  }
LABEL_44:
  *(_WORD *)(v18 + 1) = 0;
  result = *(_BYTE *)(v18 + 2) & 0x10 | 0xAF;
  *(_BYTE *)(v18 + 2) = result;
  *(_WORD *)v18 = 2181;
  *(_DWORD *)(v18 + 3) = 53248;
  *(_DWORD *)(v18 + 7) = 1325400064;
  *(_DWORD *)(v18 + 11) = -1342127616;
  *(_BYTE *)(v18 + 15) = 0;
  return result;
}
