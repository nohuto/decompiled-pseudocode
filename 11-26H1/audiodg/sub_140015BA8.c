/*
 * XREFs of sub_140015BA8 @ 0x140015BA8
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 *     sub_1400156A0 @ 0x1400156A0 (sub_1400156A0.c)
 *     sub_140015930 @ 0x140015930 (sub_140015930.c)
 * Callees:
 *     sub_140013B80 @ 0x140013B80 (sub_140013B80.c)
 *     sub_14001502C @ 0x14001502C (sub_14001502C.c)
 */

int __fastcall sub_140015BA8(__int64 a1)
{
  int result; // eax
  void *v3; // rcx
  int v4; // ecx
  __int64 v5; // [rsp+28h] [rbp-10h]

  result = sub_14001502C(a1 + 448);
  v3 = *(void **)(a1 + 248);
  *(_QWORD *)(a1 + 4648) = 0LL;
  *(_QWORD *)(a1 + 4656) = 0LL;
  if ( v3 )
  {
    result = RtwqCancelDeadline(v3);
    *(_QWORD *)(a1 + 248) = 0LL;
    if ( (byte_1400E8401 & 8) != 0 )
    {
      LODWORD(v5) = result;
      return sub_140013B80(v4, (int)&unk_1400C57F0, a1, *(_DWORD *)(a1 + 244), 0LL, v5);
    }
  }
  return result;
}
