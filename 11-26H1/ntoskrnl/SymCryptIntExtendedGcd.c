/*
 * XREFs of SymCryptIntExtendedGcd @ 0x140564D48
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14055C2A8 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140564940 (SymCryptCrtGenerateForTwoCoprimes.c)
 * Callees:
 *     KeReadStateSemaphore @ 0x140479F40 (KeReadStateSemaphore.c)
 *     SymCryptDivisorCreate @ 0x14055E5D0 (SymCryptDivisorCreate.c)
 *     SymCryptIntAddMixedSize @ 0x14055E600 (SymCryptIntAddMixedSize.c)
 *     SymCryptIntBitsizeOfObject @ 0x14055E648 (SymCryptIntBitsizeOfObject.c)
 *     SymCryptIntConditionalCopy @ 0x14055E678 (SymCryptIntConditionalCopy.c)
 *     SymCryptIntConditionalSwap @ 0x14055E690 (SymCryptIntConditionalSwap.c)
 *     SymCryptIntCopyMixedSize @ 0x14055E6C0 (SymCryptIntCopyMixedSize.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x14055E6F0 (SymCryptIntDivMod.c)
 *     SymCryptIntFromDivisor @ 0x14055E75C (SymCryptIntFromDivisor.c)
 *     SymCryptIntGetValueLsbits32 @ 0x14055E7D4 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntIsEqualUint32 @ 0x14055E81C (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntMulMixedSize @ 0x14055E864 (SymCryptIntMulMixedSize.c)
 *     SymCryptIntSetValueUint32 @ 0x14055E8B4 (SymCryptIntSetValueUint32.c)
 *     SymCryptIntShr1 @ 0x14055E8E4 (SymCryptIntShr1.c)
 *     SymCryptIntSubMixedSize @ 0x14055E8FC (SymCryptIntSubMixedSize.c)
 *     SymCryptIntSubSameSize @ 0x14055E914 (SymCryptIntSubSameSize.c)
 *     SymCryptIntToDivisor @ 0x14055E944 (SymCryptIntToDivisor.c)
 *     SymCryptSizeofDivisorFromDigits @ 0x14055EE78 (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 */

