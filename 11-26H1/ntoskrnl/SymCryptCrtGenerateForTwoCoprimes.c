/*
 * XREFs of SymCryptCrtGenerateForTwoCoprimes @ 0x140564940
 * Callers:
 *     SymCryptCrtGenerateInverses @ 0x140564AF0 (SymCryptCrtGenerateInverses.c)
 * Callees:
 *     KeReadStateSemaphore @ 0x140479F40 (KeReadStateSemaphore.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14055E774 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetValueLsbits32 @ 0x14055E7D4 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntIsEqualUint32 @ 0x14055E81C (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntToModElement @ 0x14055E970 (SymCryptIntToModElement.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptIntExtendedGcd @ 0x140564D48 (SymCryptIntExtendedGcd.c)
 */

__int64 __fastcall SymCryptCrtGenerateForTwoCoprimes(
        struct _KTIMER *a1,
        struct _KTIMER *a2,
        unsigned int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  struct _KTIMER *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // r8d
  int v22; // edx
  char v26; // [rsp+B8h] [rbp+30h]
  __int64 v27; // [rsp+C0h] [rbp+38h]

  v9 = 0;
  LOBYTE(v10) = KeReadStateSemaphore(a1);
  v11 = v10;
  LOBYTE(v12) = KeReadStateSemaphore(a2);
  v13 = a1;
  if ( v11 <= v12 )
    v13 = a2;
  KeReadStateSemaphore(v13);
  v14 = (unsigned int)SymCryptSizeofIntFromDigits();
  v15 = SymCryptIntCreate();
  v16 = SymCryptIntCreate();
  v17 = v14 + v14 + a6;
  v18 = -2 * v14 + a7;
  v19 = SymCryptIntFromModulus();
  v26 = SymCryptIntGetValueLsbits32(v19) & 1;
  v27 = SymCryptIntFromModulus();
  v20 = SymCryptIntFromModulus();
  if ( (unsigned int)SymCryptIntIsEqualUint32() || (SymCryptIntGetValueLsbits32(v20) & 1) == 0 )
  {
    return 32782;
  }
  else
  {
    SymCryptIntExtendedGcd(v27, v20, a3, 0LL, 0LL, v15, v16, v17, v18);
    if ( v26 )
    {
      SymCryptIntToModElement(v16, (int)a2, a5, v17, v18);
      v21 = a4;
      v22 = (int)a1;
    }
    else
    {
      SymCryptIntToModElement(v16, (int)a1, a4, v17, v18);
      v21 = a5;
      v22 = (int)a2;
    }
    SymCryptIntToModElement(v15, v22, v21, v17, v18);
  }
  return v9;
}
