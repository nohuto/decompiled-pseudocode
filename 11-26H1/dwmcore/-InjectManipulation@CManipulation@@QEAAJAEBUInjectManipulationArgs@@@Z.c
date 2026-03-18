/*
 * XREFs of ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x180107D3C
 * Callers:
 *     ?ProcessInjectManipulation@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_INJECTMANIPULATION@@PEBXI@Z @ 0x180218A78 (-ProcessInjectManipulation@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_IN.c)
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18026FAB0 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@PEAUCalculateValueRes.c)
 * Callees:
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x180107B08 (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x18010859C (-Reset@ManipulationData@@QEAAXXZ.c)
 */

__int64 __fastcall CManipulation::InjectManipulation(CManipulation *this, const struct InjectManipulationArgs *a2)
{
  int *v2; // r10
  __int64 v3; // xmm0_8
  __int64 v4; // xmm1_8
  bool v5; // cf
  int v6; // eax
  int v7; // ecx
  __int64 v8; // xmm0_8
  int v9; // eax
  int v10; // ecx
  __int64 v11; // xmm0_8
  int v12; // eax
  bool v13; // dl
  __int64 v14; // xmm0_8
  CManipulation *v15; // r11
  __int64 v17; // [rsp+20h] [rbp-69h] BYREF
  int v18; // [rsp+28h] [rbp-61h]
  __int64 v19; // [rsp+2Ch] [rbp-5Dh]
  int v20; // [rsp+34h] [rbp-55h]
  __int64 v21; // [rsp+38h] [rbp-51h]
  int v22; // [rsp+40h] [rbp-49h]
  __int64 v23; // [rsp+44h] [rbp-45h]
  int v24; // [rsp+4Ch] [rbp-3Dh]
  int v25; // [rsp+50h] [rbp-39h]
  __int64 v26; // [rsp+54h] [rbp-35h]
  int v27; // [rsp+5Ch] [rbp-2Dh]
  __int64 v28; // [rsp+A0h] [rbp+17h]
  int v29; // [rsp+A8h] [rbp+1Fh]
  __int64 v30; // [rsp+ACh] [rbp+23h]
  int v31; // [rsp+B4h] [rbp+2Bh]
  int v32; // [rsp+B8h] [rbp+2Fh]
  int v33; // [rsp+BCh] [rbp+33h]
  int v34; // [rsp+C0h] [rbp+37h]
  int v35; // [rsp+C4h] [rbp+3Bh]
  int v36; // [rsp+C8h] [rbp+3Fh]
  int v37; // [rsp+CCh] [rbp+43h]
  int v38; // [rsp+D0h] [rbp+47h]
  char v39; // [rsp+D4h] [rbp+4Bh]

  ManipulationData::Reset((ManipulationData *)&v17);
  v3 = *(_QWORD *)(v2 + 7);
  v4 = *(_QWORD *)(v2 + 27);
  v18 = v2[9];
  v20 = v2[12];
  v22 = v2[15];
  v24 = v2[18];
  v27 = v2[29];
  v29 = v2[22];
  v31 = v2[25];
  v33 = *v2;
  v34 = v2[30];
  v35 = v2[31];
  v5 = v2[1] != 0;
  v17 = v3;
  v6 = v2[2];
  v7 = v5 ? 4 : 0;
  v19 = *((_QWORD *)v2 + 5);
  v8 = *(_QWORD *)(v2 + 13);
  v5 = v6 != 0;
  v9 = v2[3];
  v36 = v7;
  v10 = v5 ? 4 : 0;
  v21 = v8;
  v11 = *((_QWORD *)v2 + 8);
  v5 = v9 != 0;
  v12 = v2[5];
  v37 = v10;
  v23 = v11;
  v13 = v2[4] != 0;
  v25 = v2[19];
  v14 = *((_QWORD *)v2 + 10);
  v38 = v5 ? 4 : 0;
  v28 = v14;
  v30 = *(_QWORD *)(v2 + 23);
  v32 = v2[26];
  v26 = v4;
  v39 = (v12 != 0 ? 2 : 0) | v39 & 0xFC | v13 & 0xFD;
  return CManipulation::Update(v15, (struct ManipulationData *)&v17);
}
