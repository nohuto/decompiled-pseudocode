/*
 * XREFs of SymCryptRsaCoreDecCrt @ 0x140560900
 * Callers:
 *     SymCryptRsaPkcs1Sign @ 0x140561078 (SymCryptRsaPkcs1Sign.c)
 * Callees:
 *     SymCryptDivisorFromModulus @ 0x14055E5E8 (SymCryptDivisorFromModulus.c)
 *     SymCryptIntBitsizeOfValue @ 0x14055E660 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x14055E6F0 (SymCryptIntDivMod.c)
 *     SymCryptIntGetValue @ 0x14055E7BC (SymCryptIntGetValue.c)
 *     SymCryptIntIsEqual @ 0x14055E804 (SymCryptIntIsEqual.c)
 *     SymCryptIntSetValue @ 0x14055E89C (SymCryptIntSetValue.c)
 *     SymCryptIntSetValueUint64 @ 0x14055E8CC (SymCryptIntSetValueUint64.c)
 *     SymCryptIntToModElement @ 0x14055E970 (SymCryptIntToModElement.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementToInt @ 0x14055EC1C (SymCryptModElementToInt.c)
 *     SymCryptModExp @ 0x14055EC94 (SymCryptModExp.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14055EEA8 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140560FB4 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtSolve @ 0x140564B44 (SymCryptCrtSolve.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptRsaCoreDecCrt(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  bool v9; // zf
  __int64 result; // rax
  unsigned int v12; // eax
  __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rsi
  int v23; // r13d
  __int64 i; // r14
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rbp
  unsigned int v28; // ecx
  __int64 v29; // r14
  int v30; // eax
  __int64 v31; // r14
  __int64 v32; // rbx
  int v33; // eax
  unsigned int v34; // [rsp+40h] [rbp-A8h]
  int v35; // [rsp+40h] [rbp-A8h]
  unsigned int v36; // [rsp+48h] [rbp-A0h]
  unsigned int v37; // [rsp+4Ch] [rbp-9Ch]
  int v38; // [rsp+50h] [rbp-98h]
  __int64 v39; // [rsp+68h] [rbp-80h]
  __int64 v40; // [rsp+78h] [rbp-70h] BYREF
  __int128 v41; // [rsp+80h] [rbp-68h] BYREF

  v9 = *(_BYTE *)(a1 + 8) == 0;
  v41 = 0LL;
  v40 = 0LL;
  if ( v9 )
    return 32782LL;
  result = SymCryptRsaCoreVerifyInput(a1, a2, a3, a4, a7, a8);
  if ( !(_DWORD)result )
  {
    if ( *(_DWORD *)(a1 + 28) > 2u )
      return 32782LL;
    v12 = SymCryptSizeofIntFromDigits();
    v13 = v12;
    v36 = v12;
    v14 = SymCryptSizeofIntFromDigits();
    v15 = *(_DWORD *)(a1 + 28);
    v34 = v14;
    if ( v15 )
    {
      v16 = &v40;
      v17 = v15;
      do
      {
        *(_DWORD *)v16 = ((*(_DWORD *)((char *)v16 + a1 - (_QWORD)&v40 + 32) >> 9)
                        + (((*(_DWORD *)((_BYTE *)v16 + a1 - (_QWORD)&v40 + 32) & 0x1FFu) + 511) >> 9)) << 6;
        v16 = (__int64 *)((char *)v16 + 4);
        --v17;
      }
      while ( v17 );
    }
    v37 = SymCryptSizeofModElementFromModulus(*(_QWORD *)(a1 + 120));
    v39 = SymCryptIntCreate();
    v18 = v39;
    v19 = v13 + v13 + a8;
    v20 = a9 - v13 - v13;
    v38 = SymCryptIntCreate();
    v21 = 0LL;
    v22 = v20 - v34;
    v23 = SymCryptIntCreate();
    for ( i = v19 + v34; (unsigned int)v21 < *(_DWORD *)(a1 + 28); v22 -= v25 )
    {
      *((_QWORD *)&v41 + v21) = SymCryptModElementCreate();
      v25 = *((unsigned int *)&v40 + v21);
      v21 = (unsigned int)(v21 + 1);
      i += v25;
    }
    v35 = SymCryptIntCreate();
    v26 = v22 - v36 - v37;
    v27 = v37 + v36 + i;
    v40 = SymCryptModElementCreate();
    result = SymCryptIntSetValue();
    if ( !(_DWORD)result )
    {
      v28 = *(_DWORD *)(a1 + 28);
      v29 = 0LL;
      if ( v28 )
      {
        do
        {
          v30 = SymCryptDivisorFromModulus();
          SymCryptIntDivMod(v38, v30, 0, v23, v27, v26);
          SymCryptIntToModElement(v23, *(_QWORD *)(a1 + 8 * v29 + 128), *((_QWORD *)&v41 + v29), v27, v26);
          SymCryptModExp(
            *(_QWORD *)(a1 + 8 * v29 + 128),
            *((_QWORD *)&v41 + v29),
            *(_QWORD *)(a1 + 8 * v29 + 168),
            *(_DWORD *)(a1 + 4 * v29 + 32),
            0,
            *((_QWORD *)&v41 + v29),
            v27,
            v26);
          v28 = *(_DWORD *)(a1 + 28);
          v29 = (unsigned int)(v29 + 1);
        }
        while ( (unsigned int)v29 < v28 );
        v18 = v39;
      }
      result = SymCryptCrtSolve(v28, (int)a1 + 128, (int)a1 + 144, (unsigned int)&v41, 0, v18, v27, v26);
      if ( !(_DWORD)result )
      {
        v31 = v40;
        SymCryptIntToModElement(v18, *(_QWORD *)(a1 + 120), v40, v27, v26);
        SymCryptIntSetValueUint64();
        v32 = *(_QWORD *)(a1 + 120);
        v33 = SymCryptIntBitsizeOfValue();
        SymCryptModExp(v32, v31, v23, v33, 1, v31, v27, v26);
        SymCryptModElementToInt(*(_DWORD **)(a1 + 120), v31, v35, v27, v26);
        if ( (unsigned int)SymCryptIntIsEqual() )
          return SymCryptIntGetValue();
        else
          return 32778LL;
      }
    }
  }
  return result;
}
