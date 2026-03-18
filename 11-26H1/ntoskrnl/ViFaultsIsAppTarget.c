/*
 * XREFs of ViFaultsIsAppTarget @ 0x140C34F34
 * Callers:
 *     ViCreateProcessCallbackInternal @ 0x140C34B80 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140C34CA0 (ViFaultsAddAppNoDuplicates.c)
 * Callees:
 *     VfUtilEqualUnicodeString @ 0x140C202E8 (VfUtilEqualUnicodeString.c)
 */

__int64 __fastcall ViFaultsIsAppTarget(__int64 a1)
{
  const void **v1; // rbx
  unsigned int v2; // edi

  v1 = (const void **)ViFaultApplicationsList;
  v2 = 0;
  if ( !ViFaultApplicationsList || ViFaultApplicationsList == &ViFaultApplicationsList )
    return 0LL;
  while ( v1 != (const void **)&ViFaultApplicationsList )
  {
    if ( VfUtilEqualUnicodeString(v1 + 2, a1) )
      return 1;
    v1 = (const void **)*v1;
  }
  return v2;
}
