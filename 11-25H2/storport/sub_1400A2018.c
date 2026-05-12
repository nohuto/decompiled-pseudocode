/*
 * XREFs of sub_1400A2018 @ 0x1400A2018
 * Callers:
 *     sub_140052634 @ 0x140052634 (sub_140052634.c)
 *     sub_14009A35C @ 0x14009A35C (sub_14009A35C.c)
 * Callees:
 *     sub_14017BF24 @ 0x14017BF24 (sub_14017BF24.c)
 */

__int64 __fastcall sub_1400A2018(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 result; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  v6 = 0;
  if ( a2 )
  {
    v2 = *(_DWORD *)(a2 + 184);
    if ( v2 )
    {
      v4[0] = *(_QWORD *)(a2 + 168);
      v4[1] = *(_QWORD *)(a2 + 176);
      v5 = v2;
      return sub_14017BF24(a1, v4);
    }
  }
  return result;
}
