/*
 * XREFs of SymCryptMontgomeryPointScalarMul @ 0x140576F70
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 *     SymCryptIntGetBit @ 0x14055E78C (SymCryptIntGetBit.c)
 *     SymCryptModElementConditionalSwap @ 0x14055EA3C (SymCryptModElementConditionalSwap.c)
 *     SymCryptModElementCopy @ 0x14055EA54 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementSetValueUint32 @ 0x14055EBAC (SymCryptModElementSetValueUint32.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14055EEA8 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x1405769FC (SymCryptMontgomeryDoubleAndAdd.c)
 */

__int64 __fastcall SymCryptMontgomeryPointScalarMul(__int64 a1, __int64 a2, _BYTE *a3, int a4, _BYTE *a5, __int64 a6)
{
  _BYTE *v6; // r13
  __int64 v7; // rbp
  unsigned int v8; // esi
  _DWORD *v9; // r14
  int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // r12
  _BYTE *v17; // rbx
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // r13
  int v22; // eax
  int i; // ebx
  __int64 v25; // [rsp+68h] [rbp-80h]
  int v26; // [rsp+68h] [rbp-80h]
  __int64 v27; // [rsp+70h] [rbp-78h]
  __int64 v28; // [rsp+80h] [rbp-68h]
  __int64 v29; // [rsp+88h] [rbp-60h]
  __int64 v30; // [rsp+90h] [rbp-58h]
  __int64 v31; // [rsp+98h] [rbp-50h]
  __int64 v32; // [rsp+A0h] [rbp-48h]
  char v34; // [rsp+108h] [rbp+20h]
  __int64 v35; // [rsp+118h] [rbp+30h]
  __int64 v36; // [rsp+118h] [rbp+30h]

  v34 = a4;
  v6 = a3;
  v7 = a1;
  if ( (a4 & 0xFFFFFFDF) != 0 )
  {
    return 32782;
  }
  else
  {
    v8 = 0;
    if ( !a3 )
      v6 = *(_BYTE **)(a1 + 648);
    v9 = *(_DWORD **)(a1 + 616);
    v10 = SymCryptDigitsFromBits();
    v11 = (unsigned int)SymCryptSizeofModElementFromModulus((__int64)v9);
    v12 = (unsigned int)(v10 << 8);
    v13 = v12 + (unsigned int)(v10 << 6) + 64LL + (unsigned int)(v12 + 64) + 2 * ((unsigned int)(v10 << 6) + 64LL);
    if ( (unsigned int)(v12 + 64) > v13 )
      v13 = (unsigned int)(v12 + 64);
    if ( (unsigned int)SymCryptSizeofIntFromDigits() > v13 )
      LODWORD(v13) = SymCryptSizeofIntFromDigits();
    v14 = v11;
    v35 = v11 + a6;
    v15 = SymCryptModElementCreate();
    v16 = SymCryptModElementCreate();
    v25 = SymCryptModElementCreate();
    v27 = SymCryptModElementCreate();
    v29 = SymCryptModElementCreate();
    v28 = SymCryptModElementCreate();
    v30 = *(_QWORD *)(v7 + 632);
    v36 = v14 + v14 + v14 + v14 + v14 + v35;
    v17 = &v6[*(unsigned int *)(v7 + 36) + 32];
    v31 = (__int64)(v6 + 32);
    SymCryptModElementSetValueUint32(1, v9, v15, v36, (unsigned int)v13);
    SymCryptModElementSetValueUint32(0, v9, v16, v36, (unsigned int)v13);
    SymCryptModElementCopy();
    v18 = v27;
    SymCryptModElementCopy();
    v19 = *v6 == 0;
    v20 = 0LL;
    v21 = v25;
    if ( v19 )
      v20 = (__int64)v17;
    v32 = v20;
    v22 = *(_DWORD *)(v7 + 64) + *(_DWORD *)(v7 + 24);
    if ( v22 )
    {
      do
      {
        v26 = v22 - 1;
        SymCryptIntGetBit();
        SymCryptModElementConditionalSwap();
        SymCryptModElementConditionalSwap();
        SymCryptMontgomeryDoubleAndAdd(v9, v31, v32, v30, v15, v16, v21, v27, v29, v28);
        v22 = v26;
      }
      while ( v26 );
      v7 = a1;
      v18 = v27;
    }
    SymCryptModElementConditionalSwap();
    SymCryptModElementConditionalSwap();
    if ( (v34 & 0x20) != 0 )
    {
      for ( i = *(_DWORD *)(v7 + 64); i; --i )
        SymCryptMontgomeryDoubleAndAdd(v9, v31, 0LL, v30, v15, v16, v21, v18, v29, v28);
    }
    SymCryptModElementCopy();
    SymCryptModElementCopy();
    *a5 = 0;
  }
  return v8;
}
