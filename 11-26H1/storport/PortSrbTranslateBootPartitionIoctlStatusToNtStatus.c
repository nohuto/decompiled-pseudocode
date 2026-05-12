/*
 * XREFs of PortSrbTranslateBootPartitionIoctlStatusToNtStatus @ 0x14005F620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PortSrbTranslateBootPartitionIoctlStatusToNtStatus(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
      return 2147483653LL;
    result = 0LL;
    if ( !a1 )
      return result;
    v2 = a1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( !v3 )
        return 3221225501LL;
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          return 3221225990LL;
        return 3221225473LL;
      }
      return 3221225485LL;
    }
    return 3221225473LL;
  }
  v5 = a1 - 6;
  if ( !v5 )
    return 3221226628LL;
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
      return 3221225485LL;
    if ( v7 == 1 )
      return 3221225506LL;
    return 3221225473LL;
  }
  return 3221226629LL;
}
