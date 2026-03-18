/*
 * XREFs of U64DivU32RoundUp @ 0x1401400A8
 * Callers:
 *     ComputeRGBLUTAA @ 0x14013F094 (ComputeRGBLUTAA.c)
 *     DivFD6 @ 0x14013FFE8 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x140140584 (MulDivFD6Pairs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall U64DivU32RoundUp(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // r10d
  int v8; // r11d
  unsigned int v9; // eax
  unsigned __int16 v10; // r9
  int v12; // r9d
  int v13; // r10d
  int v14; // r10d
  unsigned int v15; // ebx
  unsigned int v16; // r10d
  unsigned int v17; // r10d
  unsigned int v18; // r10d
  unsigned int v19; // r10d
  unsigned int v20; // r10d
  unsigned int v21; // ebx
  unsigned __int16 v22; // ax
  unsigned int v23; // edx
  unsigned __int16 v24; // ax
  unsigned int v25; // ebp
  __int16 v26; // r9

  v3 = a1 + 1;
  v4 = a2 + (a3 >> 1);
  if ( v4 >= a2 )
    v3 = a1;
  v5 = HIWORD(a3);
  if ( (_WORD)a3 && HIWORD(a3) )
  {
    v8 = v3 / v5;
    v12 = (unsigned __int16)(v3 / v5) * (unsigned __int16)a3;
    v13 = HIWORD(v4) | ((v3 - v5 * (unsigned __int16)(v3 / v5)) << 16);
    if ( v12 < 0 )
    {
      v24 = (v12 - v13) / a3;
      LOWORD(v8) = v8 - v24;
      v12 -= a3 * v24;
    }
    v14 = v13 - v12;
    if ( v14 < 0 )
    {
      LOWORD(v8) = v8 - 1;
      v14 += a3;
      if ( v14 < 0 )
      {
        LOWORD(v8) = v8 - 1;
        v14 += a3;
        if ( v14 < 0 )
        {
          LOWORD(v8) = v8 - 1;
          v14 += a3;
          if ( v14 < 0 )
          {
            LOWORD(v8) = v8 - 1;
            v14 += a3;
            if ( v14 < 0 )
            {
              LOWORD(v8) = v8 - 1;
              v14 += a3;
              if ( v14 < 0 )
              {
                LOWORD(v8) = v8 - 1;
                v14 += a3;
                if ( v14 < 0 )
                {
                  v23 = -v14 % a3;
                  LOWORD(v8) = v8 - -v14 / a3;
                  if ( v23 )
                  {
                    LOWORD(v8) = v8 - 1;
                    v14 = a3 - v23;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( HIWORD(v14) >= HIWORD(a3) )
    {
      v25 = ((unsigned __int16)a3 << 16) - ((unsigned __int16)v4 | (v14 << 16));
      v26 = v25 / a3 + 1;
      if ( v25 <= a3 * (unsigned __int16)(v25 / a3) )
        v26 = v25 / a3;
      v10 = -v26;
    }
    else
    {
      v10 = v14 / v5;
      v15 = (unsigned __int16)a3 * v10;
      v16 = (unsigned __int16)v4 | ((v14 - v5 * v10) << 16);
      if ( v16 < v15 )
      {
        --v10;
        v17 = a3 + v16;
        if ( v17 < v15 )
        {
          --v10;
          v18 = a3 + v17;
          if ( v18 < v15 )
          {
            --v10;
            v19 = a3 + v18;
            if ( v19 < v15 )
            {
              --v10;
              v20 = a3 + v19;
              if ( v20 < v15 )
              {
                v21 = v15 - v20;
                v22 = v21 / a3;
                v10 -= v22;
                if ( v21 > a3 * v22 )
                  --v10;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v6 = HIWORD(v4);
    if ( (_WORD)a3 )
    {
      v7 = v6 | (v3 << 16);
      LOWORD(v8) = v7 / (unsigned __int16)a3;
      v9 = (((v7 % (unsigned __int16)a3) << 16) | (unsigned __int16)v4) / (unsigned __int16)a3;
    }
    else
    {
      LOWORD(v8) = v3 / v5;
      v9 = (v6 | ((v3 % v5) << 16)) / v5;
    }
    v10 = v9;
  }
  return v10 | ((unsigned __int16)v8 << 16);
}
