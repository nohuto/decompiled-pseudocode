/*
 * XREFs of sub_14006AEEC @ 0x14006AEEC
 * Callers:
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 * Callees:
 *     sub_140030D48 @ 0x140030D48 (sub_140030D48.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14004B6D4 @ 0x14004B6D4 (sub_14004B6D4.c)
 *     sub_14005A010 @ 0x14005A010 (sub_14005A010.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006AEEC(__int64 a1, wchar_t *a2, _QWORD *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  int v8; // ecx
  __int64 v9; // rsi
  int v10; // edi
  _UNKNOWN **v11; // rcx
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v6 = sub_140049338(56LL, (__int64)&unk_1400C75FC);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    v8 = *(_DWORD *)(a1 + 72);
    v9 = v6;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_DWORD *)(v6 + 24) = v8;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_DWORD *)(v6 + 40) = 1;
    *(_QWORD *)v6 = off_1400B8000;
    *(_QWORD *)(v6 + 48) = 0LL;
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
    {
      sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 0xDu, (__int64)&unk_1400CA218);
    }
    v10 = sub_140067874(a1, a2, &v13);
    if ( v10 >= 0 )
    {
      v7[4] = v13;
      v10 = sub_14004B6D4(
              *(_QWORD *)(a1 + 8),
              (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 16LL) + 18,
              v7 + 6);
      if ( v10 >= 0 )
      {
        sub_140030D48(v7 + 1, v7 + 6);
        sub_140030D48(v7 + 2, v7 + 6);
        *a3 = v7;
        return (unsigned int)v10;
      }
    }
  }
  else
  {
    v9 = 0LL;
    v10 = -2147024882;
  }
  v11 = (_UNKNOWN **)off_1400E73D8;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0xEu, (__int64)&unk_1400CA218, v10);
    v11 = (_UNKNOWN **)off_1400E73D8;
  }
  if ( v9 )
  {
    sub_1400B6010(v9);
    v11 = (_UNKNOWN **)off_1400E73D8;
  }
  if ( v11 != &off_1400E73D8 && (*((_DWORD *)v11 + 7) & 0x20000) != 0 && *((_BYTE *)v11 + 25) >= 2u )
    sub_14005A040((__int64)v11[2], 0xFu, (__int64)&unk_1400CA218, v10);
  sub_14005A470("CDeviceProcessNode::CreateDeviceProcessNode", 367, v10);
  return (unsigned int)v10;
}
