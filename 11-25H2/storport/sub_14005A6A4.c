/*
 * XREFs of sub_14005A6A4 @ 0x14005A6A4
 * Callers:
 *     sub_140055590 @ 0x140055590 (sub_140055590.c)
 *     sub_14005F3C8 @ 0x14005F3C8 (sub_14005F3C8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14005A6A4(_DWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rcx

  if ( *a1 == 1314275652 )
  {
    v2 = (__int64)a1 + 249;
  }
  else if ( *a1 == 1094997074 )
  {
    v2 = (__int64)a1 + 457;
  }
  else
  {
    v2 = 73LL;
  }
  if ( a2 < 8u )
    return *(_BYTE *)(a2 + v2);
  else
    return -1;
}
