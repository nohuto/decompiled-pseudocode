/*
 * XREFs of sub_18008D72C @ 0x18008D72C
 * Callers:
 *     sub_18008C9EC @ 0x18008C9EC (sub_18008C9EC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18008D72C(__int128 *a1, __int128 *a2)
{
  __int128 v2; // xmm1

  while ( a1 != a2 )
  {
    if ( a1 == --a2 )
      break;
    v2 = *a1;
    *a1++ = *a2;
    *a2 = v2;
  }
}
