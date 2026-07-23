/*
 * XREFs of SymCryptFdefRawDivMod @ 0x140567DD0
 * Callers:
 *     SymCryptFdefIntDivMod @ 0x140567708 (SymCryptFdefIntDivMod.c)
 *     SymCryptFdefIntToModElement @ 0x14056E25C (SymCryptFdefIntToModElement.c)
 *     SymCryptFdefModElementSetValueGeneric @ 0x14056E7E8 (SymCryptFdefModElementSetValueGeneric.c)
 *     SymCryptFdefModMulGeneric @ 0x14056EF50 (SymCryptFdefModMulGeneric.c)
 *     SymCryptFdefModSquareGeneric @ 0x14056F480 (SymCryptFdefModSquareGeneric.c)
 *     SymCryptFdefModulusInitMontgomeryInternal @ 0x14056F7C0 (SymCryptFdefModulusInitMontgomeryInternal.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptFdefRawMaskedAddSubdigit @ 0x140568070 (SymCryptFdefRawMaskedAddSubdigit.c)
 *     SymCryptFdefRawMultSubUint32 @ 0x140568130 (SymCryptFdefRawMultSubUint32.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall SymCryptFdefRawDivMod(void *Src, int a2, _DWORD *a3, __int64 a4, void *a5, _QWORD *a6)
{
  int v8; // ebp
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  int v13; // ebx
  char v14; // bp
  int v15; // ebx
  int v16; // r11d
  unsigned __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // r10
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  char *v23; // rbx
  unsigned int v24; // r12d
  int v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+78h] [rbp+10h]
  int v27; // [rsp+80h] [rbp+18h]

  v8 = a3[1] << 6 >> 2;
  v10 = ((unsigned __int64)(unsigned int)a3[3] + 31) >> 5;
  v11 = (unsigned int)(16 * a2);
  v25 = v8;
  if ( (unsigned int)v11 >= (unsigned int)v10 )
  {
    *a6 = 0LL;
    memmove(a6 + 1, Src, 4LL * (unsigned int)v11);
    *((_DWORD *)a6 + (unsigned int)(v11 + 3)) = 0;
    *((_DWORD *)a6 + (unsigned int)(v11 + 2)) = 0;
    v12 = (unsigned int)(v11 - v10 + 1);
    v13 = -a3[3] & 0x1F;
    if ( a4 )
      SymCryptWipe(a4 + 4 * v12, 4LL * (unsigned int)(v10 - 1));
    v14 = 32 - v13;
    v15 = v12 + v10;
    v16 = 2 - v10;
    do
    {
      v17 = (unsigned int)a3[6];
      v18 = *((unsigned int *)a6 + (unsigned int)(v10 + v12));
      v19 = (unsigned int)(v15 - 1);
      v27 = v19;
      v12 = (unsigned int)(v12 - 1);
      v20 = (unsigned int)((((unsigned __int64)(unsigned int)v18 << 32) + *((unsigned int *)a6 + v19)) >> v14);
      v21 = (v17 + 0x100000000LL)
          * (unsigned int)((v18 + ((unsigned __int64)*((unsigned int *)a6 + (unsigned int)(v19 + 2)) << 32)) >> v14);
      v22 = (v17 >> 1) & -((unsigned int)((((unsigned __int64)(unsigned int)v18 << 32) + *((unsigned int *)a6 + v19)) >> v14) >> 31);
      v23 = (char *)a6 + 4 * (unsigned int)(v16 + v19);
      v24 = ((v20 + v21 + v22) >> 32)
          + 1
          + ~((unsigned __int64)-(__int64)(unsigned int)(((v20 + v21 + v22) >> 32) + 1) >> 32);
      v26 = SymCryptFdefRawMultSubUint32(v23, a3 + 16, v24, (unsigned int)v10);
      SymCryptFdefRawMaskedAddSubdigit(v23, a3 + 16, (unsigned int)-v26, (unsigned int)v10);
      if ( a4 )
        *(_DWORD *)(a4 + 4 * v12) = v24 - v26;
      v16 = 2 - v10;
      v15 = v27;
    }
    while ( (_DWORD)v12 );
    if ( a5 )
    {
      memmove(a5, a6 + 1, 4LL * (unsigned int)v10);
      SymCryptWipe((__int64)a5 + 4 * (unsigned int)v10, 4LL * (unsigned int)(v25 - v10));
    }
  }
  else
  {
    if ( a4 )
      SymCryptWipe(a4, (unsigned int)(a2 << 6));
    if ( a5 )
    {
      memmove(a5, Src, 4 * v11);
      SymCryptWipe((__int64)a5 + 4 * v11, 4LL * (unsigned int)(v8 - v11));
    }
    xHalTimerWatchdogStop();
  }
}
