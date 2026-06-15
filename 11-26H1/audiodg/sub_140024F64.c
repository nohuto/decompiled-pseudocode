/*
 * XREFs of sub_140024F64 @ 0x140024F64
 * Callers:
 *     sub_140024540 @ 0x140024540 (sub_140024540.c)
 *     sub_140024B0C @ 0x140024B0C (sub_140024B0C.c)
 * Callees:
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140024F64(__int64 a1)
{
  int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v3; // rax
  int v5; // eax

  v1 = 0;
  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v3 = v2[2];
      v2 = (_QWORD *)*v2;
      if ( *(_DWORD *)(v3 + 40) == 1 )
      {
        v5 = sub_1400B6010(**(_QWORD **)(v3 + 32));
        if ( v5 < 0 || (v5 = sub_1400B6010(0LL), v5 < 0) )
          v1 = v5;
      }
    }
    while ( v2 );
    if ( v1 < 0 )
    {
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 52LL, &unk_1400C9A58);
      }
      sub_14005A470("CPipeInstance::Stop", 4186LL, (unsigned int)v1);
    }
  }
  return (unsigned int)v1;
}
