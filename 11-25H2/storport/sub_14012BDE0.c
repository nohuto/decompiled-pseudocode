/*
 * XREFs of sub_14012BDE0 @ 0x14012BDE0
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_14006C420 @ 0x14006C420 (sub_14006C420.c)
 */

char __fastcall sub_14012BDE0(__int64 a1, __int64 a2, unsigned int a3)
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
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  unsigned int v22; // r8d
  unsigned int v23; // r8d
  unsigned int v24; // r8d

  v3 = *(_QWORD *)(a1 + 128);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = *(_QWORD *)(v3 + 8);
  if ( !v5 || !*(_BYTE *)(v5 + 41) )
    return 0;
  if ( a3 > 0x2D5FA8 )
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
    if ( a3 > 0x2DD200 )
    {
      v22 = a3 - 3003328;
      if ( !v22 )
        goto LABEL_14;
      v23 = v22 - 708;
      if ( !v23 )
        goto LABEL_14;
      v24 = v23 - 1408;
      if ( !v24 || v24 == 4 )
        goto LABEL_14;
      return 0;
    }
    else
    {
      if ( a3 == 3002880 )
        goto LABEL_14;
      v19 = a3 - 2986996;
      if ( !v19 )
        goto LABEL_14;
      v20 = v19 - 8;
      if ( !v20 )
        goto LABEL_14;
      v21 = v20 - 8;
      if ( !v21 || v21 == 572 )
        goto LABEL_14;
      return 0;
    }
  }
  else
  {
    if ( a3 == 2973608 )
      goto LABEL_14;
    if ( a3 <= 0x2D1C00 )
    {
      if ( a3 != 2956288 )
      {
        if ( a3 <= 0x4D048 )
        {
          if ( a3 != 315464 )
          {
            v6 = a3 - 315396;
            if ( v6 )
            {
              v7 = v6 - 4;
              if ( v7 )
              {
                v8 = v7 - 12;
                if ( v8 )
                {
                  if ( v8 != 48 )
                    return v4;
                }
              }
            }
          }
          goto LABEL_14;
        }
        v10 = a3 - 2953684;
        if ( v10 )
        {
          v11 = v10 - 548;
          if ( v11 )
          {
            v12 = v11 - 8;
            if ( v12 )
            {
              if ( v12 != 640 )
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
    if ( a3 > 0x2D2828 )
    {
      v16 = a3 - 2959404;
      if ( !v16 )
        goto LABEL_14;
      v17 = v16 - 4;
      if ( !v17 )
        goto LABEL_14;
      v18 = v17 - 10224;
      if ( !v18 || v18 == 3952 )
        goto LABEL_14;
      return 0;
    }
    else
    {
      if ( a3 == 2959400 )
        goto LABEL_14;
      v13 = a3 - 2956424;
      if ( !v13 )
        goto LABEL_14;
      v14 = v13 - 12;
      if ( !v14 )
        goto LABEL_14;
      v15 = v14 - 56;
      if ( !v15 || v15 == 692 )
        goto LABEL_14;
      return 0;
    }
  }
}
