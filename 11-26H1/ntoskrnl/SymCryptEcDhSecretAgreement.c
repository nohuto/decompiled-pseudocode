/*
 * XREFs of SymCryptEcDhSecretAgreement @ 0x140573CE4
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x1405652BC (SymCryptEcDhSecretAgreementSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptEcurveIsSame @ 0x14055D85C (SymCryptEcurveIsSame.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x14055D91C (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptEcpointCreate @ 0x14056673C (SymCryptEcpointCreate.c)
 *     SymCryptEcpointGetValue @ 0x1405667FC (SymCryptEcpointGetValue.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsZero @ 0x1405671B0 (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointScalarMul @ 0x1405672A4 (SymCryptEcpointScalarMul.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SymCryptEcDhSecretAgreement(__int64 a1, __int64 a2, int a3, int a4, void *a5, __int64 a6)
{
  _DWORD *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rbx
  unsigned __int64 v11; // r12
  unsigned int Value; // ebx
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // rax
  _BYTE *v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // r13
  unsigned __int64 v24; // [rsp+50h] [rbp-48h]
  unsigned int Src; // [rsp+A0h] [rbp+8h]
  void *Srca; // [rsp+A0h] [rbp+8h]

  if ( _bittest((const signed __int32 *)a1, 0xDu)
    && _bittest((const signed __int32 *)a2, 0xDu)
    && !a4
    && *(_BYTE *)(a1 + 4)
    && SymCryptEcurveIsSame(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8)) )
  {
    v8 = *(_DWORD **)(a1 + 8);
    v9 = SymCryptSizeofEcpointFromCurve((__int64)v8);
    v10 = v9;
    Src = v9;
    v11 = (unsigned int)SymCryptEcurveSizeofFieldElement((__int64)v8);
    if ( a6 == v11 )
    {
      v13 = v8[14];
      v14 = v8[12] + v8[13];
      v15 = v8[11];
      v16 = v14;
      if ( v14 <= v13 )
        v16 = v8[14];
      if ( v15 <= v16 )
      {
        v15 = v8[14];
        if ( v14 > v13 )
          v15 = v8[12] + v8[13];
      }
      v17 = v15;
      v18 = v10;
      v24 = v11 + v15 + v10;
      v19 = SymCryptCallbackAlloc(v24);
      v20 = (_BYTE *)v19;
      if ( v19 )
      {
        v21 = v17 + v19;
        v22 = SymCryptEcpointCreate(v17 + v19, v18, (__int64)v8);
        Srca = (void *)(v21 + Src);
        if ( (unsigned int)SymCryptEcpointIsZero((__int64)v8) )
        {
          Value = 32782;
        }
        else
        {
          Value = SymCryptEcpointScalarMul(
                    (__int64)v8,
                    *(_QWORD *)(a1 + 24),
                    *(_QWORD *)(a2 + 16),
                    0x20u,
                    v22,
                    (__int64)v20,
                    v17);
          if ( !Value )
          {
            if ( (unsigned int)SymCryptEcpointIsZero((__int64)v8) )
            {
              Value = 32780;
            }
            else
            {
              Value = SymCryptEcpointGetValue((__int64)v8, v22, a3, 1, (__int64)Srca, v11, 0, v20, v17);
              if ( !Value )
                memmove(a5, Srca, v11);
            }
          }
        }
        SymCryptWipe((__int64)v20, v24);
        SymCryptCallbackFree(v20);
      }
      else
      {
        return 32783;
      }
    }
    else
    {
      return 32770;
    }
  }
  else
  {
    return 32782;
  }
  return Value;
}
