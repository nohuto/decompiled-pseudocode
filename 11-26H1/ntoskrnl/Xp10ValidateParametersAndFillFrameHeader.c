/*
 * XREFs of Xp10ValidateParametersAndFillFrameHeader @ 0x140814B34
 * Callers:
 *     Xp10CompressBuffer @ 0x140811918 (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ValidateParametersAndFillFrameHeader(__int16 *a1, __int64 a2)
{
  __int16 v3; // r11
  char v4; // r8
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  __int16 v12; // dx
  __int16 v13; // dx
  unsigned int v14; // eax
  __int16 v16; // cx

  *(_WORD *)(a2 + 4) = 0;
  v3 = *a1;
  v4 = *a1;
  *(_DWORD *)a2 = -1069947632;
  v5 = (v4 & 0x1F) - 12;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
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
              v11 = v10 - 2;
              if ( v11 )
              {
                if ( v11 != 2 )
                  return 3221225485LL;
                *(_WORD *)(a2 + 4) |= 7u;
                goto LABEL_18;
              }
              v12 = 6;
            }
            else
            {
              v12 = 5;
            }
          }
          else
          {
            v12 = 4;
          }
        }
        else
        {
          v12 = 3;
        }
      }
      else
      {
        v12 = 2;
      }
    }
    else
    {
      v12 = 1;
    }
    *(_WORD *)(a2 + 4) = v12;
    goto LABEL_19;
  }
  *(_WORD *)(a2 + 4) &= 0xFFF8u;
LABEL_18:
  v12 = *(_WORD *)(a2 + 4);
LABEL_19:
  if ( (unsigned __int8)v3 >> 5 != 3 )
  {
    if ( (unsigned __int8)v3 >> 5 == 4 )
    {
      v13 = v12 | 8;
      goto LABEL_23;
    }
    return 3221225485LL;
  }
  v13 = v12 & 0xFFF7;
LABEL_23:
  *(_WORD *)(a2 + 4) = v13;
  v14 = *((_DWORD *)a1 + 1);
  if ( v14 >= 4 )
    return 3221225485LL;
  if ( v14 )
    return 3221225474LL;
  v16 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(16 * a1[2])) & 0x30;
  *(_WORD *)(a2 + 4) = v16 & 0xF03F ^ (v3 ^ v16 & 0xF03F) & 0x4000;
  return 0LL;
}
