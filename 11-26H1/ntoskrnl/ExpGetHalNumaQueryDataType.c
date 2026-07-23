/*
 * XREFs of ExpGetHalNumaQueryDataType @ 0x14084CB38
 * Callers:
 *     ExpQuerySystemMemoryNumaPerformanceInformation @ 0x140B6F184 (ExpQuerySystemMemoryNumaPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetHalNumaQueryDataType(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  result = 0LL;
  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            v6 = v5 - 1;
            if ( v6 )
            {
              if ( v6 == 1 )
                return 6LL;
              else
                return 7LL;
            }
            else
            {
              return 5LL;
            }
          }
          else
          {
            return 4LL;
          }
        }
        else
        {
          return 3LL;
        }
      }
      else
      {
        return 2LL;
      }
    }
    else
    {
      return 1LL;
    }
  }
  return result;
}