__int64 __fastcall SymCryptIntExtendedGcd(
        struct _KTIMER *a1,
        struct _KTIMER *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  struct _KTIMER *v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rdi
  int v22; // r13d
  __int64 v23; // r14
  int v24; // ebp
  __int64 v25; // rsi
  __int64 result; // rax
  __int64 v27; // r15
  int v28; // r12d
  int v29; // ebx
  int v30; // ecx
  int v31; // r14d
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // [rsp+30h] [rbp-88h]
  __int64 v38; // [rsp+38h] [rbp-80h]
  __int64 v39; // [rsp+40h] [rbp-78h]
  __int64 v40; // [rsp+48h] [rbp-70h]
  __int64 v41; // [rsp+50h] [rbp-68h]
  int v42; // [rsp+60h] [rbp-58h]
  __int64 v43; // [rsp+68h] [rbp-50h]
  int v44; // [rsp+70h] [rbp-48h]
  int v45; // [rsp+C0h] [rbp+8h]
  int v46; // [rsp+C8h] [rbp+10h]

  v46 = (int)a2;
  v45 = (int)a1;
  LOBYTE(v11) = KeReadStateSemaphore(a1);
  v12 = v11;
  LOBYTE(v13) = KeReadStateSemaphore(a2);
  v14 = a1;
  if ( v12 <= v13 )
    v14 = a2;
  KeReadStateSemaphore(v14);
  v15 = SymCryptSizeofIntFromDigits();
  v16 = (unsigned int)SymCryptSizeofIntFromDigits();
  v17 = (unsigned int)SymCryptSizeofDivisorFromDigits();
  v18 = v15;
  v41 = SymCryptIntCreate();
  SymCryptIntCreate();
  v40 = SymCryptIntCreate();
  v37 = SymCryptIntCreate();
  v19 = (unsigned int)v16;
  v20 = v16 + v15 + v15 + v15 + v15 + a8;
  v38 = SymCryptIntCreate();
  v21 = (unsigned int)v17;
  v44 = SymCryptDivisorCreate();
  v22 = v44;
  v39 = SymCryptIntFromDivisor();
  v23 = (unsigned int)v17 + v20 + v17;
  v42 = SymCryptDivisorCreate();
  v24 = v42;
  v43 = v23;
  v25 = -4 * v18 - 2 * v21 - v19 + a9;
  SymCryptIntCopyMixedSize();
  SymCryptIntCopyMixedSize();
  SymCryptIntSetValueUint32();
  SymCryptIntSetValueUint32();
  result = SymCryptIntIsEqualUint32();
  if ( !(_DWORD)result )
  {
    result = SymCryptIntGetValueLsbits32(v39);
    if ( (result & 1) != 0 )
    {
      v27 = a7;
      v28 = v38;
      if ( !a7 || v38 )
      {
        v29 = SymCryptIntBitsizeOfObject();
        v30 = SymCryptIntBitsizeOfObject() + v29 - 1;
        if ( v30 )
        {
          v31 = v30;
          do
          {
            SymCryptIntSubSameSize();
            SymCryptIntGetValueLsbits32(v41);
            SymCryptIntConditionalSwap();
            SymCryptIntConditionalSwap();
            SymCryptIntGetValueLsbits32(v41);
            SymCryptIntSubSameSize();
            SymCryptIntConditionalCopy();
            SymCryptIntSubSameSize();
            SymCryptIntConditionalCopy();
            SymCryptIntAddMixedSize();
            SymCryptIntConditionalCopy();
            SymCryptIntShr1();
            SymCryptIntGetValueLsbits32(v40);
            SymCryptIntAddMixedSize();
            SymCryptIntConditionalCopy();
            SymCryptIntShr1();
            --v31;
          }
          while ( v31 );
          v24 = v42;
          v23 = v43;
          v27 = a7;
          v22 = v44;
          v28 = v38;
        }
        result = a4;
        if ( a4 )
          result = SymCryptIntCopyMixedSize();
        if ( a5 || a6 || v27 )
        {
          SymCryptIntFromDivisor();
          SymCryptIntCopyMixedSize();
          v32 = SymCryptIntFromDivisor();
          result = SymCryptIntToDivisor(v32, v22, 3, 0, v23, v25);
          if ( a5 )
          {
            SymCryptIntMulMixedSize(v45, v46, a5, v23, v25);
            result = SymCryptIntDivMod(a5, v22, a5, 0, v23, v25);
          }
          if ( a6 )
          {
            v33 = SymCryptIntFromDivisor();
            SymCryptIntDivMod(v46, v22, v33, 0, v23, v25);
            v34 = SymCryptIntFromDivisor();
            SymCryptIntToDivisor(v34, v24, 1, 0, v23, v25);
            result = SymCryptIntDivMod(v37, v24, 0, a6, v23, v25);
          }
          if ( v27 )
          {
            SymCryptIntFromDivisor();
            SymCryptIntCopyMixedSize();
            v35 = SymCryptIntFromDivisor();
            SymCryptIntToDivisor(v35, v24, 1, 0, v23, v25);
            SymCryptIntMulMixedSize(v37, v45, v28, v23, v25);
            SymCryptIntSubMixedSize();
            SymCryptIntDivMod(v28, v24, v28, 0, v23, v25);
            SymCryptIntFromDivisor();
            SymCryptIntCopyMixedSize();
            v36 = SymCryptIntFromDivisor();
            SymCryptIntToDivisor(v36, v24, 1, 0, v23, v25);
            SymCryptIntDivMod(v28, v24, 0, v27, v23, v25);
            SymCryptIntFromDivisor();
            return SymCryptIntSubMixedSize();
          }
        }
      }
    }
  }
  return result;
}
