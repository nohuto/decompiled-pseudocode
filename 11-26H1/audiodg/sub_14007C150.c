/*
 * XREFs of sub_14007C150 @ 0x14007C150
 * Callers:
 *     sub_14007C1F0 @ 0x14007C1F0 (sub_14007C1F0.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14007C150(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  _DWORD *v9; // r10
  __int64 v10; // r11

  v3 = 0;
  *a3 = 0LL;
  if ( sub_14001FC10(a2, &stru_1400C6598) || sub_14001FC10(v4, &dword_1400C6698) )
  {
    *v5 = v6;
    goto LABEL_9;
  }
  if ( sub_14001FC10(v7, &xmmword_1400CBA20) )
  {
    v10 = v6;
LABEL_6:
    *v8 = v10;
LABEL_9:
    sub_1400B6010(v6);
    return v3;
  }
  if ( sub_14001FC10(v9, &xmmword_1400C6688) )
    goto LABEL_6;
  return (unsigned int)-2147467262;
}
