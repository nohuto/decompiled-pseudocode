/*
 * XREFs of GenNamedValueInt @ 0x1401380EC
 * Callers:
 *     GenAssignNamespaceParams @ 0x140132220 (GenAssignNamespaceParams.c)
 *     GenDeassignNamespaceParams @ 0x140132280 (GenDeassignNamespaceParams.c)
 *     GenGetBandMetadataParams @ 0x1401322D0 (GenGetBandMetadataParams.c)
 *     GenSetBandMetadataParams @ 0x140132370 (GenSetBandMetadataParams.c)
 *     GenGetTableColumnParams @ 0x140133610 (GenGetTableColumnParams.c)
 *     GenActivateParams @ 0x140134410 (GenActivateParams.c)
 * Callees:
 *     GenInteger @ 0x140137E48 (GenInteger.c)
 *     GenNamedValueBegin @ 0x140138048 (GenNamedValueBegin.c)
 */

__int64 __fastcall GenNamedValueInt(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = GenNamedValueBegin(a1, a2);
  if ( (int)result >= 0 )
  {
    result = GenInteger(a1, a3);
    if ( (int)result >= 0 )
    {
      v6 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)(v6 + 1) <= *(_DWORD *)(a1 + 8) )
      {
        *(_BYTE *)(v6 + *(_QWORD *)a1) = -13;
        ++*(_DWORD *)(a1 + 12);
        return 0LL;
      }
      else
      {
        return 3221225507LL;
      }
    }
  }
  return result;
}
