/*
 * XREFs of SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x14055C930 (SymCryptRsakeySetValueInternal.c)
 * Callees:
 *     SymCryptRsakeyCreateAllObjects @ 0x14055C774 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 *     SymCryptDivisorFromModulus @ 0x14055E5E8 (SymCryptDivisorFromModulus.c)
 *     SymCryptIntBitsizeOfValue @ 0x14055E660 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCopyMixedSize @ 0x14055E6C0 (SymCryptIntCopyMixedSize.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x14055E6F0 (SymCryptIntDivMod.c)
 *     SymCryptIntDivPow2 @ 0x14055E71C (SymCryptIntDivPow2.c)
 *     SymCryptIntFromModulus @ 0x14055E774 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetValueLsbits32 @ 0x14055E7D4 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntGetValueLsbits64 @ 0x14055E7EC (SymCryptIntGetValueLsbits64.c)
 *     SymCryptIntIsEqualUint32 @ 0x14055E81C (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntIsLessThan @ 0x14055E834 (SymCryptIntIsLessThan.c)
 *     SymCryptIntMulMixedSize @ 0x14055E864 (SymCryptIntMulMixedSize.c)
 *     SymCryptIntSetValue @ 0x14055E89C (SymCryptIntSetValue.c)
 *     SymCryptIntSetValueUint64 @ 0x14055E8CC (SymCryptIntSetValueUint64.c)
 *     SymCryptIntSubUint32 @ 0x14055E92C (SymCryptIntSubUint32.c)
 *     SymCryptIntToModulus @ 0x14055E990 (SymCryptIntToModulus.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x14055EAB8 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementSetValueNegUint32 @ 0x14055EB8C (SymCryptModElementSetValueNegUint32.c)
 *     SymCryptModElementSetValueUint32 @ 0x14055EBAC (SymCryptModElementSetValueUint32.c)
 *     SymCryptModElementToInt @ 0x14055EC1C (SymCryptModElementToInt.c)
 *     SymCryptModExp @ 0x14055EC94 (SymCryptModExp.c)
 *     SymCryptModSetRandom @ 0x14055ED84 (SymCryptModSetRandom.c)
 *     SymCryptModSquare @ 0x14055EDF0 (SymCryptModSquare.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptIntExtendedGcd @ 0x140564D48 (SymCryptIntExtendedGcd.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptRsakeyCalculatePrimesFromPrivateExponent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  unsigned int v6; // edi
  unsigned int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // eax
  __int64 v12; // r13
  unsigned int v13; // ebp
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rsi
  int v18; // edi
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // r14
  int v22; // eax
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ebp
  __int64 ValueLsbits64; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  unsigned int v31; // [rsp+50h] [rbp-98h]
  unsigned int v34; // [rsp+60h] [rbp-88h]
  int v35; // [rsp+68h] [rbp-80h]
  int v36; // [rsp+70h] [rbp-78h]
  __int64 v37; // [rsp+78h] [rbp-70h]
  __int64 v38; // [rsp+80h] [rbp-68h]
  unsigned int v40; // [rsp+90h] [rbp-58h]

  v6 = *(_DWORD *)(a1 + 20);
  v8 = SymCryptSizeofIntFromDigits(v6);
  v9 = v8;
  v40 = v8;
  v10 = SymCryptDigitsFromBits(64LL);
  v11 = SymCryptSizeofIntFromDigits(v10);
  v12 = v11;
  v13 = v6 + v10;
  v34 = v11;
  v31 = SymCryptSizeofIntFromDigits(v6 + v10);
  v37 = ((((*(_DWORD *)(a1 + 16) & 0x1FFu) + 511) >> 9) + (*(_DWORD *)(a1 + 16) >> 9)) << 6;
  v14 = SymCryptIntCreate(a5, (unsigned int)v9, v6);
  v15 = v12 + v9 + a5;
  v38 = SymCryptIntCreate(v9 + a5, (unsigned int)v12, v10);
  v16 = v15 + v31;
  v17 = SymCryptIntCreate(v15, v31, v13);
  v18 = SymCryptModElementCreate(v16, v37, *(_QWORD *)(a1 + 120));
  v19 = v37 + v16 + v37;
  SymCryptModElementCreate(v16 + v37, v37, *(_QWORD *)(a1 + 120));
  v20 = SymCryptModElementCreate(v19, v37, *(_QWORD *)(a1 + 120));
  v21 = v37 + v19;
  v35 = v20;
  v22 = SymCryptModElementCreate(v21, v37, *(_QWORD *)(a1 + 120));
  v23 = v37 + v21;
  v36 = v22;
  v24 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 120));
  if ( (SymCryptIntGetValueLsbits32(v24) & 1) != 0 && !(unsigned int)SymCryptIntSetValue(a2, a3, a4, v14) )
  {
    v25 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 120));
    if ( (unsigned int)SymCryptIntIsLessThan(v14, v25) )
    {
      SymCryptIntSetValueUint64(*(_QWORD *)(a1 + 56), v38);
      SymCryptIntBitsizeOfValue(v38);
      v26 = a6 - 4 * v37 - v31 - v34 - v40;
      SymCryptIntMulMixedSize(v14, v38, v17, v23, v26);
      ValueLsbits64 = SymCryptIntGetValueLsbits64(v17);
      if ( (ValueLsbits64 & 1) != 0 )
      {
        v28 = ValueLsbits64 - 1;
        if ( v28 )
        {
          _BitScanForward64((unsigned __int64 *)&v29, v28);
          if ( (_DWORD)v29 != 64 )
          {
            SymCryptIntDivPow2(v17, (unsigned int)v29, v17);
            SymCryptModElementSetValueUint32(1, *(_QWORD *)(a1 + 120), v35, v23, v26);
            SymCryptModElementSetValueNegUint32(1, *(_QWORD *)(a1 + 120), v36, v23, v26);
            SymCryptModSetRandom(*(_QWORD *)(a1 + 120), v18, 0, v23, v26);
          }
        }
      }
    }
  }
  return 32782LL;
}
