/*
 * XREFs of sub_180015D60 @ 0x180015D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_18003CE80 @ 0x18003CE80 (sub_18003CE80.c)
 *     sub_180040AAC @ 0x180040AAC (sub_180040AAC.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180015D60(__int64 a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // edi
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-29h] BYREF
  __int64 v13; // [rsp+28h] [rbp-21h]
  __int64 v14; // [rsp+30h] [rbp-19h] BYREF
  __int64 v15; // [rsp+38h] [rbp-11h]
  _BYTE v16[16]; // [rsp+40h] [rbp-9h] BYREF
  _OWORD v17[5]; // [rsp+50h] [rbp+7h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = (_QWORD *)sub_18001367C(*(_QWORD *)(a1 + 32), &v12);
  sub_180029C50(*v4 + 16LL, v16);
  v5 = 0;
  if ( v13 )
    sub_180010EC8(v13);
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  v17[0] = *a2;
  v17[1] = v6;
  v17[2] = v7;
  v17[3] = v8;
  if ( (unsigned __int8)sub_18003CE80(*(_QWORD *)(a1 + 32), v17) )
  {
    v9 = *(_QWORD *)sub_18001367C(*(_QWORD *)(a1 + 32), &v14);
    v10 = sub_180013440(v17, (__int64)&unk_1801C9038);
    sub_180040AAC(v9, v10);
    if ( v15 )
      sub_180010EC8(v15);
  }
  else
  {
    v5 = -2147024809;
    sub_1800102C4(
      retaddr,
      122LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      2147942487LL);
  }
  sub_180011E54((__int64)v16);
  return v5;
}
