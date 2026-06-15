/*
 * XREFs of sub_140024B0C @ 0x140024B0C
 * Callers:
 *     sub_1400240A0 @ 0x1400240A0 (sub_1400240A0.c)
 * Callees:
 *     sub_140024F64 @ 0x140024F64 (sub_140024F64.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140024B0C(__int64 a1)
{
  int v2; // ebx
  _QWORD *v3; // rsi
  __int64 v4; // rax

  v2 = 0;
  if ( !*(_DWORD *)(a1 + 124) )
  {
    v3 = *(_QWORD **)(a1 + 16);
    while ( v3 )
    {
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      if ( *(_DWORD *)(v4 + 40) == 1 )
      {
        v2 = sub_1400B6010(**(_QWORD **)(v4 + 32));
        if ( v2 < 0 || (v2 = sub_1400B6010(0LL), v2 < 0) )
        {
          sub_140024F64(a1);
          if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
            && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
            && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
          {
            sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 51LL, &unk_1400C9A58);
          }
          sub_14005A470("CPipeInstance::Start", 4122LL, (unsigned int)v2);
          return (unsigned int)v2;
        }
      }
    }
  }
  return (unsigned int)v2;
}
