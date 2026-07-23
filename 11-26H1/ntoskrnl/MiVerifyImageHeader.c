/*
 * XREFs of MiVerifyImageHeader @ 0x140A6492C
 * Callers:
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 * Callees:
 *     MiCaptureImageOptionalHeader @ 0x140A64C08 (MiCaptureImageOptionalHeader.c)
 *     MiComputeBadImageHeaderType @ 0x140A653C8 (MiComputeBadImageHeaderType.c)
 */

__int64 __fastcall MiVerifyImageHeader(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // r8
  __int16 v4; // r8
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int16 v8; // ax
  __int16 v9; // ax
  int v10; // ecx
  __int16 v11; // ax
  __int16 v13; // ax

  v1 = a1[15];
  v2 = a1[18];
  v3 = a1[17];
  if ( (v1 & 3) != 0 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 59;
    return 3221225776LL;
  }
  if ( *(_DWORD *)v1 != 17744 )
    return MiComputeBadImageHeaderType(a1[15], a1[13], v3);
  if ( *(_WORD *)(v1 + 4) || *(_WORD *)(v1 + 20) )
  {
    if ( (*(_BYTE *)(v1 + 22) & 2) != 0 )
    {
      MiCaptureImageOptionalHeader(a1[18], a1[15], v3);
      if ( *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[136]
        && *(_QWORD *)&stru_140E2D2D0.WaitBlockFill11[140] == __PAIR64__(*(_DWORD *)(v2 + 16), *(_DWORD *)(v2 + 64)) )
      {
        __debugbreak();
      }
      v4 = *(_WORD *)(v2 + 48);
      if ( v4 == 523 || v4 == 267 )
      {
        v5 = *(_DWORD *)(v2 + 8);
        if ( (v5 & 0x1FF) == 0 || v5 == *(_DWORD *)(v2 + 12) )
        {
          if ( v5 )
          {
            v6 = *(_DWORD *)(v2 + 12);
            if ( ((v6 - 1) & v6) != 0 )
            {
              *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 78;
            }
            else if ( ((v5 - 1) & v5) != 0 )
            {
              *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 79;
            }
            else if ( v6 < v5 )
            {
              *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 80;
            }
            else
            {
              v7 = *(_DWORD *)(v2 + 16);
              if ( v7 > 0x77000000 )
              {
                *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 81;
              }
              else if ( v4 != 267 || (v13 = *(_WORD *)(v1 + 4), v13 == 332) || v13 == 452 )
              {
                if ( *(_WORD *)(v2 + 48) != 523 || (v8 = *(_WORD *)(v1 + 4), v8 == -31132) || v8 == -21916 )
                {
                  if ( *(_DWORD *)(v2 + 24) >= v7 )
                  {
                    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 84;
                  }
                  else if ( *(_WORD *)v2 )
                  {
                    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 85;
                  }
                  else
                  {
                    if ( (*(_BYTE *)(v1 + 20) & 7) == 0 )
                    {
                      v9 = *(_WORD *)(v1 + 4);
                      if ( v9 == 332 || (v10 = 0, v9 == -31132) )
                        v10 = 1;
                      v11 = *(_WORD *)(v1 + 22) & 1;
                      if ( v10 )
                      {
                        if ( v11 && _bittest16((const signed __int16 *)(v2 + 60), 0xCu) )
                        {
                          *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 87;
                          return 3221225595LL;
                        }
                      }
                      else
                      {
                        if ( v11 )
                        {
                          *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 88;
                          return 3221225595LL;
                        }
                        if ( (*(_WORD *)(v2 + 60) & 0x140) != 0x140 )
                        {
                          *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 89;
                          return 3221225595LL;
                        }
                      }
                      return 0LL;
                    }
                    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 86;
                  }
                }
                else
                {
                  *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 83;
                }
              }
              else
              {
                *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 82;
              }
            }
          }
          else
          {
            *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 77;
          }
        }
        else
        {
          *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 76;
        }
      }
      else
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 73;
      }
    }
    else
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 71;
    }
    return 3221225595LL;
  }
  *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 70;
  return 3221225776LL;
}
