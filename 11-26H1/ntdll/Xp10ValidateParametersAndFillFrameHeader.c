/*
 * XREFs of Xp10ValidateParametersAndFillFrameHeader @ 0x180152C20
 * Callers:
 *     Xp10CompressBuffer @ 0x1801519AC (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ValidateParametersAndFillFrameHeader(__int16 *a1, __int64 a2)
{
  __int16 v2; // r10
  char v3; // r8
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  __int16 v11; // r8
  __int16 v12; // r8
  __int16 v14; // cx

  *(_WORD *)(a2 + 4) = 0;
  v2 = *a1;
  v3 = *a1;
  *(_DWORD *)a2 = -1069947632;
  v4 = (v3 & 0x1F) - 12;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          v8 = v7 - 2;
          if ( v8 )
          {
            v9 = v8 - 2;
            if ( v9 )
            {
              v10 = v9 - 2;
              if ( v10 )
              {
                if ( v10 != 2 )
                  return 3221225485LL;
                *(_WORD *)(a2 + 4) |= 7u;
              }
              else
              {
                *(_WORD *)(a2 + 4) &= ~1u;
                *(_WORD *)(a2 + 4) |= 6u;
              }
            }
            else
            {
              *(_WORD *)(a2 + 4) &= ~2u;
              *(_WORD *)(a2 + 4) |= 5u;
            }
          }
          else
          {
            *(_WORD *)(a2 + 4) &= 0xFFFCu;
            *(_WORD *)(a2 + 4) |= 4u;
          }
        }
        else
        {
          *(_WORD *)(a2 + 4) &= ~4u;
          *(_WORD *)(a2 + 4) |= 3u;
        }
      }
      else
      {
        *(_WORD *)(a2 + 4) &= 0xFFFAu;
        *(_WORD *)(a2 + 4) |= 2u;
      }
    }
    else
    {
      *(_WORD *)(a2 + 4) &= 0xFFF9u;
      *(_WORD *)(a2 + 4) |= 1u;
    }
  }
  else
  {
    *(_WORD *)(a2 + 4) &= 0xFFF8u;
  }
  v11 = *(_WORD *)(a2 + 4);
  if ( (unsigned __int8)v2 >> 5 != 3 )
  {
    if ( (unsigned __int8)v2 >> 5 == 4 )
    {
      v12 = v11 | 8;
      goto LABEL_21;
    }
    return 3221225485LL;
  }
  v12 = v11 & 0xFFF7;
LABEL_21:
  *(_WORD *)(a2 + 4) = v12;
  if ( *((_DWORD *)a1 + 1) >= 4u )
    return 3221225485LL;
  if ( *((_DWORD *)a1 + 1) )
    return 3221225474LL;
  v14 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(16 * a1[2])) & 0x30;
  *(_WORD *)(a2 + 4) = v14 & 0xF03F ^ (v2 ^ v14 & 0xF03F) & 0x4000;
  return 0LL;
}
