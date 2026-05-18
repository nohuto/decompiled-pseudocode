/*
 * XREFs of sub_18003EC38 @ 0x18003EC38
 * Callers:
 *     sub_180040BE4 @ 0x180040BE4 (sub_180040BE4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180028BA0 @ 0x180028BA0 (sub_180028BA0.c)
 *     sub_18003E8AC @ 0x18003E8AC (sub_18003E8AC.c)
 *     sub_18003EC08 @ 0x18003EC08 (sub_18003EC08.c)
 *     sub_18003F270 @ 0x18003F270 (sub_18003F270.c)
 *     sub_18003F558 @ 0x18003F558 (sub_18003F558.c)
 *     sub_180041964 @ 0x180041964 (sub_180041964.c)
 *     sub_180041A40 @ 0x180041A40 (sub_180041A40.c)
 *     sub_180041BD4 @ 0x180041BD4 (sub_180041BD4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003EC38(float *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v6 = sub_18003F558(a3);
  sub_18003E8AC(a1, &v18, a3, v6);
  if ( *((_QWORD *)&v18 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v18 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v17[0] = a1 + 2;
    v7 = sub_180028BA0(1uLL);
    v8 = sub_180011790(v7);
    v17[1] = v8;
    sub_18003EC08(v9, (_QWORD *)(v8 + 16), a3);
    v10 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = *((_QWORD *)a1 + 7);
    if ( v12 < 0 )
    {
      v14 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v12 >> 1);
      v13 = (float)(int)v14 + (float)(int)v14;
    }
    else
    {
      v13 = (float)(int)v12;
    }
    if ( (float)(v11 / v13) > *a1 )
    {
      v15 = sub_180041964(a1);
      sub_180041A40(a1, v15);
      v18 = *(_OWORD *)sub_18003E8AC(a1, &v18, (_QWORD *)(v8 + 16), v6);
    }
    *(_QWORD *)a2 = sub_180041BD4(a1, v6, v18, v8, v17[0], 0LL);
    *(_BYTE *)(a2 + 8) = 1;
    sub_18003F270(v17);
  }
  return a2;
}
