/*
 * XREFs of ?IdInVariant@EndpointInfo@@QEBA_NPEBGAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x1800F389C
 * Callers:
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800F0F9C (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall EndpointInfo::IdInVariant(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned int i; // ebx

  if ( *(_WORD *)a3 == 4127 && *a2 )
  {
    for ( i = 0; i < *(_DWORD *)(a3 + 8); ++i )
    {
      if ( !(unsigned int)_o__wcsicmp(a2, *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * i)) )
        return 1;
    }
  }
  return 0;
}
