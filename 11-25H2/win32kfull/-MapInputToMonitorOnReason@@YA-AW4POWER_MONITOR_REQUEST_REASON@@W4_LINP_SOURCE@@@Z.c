/*
 * XREFs of ?MapInputToMonitorOnReason@@YA?AW4POWER_MONITOR_REQUEST_REASON@@W4_LINP_SOURCE@@@Z @ 0x14016CA24
 * Callers:
 *     EditionKeepMachineUp @ 0x14016C7F0 (EditionKeepMachineUp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapInputToMonitorOnReason(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = 4;
  if ( a1 > 11 )
  {
    v5 = a1 - 13;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          if ( v7 == 1 )
            return 33;
        }
        else
        {
          return 35;
        }
      }
      else
      {
        return 39;
      }
    }
    else
    {
      return 34;
    }
  }
  else if ( a1 == 11 )
  {
    return 54;
  }
  else
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      v3 = v2 - 2;
      if ( v3 )
      {
        v8 = v3 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 == 4 )
              return 38;
          }
          else
          {
            return 37;
          }
        }
        else
        {
          return 36;
        }
      }
      else
      {
        return 32;
      }
    }
    else
    {
      return 31;
    }
  }
  return v1;
}
