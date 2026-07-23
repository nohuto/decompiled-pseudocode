/*
 * XREFs of MiGenerateCompatibleWorkingSetRequestFlags @ 0x1404DB054
 * Callers:
 *     MiLogProcessWorkingSetsStart @ 0x1404DAE84 (MiLogProcessWorkingSetsStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGenerateCompatibleWorkingSetRequestFlags(_DWORD *a1)
{
  unsigned int v1; // r8d
  int v2; // edx
  int v3; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx

  v1 = 0;
  v2 = a1[1];
  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      v11 = v2 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          return 64;
      }
      else
      {
        return 2;
      }
    }
    else
    {
      v5 = v2 - 2;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                v10 = v9 - 1;
                if ( v10 )
                {
                  if ( v10 == 1 )
                    return 4;
                }
                else
                {
                  return 16;
                }
              }
              else
              {
                return 8;
              }
            }
            else
            {
              return 512;
            }
          }
          else
          {
            return 256;
          }
        }
        else
        {
          return 768;
        }
      }
      else
      {
        return 128;
      }
    }
  }
  else
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        return 32;
    }
    else
    {
      return 1;
    }
  }
  return v1;
}
