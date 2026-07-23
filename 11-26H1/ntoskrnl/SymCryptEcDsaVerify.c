/*
 * XREFs of SymCryptEcDsaVerify @ 0x14055F56C
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x140565454 (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x1408B20D8 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14055D270 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x14055D91C (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14055E774 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsLessThan @ 0x14055E834 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x14055E89C (SymCryptIntSetValue.c)
 *     SymCryptIntToModElement @ 0x14055E970 (SymCryptIntToModElement.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x14055EAB8 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x14055EAD0 (SymCryptModElementIsZero.c)
 *     SymCryptModElementToInt @ 0x14055EC1C (SymCryptModElementToInt.c)
 *     SymCryptModInv @ 0x14055ECD8 (SymCryptModInv.c)
 *     SymCryptModMul @ 0x14055ED14 (SymCryptModMul.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14055EEA8 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptEcDsaTruncateHash @ 0x14055F498 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcpointCreate @ 0x14056673C (SymCryptEcpointCreate.c)
 *     SymCryptEcpointGetValue @ 0x1405667FC (SymCryptEcpointGetValue.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsZero @ 0x1405671B0 (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointMultiScalarMul @ 0x1405671DC (SymCryptEcpointMultiScalarMul.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptEcDsaVerify(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  bool v10; // zf
  unsigned int v11; // edi
  __int64 v12; // rbx
  unsigned int v13; // ebp
  unsigned int v14; // eax
  int v15; // r9d
  unsigned __int64 v16; // r14
  __int64 v17; // r11
  unsigned __int64 v18; // rdx
  __int64 v19; // r10
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r15
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v29; // r15
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // r12
  unsigned int v35; // ebx
  int IsEqual; // eax
  unsigned __int64 v38; // [rsp+50h] [rbp-D8h]
  unsigned int v39; // [rsp+58h] [rbp-D0h]
  __int64 v40; // [rsp+58h] [rbp-D0h]
  unsigned int v41; // [rsp+60h] [rbp-C8h]
  __int64 v42; // [rsp+60h] [rbp-C8h]
  unsigned int v43; // [rsp+68h] [rbp-C0h]
  __int64 v44; // [rsp+68h] [rbp-C0h]
  __int64 v45; // [rsp+70h] [rbp-B8h]
  __int64 v46; // [rsp+70h] [rbp-B8h]
  __int64 v47; // [rsp+78h] [rbp-B0h]
  __int128 v50; // [rsp+98h] [rbp-90h]
  __int64 v52; // [rsp+B0h] [rbp-78h]
  __int128 v53; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-60h] BYREF

  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 0LL;
  v10 = (*(_DWORD *)a1 & 0x1000) == 0;
  v54 = 0LL;
  v53 = 0LL;
  if ( !v10 && (a7 & 0xFFFFFFF7) == 0 )
  {
    v11 = *(_DWORD *)(v8 + 16);
    if ( v11 <= *(_DWORD *)(v8 + 28) )
      v11 = *(_DWORD *)(v8 + 28);
    if ( v11 <= (unsigned int)SymCryptDigitsFromBits() )
      SymCryptDigitsFromBits();
    SymCryptEcurveDigitsofScalarMultiplier(v8);
    v12 = (unsigned int)SymCryptSizeofIntFromDigits();
    v43 = SymCryptSizeofIntFromDigits();
    v13 = SymCryptSizeofEcpointFromCurve(v8);
    v41 = v13;
    v39 = SymCryptSizeofModElementFromModulus(*(_QWORD *)(v8 + 624));
    v14 = SymCryptEcurveSizeofFieldElement(v8);
    v15 = *(_DWORD *)(v8 + 28);
    v16 = *(unsigned int *)(v8 + 44);
    v17 = v14;
    v45 = v12;
    v47 = v14;
    v18 = (unsigned int)(*(_DWORD *)(v8 + 48) + 2 * *(_DWORD *)(v8 + 52));
    v19 = (unsigned int)(v15 << 8);
    v20 = (unsigned int)(v19 + 64);
    v21 = v20;
    if ( v18 > (unsigned int)v20 )
      v21 = (unsigned int)v18;
    v22 = (unsigned int)((*(_DWORD *)(v8 + 16) << 8) + 64);
    if ( v21 > v22 )
      v22 = (unsigned int)v21;
    v23 = (unsigned int)(v15 << 6) + 64LL + v20 + 2 * ((unsigned int)(v15 << 6) + 64LL);
    v24 = *(unsigned int *)(v8 + 56);
    v25 = v19 + v23;
    if ( v22 > v25 )
      v25 = v22;
    if ( v25 > v24 )
      v24 = v25;
    if ( v24 > v16 )
      v16 = v24;
    v26 = v12 + v17 + 4 * v39 + v16 + 2 * v13 + 2 * v43;
    v38 = v26;
    v27 = SymCryptCallbackAlloc(v26);
    v7 = v27;
    if ( v27 )
    {
      v28 = v16 + v27;
      v29 = SymCryptIntCreate();
      *(_QWORD *)&v50 = SymCryptIntCreate();
      v30 = v43 + v43 + v45 + v28;
      *((_QWORD *)&v50 + 1) = SymCryptIntCreate();
      v31 = SymCryptEcpointCreate(v30, v41, v8);
      v32 = v41 + v30;
      v52 = v31;
      SymCryptEcpointCreate(v32, v41, v8);
      v33 = v39 + v41 + v32;
      v42 = SymCryptModElementCreate();
      v46 = SymCryptModElementCreate();
      v34 = SymCryptModElementCreate();
      v44 = SymCryptModElementCreate();
      v40 = v39 + v39 + v39 + v33;
      if ( (unsigned int)SymCryptIntSetValue() )
        goto LABEL_33;
      SymCryptIntFromModulus();
      if ( !(unsigned int)SymCryptIntIsLessThan() )
        goto LABEL_33;
      SymCryptIntToModElement(v29, *(_QWORD *)(v8 + 624), v46, v7, v16);
      if ( (unsigned int)SymCryptModElementIsZero() )
        goto LABEL_33;
      if ( (unsigned int)SymCryptIntSetValue() )
        goto LABEL_33;
      SymCryptIntFromModulus();
      if ( !(unsigned int)SymCryptIntIsLessThan() )
        goto LABEL_33;
      SymCryptIntToModElement(v29, *(_QWORD *)(v8 + 624), v34, v7, v16);
      if ( (unsigned int)SymCryptModElementIsZero()
        || (unsigned int)SymCryptModInv(*(_DWORD **)(v8 + 624), v34)
        || (unsigned int)SymCryptEcDsaTruncateHash(v8, a2, a3, a7, v42, v29, v7, v16)
        || (SymCryptModMul(*(_DWORD **)(v8 + 624), v42),
            SymCryptModMul(*(_DWORD **)(v8 + 624), v46),
            SymCryptModElementToInt(*(_DWORD **)(v8 + 624), v42, v50, v7, v16),
            SymCryptModElementToInt(*(_DWORD **)(v8 + 624), v44, SDWORD2(v50), v7, v16),
            *((_QWORD *)&v54 + 1) = *(_QWORD *)(a1 + 16),
            v53 = v50,
            (unsigned int)SymCryptEcpointMultiScalarMul(v8, (unsigned int)&v53, (unsigned int)&v54, 2, 1, v52, v7, v16))
        || (unsigned int)SymCryptEcpointIsZero(v8, v52, v7, v16)
        || (unsigned int)SymCryptEcpointGetValue(v8, v52, 2, 1, v40, v47, 1, v7, v16)
        || (v35 = SymCryptIntSetValue()) != 0 )
      {
LABEL_33:
        v9 = v38;
      }
      else
      {
        SymCryptIntToModElement(v29, *(_QWORD *)(v8 + 624), v44, v7, v16);
        IsEqual = SymCryptModElementIsEqual();
        v9 = v38;
        if ( IsEqual )
        {
LABEL_35:
          SymCryptWipe(v7, v9);
          SymCryptCallbackFree(v7);
          return v35;
        }
      }
    }
    else
    {
      v9 = v26;
    }
  }
  v35 = 32784;
  if ( v7 )
    goto LABEL_35;
  return v35;
}
