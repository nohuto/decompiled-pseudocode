/*
 * XREFs of sub_14012BC20 @ 0x14012BC20
 * Callers:
 *     sub_1400EFBBC @ 0x1400EFBBC (sub_1400EFBBC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14012BC20(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // r8d
  unsigned __int16 *v3; // rax
  int v4; // ebp
  int v5; // edx
  unsigned __int16 *v6; // r9
  char v7; // bl
  int v8; // r11d
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  int v11; // r10d

  v1 = *(_QWORD *)(a1 + 592);
  v2 = 0;
  v3 = (unsigned __int16 *)(v1 + 2048);
  if ( v1 == -2048 || (*(_BYTE *)(v1 + 2051) & 2) != 0 )
    return 0;
  v4 = *(unsigned __int8 *)(v1 + 263);
  v5 = 1;
  if ( (unsigned int)(v4 + 1) > 1 )
  {
    while ( 1 )
    {
      v6 = v3;
      if ( (unsigned __int8)v5 > 0x1Fu )
        break;
      if ( (unsigned __int8)v5 > (unsigned __int8)v4 )
        break;
      v3 = (unsigned __int16 *)(v1 + 32 * ((unsigned __int8)v5 + 64LL));
      if ( !v3 )
        break;
      v7 = *((_BYTE *)v3 + 3);
      v8 = 10000;
      if ( (v7 & 1) != 0 )
        v8 = 100;
      v9 = *v3 * v8;
      if ( v6 )
      {
        v11 = 10000;
        if ( (*((_BYTE *)v6 + 3) & 1) != 0 )
          v11 = 100;
        v10 = *v6 * v11;
      }
      else
      {
        v10 = -1;
      }
      if ( v9 > v10 )
        break;
      if ( (v7 & 2) != 0 )
      {
        if ( v2 )
        {
          if ( (*((_BYTE *)v6 + 3) & 2) == 0 )
            return 0;
        }
        else if ( (*((_BYTE *)v6 + 3) & 2) != 0 )
        {
          return 0;
        }
        ++v2;
      }
      else if ( v2 )
      {
        return 0;
      }
      if ( ++v5 >= (unsigned int)(v4 + 1) )
        return 1;
    }
    return 0;
  }
  return 1;
}
