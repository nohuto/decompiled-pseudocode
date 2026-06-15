/*
 * XREFs of sub_14001DD58 @ 0x14001DD58
 * Callers:
 *     sub_14001DCF4 @ 0x14001DCF4 (sub_14001DCF4.c)
 * Callees:
 *     sub_140015C58 @ 0x140015C58 (sub_140015C58.c)
 *     sub_14003D900 @ 0x14003D900 (sub_14003D900.c)
 *     sub_140052748 @ 0x140052748 (sub_140052748.c)
 *     sub_140059318 @ 0x140059318 (sub_140059318.c)
 *     sub_140059BCC @ 0x140059BCC (sub_140059BCC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001DD58(__int64 a1, int a2)
{
  __int64 v3; // rax
  void *v4; // rcx
  __int64 result; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v3 = sub_140052748(v6, a1, &v7);
  *(_DWORD *)(a1 + 112) = sub_140059318(v3);
  v4 = *(void **)(a1 + 128);
  if ( v4 )
    sub_140015C58(v4);
  result = *(unsigned int *)(a1 + 112);
  if ( (_DWORD)result )
  {
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    sub_14003D900(a1);
  }
  return sub_140059BCC(a1);
}
