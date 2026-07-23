/*
 * XREFs of MiComputeBadImageHeaderType @ 0x140A653C8
 * Callers:
 *     MiVerifyImageHeader @ 0x140A6492C (MiVerifyImageHeader.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 *     MiCheckDosCalls @ 0x140886074 (MiCheckDosCalls.c)
 */

__int64 __fastcall MiComputeBadImageHeaderType(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v6; // al
  __int16 v7; // ax
  char v9; // cl
  int v10; // ecx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int16 v13; // ax
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v17; // rcx

  if ( *(_WORD *)a1 != 17742 )
  {
    if ( *(_WORD *)a1 == 17740 )
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 68;
    else
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 69;
    return 3221225776LL;
  }
  if ( !(unsigned int)MiCheckDosCalls((unsigned __int16 *)a1, a3) )
  {
    v6 = *(_BYTE *)(a1 + 54);
    if ( v6 == 2 || !v6 && ((v7 = *(_WORD *)(a1 + 62) & 0xFF00, v7 == 512) || v7 == 768) )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 60;
      return 3221225777LL;
    }
  }
  v9 = *(_BYTE *)(a1 + 54);
  if ( v9 == 5 || *(_WORD *)(a1 + 4) == *(_WORD *)(a1 + 42) )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 61;
    return 3221225776LL;
  }
  if ( v9 != 1 )
    goto LABEL_15;
  v10 = *(_DWORD *)(a2 + 512) - 1414739505;
  if ( *(_DWORD *)(a2 + 512) == 1414739505 )
    v10 = *(unsigned __int16 *)(a2 + 516) - 16981;
  if ( v10 )
  {
LABEL_15:
    v11 = 16LL * *(unsigned __int16 *)(a2 + 8);
    if ( v11 > 0xFC6 )
      goto LABEL_43;
    v12 = *(_QWORD *)(v11 + a2 + 24) - 0x70614C2072616850LL;
    if ( *(_QWORD *)(v11 + a2 + 24) == 0x70614C2072616850LL )
    {
      v12 = *(_QWORD *)(v11 + a2 + 32) - 0x72617774666F5320LL;
      if ( *(_QWORD *)(v11 + a2 + 32) == 0x72617774666F5320LL )
        v12 = *(_QWORD *)(v11 + a2 + 40) - 0x2E636E49202C65LL;
    }
    if ( !v12 && ((v13 = *(_WORD *)(v11 + a2 + 56), v13 == 19280) || v13 == 20304 || v13 == 22096) )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 63;
    }
    else
    {
LABEL_43:
      if ( v11 + 50 > 0x1000
        || (v14 = *(unsigned __int16 *)(v11 + a2 + 48), v14 + v11 > 0xFDC)
        || memcmp((const void *)(v14 + v11 + a2), "Copyright (C) Rational Systems, Inc.", 0x24uLL) )
      {
        v15 = *(_DWORD *)(a1 + 44);
        v16 = *(_DWORD *)(a2 + 60);
        if ( v15 > v16 )
        {
          v17 = (int)(v15 - v16);
          if ( v17 + 16 >= v17 && v17 + 16 < a3 && !memcmp((const void *)(a1 + v17 + 1), "1-2-3 Preloader", 0xFuLL) )
          {
            *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 66;
            return 3221225776LL;
          }
          *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 67;
        }
        else
        {
          *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 65;
        }
        return 3221225755LL;
      }
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 64;
    }
  }
  else
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 62;
  }
  return 3221225776LL;
}
