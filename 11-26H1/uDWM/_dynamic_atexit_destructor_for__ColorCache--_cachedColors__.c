/*
 * XREFs of _dynamic_atexit_destructor_for__ColorCache::_cachedColors__ @ 0x1800E9C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *dynamic_atexit_destructor_for__ColorCache::_cachedColors__()
{
  _DWORD *result; // rax
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  char v2; // [rsp+28h] [rbp-10h]
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    RestartKey = 0LL;
    result = RtlEnumerateGenericTableWithoutSplaying(&ColorCache::_cachedColors, &RestartKey);
    if ( !result )
      break;
    Buffer[0] = *result;
    Buffer[1] = 0;
    v2 = 1;
    if ( !RtlDeleteElementGenericTable(&ColorCache::_cachedColors, Buffer) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
  return result;
}
