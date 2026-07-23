/*
 * XREFs of SymCryptRsakeyCreate @ 0x14055C5E0
 * Callers:
 *     SymCryptRsakeyAllocate @ 0x14055BD14 (SymCryptRsakeyAllocate.c)
 *     HashpVerifyPkcs1Signature @ 0x1408B2320 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14055D0F8 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 *     SymCryptModulusCreate @ 0x14055EE60 (SymCryptModulusCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModulusFromDigits @ 0x14055EEC0 (SymCryptSizeofModulusFromDigits.c)
 */

__int64 __fastcall SymCryptRsakeyCreate(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int i; // edi
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int j; // edi

  v4 = 0;
  v5 = 0LL;
  v8 = SymCryptSizeofRsakeyFromParams(a3);
  if ( a2 >= v8 && a3[1] - 256 <= 0xFF00 && a3[3] == 1 )
  {
    v9 = a3[2];
    if ( v9 != 1 && v9 <= 2 )
    {
      v5 = a1;
      SymCryptWipe(a1, a2);
      *(_DWORD *)(a1 + 4) = v8;
      *(_BYTE *)(a1 + 8) = 0;
      v10 = a3[1];
      *(_DWORD *)(a1 + 12) = v10;
      v11 = SymCryptDigitsFromBits(v10);
      *(_DWORD *)(a1 + 20) = v11;
      *(_DWORD *)(a1 + 28) = a3[2];
      *(_DWORD *)(a1 + 24) = a3[3];
      v12 = (unsigned int)SymCryptSizeofModulusFromDigits(v11);
      v13 = SymCryptModulusCreate(a1 + 192, v12, *(unsigned int *)(a1 + 20));
      v14 = a1 + 192 + v12;
      *(_QWORD *)(a1 + 120) = v13;
      v15 = *(_DWORD *)(a1 + 28);
      for ( i = 0; i < v15; v15 = *(_DWORD *)(a1 + 28) )
      {
        *(_QWORD *)(a1 + 8LL * i++ + 64) = v14;
        v14 += (unsigned int)SymCryptSizeofModulusFromDigits(*(unsigned int *)(a1 + 20));
      }
      v17 = 0;
      if ( v15 )
      {
        do
        {
          v18 = v17++;
          *(_QWORD *)(a1 + 8 * v18 + 80) = v14;
          v14 += ((((a3[1] & 0x1FF) + 511) >> 9) + (a3[1] >> 9)) << 6;
        }
        while ( v17 < *(_DWORD *)(a1 + 28) );
      }
      v19 = *(_DWORD *)(a1 + 24);
      for ( j = 0; j < v19; v19 = *(_DWORD *)(a1 + 24) )
      {
        *(_QWORD *)(a1 + 8LL * j++ + 96) = v14;
        v14 += (unsigned int)SymCryptSizeofIntFromDigits(*(unsigned int *)(a1 + 20));
      }
      if ( *(_DWORD *)(a1 + 28) * v19 )
      {
        do
        {
          *(_QWORD *)(a1 + 8LL * v4++ + 104) = v14;
          v14 += (unsigned int)SymCryptSizeofIntFromDigits(*(unsigned int *)(a1 + 20));
        }
        while ( v4 < *(_DWORD *)(a1 + 24) * *(_DWORD *)(a1 + 28) );
      }
    }
  }
  return v5;
}
