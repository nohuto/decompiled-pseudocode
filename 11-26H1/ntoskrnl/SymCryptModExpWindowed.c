/*
 * XREFs of SymCryptModExpWindowed @ 0x14057034C
 * Callers:
 *     SymCryptModExpGeneric @ 0x1405701B4 (SymCryptModExpGeneric.c)
 * Callees:
 *     MiWriteCloneFlags @ 0x1404AFAC4 (MiWriteCloneFlags.c)
 *     SymCryptIntBitsizeOfObject @ 0x14055E648 (SymCryptIntBitsizeOfObject.c)
 *     SymCryptIntGetBits @ 0x14055E7A4 (SymCryptIntGetBits.c)
 *     SymCryptModElementCopy @ 0x14055EA54 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementSetValueUint32 @ 0x14055EBAC (SymCryptModElementSetValueUint32.c)
 *     SymCryptModMul @ 0x14055ED14 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x14055EDF0 (SymCryptModSquare.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14055EEA8 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptScsTableInit @ 0x14057736C (SymCryptScsTableInit.c)
 *     SymCryptScsTableLoad @ 0x1405773B0 (SymCryptScsTableLoad.c)
 *     SymCryptScsTableStore @ 0x1405777A4 (SymCryptScsTableStore.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptModExpWindowed(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // r15d
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned int v15; // esi
  unsigned int v16; // ebx
  unsigned int v17; // ebp
  unsigned int v18; // edi
  int v19; // ebx
  unsigned int Bits; // eax
  __int64 v21; // r15
  __int64 v22; // rdi
  unsigned int v23; // eax
  __int64 v25; // [rsp+20h] [rbp-B8h]
  __int64 v26; // [rsp+28h] [rbp-B0h]
  __int64 v27; // [rsp+28h] [rbp-B0h]
  unsigned int v28; // [rsp+34h] [rbp-A4h]
  unsigned int v29; // [rsp+38h] [rbp-A0h]
  unsigned int v30; // [rsp+3Ch] [rbp-9Ch]
  __int64 v31; // [rsp+40h] [rbp-98h]
  __int64 v32; // [rsp+58h] [rbp-80h]
  _OWORD v33[2]; // [rsp+68h] [rbp-70h] BYREF
  __int64 v34; // [rsp+110h] [rbp+38h]

  v7 = a4;
  memset(v33, 0, sizeof(v33));
  v29 = a4;
  v9 = SymCryptSizeofModElementFromModulus((__int64)a1);
  v10 = v9;
  v30 = v9;
  if ( v7 >= (unsigned int)SymCryptIntBitsizeOfObject() )
  {
    v7 = SymCryptIntBitsizeOfObject();
    v29 = v7;
  }
  v11 = 4;
  v12 = 0LL;
  do
  {
    if ( *((_DWORD *)qword_140025E40 + v12) >= v7 )
      break;
    ++v11;
    v12 = (unsigned int)(v12 + 1);
  }
  while ( !(_DWORD)v12 );
  v28 = v11;
  v13 = (unsigned int)SymCryptScsTableInit(v33, (unsigned int)(1 << v11), (unsigned int)v10);
  MiWriteCloneFlags((__int64)v33, a6);
  v14 = SymCryptModElementCreate();
  v32 = SymCryptModElementCreate();
  v31 = v10 + v10 + a6 + v13;
  v34 = -2 * v10 - (unsigned int)v13 + a7;
  SymCryptModElementSetValueUint32(1, a1, v14, v31, v34);
  v15 = v10;
  SymCryptScsTableStore(v33, 0LL, v14, (unsigned int)v10);
  SymCryptModElementCopy();
  SymCryptScsTableStore(v33, 1LL, v14, (unsigned int)v10);
  v16 = 2;
  if ( (unsigned int)(1 << v11) > 2 )
  {
    v17 = 1 << v11;
    do
    {
      v26 = v34;
      v25 = v31;
      SymCryptModMul(a1, v14);
      SymCryptScsTableStore(v33, v16++, v14, (unsigned int)v10);
    }
    while ( v16 < v17 );
    v11 = v28;
    v7 = v29;
  }
  v18 = (v7 - 1) / v11;
  v19 = v11 * v18;
  Bits = SymCryptIntGetBits();
  SymCryptScsTableLoad(v33, Bits, v14, v15, v25, v26);
  if ( v18 )
  {
    v21 = v18;
    do
    {
      v22 = v11;
      do
      {
        SymCryptModSquare(a1);
        --v22;
      }
      while ( v22 );
      v19 -= v11;
      v23 = SymCryptIntGetBits();
      SymCryptScsTableLoad(v33, v23, v32, v30, v34, v27);
      v27 = v34;
      SymCryptModMul(a1, v14);
      --v21;
    }
    while ( v21 );
  }
  return SymCryptModElementCopy();
}
