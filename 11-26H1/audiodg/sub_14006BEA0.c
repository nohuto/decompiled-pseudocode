/*
 * XREFs of sub_14006BEA0 @ 0x14006BEA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 */

__int64 __fastcall sub_14006BEA0(__int64 a1, _DWORD *a2, _OWORD *a3, _DWORD *a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  _OWORD *v9; // rax

  v5 = 0;
  if ( a2 && a3 && a4 && a5 )
  {
    v9 = CoTaskMemAlloc(0x20uLL);
    if ( v9 )
    {
      *v9 = xmmword_1400C7CC8;
      v9[1] = xmmword_1400C7FB8;
      *a5 = v9;
      *a4 = 2;
      *a2 = 17;
      *a3 = xmmword_1400C7DB0;
      return v5;
    }
    v5 = -2147024882;
  }
  else
  {
    v5 = -2147467261;
  }
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0xBu, (__int64)&unk_1400CA258, v5);
  }
  sub_14005A470("CProtectedOutputController::GetDescription", 137, v5);
  return v5;
}
