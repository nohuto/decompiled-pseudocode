/*
 * XREFs of SymCryptEckeyPerformPublicKeyValidation @ 0x14055DC98
 * Callers:
 *     SymCryptEckeySetValue @ 0x14055DDB4 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptIntFromModulus @ 0x14055E774 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsEqualUint32 @ 0x14055E81C (SymCryptIntIsEqualUint32.c)
 *     SymCryptEcpointCreate @ 0x14056673C (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsZero @ 0x1405671B0 (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointOnCurve @ 0x140567278 (SymCryptEcpointOnCurve.c)
 *     SymCryptEcpointScalarMul @ 0x1405672A4 (SymCryptEcpointScalarMul.c)
 */

__int64 __fastcall SymCryptEckeyPerformPublicKeyValidation(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rbx
  int v15; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  v9 = (unsigned int)SymCryptSizeofEcpointFromCurve(v4);
  if ( (unsigned int)SymCryptEcpointIsZero(v4, *(_QWORD *)(a1 + 16), a3, a4)
    || *(_DWORD *)(v4 + 4) != 3 && !(unsigned int)SymCryptEcpointOnCurve(v4, *(_QWORD *)(a1 + 16), a3, a4) )
  {
    return 32782LL;
  }
  if ( (a2 & 1) == 0 || (unsigned int)SymCryptIntIsEqualUint32(*(_QWORD *)(v4 + 656), 1LL) )
    return 0LL;
  v10 = SymCryptEcpointCreate(a3, v9, v4);
  v11 = v9 + a3;
  v12 = a4 - v9;
  v13 = v10;
  v14 = *(_QWORD *)(a1 + 16);
  v15 = SymCryptIntFromModulus(*(_QWORD *)(v4 + 624));
  result = SymCryptEcpointScalarMul(v4, v15, v14, 0, v13, v11, v12);
  if ( !(_DWORD)result )
    return (unsigned int)SymCryptEcpointIsZero(v4, v13, v11, v12) == 0 ? 0x800E : 0;
  return result;
}
