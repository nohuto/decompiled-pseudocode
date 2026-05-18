/*
 * XREFs of sub_1800401E4 @ 0x1800401E4
 * Callers:
 *     sub_180012E8C @ 0x180012E8C (sub_180012E8C.c)
 *     sub_18005F864 @ 0x18005F864 (sub_18005F864.c)
 *     sub_180076188 @ 0x180076188 (sub_180076188.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_18003E504 @ 0x18003E504 (sub_18003E504.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800401E4(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rdx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  sub_180029E54(a1 + 16);
  v4 = **(_QWORD **)(a1 + 88);
  v9 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    v5 = (__int64 *)sub_18004068C(*(_QWORD *)(v4 + 64), v7);
    sub_18003E504(a2, v5);
    if ( v8 )
      sub_180010EC8(v8);
    sub_18001D6F4(&v9, v6);
    v4 = v9;
  }
}
