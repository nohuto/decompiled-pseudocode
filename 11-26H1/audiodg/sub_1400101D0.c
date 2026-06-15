/*
 * XREFs of sub_1400101D0 @ 0x1400101D0
 * Callers:
 *     sub_140018580 @ 0x140018580 (sub_140018580.c)
 * Callees:
 *     sub_140010230 @ 0x140010230 (sub_140010230.c)
 */

__int64 __fastcall sub_1400101D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  _DWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 216);
  v7[1] = 0;
  v8 = v3;
  v11 = *(_QWORD *)(a1 + 8);
  LODWORD(v3) = *(_DWORD *)(a1 + 256);
  v10 = a3;
  v9 = a2;
  v5 = *(_QWORD *)(a1 + 264);
  v7[0] = v3;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *))sub_140010230)(a1 + 272, v5, a2, v7);
}
