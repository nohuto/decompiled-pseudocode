/*
 * XREFs of sub_140111898 @ 0x140111898
 * Callers:
 *     sub_140111A1C @ 0x140111A1C (sub_140111A1C.c)
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_14010171C @ 0x14010171C (sub_14010171C.c)
 */

char __fastcall sub_140111898(__int64 a1)
{
  ULONG v2; // ebx
  unsigned int v3; // esi
  char v4; // di

  v2 = 1000;
  v3 = 0;
  while ( 1 )
  {
    v4 = 1;
    if ( !sub_14010171C(a1) )
      break;
    sub_14002CDD0(v2);
    v3 += v2;
    if ( v3 >= 0x989680 )
      return 0;
    if ( v2 < 0x186A0 )
    {
      v2 *= 2;
      if ( v2 >= 0x186A0 )
        v2 = 100000;
    }
  }
  return v4;
}
