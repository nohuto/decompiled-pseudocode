/*
 * XREFs of ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x140063968
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x140063560 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CPointerInfoNode::operator=(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  unsigned int v22; // r8d
  unsigned int v23; // r8d
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  unsigned int v26; // r8d
  unsigned int v27; // r8d
  unsigned int v28; // r8d
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  unsigned int v32; // r8d
  unsigned int v33; // r8d
  unsigned int v34; // r8d
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // ecx
  unsigned int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // edx
  unsigned int v44; // ecx
  unsigned int v45; // edx
  unsigned int v46; // ecx
  unsigned int v47; // edx
  unsigned int v48; // r8d

  v3 = *(_DWORD *)a2 ^ (*(_DWORD *)a1 ^ *(_DWORD *)a2) & 0xFFFFFFFE;
  *(_DWORD *)a1 = v3;
  v5 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v3) & 0xFFFFFFFD;
  *(_DWORD *)a1 = v5;
  v6 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v5) & 0xFFFFFFFB;
  *(_DWORD *)a1 = v6;
  v7 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v6) & 0xFFFFFFF7;
  *(_DWORD *)a1 = v7;
  v8 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v7) & 0xFFFFFFEF;
  *(_DWORD *)a1 = v8;
  v9 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v8) & 0xFFFFFFDF;
  *(_DWORD *)a1 = v9;
  v10 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v9) & 0xFFFFFFBF;
  *(_DWORD *)a1 = v10;
  v11 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v10) & 0xFFFFFF7F;
  *(_DWORD *)a1 = v11;
  v12 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v11) & 0xFFFFFEFF;
  *(_DWORD *)a1 = v12;
  v13 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v12) & 0xFFFFFDFF;
  *(_DWORD *)a1 = v13;
  v14 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v13) & 0xFFFFFBFF;
  *(_DWORD *)a1 = v14;
  v15 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v14) & 0xFFFFF7FF;
  *(_DWORD *)a1 = v15;
  v16 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v15) & 0xFFFFEFFF;
  *(_DWORD *)a1 = v16;
  v17 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v16) & 0xFFFFDFFF;
  *(_DWORD *)a1 = v17;
  v18 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v17) & 0xFFFFBFFF;
  *(_DWORD *)a1 = v18;
  v19 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v18) & 0xFFFF7FFF;
  *(_DWORD *)a1 = v19;
  v20 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v19) & 0xFFFEFFFF;
  *(_DWORD *)a1 = v20;
  v21 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v20) & 0xFFFDFFFF;
  *(_DWORD *)a1 = v21;
  v22 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v21) & 0xFFFBFFFF;
  *(_DWORD *)a1 = v22;
  v23 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v22) & 0xFFF7FFFF;
  *(_DWORD *)a1 = v23;
  v24 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v23) & 0xFFEFFFFF;
  *(_DWORD *)a1 = v24;
  v25 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v24) & 0xFFDFFFFF;
  *(_DWORD *)a1 = v25;
  v26 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v25) & 0xFFBFFFFF;
  *(_DWORD *)a1 = v26;
  v27 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v26) & 0xFF7FFFFF;
  *(_DWORD *)a1 = v27;
  v28 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v27) & 0xFEFFFFFF;
  *(_DWORD *)a1 = v28;
  v29 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v28) & 0xFDFFFFFF;
  *(_DWORD *)a1 = v29;
  v30 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v29) & 0xFBFFFFFF;
  *(_DWORD *)a1 = v30;
  v31 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v30) & 0xF7FFFFFF;
  *(_DWORD *)a1 = v31;
  v32 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v31) & 0xEFFFFFFF;
  *(_DWORD *)a1 = v32;
  v33 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v32) & 0xDFFFFFFF;
  *(_DWORD *)a1 = v33;
  v34 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v33) & 0xBFFFFFFF;
  *(_DWORD *)a1 = v34;
  *(_DWORD *)a1 = v34 ^ (*(_DWORD *)a2 ^ v34) & 0x80000000;
  v35 = *(_DWORD *)(a2 + 4) ^ (*(_DWORD *)(a1 + 4) ^ *(_DWORD *)(a2 + 4)) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 4) = v35;
  v36 = *(_DWORD *)(a2 + 4) ^ (*(_DWORD *)(a2 + 4) ^ v35) & 0xFFFFFFFD;
  *(_DWORD *)(a1 + 4) = v36;
  v37 = *(_DWORD *)(a2 + 4) ^ (*(_DWORD *)(a2 + 4) ^ v36) & 0xFFFFFFFB;
  *(_DWORD *)(a1 + 4) = v37;
  v38 = *(_DWORD *)(a2 + 4) ^ (v37 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFFFF7;
  *(_DWORD *)(a1 + 4) = v38;
  v39 = *(_DWORD *)(a2 + 4) ^ (v38 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFFFEF;
  *(_DWORD *)(a1 + 4) = v39;
  v40 = *(_DWORD *)(a2 + 4) ^ (v39 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFFFDF;
  *(_DWORD *)(a1 + 4) = v40;
  v41 = *(_DWORD *)(a2 + 4) ^ (v40 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFFFBF;
  *(_DWORD *)(a1 + 4) = v41;
  v42 = *(_DWORD *)(a2 + 4) ^ (v41 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFFF7F;
  *(_DWORD *)(a1 + 4) = v42;
  v43 = *(_DWORD *)(a2 + 4) ^ (v42 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFFEFF;
  *(_DWORD *)(a1 + 4) = v43;
  v44 = *(_DWORD *)(a2 + 4) ^ (v43 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFFDFF;
  *(_DWORD *)(a1 + 4) = v44;
  v45 = *(_DWORD *)(a2 + 4) ^ (v44 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFFBFF;
  *(_DWORD *)(a1 + 4) = v45;
  v46 = *(_DWORD *)(a2 + 4) ^ (v45 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFF7FF;
  *(_DWORD *)(a1 + 4) = v46;
  v47 = *(_DWORD *)(a2 + 4) ^ (v46 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFEFFF;
  *(_DWORD *)(a1 + 4) = v47;
  v48 = *(_DWORD *)(a2 + 4) ^ (v47 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFDFFF;
  *(_DWORD *)(a1 + 4) = v48;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4) ^ (v48 ^ *(_DWORD *)(a2 + 4)) & 0xFFFFBFFF;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  CInputDest::operator=(a1 + 24, a2 + 24);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 148) = *(_QWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 156);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 208);
  *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 224);
  *(_OWORD *)(a1 + 240) = *(_OWORD *)(a2 + 240);
  *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 256);
  *(_OWORD *)(a1 + 272) = *(_OWORD *)(a2 + 272);
  *(_OWORD *)(a1 + 288) = *(_OWORD *)(a2 + 288);
  *(_OWORD *)(a1 + 304) = *(_OWORD *)(a2 + 304);
  *(_OWORD *)(a1 + 320) = *(_OWORD *)(a2 + 320);
  *(_QWORD *)(a1 + 336) = *(_QWORD *)(a2 + 336);
  *(_DWORD *)(a1 + 344) = *(_DWORD *)(a2 + 344);
  *(_DWORD *)(a1 + 348) = *(_DWORD *)(a2 + 348);
  CInputDest::operator=(a1 + 352, a2 + 352);
  *(_DWORD *)(a1 + 472) = *(_DWORD *)(a2 + 472);
  *(_DWORD *)(a1 + 476) = *(_DWORD *)(a2 + 476);
  return a1;
}
