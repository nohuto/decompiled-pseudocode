/*
 * XREFs of IvtGetScalableModePasidTables @ 0x1405A91D8
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x140BF6684 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall IvtGetScalableModePasidTables(__int64 a1, int a2)
{
  __int64 *result; // rax
  __int64 v3; // r8
  __int64 **v4; // rcx
  __int64 *i; // rax

  result = 0LL;
  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 320) )
  {
    v4 = (__int64 **)(a1 + 56);
    for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 10) == a2 )
        return i;
    }
    return (__int64 *)v3;
  }
  return result;
}
