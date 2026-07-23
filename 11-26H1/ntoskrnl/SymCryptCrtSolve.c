/*
 * XREFs of SymCryptCrtSolve @ 0x140564B44
 * Callers:
 *     SymCryptRsaCoreDecCrt @ 0x140560900 (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     KeReadStateSemaphore @ 0x140479F40 (KeReadStateSemaphore.c)
 *     SymCryptIntAddMixedSize @ 0x14055E600 (SymCryptIntAddMixedSize.c)
 *     SymCryptIntCopyMixedSize @ 0x14055E6C0 (SymCryptIntCopyMixedSize.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14055E774 (SymCryptIntFromModulus.c)
 *     SymCryptIntMulMixedSize @ 0x14055E864 (SymCryptIntMulMixedSize.c)
 *     SymCryptIntToModElement @ 0x14055E970 (SymCryptIntToModElement.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementToInt @ 0x14055EC1C (SymCryptModElementToInt.c)
 *     SymCryptModMul @ 0x14055ED14 (SymCryptModMul.c)
 *     SymCryptModSub @ 0x14055EE24 (SymCryptModSub.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14055EEA8 (SymCryptSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptCrtSolve(
        int a1,
        PKTIMER *a2,
        __int64 *a3,
        __int64 *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  PKTIMER *v8; // r12
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  PKTIMER *v13; // rcx
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rsi
  int v20; // ebp
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdi
  int v24; // eax
  unsigned int v25; // ebx
  int v27; // [rsp+30h] [rbp-58h]
  unsigned int v29; // [rsp+98h] [rbp+10h]
  __int64 v30; // [rsp+98h] [rbp+10h]

  v8 = a2 + 1;
  LOBYTE(v10) = KeReadStateSemaphore(a2[1]);
  v11 = v10;
  LOBYTE(v12) = KeReadStateSemaphore(*a2);
  v13 = a2;
  if ( v12 <= v11 )
    v13 = v8;
  KeReadStateSemaphore(*v13);
  v14 = (unsigned int)SymCryptSizeofIntFromDigits();
  v29 = SymCryptSizeofModElementFromModulus((__int64)*a2);
  v15 = SymCryptSizeofIntFromDigits();
  v16 = v15;
  if ( !v15 )
    return 32782;
  v17 = (unsigned int)v14;
  v18 = v14 + a7;
  v19 = v29;
  v20 = SymCryptIntCreate();
  v21 = v29 + v18;
  v30 = SymCryptModElementCreate();
  v27 = SymCryptIntCreate();
  v22 = v21 + v16;
  v23 = a8 - (v17 + v16 + v19);
  if ( a1 != 2 )
    return 32782;
  SymCryptModElementToInt(*v8, a4[1], v20, v22, v23);
  SymCryptIntToModElement(v20, (int)*a2, v30, v22, v23);
  SymCryptModSub(*a2, *a4);
  SymCryptModMul(*a2, *a3);
  SymCryptModElementToInt(*a2, v30, v20, v22, v23);
  v24 = SymCryptIntFromModulus();
  SymCryptIntMulMixedSize(v20, v24, v27, v22, v23);
  v25 = SymCryptIntCopyMixedSize();
  if ( !v25 )
  {
    SymCryptModElementToInt(*v8, a4[1], v20, v22, v23);
    if ( (unsigned int)SymCryptIntAddMixedSize() )
      return 32782;
  }
  return v25;
}
