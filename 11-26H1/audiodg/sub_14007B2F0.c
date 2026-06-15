/*
 * XREFs of sub_14007B2F0 @ 0x14007B2F0
 * Callers:
 *     sub_14007B240 @ 0x14007B240 (sub_14007B240.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14007B2F0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5, _BYTE *a6)
{
  __int64 i; // rcx

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    if ( a4 == *(_QWORD *)(a2 + 8 * i) )
    {
      *a6 = 1;
      *a5 = i;
      return 0LL;
    }
  }
  return 0LL;
}
