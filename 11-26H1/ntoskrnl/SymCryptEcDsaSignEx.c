/*
 * XREFs of SymCryptEcDsaSignEx @ 0x14055EED8
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x140565454 (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14055D270 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x14055D91C (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptIntCopy @ 0x14055E6A8 (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14055E774 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsEqualUint32 @ 0x14055E81C (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntIsLessThan @ 0x14055E834 (SymCryptIntIsLessThan.c)
 *     SymCryptIntToModElement @ 0x14055E970 (SymCryptIntToModElement.c)
 *     SymCryptModAdd @ 0x14055E9D4 (SymCryptModAdd.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementGetValue @ 0x14055EA84 (SymCryptModElementGetValue.c)
 *     SymCryptModElementIsZero @ 0x14055EAD0 (SymCryptModElementIsZero.c)
 *     SymCryptModElementSetValue @ 0x14055EB00 (SymCryptModElementSetValue.c)
 *     SymCryptModInv @ 0x14055ECD8 (SymCryptModInv.c)
 *     SymCryptModMul @ 0x14055ED14 (SymCryptModMul.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14055EEA8 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptEcDsaTruncateHash @ 0x14055F498 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcpointCreate @ 0x14056673C (SymCryptEcpointCreate.c)
 *     SymCryptEcpointGetValue @ 0x1405667FC (SymCryptEcpointGetValue.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointScalarMul @ 0x1405672A4 (SymCryptEcpointScalarMul.c)
 *     SymCryptEcpointSetRandom @ 0x1405672F8 (SymCryptEcpointSetRandom.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcDsaSignEx(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        unsigned __int64 a8)
{
  __int64 v8; // r14
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // r12
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // r11
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned int Value; // ebx
  unsigned __int64 v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // r12
  __int64 v34; // rsi
  int IsZero; // ebx
  unsigned int v37; // [rsp+50h] [rbp-88h]
  void *v38; // [rsp+50h] [rbp-88h]
  __int64 v39; // [rsp+58h] [rbp-80h]
  __int64 v40; // [rsp+60h] [rbp-78h]
  __int64 v41; // [rsp+68h] [rbp-70h]
  __int64 v42; // [rsp+68h] [rbp-70h]
  int v43; // [rsp+70h] [rbp-68h]
  __int64 v44; // [rsp+78h] [rbp-60h]
  int v45; // [rsp+80h] [rbp-58h]
  __int64 v46; // [rsp+88h] [rbp-50h]
  unsigned __int64 v47; // [rsp+90h] [rbp-48h]
  int v51; // [rsp+108h] [rbp+30h]

  v8 = *(_QWORD *)(a1 + 8);
  v43 = a6 & 1;
  if ( (*(_DWORD *)a1 & 0x1000) == 0 || (a6 & 0xFFFFFFF6) != 0 || !*(_BYTE *)(a1 + 4) )
  {
    Value = 32782;
    goto LABEL_36;
  }
  SymCryptEcurveDigitsofScalarMultiplier(v8);
  v10 = (unsigned int)SymCryptSizeofIntFromDigits();
  v11 = (unsigned int)SymCryptSizeofIntFromDigits();
  v12 = (unsigned int)SymCryptSizeofEcpointFromCurve(v8);
  v37 = SymCryptSizeofModElementFromModulus(*(_QWORD *)(v8 + 624));
  v13 = SymCryptEcurveSizeofFieldElement(v8);
  v14 = (unsigned int)v10;
  v15 = (unsigned int)(*(_DWORD *)(v8 + 48) + *(_DWORD *)(v8 + 52));
  v16 = *(unsigned int *)(v8 + 56);
  v17 = v13;
  v18 = (unsigned int)(*(_DWORD *)(v8 + 28) << 8);
  v19 = (unsigned int)(v18 + 64);
  v20 = v19;
  v41 = v11;
  if ( v15 > (unsigned int)v19 )
    v20 = (unsigned int)v15;
  v46 = v17;
  v21 = (unsigned int)((*(_DWORD *)(v8 + 16) << 8) + 64);
  if ( v20 > v21 )
    v21 = (unsigned int)v20;
  v22 = v18
      + (unsigned int)(*(_DWORD *)(v8 + 28) << 6)
      + 64LL
      + v19
      + 2 * ((unsigned int)(*(_DWORD *)(v8 + 28) << 6) + 64LL);
  if ( v21 > v22 )
    v22 = v21;
  if ( v22 > v16 )
    v16 = v22;
  v47 = v10 + v11 + v12 + v17 + v16 + 4 * v37;
  v23 = SymCryptCallbackAlloc(v47);
  v24 = v23;
  if ( !v23 )
  {
    Value = 32783;
LABEL_36:
    SymCryptWipe(a7, a8);
    return Value;
  }
  v26 = v16 + v23;
  v27 = SymCryptIntCreate();
  v28 = v41 + v14 + v26;
  v45 = SymCryptIntCreate();
  v29 = SymCryptEcpointCreate(v28, v12, v8);
  v30 = v12 + v28;
  v31 = v37;
  v40 = v29;
  v42 = SymCryptModElementCreate();
  v32 = v37 + v37 + v30;
  v38 = (void *)SymCryptModElementCreate();
  v33 = SymCryptModElementCreate();
  v39 = SymCryptModElementCreate();
  v44 = v31 + v31 + v32;
  Value = SymCryptEcDsaTruncateHash(v8, a2, a3, a6 & 8, v42, v27, v24, v16);
  if ( !Value )
  {
    v51 = 0;
    if ( !a4 )
    {
      v34 = a1;
      goto LABEL_21;
    }
    if ( (unsigned int)SymCryptIntIsEqualUint32() || (SymCryptIntFromModulus(), !(unsigned int)SymCryptIntIsLessThan()) )
    {
LABEL_30:
      Value = 32782;
    }
    else
    {
      SymCryptIntCopy();
      SymCryptIntToModElement(v45, *(_QWORD *)(v8 + 624), v39, v24, v16);
      Value = SymCryptEcpointScalarMul(v8, v45, 0, 0, v40, v24, v16);
      v51 = 0;
      if ( !Value )
      {
        v34 = a1;
        while ( 1 )
        {
          Value = SymCryptModInv(*(_DWORD **)(v8 + 624), v39);
          if ( Value )
            break;
          Value = SymCryptEcpointGetValue(v8, v40, 2, 1, v44, v46, v43, v24, v16);
          if ( Value )
            break;
          Value = SymCryptModElementSetValue(v44, v46, 2, *(_DWORD **)(v8 + 624), v38, v24, v47);
          if ( Value )
            break;
          SymCryptIntToModElement(*(_QWORD *)(v34 + 24), *(_QWORD *)(v8 + 624), v33, v24, v16);
          if ( *(_DWORD *)(v8 + 64) )
          {
            do
            {
              SymCryptModAdd(*(_DWORD **)(v8 + 624), v33);
              ++Value;
            }
            while ( Value < *(_DWORD *)(v8 + 64) );
          }
          SymCryptModMul(*(_DWORD **)(v8 + 624), (__int64)v38);
          SymCryptModAdd(*(_DWORD **)(v8 + 624), v42);
          SymCryptModMul(*(_DWORD **)(v8 + 624), v33);
          IsZero = SymCryptModElementIsZero();
          if ( !(IsZero | (unsigned int)SymCryptModElementIsZero()) )
          {
            Value = SymCryptModElementGetValue(*(_QWORD *)(v8 + 624), (int)v38, a7, a8 >> 1, a5, v24, v16);
            if ( !Value )
              Value = SymCryptModElementGetValue(
                        *(_QWORD *)(v8 + 624),
                        v33,
                        (unsigned int)(a8 >> 1) + (unsigned int)a7,
                        a8 >> 1,
                        a5,
                        v24,
                        v16);
            break;
          }
          if ( a4 )
            goto LABEL_30;
          if ( (unsigned int)++v51 >= 0x64 )
            goto LABEL_30;
LABEL_21:
          SymCryptEcpointSetRandom(v8, v45, v40, v24, v16);
          SymCryptIntToModElement(v45, *(_QWORD *)(v8 + 624), v39, v24, v16);
        }
      }
    }
  }
  SymCryptWipe(v24, v47);
  SymCryptCallbackFree(v24);
  if ( Value )
    goto LABEL_36;
  return Value;
}
