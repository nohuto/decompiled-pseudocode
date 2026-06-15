/*
 * XREFs of sub_14006EE30 @ 0x14006EE30
 * Callers:
 *     sub_14006ED80 @ 0x14006ED80 (sub_14006ED80.c)
 * Callees:
 *     sub_14000DC30 @ 0x14000DC30 (sub_14000DC30.c)
 *     sub_140027C70 @ 0x140027C70 (sub_140027C70.c)
 *     sub_140027D7C @ 0x140027D7C (sub_140027D7C.c)
 *     _o_wmemcpy_s @ 0x14004A688 (_o_wmemcpy_s.c)
 *     sub_14006EF60 @ 0x14006EF60 (sub_14006EF60.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006EE30(__int64 *a1, HMODULE a2, unsigned int a3)
{
  HRSRC Resource; // rax
  unsigned __int16 *v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // rdx

  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( !Resource )
    return 0LL;
  v6 = (unsigned __int16 *)sub_14006EF60(a2, Resource);
  if ( !v6 )
    return 0LL;
  v7 = *v6;
  if ( (((*(_DWORD *)(*a1 - 12) - v7) | (1 - *(_DWORD *)(*a1 - 8))) & 0x80000000) != 0 )
    sub_140027D7C(a1, v7);
  v8 = o_wmemcpy_s();
  sub_14000DC30(v8, v9);
  sub_140027C70(a1, v7);
  return 1LL;
}
