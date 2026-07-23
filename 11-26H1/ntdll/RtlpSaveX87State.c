/*
 * XREFs of RtlpSaveX87State @ 0x1800C9960
 * Callers:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 * Callees:
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void *__fastcall RtlpSaveX87State(__int64 a1)
{
  void *result; // rax
  __int64 v3; // xmm1_8
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // [rsp+20h] [rbp-218h] BYREF
  __int64 v13; // [rsp+30h] [rbp-208h]
  __int128 v14; // [rsp+40h] [rbp-1F8h]
  __int128 v15; // [rsp+50h] [rbp-1E8h]
  __int128 v16; // [rsp+60h] [rbp-1D8h]
  __int128 v17; // [rsp+70h] [rbp-1C8h]
  __int128 v18; // [rsp+80h] [rbp-1B8h]
  __int128 v19; // [rsp+90h] [rbp-1A8h]
  __int128 v20; // [rsp+A0h] [rbp-198h]
  __int128 v21; // [rsp+B0h] [rbp-188h]

  result = memset_thunk_772440563353939046(&v12, 0, 0x200uLL);
  _fxsave(&v12);
  v3 = v13;
  *(_OWORD *)(a1 + 256) = v12;
  v4 = v14;
  *(_QWORD *)(a1 + 272) = v3;
  v5 = v15;
  *(_OWORD *)(a1 + 288) = v4;
  v6 = v16;
  *(_OWORD *)(a1 + 304) = v5;
  v7 = v17;
  *(_OWORD *)(a1 + 320) = v6;
  v8 = v18;
  *(_OWORD *)(a1 + 336) = v7;
  v9 = v19;
  *(_OWORD *)(a1 + 352) = v8;
  v10 = v20;
  *(_OWORD *)(a1 + 368) = v9;
  v11 = v21;
  *(_OWORD *)(a1 + 384) = v10;
  *(_OWORD *)(a1 + 400) = v11;
  return result;
}
