/*
 * XREFs of sub_14009DB74 @ 0x14009DB74
 * Callers:
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     sub_1400A10B8 @ 0x1400A10B8 (sub_1400A10B8.c)
 * Callees:
 *     sub_14000C020 @ 0x14000C020 (sub_14000C020.c)
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_14000EE58 @ 0x14000EE58 (sub_14000EE58.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 */

__int64 __fastcall sub_14009DB74(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int8 v4; // dl
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = (unsigned int)sub_14000EE58(a1 + 704);
  sub_14000D760(a1, 4);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    v4 = *(_BYTE *)(v3 + 56);
  else
    v4 = -1;
  if ( (qword_140168458 & 0x200) != 0 )
    sub_14000FB90(
      *(_QWORD *)(a1 + 24),
      5,
      retaddr,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | (unsigned __int64)(((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104)) | (((unsigned __int8)*(_DWORD *)(a1 + 104) | (v4 << 8)) << 8)) << 8),
      *(int *)(a1 + 744),
      v2,
      0LL);
  if ( (_DWORD)v2 )
    sub_14000C020(a1, 0);
  return (unsigned int)v2;
}
