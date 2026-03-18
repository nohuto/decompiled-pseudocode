/*
 * XREFs of SymCryptEcurveInitialize @ 0x14055ADA4
 * Callers:
 *     SymCryptEcurveAllocate @ 0x14055AC74 (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     SymCryptIntBitsizeOfValue @ 0x14055C178 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x14055C1F0 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14055C28C (SymCryptIntFromModulus.c)
 *     SymCryptIntGetValueLsbits32 @ 0x14055C2EC (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntIsEqualUint32 @ 0x14055C334 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntSetValue @ 0x14055C3B4 (SymCryptIntSetValue.c)
 *     SymCryptIntToModulus @ 0x14055C4A8 (SymCryptIntToModulus.c)
 *     SymCryptModAdd @ 0x14055C4EC (SymCryptModAdd.c)
 *     SymCryptModDivPow2 @ 0x14055C528 (SymCryptModDivPow2.c)
 *     SymCryptModElementCreate @ 0x14055C584 (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x14055C5D0 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementSetValue @ 0x14055C618 (SymCryptModElementSetValue.c)
 *     SymCryptModElementSetValueNegUint32 @ 0x14055C6A4 (SymCryptModElementSetValueNegUint32.c)
 *     SymCryptModElementSetValueUint32 @ 0x14055C6C4 (SymCryptModElementSetValueUint32.c)
 *     SymCryptModulusCreate @ 0x14055C978 (SymCryptModulusCreate.c)
 *     SymCryptOfflinePrecomputation @ 0x1405641FC (SymCryptOfflinePrecomputation.c)
 *     SymCryptEcpointCreate @ 0x14056434C (SymCryptEcpointCreate.c)
 *     SymCryptEcpointSetValue @ 0x1405645A0 (SymCryptEcpointSetValue.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405653EC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140565E0C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1405677D8 (SymCryptShortWeierstrassFillScratchSpaces.c)
 */

