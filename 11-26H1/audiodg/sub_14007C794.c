/*
 * XREFs of sub_14007C794 @ 0x14007C794
 * Callers:
 *     sub_140079924 @ 0x140079924 (sub_140079924.c)
 *     sub_14007B708 @ 0x14007B708 (sub_14007B708.c)
 *     sub_14007B83C @ 0x14007B83C (sub_14007B83C.c)
 *     sub_14007CD34 @ 0x14007CD34 (sub_14007CD34.c)
 *     sub_14007E6CC @ 0x14007E6CC (sub_14007E6CC.c)
 * Callees:
 *     sub_140038A9C @ 0x140038A9C (sub_140038A9C.c)
 */

char __fastcall sub_14007C794(__int16 *a1, const void **a2, unsigned __int64 a3)
{
  char *v5; // r8
  char *v7; // rbp
  __int16 v8; // ax
  char *v9; // rbp
  char *v10; // rcx
  char result; // al
  unsigned __int16 v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = (char *)*a2;
  if ( *((_BYTE *)a1 + 2) == 1 )
  {
    v7 = v5 + 2;
    if ( (unsigned __int64)(v5 + 2) > a3 )
      return 0;
    *((_QWORD *)a1 + 2) = v5;
    v12 = 0;
    sub_140038A9C(&v12, 2uLL, v5, 2uLL);
    *((_DWORD *)a1 + 1) = v12;
  }
  else
  {
    if ( *((_BYTE *)a1 + 2) != 2 )
      goto LABEL_8;
    v7 = v5 + 4;
    if ( (unsigned __int64)(v5 + 4) > a3 )
      return 0;
    *((_QWORD *)a1 + 2) = v5;
    sub_140038A9C(a1 + 2, 4uLL, v5, 4uLL);
  }
  v5 = v7;
LABEL_8:
  v8 = *a1;
  a1[4] = *a1;
  if ( v8 )
    goto LABEL_11;
  v9 = v5 + 2;
  if ( (unsigned __int64)(v5 + 2) > a3 )
    return 0;
  sub_140038A9C(a1 + 4, 2uLL, v5, 2uLL);
  v5 = v9;
LABEL_11:
  v10 = &v5[(unsigned __int16)a1[4]];
  if ( (unsigned __int64)v10 > a3 )
    return 0;
  *((_QWORD *)a1 + 3) = v5;
  result = 1;
  *a2 = v10;
  return result;
}
