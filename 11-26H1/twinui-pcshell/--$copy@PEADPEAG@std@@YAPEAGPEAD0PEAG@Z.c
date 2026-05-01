/*
 * XREFs of ??$copy@PEADPEAG@std@@YAPEAGPEAD0PEAG@Z @ 0x18023AD84
 * Callers:
 *     ??$hstring_convert@I@impl@winrt@@YA?AUhstring@1@I@Z @ 0x180289BDC (--$hstring_convert@I@impl@winrt@@YA-AUhstring@1@I@Z.c)
 *     ??$hstring_convert@H@impl@winrt@@YA?AUhstring@1@H@Z @ 0x180671798 (--$hstring_convert@H@impl@winrt@@YA-AUhstring@1@H@Z.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::copy<char *,unsigned short *>(char *a1, char *a2, _WORD *a3)
{
  _WORD *result; // rax

  result = a3;
  while ( a1 != a2 )
    *result++ = *a1++;
  return result;
}
