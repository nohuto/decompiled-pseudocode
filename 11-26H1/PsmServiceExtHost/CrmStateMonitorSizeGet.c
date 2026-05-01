/*
 * XREFs of CrmStateMonitorSizeGet @ 0x180048D74
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180048560 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorSizeGet(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx

  v1 = 0;
  if ( a1 > 21 )
  {
    if ( a1 > 32 )
    {
      if ( a1 <= 38 )
      {
        if ( a1 == 38 )
          return 96;
        v20 = a1 - 33;
        if ( !v20 )
          return 96;
        v21 = v20 - 1;
        if ( !v21 )
          return 96;
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 != 1 )
              return v1;
            return 96;
          }
        }
        return 112;
      }
      v24 = a1 - 39;
      if ( !v24 )
        return 160;
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          if ( v26 != 1 )
            return v1;
          return 128;
        }
      }
    }
    else
    {
      if ( a1 == 32 )
        return 96;
      if ( a1 <= 27 )
      {
        if ( a1 == 27 )
          return 96;
        v13 = a1 - 22;
        if ( !v13 )
          return 96;
        v14 = v13 - 1;
        if ( !v14 )
          return 96;
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 != 1 )
              return v1;
            return 112;
          }
        }
        return 120;
      }
      v17 = a1 - 28;
      if ( !v17 )
        return 64;
      v18 = v17 - 1;
      if ( !v18 )
        return 128;
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 )
          return v1;
        return 120;
      }
    }
    return 96;
  }
  if ( a1 == 21 )
    return 144;
  if ( a1 <= 10 )
  {
    if ( a1 != 10 )
    {
      if ( a1 <= 5 )
      {
        if ( a1 != 5 )
        {
          if ( a1 )
          {
            v2 = a1 - 1;
            if ( v2 )
            {
              v3 = v2 - 1;
              if ( v3 )
              {
                if ( (unsigned int)(v3 - 1) >= 2 )
                  return v1;
                return 72;
              }
              return 128;
            }
          }
          return 80;
        }
        return 72;
      }
      v4 = a1 - 6;
      if ( !v4 )
        return 72;
      v5 = v4 - 1;
      if ( !v5 )
        return 72;
      v6 = v5 - 1;
      if ( !v6 )
        return 72;
LABEL_24:
      if ( v6 != 1 )
        return v1;
      return 96;
    }
    return 64;
  }
  if ( a1 <= 16 )
  {
    if ( a1 == 16 )
      return 96;
    v7 = a1 - 11;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( !v9 )
          return 96;
        v6 = v9 - 1;
        if ( !v6 )
          return 96;
        goto LABEL_24;
      }
    }
    return 80;
  }
  v10 = a1 - 17;
  if ( !v10 )
    return 96;
  v11 = v10 - 1;
  if ( !v11 )
    return 80;
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
      return 192;
  }
  else
  {
    return 184;
  }
  return v1;
}
