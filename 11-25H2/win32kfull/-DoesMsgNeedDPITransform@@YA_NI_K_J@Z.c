/*
 * XREFs of ?DoesMsgNeedDPITransform@@YA_NI_K_J@Z @ 0x1401432E4
 * Callers:
 *     TransformMessageBetweenCoordinateSpaces @ 0x140142CF0 (TransformMessageBetweenCoordinateSpaces.c)
 * Callees:
 *     <none>
 */

bool __fastcall DoesMsgNeedDPITransform(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  bool v8; // zf
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  bool v13; // zf
  unsigned int v14; // ecx
  bool v15; // zf
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  bool v21; // zf
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  bool v25; // zf
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx

  if ( a1 <= 0x20A )
  {
    if ( a1 == 522 )
      return 1;
    if ( a1 > 0xA9 )
    {
      if ( a1 <= 0x203 )
      {
        if ( a1 == 515 )
          return 1;
        v17 = a1 - 171;
        if ( !v17 )
          return 1;
        v18 = v17 - 1;
        if ( !v18 )
          return 1;
        v19 = v18 - 1;
        if ( !v19 )
          return 1;
        v20 = v19 - 101;
        if ( !v20 )
          return HIWORD(a3) != 0;
        v26 = v20 - 238;
        v25 = v26 == 0;
LABEL_40:
        if ( v25 )
          return 1;
        v9 = v26 - 1;
        v8 = v9 == 0;
        goto LABEL_21;
      }
      v22 = a1 - 516;
      v21 = v22 == 0;
    }
    else
    {
      if ( a1 == 169 )
        return 1;
      if ( a1 <= 0xA2 )
      {
        if ( a1 == 162 )
          return 1;
        v3 = a1 - 3;
        if ( !v3 )
          return 1;
        v4 = v3 - 80;
        if ( !v4 )
          return 1;
        v5 = v4 - 40;
        if ( !v5 )
          return 1;
        v6 = v5 - 8;
        if ( !v6 )
          return 1;
        v7 = v6 - 1;
        if ( !v7 )
          return 1;
        v9 = v7 - 28;
        v8 = v9 == 0;
        goto LABEL_21;
      }
      v22 = a1 - 163;
      v21 = v22 == 0;
    }
    if ( v21 )
      return 1;
    v23 = v22 - 1;
    if ( !v23 )
      return 1;
    v24 = v23 - 1;
    if ( !v24 )
      return 1;
    v26 = v24 - 1;
    v25 = v26 == 0;
    goto LABEL_40;
  }
  if ( a1 > 0x24E )
  {
    if ( a1 <= 0x2F2 )
    {
      if ( a1 == 754 )
        return 1;
      v36 = a1 - 591;
      if ( !v36 )
        return 1;
      v37 = v36 - 2;
      if ( !v37 )
        return 1;
      v38 = v37 - 1;
      if ( !v38 )
        return 1;
      v39 = v38 - 49;
      if ( !v39 )
        return 1;
      v9 = v39 - 29;
      v8 = v9 == 0;
LABEL_21:
      if ( !v8 )
      {
        v15 = v9 == 1;
        goto LABEL_23;
      }
      return 1;
    }
    v10 = a1 - 755;
    if ( !v10 )
      return 1;
    v11 = v10 - 1;
    if ( !v11 )
      return 1;
    v12 = v11 - 31;
    if ( !v12 )
      return 1;
    v14 = v12 - 44;
    v13 = v14 == 0;
LABEL_19:
    if ( v13 )
      return 1;
    v9 = v14 - 2;
    v8 = v9 == 0;
    goto LABEL_21;
  }
  if ( a1 == 590 )
    return 1;
  if ( a1 > 0x242 )
  {
    v33 = a1 - 579;
    if ( !v33 )
      return 1;
    v34 = v33 - 2;
    if ( !v34 )
      return 1;
    v35 = v34 - 1;
    if ( !v35 )
      return 1;
    v14 = v35 - 1;
    v13 = v14 == 0;
    goto LABEL_19;
  }
  if ( a1 != 578 )
  {
    v27 = a1 - 523;
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            v31 = v30 - 2;
            if ( v31 )
            {
              v32 = v31 - 16;
              if ( v32 )
              {
                v15 = v32 == 33;
LABEL_23:
                if ( !v15 )
                  return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}
