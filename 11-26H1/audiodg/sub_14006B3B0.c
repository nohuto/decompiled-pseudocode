/*
 * XREFs of sub_14006B3B0 @ 0x14006B3B0
 * Callers:
 *     sub_14006B0D0 @ 0x14006B0D0 (sub_14006B0D0.c)
 * Callees:
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_140068234 @ 0x140068234 (sub_140068234.c)
 *     sub_140068AA8 @ 0x140068AA8 (sub_140068AA8.c)
 */

__int64 __fastcall sub_14006B3B0(
        __int64 a1,
        int *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        _OWORD *a9)
{
  bool v9; // zf
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v9 = (a2[34] & 0x800000) == 0;
  v14 = 0LL;
  if ( v9 )
    v11 = sub_140068AA8(a2, a4, a5, a6, a9, a7, (__int64)a8, &v14);
  else
    v11 = sub_140068234(a2, a4, a5, a6, (__int64)a9, a7, a8, &v14);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0x11u, (__int64)&unk_1400CA218, v11);
    }
    sub_14005A470("CStreamProcessNode::CreateStreamInstance", 510, v12);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v14;
  }
  return v12;
}
