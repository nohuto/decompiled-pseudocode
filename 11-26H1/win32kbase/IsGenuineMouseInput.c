/*
 * XREFs of IsGenuineMouseInput @ 0x140121AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGenuineMouseInput(_DWORD *a1)
{
  int v1; // edx
  __int64 result; // rax

  if ( *a1 == 2 )
  {
    if ( a1[1] == 4 )
      return 1LL;
  }
  else if ( ((*a1 - 18) & 0xFFFFFFEF) != 0 )
  {
    return 0LL;
  }
  v1 = a1[1];
  result = 1LL;
  if ( v1 != 1 && v1 != 2 )
    return 0LL;
  return result;
}
