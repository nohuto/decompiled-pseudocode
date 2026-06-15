/*
 * XREFs of sub_140042134 @ 0x140042134
 * Callers:
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14003AA5C @ 0x14003AA5C (sub_14003AA5C.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140042134(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  int v7; // ebx
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF

  v6 = *(_QWORD *)sub_140009AA8((_QWORD *)(a1 + 16), a2);
  v9 = 0LL;
  sub_1400B6010(a3);
  v7 = sub_1400B6010(v6);
  if ( v7 < 0 || (v7 = sub_14003AA5C(a1, v6, a2), v7 < 0) )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 20LL, &unk_1400C9A58);
    }
    sub_14005A470("CPipeInstance::CreateStreamInstance", 1151LL, (unsigned int)v7);
  }
  sub_140003238(&v9);
  return (unsigned int)v7;
}
