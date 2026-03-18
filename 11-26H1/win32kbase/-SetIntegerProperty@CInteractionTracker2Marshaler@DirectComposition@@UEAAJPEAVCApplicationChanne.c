/*
 * XREFs of ?SetIntegerProperty@CInteractionTracker2Marshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionTracker2Marshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // edx
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d

  v5 = 0;
  if ( a3 > 0x1A )
  {
    if ( a3 > 0x2A )
    {
      switch ( a3 )
      {
        case '-':
          if ( a1[92] != a4 )
          {
            a1[21] |= 0x800u;
            a1[4] &= ~0x20u;
            a1[92] = a4;
            *a5 = 1;
          }
          return v5;
        case '0':
          if ( a1[102] == a4 )
            return v5;
          a1[21] |= 0x2000u;
          a1[102] = a4;
          goto LABEL_23;
        case '3':
          if ( a1[112] == a4 )
            return v5;
          a1[21] |= 0x8000u;
          a1[112] = a4;
          goto LABEL_23;
        case '7':
          if ( a1[132] == a4 )
            return v5;
          a1[21] |= 0x10000u;
          a1[132] = a4;
          goto LABEL_23;
        case '9':
          if ( a1[140] == a4 )
            return v5;
          a1[21] |= 0x20000u;
          a1[140] = a4;
          goto LABEL_23;
      }
    }
    else
    {
      if ( a3 == 42 )
      {
        if ( a1[82] == a4 )
          return v5;
        a1[21] |= 0x200u;
        a1[82] = a4;
        goto LABEL_23;
      }
      v14 = a3 - 27;
      if ( !v14 )
      {
        if ( a1[56] == a4 )
          return v5;
        a1[20] |= 0x8000000u;
        a1[56] = a4;
        goto LABEL_23;
      }
      v15 = v14 - 2;
      if ( !v15 )
      {
        if ( a1[60] == a4 )
          return v5;
        a1[20] |= 0x20000000u;
        a1[60] = a4;
        goto LABEL_23;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        if ( a1[61] == a4 )
          return v5;
        a1[20] |= 0x40000000u;
        a1[61] = a4;
        goto LABEL_23;
      }
      v17 = v16 - 4;
      if ( !v17 )
      {
        if ( a1[65] == a4 )
          return v5;
        a1[21] |= 4u;
        a1[65] = a4;
        goto LABEL_23;
      }
      if ( v17 == 3 )
      {
        if ( a1[68] == a4 )
          return v5;
        a1[21] |= 0x20u;
        a1[68] = a4;
        goto LABEL_23;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 26 )
  {
    if ( a1[55] == a4 )
      return v5;
    a1[20] |= 0x4000000u;
    a1[55] = a4;
    goto LABEL_23;
  }
  if ( a3 > 0xF )
  {
    v10 = a3 - 17;
    if ( !v10 )
    {
      if ( a1[46] == a4 )
        return v5;
      a1[20] |= 0x20000u;
      a1[46] = a4;
      goto LABEL_23;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( a1[47] == a4 )
        return v5;
      a1[20] |= 0x40000u;
      a1[47] = a4;
      goto LABEL_23;
    }
    v12 = v11 - 3;
    if ( !v12 )
    {
      if ( a1[50] == a4 )
        return v5;
      a1[20] |= 0x200000u;
      a1[50] = a4;
      goto LABEL_23;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( a1[51] == a4 )
        return v5;
      a1[20] |= 0x400000u;
      a1[51] = a4;
      goto LABEL_23;
    }
    if ( v13 == 1 )
    {
      if ( a1[52] == a4 )
        return v5;
      a1[20] |= 0x800000u;
      a1[52] = a4;
      goto LABEL_23;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 15 )
  {
    if ( a1[43] == a4 )
      return v5;
    a1[20] |= 0x8000u;
    a1[43] = a4;
    goto LABEL_23;
  }
  if ( !a3 )
  {
    if ( a1[22] != a4 )
    {
      a1[20] |= 1u;
      a1[22] = a4;
      goto LABEL_23;
    }
    return v5;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( a1[23] != a4 )
    {
      a1[20] |= 2u;
      a1[23] = a4;
      goto LABEL_23;
    }
    return v5;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( a1[27] != a4 )
    {
      a1[20] |= 8u;
      a1[27] = a4;
      goto LABEL_23;
    }
    return v5;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    if ( a1[31] != a4 )
    {
      a1[20] |= 0x20u;
      a1[31] = a4;
      goto LABEL_23;
    }
    return v5;
  }
  v9 = v8 - 4;
  if ( v9 )
  {
    if ( v9 == 2 )
    {
      if ( a1[39] != a4 )
      {
        a1[20] |= 0x800u;
        a1[39] = a4;
LABEL_23:
        a1[4] &= ~0x20u;
        *a5 = 1;
        return v5;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a1[37] != a4 )
  {
    a1[20] |= 0x200u;
    a1[37] = a4;
    goto LABEL_23;
  }
  return v5;
}
