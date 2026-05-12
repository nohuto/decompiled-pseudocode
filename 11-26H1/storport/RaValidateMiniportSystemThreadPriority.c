/*
 * XREFs of RaValidateMiniportSystemThreadPriority @ 0x140041880
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaValidateMiniportSystemThreadPriority(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  bool result; // al

  v1 = a1 - 7;
  result = 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      v3 = v2 - 4;
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
              if ( v6 != 3 )
                return 0;
            }
          }
        }
      }
    }
  }
  return result;
}
