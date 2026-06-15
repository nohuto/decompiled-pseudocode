/*
 * XREFs of sub_14007F0E0 @ 0x14007F0E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14007B620 @ 0x14007B620 (sub_14007B620.c)
 */

__int64 __fastcall sub_14007F0E0(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int8 v4; // r8
  int v5; // r9d
  unsigned int v6; // edx
  bool v7; // al
  unsigned int v8; // ecx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v4 = 1;
  v5 = (a2 >> 7) & 1;
  v6 = a2 & 0xFFFFFF7F;
  if ( v6 != 3 )
    v4 = v6 == 2;
  v11 = 0LL;
  v10 = 0LL;
  v7 = sub_14007B620((__int64)&v10, a1, v4, v5, a3);
  v8 = 0;
  if ( v7 )
    v8 = v10;
  if ( (_DWORD)v11 )
    v8 |= 0x80u;
  if ( HIDWORD(v11) )
    v8 |= 0x40u;
  return v8;
}
