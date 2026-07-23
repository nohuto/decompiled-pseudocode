/*
 * XREFs of AuthzBasepObjectInTypeList @ 0x140491038
 * Callers:
 *     SepMaximumAccessCheckEx @ 0x14051B700 (SepMaximumAccessCheckEx.c)
 *     SepExamineSaclEx @ 0x140A60770 (SepExamineSaclEx.c)
 * Callees:
 *     <none>
 */

char __fastcall AuthzBasepObjectInTypeList(_DWORD *a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 i; // r10

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a3 )
      return 0;
    if ( *a1 == *(_DWORD *)(a2 + 48 * i + 4)
      && a1[1] == *(_DWORD *)(a2 + 48 * i + 8)
      && a1[2] == *(_DWORD *)(a2 + 48 * i + 12)
      && a1[3] == *(_DWORD *)(a2 + 48 * i + 16) )
    {
      break;
    }
  }
  *a4 = i;
  return 1;
}
