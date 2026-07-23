/*
 * XREFs of SymCryptRsaCoreDecCrtScratchSpace @ 0x140560CA4
 * Callers:
 *     SymCryptRsaPkcs1Sign @ 0x140561078 (SymCryptRsaPkcs1Sign.c)
 * Callees:
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 */

__int64 __fastcall SymCryptRsaCoreDecCrtScratchSpace(_DWORD *a1)
{
  unsigned int v1; // eax
  int v2; // ebp
  _DWORD *v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // r14d
  int v9; // r10d
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int v18; // edi
  int v19; // ebx

  v1 = a1[7];
  v2 = 0;
  if ( v1 )
  {
    v4 = a1 + 8;
    v5 = v1;
    do
    {
      v6 = *v4 >> 9;
      v7 = (*v4++ & 0x1FF) + 511;
      v2 += (v6 + (v7 >> 9)) << 6;
      --v5;
    }
    while ( v5 );
  }
  v8 = a1[12];
  v9 = a1[5];
  v10 = (unsigned int)((v8 << 8) + 64);
  v11 = (unsigned int)((v9 + 1) << 6);
  if ( (unsigned int)v10 <= 32 * v8 )
    v10 = (unsigned int)(32 * v8);
  v12 = (unsigned int)(v8 << 7) + v10 + 2LL * (unsigned int)(a1[12] << 6) + 128;
  v13 = (unsigned int)(4480 * v9 + 64);
  v14 = (unsigned int)v11;
  if ( v11 <= v12 )
    v14 = v12;
  if ( v13 <= v14 )
  {
    v15 = v12;
    if ( v11 > v12 )
      v15 = (unsigned int)((v9 + 1) << 6);
  }
  else
  {
    v15 = (unsigned int)v13;
  }
  v16 = (unsigned int)((v9 << 8) + 64);
  if ( v16 <= v15 )
  {
    v17 = (unsigned int)((v9 + 1) << 6);
    if ( v11 <= v12 )
      v17 = v12;
    if ( v13 <= v17 )
    {
      LODWORD(v16) = v12;
      if ( v11 > v12 )
        LODWORD(v16) = (v9 + 1) << 6;
    }
    else
    {
      LODWORD(v16) = 4480 * v9 + 64;
    }
  }
  v18 = a1[4];
  v19 = 3 * SymCryptSizeofIntFromDigits();
  return v2
       + (unsigned int)v16
       + (((v18 >> 9) + (((v18 & 0x1FF) + 511) >> 9)) << 6)
       + v19
       + (unsigned int)SymCryptSizeofIntFromDigits();
}