__int64 __fastcall SymCryptEcurveInitialize(_DWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4, __int64 a5)
{
  _DWORD *v5; // rbx
  _DWORD *v6; // r15
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int v13; // eax
  char *v14; // rbx
  char *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rbx
  char *v19; // r15
  __int64 v20; // rax
  char *v21; // rbx
  __int64 v22; // rax
  int v23; // r13d
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  unsigned int v28; // eax
  char *v29; // rbx
  __int64 v30; // r15
  __int64 v31; // rax
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // r14d
  char *v35; // rbx
  __int64 v36; // r15
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  char *v41; // rbx
  int v42; // eax
  __int64 v43; // rax
  int v44; // ebx
  __int64 *v45; // rcx
  int v46; // eax
  unsigned int v47; // edx
  int v48; // r8d

  *a4 = 1;
  v5 = a4 + 168;
  v6 = a1 + 7;
  a4[1] = a1[1];
  a4[2] = a3[10];
  v9 = (__int64)a4;
  a4[4] = *a3;
  a4[7] = a3[1];
  a4[5] = a1[3];
  a4[8] = a1[4];
  a4[9] = a3[5];
  a4[10] = a3[3];
  v10 = SymCryptModulusCreate(a4 + 168, a3[4], *a3);
  *(_QWORD *)(v9 + 616) = v10;
  if ( !v10 )
    goto LABEL_50;
  v11 = SymCryptIntFromModulus(v10);
  v12 = v11;
  if ( !v11 )
    goto LABEL_50;
  if ( (unsigned int)SymCryptIntSetValue(v6, (unsigned int)a1[3], 2LL, v11) )
    goto LABEL_50;
  v13 = SymCryptIntBitsizeOfValue(v12);
  *(_DWORD *)(v9 + 12) = v13;
  if ( v13 < 0x20 )
    goto LABEL_50;
  if ( (SymCryptIntGetValueLsbits32(v12) & 1) == 0 )
    goto LABEL_50;
  SymCryptIntToModulus(v12, *(_QWORD *)(v9 + 616), 800 * a1[3], 9, a5, a3[9]);
  v14 = (char *)v5 + a3[4];
  v15 = (char *)v6 + (unsigned int)a1[3];
  v16 = SymCryptModElementCreate(v14, a3[5], *(_QWORD *)(v9 + 616));
  *(_QWORD *)(v9 + 632) = v16;
  if ( !v16 )
    goto LABEL_50;
  if ( (unsigned int)SymCryptModElementSetValue((_DWORD)v15, a1[3], 2, *(_QWORD *)(v9 + 616), v16, a5, a3[9]) )
    goto LABEL_50;
  v17 = a3[5];
  v18 = &v14[v17];
  v19 = &v15[a1[3]];
  v20 = SymCryptModElementCreate(v18, v17, *(_QWORD *)(v9 + 616));
  *(_QWORD *)(v9 + 640) = v20;
  if ( !v20 )
    goto LABEL_50;
  if ( a1[1] == 1 )
  {
    SymCryptModElementSetValueNegUint32(3, *(_QWORD *)(v9 + 616), v20, a5, a3[9]);
    if ( (unsigned int)SymCryptModElementIsEqual(*(_QWORD *)(v9 + 616), *(_QWORD *)(v9 + 632), *(_QWORD *)(v9 + 640)) )
      *(_DWORD *)(v9 + 4) = 4;
  }
  if ( (unsigned int)SymCryptModElementSetValue(
                       (_DWORD)v19,
                       a1[3],
                       2,
                       *(_QWORD *)(v9 + 616),
                       *(_QWORD *)(v9 + 640),
                       a5,
                       a3[9]) )
    goto LABEL_50;
  v21 = &v18[a3[5]];
  v22 = (unsigned int)a1[3];
  v23 = v22 + (_DWORD)v19;
  v24 = (__int64)&v19[v22 + (unsigned int)(2 * v22)];
  v25 = SymCryptModulusCreate(v21, a3[7], a3[1]);
  *(_QWORD *)(v9 + 624) = v25;
  if ( !v25 )
    goto LABEL_50;
  v26 = SymCryptIntFromModulus(v25);
  v27 = v26;
  if ( !v26 )
    goto LABEL_50;
  if ( (unsigned int)SymCryptIntSetValue(v24, (unsigned int)a1[4], 2LL, v26) )
    goto LABEL_50;
  v28 = SymCryptIntBitsizeOfValue(v27);
  *(_DWORD *)(v9 + 24) = v28;
  if ( v28 < 0x20 )
    goto LABEL_50;
  if ( (SymCryptIntGetValueLsbits32(v27) & 1) == 0 )
    goto LABEL_50;
  SymCryptIntToModulus(v27, *(_QWORD *)(v9 + 624), 1, 9, a5, a3[9]);
  v29 = &v21[a3[7]];
  v30 = (unsigned int)a1[4] + v24;
  v31 = SymCryptIntCreate(v29, a3[8], a3[2]);
  *(_QWORD *)(v9 + 656) = v31;
  if ( !v31 )
    goto LABEL_50;
  if ( (unsigned int)SymCryptIntSetValue(v30, (unsigned int)a1[5], 2LL, v31) )
    goto LABEL_50;
  v32 = SymCryptIntBitsizeOfValue(*(_QWORD *)(v9 + 656));
  v33 = v32 - 1;
  *(_DWORD *)(v9 + 64) = v32 - 1;
  if ( !v32 )
    goto LABEL_50;
  if ( v33 > 8 )
    goto LABEL_50;
  v34 = 1;
  if ( !(unsigned int)SymCryptIntIsEqualUint32(*(_QWORD *)(v9 + 656), (unsigned int)(1 << v33)) )
    goto LABEL_50;
  v35 = &v29[a3[8]];
  v36 = (unsigned int)a1[5] + v30;
  v37 = a1[1];
  switch ( v37 )
  {
    case 1:
      v38 = *(_DWORD *)(v9 + 24) + 1;
      *(_DWORD *)(v9 + 88) = 6;
      *(_DWORD *)(v9 + 96) = v38;
      *(_DWORD *)(v9 + 92) = 16;
      SymCryptShortWeierstrassFillScratchSpaces(v9);
      break;
    case 2:
      v39 = *(_DWORD *)(v9 + 24) + 1;
      *(_DWORD *)(v9 + 88) = 6;
      *(_DWORD *)(v9 + 96) = v39;
      *(_DWORD *)(v9 + 92) = 16;
      SymCryptTwistedEdwardsFillScratchSpaces(v9);
      break;
    case 3:
      SymCryptMontgomeryFillScratchSpaces(v9);
      break;
  }
  v40 = SymCryptEcpointCreate(v35, a3[6], v9);
  *(_QWORD *)(v9 + 648) = v40;
  if ( !v40 || (unsigned int)SymCryptEcpointSetValue(v9, v23, 2 * a1[3], 2, 2, v40, 1, a5, a3[9]) )
    goto LABEL_50;
  v41 = &v35[a3[6]];
  v42 = a1[1];
  if ( v42 == 1 || v42 == 2 )
  {
    *(_QWORD *)(v9 + 104) = *(_QWORD *)(v9 + 648);
    if ( *(_DWORD *)(v9 + 92) > 1u )
    {
      do
      {
        v43 = SymCryptEcpointCreate(v41, a3[6], v9);
        *(_QWORD *)(v9 + 8LL * v34 + 104) = v43;
        if ( !v43 )
          goto LABEL_50;
        ++v34;
        v41 += a3[6];
      }
      while ( v34 < *(_DWORD *)(v9 + 92) );
    }
    SymCryptOfflinePrecomputation(v9, a5, a3[9]);
  }
  if ( a1[1] == 3 )
  {
    v44 = SymCryptModElementCreate(a5, a3[5], *(_QWORD *)(v9 + 616));
    SymCryptModElementSetValueUint32(2, *(_QWORD *)(v9 + 616), v44, a5 + a3[5], a3[9] - a3[5]);
    SymCryptModAdd(*(_QWORD *)(v9 + 616), *(_QWORD *)(v9 + 632), v44, *(_QWORD *)(v9 + 632), a5 + a3[5], a3[9] - a3[5]);
    SymCryptModDivPow2(
      *(_QWORD *)(v9 + 616),
      *(_QWORD *)(v9 + 632),
      2,
      *(_QWORD *)(v9 + 632),
      a5 + a3[5],
      a3[9] - a3[5]);
  }
  if ( *a1 == 2 )
  {
    v45 = (__int64 *)(v36 + (unsigned int)a1[6]);
  }
  else
  {
    v46 = a1[1];
    if ( v46 == 1 )
    {
      v45 = (__int64 *)SymCryptEcurveParamsV2ExtensionShortWeierstrass;
    }
    else if ( v46 == 2 )
    {
      v45 = (__int64 *)SymCryptEcurveParamsV2ExtensionTwistedEdwards;
    }
    else
    {
      v45 = 0LL;
      if ( v46 == 3 )
        v45 = (__int64 *)SymCryptEcurveParamsV2ExtensionMontgomery;
    }
  }
  *(_DWORD *)(v9 + 68) = *(_DWORD *)v45;
  v47 = *((_DWORD *)v45 + 1);
  *(_DWORD *)(v9 + 72) = v47;
  v48 = *((_DWORD *)v45 + 2);
  *(_DWORD *)(v9 + 76) = v48;
  *(_DWORD *)(v9 + 80) = *((_DWORD *)v45 + 3);
  if ( v47 > 0x20 || v47 && v48 + v47 > *(_DWORD *)(v9 + 24) + *(_DWORD *)(v9 + 64) )
  {
LABEL_50:
    SymCryptWipe(v9, a3[3]);
    return 0LL;
  }
  return v9;
}
