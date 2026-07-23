/*
 * XREFs of SymCryptShortWeierstrassAdd @ 0x140574120
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsZero @ 0x14055EAD0 (SymCryptModElementIsZero.c)
 *     SymCryptEcpointCopy @ 0x140566700 (SymCryptEcpointCopy.c)
 *     SymCryptEcpointCreate @ 0x14056673C (SymCryptEcpointCreate.c)
 *     SymCryptEcpointMaskedCopy @ 0x140566958 (SymCryptEcpointMaskedCopy.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointDouble @ 0x140567130 (SymCryptEcpointDouble.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x1405742E0 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1405746CC (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x1405755B0 (SymCryptShortWeierstrassIsEqual.c)
 */

void *__fastcall SymCryptShortWeierstrassAdd(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        _BYTE *a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // esi
  int v8; // ebx
  int v9; // edi
  unsigned int v11; // eax
  __int64 v12; // r14
  _BYTE *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rbp
  _BYTE *v17; // r15

  v7 = (int)a4;
  v8 = (int)a3;
  v9 = (int)a2;
  v11 = SymCryptSizeofEcpointFromCurve(a1);
  v12 = v11;
  if ( (a5 & 1) != 0 )
    return (void *)SymCryptShortWeierstrassAddSideChannelUnsafe(a1, v9, v8, v7, a6, a7);
  v14 = (_BYTE *)SymCryptEcpointCreate(a6, v11, a1);
  v15 = a7 - 2 * v12;
  v16 = v12 + v12 + a6;
  v17 = (_BYTE *)SymCryptEcpointCreate(v12 + a6, v12, a1);
  SymCryptModElementIsZero();
  SymCryptModElementIsZero();
  SymCryptShortWeierstrassIsEqual(a1, (_DWORD)a2, (_DWORD)a3, 1, v16, v15);
  SymCryptShortWeierstrassAddDiffNonZero(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)v14, v16, v15);
  SymCryptEcpointDouble(a1, (__int64)a2);
  SymCryptEcpointMaskedCopy(a1, v17, v14);
  SymCryptEcpointMaskedCopy(a1, a2, v14);
  SymCryptEcpointMaskedCopy(a1, a3, v14);
  return SymCryptEcpointCopy(a1, v14, a4);
}
