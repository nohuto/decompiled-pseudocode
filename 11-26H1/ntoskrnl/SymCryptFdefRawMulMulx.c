/*
 * XREFs of SymCryptFdefRawMulMulx @ 0x140568390
 * Callers:
 *     SymCryptFdefRawMul @ 0x1405680C0 (SymCryptFdefRawMul.c)
 *     SymCryptFdefModMulMontgomeryMulx @ 0x14056F070 (SymCryptFdefModMulMontgomeryMulx.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall SymCryptFdefRawMulMulx(__int64 a1, int a2, unsigned __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // r9
  _OWORD *v7; // rsi
  __int64 v8; // rax
  __int128 v19; // rdx
  unsigned __int64 v21; // rt2
  __int128 v56; // rdx
  __int128 v92; // rdx
  __int128 v128; // rdx
  __int128 v164; // rdx
  __int128 v200; // rdx
  __int128 v236; // rdx
  __int128 v272; // rdx
  __int64 result; // rax
  __int64 v298; // [rsp+48h] [rbp+8h]

  _R11 = a5;
  v6 = a4 << 6;
  v298 = v6;
  v7 = a5;
  v8 = v6;
  do
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
    v7[3] = 0LL;
    v7 += 4;
    v8 -= 64LL;
  }
  while ( v8 );
  do
  {
    _RSI = 0LL;
    _RDI = 0LL;
    _RBP = 0LL;
    _RBX = 0LL;
    _R12 = 0LL;
    _R13 = 0LL;
    _R14 = 0LL;
    _R15 = 0LL;
    do
    {
      __asm { adox    rsi, [r11] }
      v21 = *(_QWORD *)a1;
      v19 = *a3;
      _R10 = (v19 * (unsigned __int128)v21) >> 64;
      _RAX = *a3 * v21;
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      *_R11 = _RSI;
      _R10 = ((unsigned __int64)v19 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v19 + 1) + 8LL)) >> 64;
      _RAX = v19 * *(_QWORD *)(*((_QWORD *)&v19 + 1) + 8LL);
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = ((unsigned __int64)v19 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v19 * MEMORY[0x10];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = ((unsigned __int64)v19 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v19 * MEMORY[0x18];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = ((unsigned __int64)v19 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v19 * MEMORY[0x20];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = ((unsigned __int64)v19 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v19 * MEMORY[0x28];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R10 = ((unsigned __int64)v19 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v19 * MEMORY[0x30];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = ((unsigned __int64)v19 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v19 * MEMORY[0x38];
      __asm { adcx    r15, rax }
      _RSI = 0LL;
      __asm
      {
        adox    rsi, rsi
        adcx    rsi, r10
      }
      __asm { adox    rdi, [r11+8] }
      v56 = a3[1];
      _R10 = (v56 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = a3[1] * MEMORY[0];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R11[1] = _RDI;
      _R10 = ((unsigned __int64)v56 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v56 + 1) + 8LL)) >> 64;
      _RAX = v56 * *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8LL);
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = ((unsigned __int64)v56 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v56 * MEMORY[0x10];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = ((unsigned __int64)v56 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v56 * MEMORY[0x18];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = ((unsigned __int64)v56 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v56 * MEMORY[0x20];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R10 = ((unsigned __int64)v56 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v56 * MEMORY[0x28];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = ((unsigned __int64)v56 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v56 * MEMORY[0x30];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = ((unsigned __int64)v56 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v56 * MEMORY[0x38];
      __asm { adcx    rsi, rax }
      _RDI = 0LL;
      __asm
      {
        adox    rdi, rdi
        adcx    rdi, r10
      }
      __asm { adox    rbp, [r11+10h] }
      v92 = a3[2];
      _R10 = (v92 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = a3[2] * MEMORY[0];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R11[2] = _RBP;
      _R10 = ((unsigned __int64)v92 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v92 + 1) + 8LL)) >> 64;
      _RAX = v92 * *(_QWORD *)(*((_QWORD *)&v92 + 1) + 8LL);
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = ((unsigned __int64)v92 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v92 * MEMORY[0x10];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = ((unsigned __int64)v92 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v92 * MEMORY[0x18];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R10 = ((unsigned __int64)v92 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v92 * MEMORY[0x20];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = ((unsigned __int64)v92 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v92 * MEMORY[0x28];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = ((unsigned __int64)v92 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v92 * MEMORY[0x30];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = ((unsigned __int64)v92 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v92 * MEMORY[0x38];
      __asm { adcx    rdi, rax }
      _RBP = 0LL;
      __asm
      {
        adox    rbp, rbp
        adcx    rbp, r10
      }
      __asm { adox    rbx, [r11+18h] }
      v128 = a3[3];
      _R10 = (v128 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = a3[3] * MEMORY[0];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R11[3] = _RBX;
      _R10 = ((unsigned __int64)v128 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v128 + 1) + 8LL)) >> 64;
      _RAX = v128 * *(_QWORD *)(*((_QWORD *)&v128 + 1) + 8LL);
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = ((unsigned __int64)v128 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v128 * MEMORY[0x10];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R10 = ((unsigned __int64)v128 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v128 * MEMORY[0x18];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = ((unsigned __int64)v128 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v128 * MEMORY[0x20];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = ((unsigned __int64)v128 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v128 * MEMORY[0x28];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = ((unsigned __int64)v128 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v128 * MEMORY[0x30];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = ((unsigned __int64)v128 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v128 * MEMORY[0x38];
      __asm { adcx    rbp, rax }
      _RBX = 0LL;
      __asm
      {
        adox    rbx, rbx
        adcx    rbx, r10
      }
      __asm { adox    r12, [r11+20h] }
      v164 = a3[4];
      _R10 = (v164 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = a3[4] * MEMORY[0];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R11[4] = _R12;
      _R10 = ((unsigned __int64)v164 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v164 + 1) + 8LL)) >> 64;
      _RAX = v164 * *(_QWORD *)(*((_QWORD *)&v164 + 1) + 8LL);
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R10 = ((unsigned __int64)v164 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v164 * MEMORY[0x10];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = ((unsigned __int64)v164 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v164 * MEMORY[0x18];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = ((unsigned __int64)v164 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v164 * MEMORY[0x20];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = ((unsigned __int64)v164 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v164 * MEMORY[0x28];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = ((unsigned __int64)v164 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v164 * MEMORY[0x30];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = ((unsigned __int64)v164 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v164 * MEMORY[0x38];
      __asm { adcx    rbx, rax }
      _R12 = 0LL;
      __asm
      {
        adox    r12, r12
        adcx    r12, r10
      }
      __asm { adox    r13, [r11+28h] }
      v200 = a3[5];
      _R10 = (v200 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = a3[5] * MEMORY[0];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R11[5] = _R13;
      _R10 = ((unsigned __int64)v200 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v200 + 1) + 8LL)) >> 64;
      _RAX = v200 * *(_QWORD *)(*((_QWORD *)&v200 + 1) + 8LL);
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = ((unsigned __int64)v200 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v200 * MEMORY[0x10];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = ((unsigned __int64)v200 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v200 * MEMORY[0x18];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = ((unsigned __int64)v200 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v200 * MEMORY[0x20];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = ((unsigned __int64)v200 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v200 * MEMORY[0x28];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = ((unsigned __int64)v200 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v200 * MEMORY[0x30];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = ((unsigned __int64)v200 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v200 * MEMORY[0x38];
      __asm { adcx    r12, rax }
      _R13 = 0LL;
      __asm
      {
        adox    r13, r13
        adcx    r13, r10
      }
      __asm { adox    r14, [r11+30h] }
      v236 = a3[6];
      _R10 = (v236 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = a3[6] * MEMORY[0];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R11[6] = _R14;
      _R10 = ((unsigned __int64)v236 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v236 + 1) + 8LL)) >> 64;
      _RAX = v236 * *(_QWORD *)(*((_QWORD *)&v236 + 1) + 8LL);
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = ((unsigned __int64)v236 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v236 * MEMORY[0x10];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = ((unsigned __int64)v236 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v236 * MEMORY[0x18];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = ((unsigned __int64)v236 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v236 * MEMORY[0x20];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = ((unsigned __int64)v236 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v236 * MEMORY[0x28];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = ((unsigned __int64)v236 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v236 * MEMORY[0x30];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = ((unsigned __int64)v236 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v236 * MEMORY[0x38];
      __asm { adcx    r13, rax }
      _R14 = 0LL;
      __asm
      {
        adox    r14, r14
        adcx    r14, r10
      }
      __asm { adox    r15, [r11+38h] }
      v272 = a3[7];
      _R10 = (v272 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = a3[7] * MEMORY[0];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R11[7] = _R15;
      _R10 = ((unsigned __int64)v272 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v272 + 1) + 8LL)) >> 64;
      _RAX = v272 * *(_QWORD *)(*((_QWORD *)&v272 + 1) + 8LL);
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = ((unsigned __int64)v272 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v272 * MEMORY[0x10];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = ((unsigned __int64)v272 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v272 * MEMORY[0x18];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = ((unsigned __int64)v272 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v272 * MEMORY[0x20];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = ((unsigned __int64)v272 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v272 * MEMORY[0x28];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = ((unsigned __int64)v272 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v272 * MEMORY[0x30];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      *(_OWORD *)(&a1 - 1) = (unsigned __int64)v272;
      _R10 = ((unsigned __int64)v272 * (unsigned __int128)MEMORY[0x38]) >> 64;
      result = v272 * MEMORY[0x38];
      __asm { adcx    r14, rax }
      _R15 = 0LL;
      __asm
      {
        adox    r15, r15
        adcx    r15, r10
      }
      a3 += 8;
      _R11 += 8;
      LODWORD(v6) = v6 - 64;
    }
    while ( (_DWORD)v6 );
    *_R11 = _RSI;
    _R11[1] = _RDI;
    _R11[2] = _RBP;
    _R11[3] = _RBX;
    _R11[4] = _R12;
    _R11[5] = _R13;
    _R11[6] = _R14;
    _R11[7] = _R15;
    LODWORD(v6) = v298;
    _R11 = (_QWORD *)((char *)_R11 - v298 + 64);
    a3 = (unsigned __int64 *)((char *)a3 - v298);
    a1 = 64LL;
    --a2;
  }
  while ( a2 );
  return result;
}
