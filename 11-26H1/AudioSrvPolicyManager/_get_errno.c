/*
 * XREFs of _get_errno @ 0x180030942
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001700C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl get_errno(int *Value)
{
  return _o__get_errno(Value);
}
