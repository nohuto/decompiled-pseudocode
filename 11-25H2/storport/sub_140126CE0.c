/*
 * XREFs of sub_140126CE0 @ 0x140126CE0
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_14006C420 @ 0x14006C420 (sub_14006C420.c)
 */

char __fastcall sub_140126CE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  char v4; // bl
  __int64 v5; // rax
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // r8d

  v3 = *(_QWORD *)(a1 + 160);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = *(_QWORD *)(v3 + 8);
  if ( !v5 || !*(_BYTE *)(v5 + 65) )
    return 0;
  if ( a3 > 0x2D9CD0 )
  {
    if ( a3 > 0x2DDF84 )
    {
      switch ( a3 )
      {
        case 0x2DDF88u:
        case 0x2DDF8Cu:
        case 0x2DDF94u:
        case 0x2DDF98u:
        case 0x2DDF9Cu:
        case 0x2DDFA0u:
        case 0x2DDFA4u:
        case 0x2DDFACu:
        case 0x2DDFB0u:
          goto LABEL_14;
        default:
          return v4;
      }
      return v4;
    }
    if ( a3 == 3006340 )
      goto LABEL_14;
    if ( a3 > 0x2DD684 )
    {
      v18 = a3 - 3005444;
      if ( !v18 )
        goto LABEL_14;
      v19 = v18 - 4;
      if ( !v19 || v19 == 208 )
        goto LABEL_14;
      return 0;
    }
    else
    {
      if ( a3 == 3004036 )
        goto LABEL_14;
      v15 = a3 - 2989268;
      if ( !v15 )
        goto LABEL_14;
      v16 = v15 - 14;
      if ( !v16 )
        goto LABEL_14;
      v17 = v16 - 13598;
      if ( !v17 || v17 == 448 )
        goto LABEL_14;
      return 0;
    }
  }
  else
  {
    if ( a3 == 2989264 )
      goto LABEL_14;
    if ( a3 <= 0x2D1CA0 )
    {
      if ( a3 != 2956448 )
      {
        if ( a3 <= 0x2D1400 )
        {
          if ( a3 != 2954240 )
          {
            v6 = a3 - 315400;
            if ( v6 )
            {
              v7 = v6 - 48;
              if ( v7 )
              {
                v8 = v7 - 2638236;
                if ( v8 )
                {
                  if ( v8 != 548 )
                    return v4;
                }
              }
            }
          }
          goto LABEL_14;
        }
        v10 = a3 - 2954880;
        if ( v10 )
        {
          v11 = v10 - 1408;
          if ( v11 )
          {
            v12 = v11 - 148;
            if ( v12 )
            {
              if ( v12 != 4 )
                return 0;
            }
          }
        }
      }
LABEL_14:
      v4 = 1;
      sub_14006C420(*(_QWORD *)(a1 + 8), a2);
      return v4;
    }
    if ( a3 > 0x2D5F90 )
    {
      v13 = a3 - 2973608;
      if ( !v13 )
        goto LABEL_14;
      v14 = v13 - 13388;
      if ( !v14 || v14 == 8 )
        goto LABEL_14;
      return 0;
    }
    else
    {
      if ( a3 == 2973584 || a3 == 2956492 || a3 == 2957184 || a3 == 2969620 || a3 == 2972893 )
        goto LABEL_14;
      return 0;
    }
  }
}
