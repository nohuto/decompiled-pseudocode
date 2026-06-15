/*
 * XREFs of sub_14004375C @ 0x14004375C
 * Callers:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14004375C(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( *(_DWORD *)(a1 + 120) && (int)sub_1400B6010(a3) >= 0 )
  {
    if ( *(_QWORD *)(a1 + 176) != v7 )
      sub_1400115FC((_QWORD *)(a1 + 176), v7);
    v5 = sub_1400B6010(a3);
    if ( v5 < 0 )
    {
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 46LL, &unk_1400C9A58);
      }
      sub_14005A470("CPipeInstance::InitializeLoopbackConstrictorInterface", 3736LL, (unsigned int)v5);
    }
  }
  else
  {
    v5 = 0;
  }
  sub_140003238(&v7);
  return (unsigned int)v5;
}
