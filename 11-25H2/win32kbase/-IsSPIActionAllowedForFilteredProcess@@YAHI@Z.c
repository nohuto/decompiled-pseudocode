/*
 * XREFs of ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1400A77EC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSPIActionAllowedForFilteredProcess(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  bool v5; // zf
  unsigned int v6; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  bool v14; // zf
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  bool v18; // zf
  unsigned int v19; // ecx
  bool v20; // zf
  unsigned int v21; // ecx
  unsigned int v23; // ecx
  bool v24; // zf
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  bool v32; // zf
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx

  if ( a1 > 0x92 )
  {
    if ( a1 > 0x1000 )
    {
      if ( a1 <= 0x103E )
      {
        if ( a1 == 4158 )
          return 1LL;
        if ( a1 <= 0x1016 )
        {
          if ( a1 == 4118 )
            return 1LL;
          v25 = a1 - 4098;
          if ( !v25 )
            return 1LL;
          v26 = v25 - 2;
          if ( !v26 )
            return 1LL;
          v27 = v26 - 2;
          if ( !v27 )
            return 1LL;
          v28 = v27 - 2;
          if ( !v28 )
            return 1LL;
          v29 = v28 - 2;
          if ( !v29 )
            return 1LL;
          v30 = v29 - 2;
          if ( !v30 )
            return 1LL;
          v31 = v30 - 2;
          if ( !v31 )
            return 1LL;
          v33 = v31 - 4;
          v32 = v33 == 0;
LABEL_107:
          if ( !v32 )
            return v33 == 2;
          return 1LL;
        }
        v21 = a1 - 4120;
        v20 = v21 == 0;
        goto LABEL_70;
      }
      if ( a1 > 0x200C )
      {
        if ( a1 > 0x201A )
        {
          v36 = a1 - 8220;
          if ( !v36 )
            return 1LL;
          v37 = v36 - 2;
          if ( !v37 )
            return 1LL;
          v38 = v37 - 2;
          if ( !v38 )
            return 1LL;
          v6 = v38 - 16;
          v5 = v6 == 0;
LABEL_105:
          if ( v5 )
            return 1LL;
          v33 = v6 - 2;
          v32 = v33 == 0;
          goto LABEL_107;
        }
        if ( a1 == 8218 )
          return 1LL;
        v16 = a1 - 8206;
        v24 = v16 == 0;
      }
      else
      {
        if ( a1 == 8204 )
          return 1LL;
        if ( a1 <= 0x1050 )
        {
          if ( a1 == 4176 )
            return 1LL;
          v34 = a1 - 4160;
          if ( !v34 )
            return 1LL;
          v35 = v34 - 2;
          if ( !v35 )
            return 1LL;
          v19 = v35 - 6;
          v18 = v19 == 0;
LABEL_62:
          if ( v18 )
            return 1LL;
          v6 = v19 - 2;
          v5 = v6 == 0;
          goto LABEL_105;
        }
        v16 = a1 - 0x2000;
        v24 = v16 == 0;
      }
    }
    else
    {
      if ( a1 == 4096 )
        return 1LL;
      if ( a1 <= 0xA5 )
      {
        if ( a1 == 165 )
          return 1LL;
        v21 = a1 - 148;
        v20 = v21 == 0;
LABEL_70:
        if ( v20 )
          return 1LL;
        v15 = v21 - 2;
        if ( !v15 )
          return 1LL;
LABEL_59:
        v16 = v15 - 2;
        if ( !v16 )
          return 1LL;
        goto LABEL_60;
      }
      v23 = a1 - 167;
      if ( !v23 )
        return 1LL;
      v16 = v23 - 1;
      v24 = v16 == 0;
    }
    if ( v24 )
      return 1LL;
LABEL_60:
    v17 = v16 - 2;
    if ( !v17 )
      return 1LL;
    v19 = v17 - 2;
    v18 = v19 == 0;
    goto LABEL_62;
  }
  if ( a1 == 146 )
    return 1LL;
  if ( a1 > 0x50 )
  {
    if ( a1 <= 0x73 )
    {
      if ( a1 == 115 )
        return 1LL;
      if ( a1 > 0x64 )
      {
        if ( a1 == 102 || a1 == 104 || a1 == 106 || a1 == 108 || a1 == 110 || a1 == 112 )
          return 1LL;
        return a1 == 114;
      }
      else
      {
        if ( a1 == 100 )
          return 1LL;
        v8 = a1 - 83;
        if ( !v8 )
          return 1LL;
        v9 = v8 - 1;
        if ( !v9 )
          return 1LL;
        v10 = v9 - 5;
        if ( !v10 )
          return 1LL;
        v11 = v10 - 3;
        if ( !v11 )
          return 1LL;
        v12 = v11 - 2;
        if ( !v12 )
          return 1LL;
        v13 = v12 - 1;
        if ( !v13 )
          return 1LL;
        return v13 == 3;
      }
    }
    if ( a1 > 0x82 )
    {
      v15 = a1 - 132;
      v14 = v15 == 0;
    }
    else
    {
      if ( a1 == 130 )
        return 1LL;
      v15 = a1 - 116;
      v14 = v15 == 0;
    }
    if ( v14 )
      return 1LL;
    goto LABEL_59;
  }
  if ( a1 == 80 )
    return 1LL;
  if ( a1 > 0x2D )
  {
    if ( a1 > 0x3E )
    {
      if ( a1 == 64 || a1 == 66 || a1 == 68 || a1 == 70 || a1 == 72 || a1 == 74 )
        return 1LL;
      return a1 == 79;
    }
    else
    {
      if ( a1 == 62 || a1 == 48 || a1 == 50 || a1 == 52 || a1 == 54 || a1 == 56 || a1 == 58 )
        return 1LL;
      return a1 == 60;
    }
  }
  else
  {
    if ( a1 == 45 )
      return 1LL;
    if ( a1 <= 0x16 )
    {
      if ( a1 == 22 )
        return 1LL;
      v1 = a1 - 1;
      if ( !v1 )
        return 1LL;
      v2 = v1 - 2;
      if ( !v2 )
        return 1LL;
      v3 = v2 - 2;
      if ( !v3 )
        return 1LL;
      v4 = v3 - 5;
      if ( !v4 )
        return 1LL;
      v6 = v4 - 4;
      v5 = v6 == 0;
      goto LABEL_105;
    }
    if ( a1 == 25 || a1 == 27 || a1 == 31 || a1 == 35 || a1 == 38 || a1 == 41 )
      return 1LL;
    return a1 == 43;
  }
}
