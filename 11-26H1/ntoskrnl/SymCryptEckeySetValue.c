/*
 * XREFs of SymCryptEckeySetValue @ 0x14055DDB4
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x1405652BC (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140565454 (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x1408B20D8 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14055D270 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x14055D91C (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptFdefIntGetValueLsbits32 @ 0x14055D928 (SymCryptFdefIntGetValueLsbits32.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x14055DC98 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptDivisorFromModulus @ 0x14055E5E8 (SymCryptDivisorFromModulus.c)
 *     SymCryptIntCopy @ 0x14055E6A8 (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x14055E6F0 (SymCryptIntDivMod.c)
 *     SymCryptIntDivPow2 @ 0x14055E71C (SymCryptIntDivPow2.c)
 *     SymCryptIntFromModulus @ 0x14055E774 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetBits @ 0x14055E7A4 (SymCryptIntGetBits.c)
 *     SymCryptIntIsEqualUint32 @ 0x14055E81C (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntIsLessThan @ 0x14055E834 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x14055E89C (SymCryptIntSetValue.c)
 *     SymCryptIntToModElement @ 0x14055E970 (SymCryptIntToModElement.c)
 *     SymCryptModDivPow2 @ 0x14055EA10 (SymCryptModDivPow2.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementToInt @ 0x14055EC1C (SymCryptModElementToInt.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x1405652BC (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140565454 (SymCryptEcDsaSelftest.c)
 *     SymCryptEcpointCreate @ 0x14056673C (SymCryptEcpointCreate.c)
 *     SymCryptEcpointSetValue @ 0x140566990 (SymCryptEcpointSetValue.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsEqual @ 0x140567170 (SymCryptEcpointIsEqual.c)
 *     SymCryptEcpointScalarMul @ 0x1405672A4 (SymCryptEcpointScalarMul.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeySetValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v12; // rbp
  unsigned int v14; // ebx
  int v16; // ebx
  unsigned int v17; // edi
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rax
  int v22; // ebx
  unsigned int v23; // eax
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rdi
  char v30; // [rsp+50h] [rbp-68h]
  unsigned int v31; // [rsp+58h] [rbp-60h]
  int v32; // [rsp+58h] [rbp-60h]
  __int64 v33; // [rsp+60h] [rbp-58h]
  unsigned int v34; // [rsp+68h] [rbp-50h]
  int v38; // [rsp+D8h] [rbp+20h]
  unsigned int v39; // [rsp+F0h] [rbp+38h]
  unsigned int v40; // [rsp+F8h] [rbp+40h]
  __int64 v41; // [rsp+F8h] [rbp+40h]

  v38 = a4;
  v9 = a4;
  v10 = a3;
  v12 = *(_QWORD *)(a8 + 8);
  v40 = *(_DWORD *)(v12 + 36);
  v31 = SymCryptEcurveDigitsofScalarMultiplier(v12);
  if ( (a7 & 0xFFFFCCFF) != 0 || (a7 & 0x3000) == 0 || (a7 & 0x100) == 0 && (a7 & 0x200) != 0 )
    return 32782;
  v30 = (a7 & 0x100) == 0;
  if ( a2 )
  {
    if ( a2 != (unsigned int)SymCryptFdefIntGetValueLsbits32(*(_QWORD *)(a8 + 8)) )
      return 32782;
    if ( !v9 )
    {
LABEL_12:
      v17 = *(_DWORD *)(v12 + 60);
      v34 = v17;
      v18 = SymCryptCallbackAlloc(v17);
      if ( !v18 )
        return 32783;
      if ( a1 )
      {
        v19 = (unsigned int)SymCryptSizeofIntFromDigits(v31);
        v20 = SymCryptIntCreate(v18, v19, v31);
        v32 = SymCryptModElementCreate(v19 + v18, v40, *(_QWORD *)(v12 + 624));
        v33 = v19 + v18 + v40;
        v39 = v17 - v40 - v19;
        v14 = SymCryptIntSetValue(a1, a2, a5, v20);
        if ( v14 )
        {
LABEL_55:
          SymCryptWipe(v18, v17);
          SymCryptCallbackFree(v18);
          return v14;
        }
        if ( (a7 & 0x200) == 0 )
        {
          if ( *(_DWORD *)(v12 + 68) == 1 )
          {
            v21 = SymCryptIntFromModulus(*(_QWORD *)(v12 + 624));
            if ( !(unsigned int)SymCryptIntIsLessThan(v20, v21) )
              goto LABEL_19;
          }
          if ( *(_DWORD *)(v12 + 64) && *(_DWORD *)(v12 + 68) == 3 && (unsigned int)SymCryptIntGetBits(v20, 0LL) )
            goto LABEL_19;
          if ( *(_DWORD *)(v12 + 72) )
          {
            v22 = *(_DWORD *)(v12 + 80);
            if ( (unsigned int)SymCryptIntGetBits(v20, *(unsigned int *)(v12 + 76)) != v22 )
              goto LABEL_19;
          }
        }
        v23 = *(_DWORD *)(v12 + 64);
        if ( v23 )
        {
          if ( *(_DWORD *)(v12 + 68) == 3 )
            SymCryptIntDivPow2(v20, v23, v20);
          v24 = v19 + v18 + v40;
          if ( *(_DWORD *)(v12 + 68) == 1 )
          {
            SymCryptIntToModElement(v20, *(_QWORD *)(v12 + 624), v32, v33, v39);
            SymCryptModDivPow2(*(_QWORD *)(v12 + 624), v32, *(_DWORD *)(v12 + 64), v32, v33, v39);
            SymCryptModElementToInt(*(_QWORD *)(v12 + 624), v32, v20, v33, v39);
          }
        }
        else
        {
          v24 = v19 + v18 + v40;
        }
        v25 = SymCryptDivisorFromModulus(*(_QWORD *)(v12 + 624));
        SymCryptIntDivMod(v20, v25, 0, v20, v24, v39);
        if ( (unsigned int)SymCryptIntIsEqualUint32(v20, 0LL) )
        {
LABEL_19:
          v14 = 32782;
          goto LABEL_55;
        }
        SymCryptIntCopy(v20, *(_QWORD *)(a8 + 24));
        LODWORD(v9) = v38;
        v10 = a3;
        *(_BYTE *)(a8 + 4) = 1;
      }
      if ( !v10 )
        goto LABEL_39;
      v14 = SymCryptEcpointSetValue(v12, v10, v9, a5, a6, *(_QWORD *)(a8 + 16), 1, v18, v17);
      if ( v14 )
        goto LABEL_55;
      if ( (a7 & 0x200) == 0 )
      {
        v14 = SymCryptEckeyPerformPublicKeyValidation(a8, v30, v18, v17);
        if ( v14 )
          goto LABEL_55;
      }
      if ( (a7 & 0x100) == 0 && a1 )
      {
LABEL_39:
        v26 = v18;
        v27 = *(_QWORD *)(a8 + 16);
        v28 = v17;
        if ( a3 )
        {
          v29 = (unsigned int)SymCryptSizeofEcpointFromCurve(v12);
          v27 = SymCryptEcpointCreate(v18, v29, v12);
          v26 = v29 + v18;
          v28 = v34 - (unsigned int)v29;
          v17 = v34;
        }
        v41 = v28;
        v14 = SymCryptEcpointScalarMul(v12, *(_QWORD *)(a8 + 24), 0, 32, v27, v26, v28);
        if ( v14 )
          goto LABEL_55;
        if ( a3 )
        {
          if ( !(unsigned int)SymCryptEcpointIsEqual(v12, v27, *(_QWORD *)(a8 + 16), 0, v26, v41) )
            goto LABEL_19;
        }
        else if ( (a7 & 0x200) == 0 )
        {
          v14 = SymCryptEckeyPerformPublicKeyValidation(a8, v30, v18, v17);
          if ( v14 )
            goto LABEL_55;
        }
      }
      *(_DWORD *)a8 = a7;
      if ( (a7 & 0x100) == 0 )
      {
        if ( (a7 & 0x1000) != 0 )
        {
          if ( (g_SymCryptFipsSelftestsPerformed & 4) == 0 )
          {
            SymCryptEcDsaSelftest();
            _InterlockedOr(&g_SymCryptFipsSelftestsPerformed, 4u);
          }
          *(_DWORD *)a8 |= 1u;
        }
        if ( (a7 & 0x2000) != 0 && (g_SymCryptFipsSelftestsPerformed & 0x20) == 0 )
        {
          SymCryptEcDhSecretAgreementSelftest();
          _InterlockedOr(&g_SymCryptFipsSelftestsPerformed, 0x20u);
        }
      }
      goto LABEL_55;
    }
LABEL_11:
    v16 = *((_DWORD *)SymCryptEcpointFormatNumberofElements + a6);
    if ( v9 != v16 * (unsigned int)SymCryptEcurveSizeofFieldElement(*(_QWORD *)(a8 + 8)) )
      return 32782;
    goto LABEL_12;
  }
  if ( v9 )
    goto LABEL_11;
  return 32782;
}
