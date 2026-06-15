/*
 * XREFs of sub_140033368 @ 0x140033368
 * Callers:
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 * Callees:
 *     sub_140030D48 @ 0x140030D48 (sub_140030D48.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14004B6D4 @ 0x14004B6D4 (sub_14004B6D4.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140033368(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  bool v6; // zf
  unsigned int v7; // edi

  v4 = sub_140049338(64LL, &unk_1400C75FC);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)a1 == 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 24) = !v6;
    *(_QWORD *)v4 = off_1400BA570;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_DWORD *)(v4 + 40) = 3;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_DWORD *)(v4 + 56) = 0;
    v7 = sub_14004B6D4(
           *(_QWORD *)(a1 + 128),
           (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 128) + 16LL) + 18,
           v4 + 48);
    if ( (v7 & 0x80000000) == 0 )
    {
      *(_DWORD *)(v5 + 56) = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(v5 + 60) = *(_DWORD *)a1;
      sub_140030D48((_QWORD *)(v5 + 8), (_QWORD *)(v5 + 48));
      sub_140030D48((_QWORD *)(v5 + 16), (_QWORD *)(v5 + 48));
      *a2 = v5;
      return v7;
    }
    sub_1400B6010(v5);
  }
  else
  {
    v7 = -2147024882;
  }
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 16LL, &unk_1400CA218);
  }
  sub_14005A470("CStreamProcessNode::CreateStreamProcessNode", 430LL, v7);
  return v7;
}
