/*
 * XREFs of sub_14006C240 @ 0x14006C240
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400588CC @ 0x1400588CC (sub_1400588CC.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006C240(__int64 a1, __int64 a2, signed int a3)
{
  signed int v4; // ebx
  _QWORD *v5; // r9
  __int64 v6; // rcx
  int v7; // edi

  v4 = 0;
  v5 = *(_QWORD **)(a1 + 16);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( v6 == a2 )
    {
      if ( v4 <= a3 )
        v4 = a3;
    }
    else if ( v4 <= *(_DWORD *)(v6 + 20) )
    {
      v4 = *(_DWORD *)(v6 + 20);
    }
  }
  v7 = 0;
  if ( v4 != *(_DWORD *)(a1 + 64) )
  {
    v7 = sub_1400588CC(*(_QWORD *)(a1 + 8), v4);
    if ( v7 < 0 )
    {
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0xCu, (__int64)&unk_1400CA258, v7);
      }
      sub_14005A470("CProtectedOutputController::RequestPolicyChange", 181, v7);
    }
    else
    {
      *(_DWORD *)(a1 + 64) = v4;
    }
  }
  return (unsigned int)v7;
}
