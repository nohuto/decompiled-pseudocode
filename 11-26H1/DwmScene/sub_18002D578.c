/*
 * XREFs of sub_18002D578 @ 0x18002D578
 * Callers:
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_1800336C8 @ 0x1800336C8 (sub_1800336C8.c)
 * Callees:
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18002D6A0 @ 0x18002D6A0 (sub_18002D6A0.c)
 */

void __fastcall sub_18002D578(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v4 = **(_QWORD **)(a1 + 88);
  v8 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    v5 = sub_180013440(v7, v4 + 32);
    sub_18002D6A0(a1, a2, v5);
    sub_18001D6F4(&v8, v6);
    v4 = v8;
  }
}
