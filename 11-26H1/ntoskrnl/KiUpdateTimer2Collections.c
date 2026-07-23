/*
 * XREFs of KiUpdateTimer2Collections @ 0x1404B9030
 * Callers:
 *     KiExpireTimer2 @ 0x140338F88 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateTimer2Collections(_BYTE *a1)
{
  char *v1; // rdx
  char v2; // r8
  __int64 v3; // r9
  char result; // al

  v1 = byte_140019591;
  v2 = a1[129] & 0x3E;
  v3 = 9LL;
  do
  {
    if ( *(v1 - 1) == v2 )
    {
      a1[130] = *v1;
      result = v1[1];
      a1[131] = result;
    }
    v1 += 3;
    --v3;
  }
  while ( v3 );
  return result;
}
