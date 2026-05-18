/*
 * XREFs of sub_180052C64 @ 0x180052C64
 * Callers:
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_1800C25BC @ 0x1800C25BC (sub_1800C25BC.c)
 *     sub_1800C26E0 @ 0x1800C26E0 (sub_1800C26E0.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 */

_QWORD *__fastcall sub_180052C64(_QWORD *a1, _DWORD *a2, int *a3, int *a4, int *a5, int *a6)
{
  _DWORD *v10; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // r11d
  int v14; // r9d

  v10 = (_DWORD *)sub_18001C514(28LL);
  if ( v10 )
  {
    v11 = *a4;
    v12 = *a3;
    v13 = *a6;
    v14 = *a5;
    *v10 = *a2;
    v10[2] = 1;
    v10[3] = 1;
    v10[1] = v12;
    v10[4] = v11;
    v10[5] = v14;
    v10[6] = v13;
  }
  *a1 = v10;
  return a1;
}
