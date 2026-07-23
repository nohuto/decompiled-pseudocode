/*
 * XREFs of SymCryptFdefModDivSmallPow2Mulx @ 0x14056A180
 * Callers:
 *     SymCryptFdefModDivSmallPow2 @ 0x14056E4C8 (SymCryptFdefModDivSmallPow2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModDivSmallPow2Mulx(__int64 a1, _QWORD *a2, int a3, _QWORD *a4)
{
  unsigned __int64 v5; // rdx
  int v6; // eax
  unsigned __int64 *v7; // r11
  __int64 result; // rax
  char v22; // cl
  __int64 v23; // r10
  __int64 *v24; // r9
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rdi

  _R10 = a2;
  v5 = (0xFFFFFFFFFFFFFFFFuLL >> -(char)a3) & (*a2 * *(_QWORD *)(a1 + 24));
  v6 = *(_DWORD *)(a1 + 4);
  v7 = (unsigned __int64 *)(a1 + 128);
  _RSI = 0LL;
  do
  {
    _RBP = (v5 * (unsigned __int128)*v7) >> 64;
    _RDI = v5 * *v7;
    __asm
    {
      adox    rdi, rsi
      adcx    rdi, [r10]
    }
    *a4 = _RDI;
    _RDI = v5 * (unsigned __int128)v7[1];
    __asm
    {
      adox    rdi, rbp
      adcx    rdi, [r10+8]
    }
    a4[1] = _RDI;
    _RBP = (v5 * (unsigned __int128)v7[2]) >> 64;
    *(_QWORD *)&_RDI = v5 * v7[2];
    __asm
    {
      adox    rdi, rsi
      adcx    rdi, [r10+10h]
    }
    a4[2] = _RDI;
    _RDI = v5 * (unsigned __int128)v7[3];
    __asm
    {
      adox    rdi, rbp
      adcx    rdi, [r10+18h]
    }
    a4[3] = _RDI;
    _RBP = (v5 * (unsigned __int128)v7[4]) >> 64;
    *(_QWORD *)&_RDI = v5 * v7[4];
    __asm
    {
      adox    rdi, rsi
      adcx    rdi, [r10+20h]
    }
    a4[4] = _RDI;
    _RDI = v5 * (unsigned __int128)v7[5];
    __asm
    {
      adox    rdi, rbp
      adcx    rdi, [r10+28h]
    }
    a4[5] = _RDI;
    _RBP = (v5 * (unsigned __int128)v7[6]) >> 64;
    *(_QWORD *)&_RDI = v5 * v7[6];
    __asm
    {
      adox    rdi, rsi
      adcx    rdi, [r10+30h]
    }
    a4[6] = _RDI;
    _RDI = v5 * (unsigned __int128)v7[7];
    __asm
    {
      adox    rdi, rbp
      adcx    rdi, [r10+38h]
    }
    a4[7] = _RDI;
    _RBP = 0LL;
    __asm
    {
      adox    rsi, rbp
      adcx    rsi, rbp
    }
    _R10 += 8;
    v7 += 8;
    a4 += 8;
    --v6;
  }
  while ( v6 );
  LODWORD(result) = MEMORY[4];
  v22 = 64 - a3;
  v23 = -1LL;
  if ( a3 == 64 )
    v23 = 0LL;
  v24 = a4 - 8;
  do
  {
    v25 = v24[7];
    v24[7] = (_RSI << v22) | v23 & (v25 >> a3);
    v26 = v24[6];
    v24[6] = (v25 << v22) | v23 & (v26 >> a3);
    v27 = v24[5];
    v24[5] = (v26 << v22) | v23 & (v27 >> a3);
    v28 = v24[4];
    v24[4] = (v27 << v22) | v23 & (v28 >> a3);
    v29 = v24[3];
    v24[3] = (v28 << v22) | v23 & (v29 >> a3);
    v30 = v24[2];
    v24[2] = (v29 << v22) | v23 & (v30 >> a3);
    v31 = v24[1];
    v24[1] = (v30 << v22) | v23 & (v31 >> a3);
    _RSI = *v24;
    *v24 = (v31 << v22) | v23 & ((unsigned __int64)*v24 >> a3);
    v24 -= 8;
    result = (unsigned int)(result - 1);
  }
  while ( (_DWORD)result );
  return result;
}
