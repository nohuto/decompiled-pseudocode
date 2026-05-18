/*
 * XREFs of sub_18003053C @ 0x18003053C
 * Callers:
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003053C(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rax

  v2 = (_QWORD *)sub_18001C514(120LL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x78uLL);
    *(_BYTE *)v3 = 0;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v4 = sub_180011790(0xA8uLL);
    *(_QWORD *)v4 = v4;
    *(_QWORD *)(v4 + 8) = v4;
    *(_QWORD *)(v4 + 16) = v4;
    *(_WORD *)(v4 + 24) = 257;
    v3[2] = v4;
    v3[14] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
