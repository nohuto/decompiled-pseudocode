/*
 * XREFs of RtlStringCbLengthA @ 0x14059A6E8
 * Callers:
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1405D0A40 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     KiValidateComponentName @ 0x1405EB48C (KiValidateComponentName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthA(STRSAFE_PCNZCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // r9
  size_t v4; // r10
  size_t i; // r10
  NTSTATUS result; // eax

  v3 = 0LL;
  v4 = 0LL;
  if ( psz && cbMax <= 0x7FFFFFFF )
  {
    for ( i = cbMax; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    result = i == 0 ? 0xC000000D : 0;
    v4 = (cbMax - i) & -(__int64)(i != 0);
  }
  else
  {
    result = -1073741811;
  }
  if ( pcbLength )
  {
    if ( result >= 0 )
      v3 = v4;
    *pcbLength = v3;
  }
  return result;
}
