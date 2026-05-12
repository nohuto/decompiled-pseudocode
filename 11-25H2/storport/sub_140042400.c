/*
 * XREFs of sub_140042400 @ 0x140042400
 * Callers:
 *     DoScreenSave @ 0x14003A05C (DoScreenSave.c)
 *     sub_14007197C @ 0x14007197C (sub_14007197C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140042400(__int64 a1, int a2)
{
  int v2; // r8d
  char result; // al

  v2 = *(_DWORD *)(a1 + 376);
  result = 0;
  if ( v2 )
  {
    if ( a2 < v2 )
      return *(_BYTE *)(a2 + a1 + 380);
  }
  return result;
}
