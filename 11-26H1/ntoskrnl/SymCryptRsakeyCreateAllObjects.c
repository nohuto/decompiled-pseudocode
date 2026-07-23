/*
 * XREFs of SymCryptRsakeyCreateAllObjects @ 0x14055C774
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055C930 (SymCryptRsakeySetValueInternal.c)
 * Callees:
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModulusCreate @ 0x14055EE60 (SymCryptModulusCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14055EEA8 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptSizeofModulusFromDigits @ 0x14055EEC0 (SymCryptSizeofModulusFromDigits.c)
 */

__int64 __fastcall SymCryptRsakeyCreateAllObjects(_DWORD *a1)
{
  unsigned int v1; // eax
  __int64 v2; // rbp
  unsigned int i; // r14d
  unsigned int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int j; // r14d
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 result; // rax
  unsigned int v17; // ebx
  unsigned int v18; // eax

  v1 = a1[7];
  v2 = 0LL;
  for ( i = 0; i < v1; v1 = a1[7] )
  {
    v5 = a1[i + 10];
    v6 = SymCryptSizeofModulusFromDigits(v5);
    *(_QWORD *)&a1[2 * i + 32] = SymCryptModulusCreate(*(_QWORD *)&a1[2 * i + 16], v6, v5);
    ++i;
  }
  v7 = 0;
  if ( v1 )
  {
    do
    {
      v8 = v7;
      v9 = *(_QWORD *)&a1[2 * v7 + 32];
      v10 = SymCryptSizeofModElementFromModulus(v9);
      v11 = SymCryptModElementCreate(*(_QWORD *)&a1[2 * v7++ + 20], v10, v9);
      *(_QWORD *)&a1[2 * v8 + 36] = v11;
    }
    while ( v7 < a1[7] );
  }
  v12 = a1[6];
  for ( j = 0; j < v12; v12 = a1[6] )
  {
    v14 = a1[5];
    v15 = SymCryptSizeofIntFromDigits(v14);
    *(_QWORD *)&a1[2 * j + 40] = SymCryptIntCreate(*(_QWORD *)&a1[2 * j + 24], v15, v14);
    ++j;
  }
  result = a1[7] * v12;
  if ( (_DWORD)result )
  {
    do
    {
      v17 = a1[v2 + 10];
      v18 = SymCryptSizeofIntFromDigits(v17);
      *(_QWORD *)&a1[2 * v2 + 42] = SymCryptIntCreate(*(_QWORD *)&a1[2 * v2 + 26], v18, v17);
      v2 = (unsigned int)(v2 + 1);
      result = (unsigned int)(a1[7] * a1[6]);
    }
    while ( (unsigned int)v2 < (unsigned int)result );
  }
  return result;
}
