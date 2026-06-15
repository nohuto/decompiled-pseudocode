/*
 * XREFs of sub_14007CF28 @ 0x14007CF28
 * Callers:
 *     sub_14007C880 @ 0x14007C880 (sub_14007C880.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 *     sub_14004E4C8 @ 0x14004E4C8 (sub_14004E4C8.c)
 *     sub_140077B60 @ 0x140077B60 (sub_140077B60.c)
 *     sub_14007B708 @ 0x14007B708 (sub_14007B708.c)
 *     sub_14007E5B4 @ 0x14007E5B4 (sub_14007E5B4.c)
 *     sub_14007FE20 @ 0x14007FE20 (sub_14007FE20.c)
 *     sub_14007FE98 @ 0x14007FE98 (sub_14007FE98.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_14007CF28(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  int v7; // edx
  int v8; // r8d
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int result; // eax
  char v12; // bl
  int v13; // r9d
  int v14; // r9d
  void *v15; // rcx
  void *v16; // rcx
  int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[24]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+80h] [rbp-80h]
  void *v26; // [rsp+90h] [rbp-70h]
  char v27; // [rsp+98h] [rbp-68h]
  char v28; // [rsp+99h] [rbp-67h]
  _BYTE v29[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v30[15]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v31[4096]; // [rsp+120h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1 + 8 * a2;
  v6 = 0LL;
  v22 = 0LL;
  while ( 1 )
  {
    sub_140077B60(
      (__int64)v23,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v19 = 0;
    v20 = 4096;
    v9 = sub_14007FE20(v4, v7, v8, (unsigned int)&v19, (__int64)v31, (__int64)&v20);
    sub_14004E4C8(v9);
    if ( v9 )
    {
      v10 = 0;
      v20 = 0;
      v19 = 0;
    }
    else
    {
      v10 = v20;
    }
    result = sub_14007E5B4(v23, v31, v10, 4096LL);
    if ( v28 )
      break;
    v21 = 0LL;
    v30[0] = off_1400BDB28;
    v30[1] = &v21;
    v30[2] = &v22;
    v30[3] = v23;
    v30[13] = v30;
    v12 = sub_14007B708(a3, (__int64)v29);
    if ( v27 )
    {
      result = sub_14007FE98(v4, v24, v25 - (int)v24, v13, v17, v19, 1);
      if ( result == -1073741823 )
      {
        ++v6;
        v12 = 0;
        goto LABEL_11;
      }
      if ( result )
        sub_14007FE98(v4, v24, v25 - v24, v14, v18, 0, 0);
    }
    v4 += 8LL;
    result = v21;
    v22 = v21;
LABEL_11:
    v15 = v26;
    v26 = 0LL;
    if ( v15 )
      result = sub_14004DB08(v15);
    if ( v12 || v4 >= v5 || v6 >= 0x32 )
      return result;
  }
  v16 = v26;
  v26 = 0LL;
  if ( v16 )
    return sub_14004DB08(v16);
  return result;
}
