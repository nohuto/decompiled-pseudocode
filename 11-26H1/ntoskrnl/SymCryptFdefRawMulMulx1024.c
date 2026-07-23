/*
 * XREFs of SymCryptFdefRawMulMulx1024 @ 0x14056AE60
 * Callers:
 *     SymCryptFdefModMulMontgomeryMulx1024 @ 0x14056F0D0 (SymCryptFdefModMulMontgomeryMulx1024.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawMulMulx1024(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, __int64 _R9)
{
  unsigned __int64 *v4; // r10
  __int128 v15; // rdx
  unsigned __int64 v17; // rt2
  __int128 v52; // rdx
  __int128 v88; // rdx
  __int128 v124; // rdx
  __int128 v160; // rdx
  __int128 v196; // rdx
  __int128 v232; // rdx
  __int128 v268; // rdx
  __int128 v305; // rdx
  __int128 v341; // rdx
  __int128 v377; // rdx
  __int128 v413; // rdx
  __int128 v449; // rdx
  __int128 v485; // rdx
  __int128 v521; // rdx
  __int128 v557; // rdx
  __int128 v601; // rdx
  __int128 v637; // rdx
  __int128 v673; // rdx
  __int128 v709; // rdx
  __int128 v745; // rdx
  __int128 v781; // rdx
  __int128 v817; // rdx
  __int128 v853; // rdx
  __int128 v889; // rdx
  __int128 v925; // rdx
  __int128 v961; // rdx
  __int128 v997; // rdx
  __int128 v1033; // rdx
  __int128 v1069; // rdx
  __int128 v1105; // rdx
  __int128 v1141; // rdx
  __int64 result; // rax

  v4 = a2;
  *(_OWORD *)_R9 = 0LL;
  *(_OWORD *)(_R9 + 16) = 0LL;
  *(_OWORD *)(_R9 + 32) = 0LL;
  *(_OWORD *)(_R9 + 48) = 0LL;
  *(_OWORD *)(_R9 + 64) = 0LL;
  *(_OWORD *)(_R9 + 80) = 0LL;
  *(_OWORD *)(_R9 + 96) = 0LL;
  *(_OWORD *)(_R9 + 112) = 0LL;
  _R11 = 0LL;
  _RSI = 0LL;
  _RDI = 0LL;
  _RBP = 0LL;
  _RBX = 0LL;
  _R12 = 0LL;
  _R13 = 0LL;
  _R14 = 0LL;
  __asm { adox    r11, [r9] }
  v17 = *a1;
  v15 = *a2;
  _R8 = (v15 * (unsigned __int128)v17) >> 64;
  _RAX = v15 * v17;
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  *(_QWORD *)_R9 = _R11;
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v15 + 1) + 8LL)) >> 64;
  _RAX = v15 * *(_QWORD *)(*((_QWORD *)&v15 + 1) + 8LL);
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v15 * MEMORY[0x10];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v15 * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v15 * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v15 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v15 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v15 * MEMORY[0x38];
  __asm { adcx    r14, rax }
  _R11 = 0LL;
  __asm
  {
    adox    r11, r11
    adcx    r11, r8
  }
  __asm { adox    rsi, [r9+8] }
  v52 = v4[1];
  _R8 = (v52 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[1] * MEMORY[0];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  *(_QWORD *)(_R9 + 8) = _RSI;
  _R8 = ((unsigned __int64)v52 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v52 + 1) + 8LL)) >> 64;
  _RAX = v52 * *(_QWORD *)(*((_QWORD *)&v52 + 1) + 8LL);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v52 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v52 * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v52 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v52 * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v52 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v52 * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v52 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v52 * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v52 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v52 * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v52 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v52 * MEMORY[0x38];
  __asm { adcx    r11, rax }
  _RSI = 0LL;
  __asm
  {
    adox    rsi, rsi
    adcx    rsi, r8
  }
  __asm { adox    rdi, [r9+10h] }
  v88 = v4[2];
  _R8 = (v88 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[2] * MEMORY[0];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  *(_QWORD *)(_R9 + 16) = _RDI;
  _R8 = ((unsigned __int64)v88 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v88 + 1) + 8LL)) >> 64;
  _RAX = v88 * *(_QWORD *)(*((_QWORD *)&v88 + 1) + 8LL);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v88 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v88 * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v88 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v88 * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v88 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v88 * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v88 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v88 * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v88 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v88 * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v88 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v88 * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  _RDI = 0LL;
  __asm
  {
    adox    rdi, rdi
    adcx    rdi, r8
  }
  __asm { adox    rbp, [r9+18h] }
  v124 = v4[3];
  _R8 = (v124 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[3] * MEMORY[0];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  *(_QWORD *)(_R9 + 24) = _RBP;
  _R8 = ((unsigned __int64)v124 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v124 + 1) + 8LL)) >> 64;
  _RAX = v124 * *(_QWORD *)(*((_QWORD *)&v124 + 1) + 8LL);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v124 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v124 * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v124 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v124 * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v124 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v124 * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v124 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v124 * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v124 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v124 * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v124 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v124 * MEMORY[0x38];
  __asm { adcx    rdi, rax }
  _RBP = 0LL;
  __asm
  {
    adox    rbp, rbp
    adcx    rbp, r8
  }
  __asm { adox    rbx, [r9+20h] }
  v160 = v4[4];
  _R8 = (v160 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[4] * MEMORY[0];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  *(_QWORD *)(_R9 + 32) = _RBX;
  _R8 = ((unsigned __int64)v160 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v160 + 1) + 8LL)) >> 64;
  _RAX = v160 * *(_QWORD *)(*((_QWORD *)&v160 + 1) + 8LL);
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v160 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v160 * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v160 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v160 * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v160 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v160 * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v160 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v160 * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v160 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v160 * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v160 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v160 * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  _RBX = 0LL;
  __asm
  {
    adox    rbx, rbx
    adcx    rbx, r8
  }
  __asm { adox    r12, [r9+28h] }
  v196 = v4[5];
  _R8 = (v196 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[5] * MEMORY[0];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  *(_QWORD *)(_R9 + 40) = _R12;
  _R8 = ((unsigned __int64)v196 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v196 + 1) + 8LL)) >> 64;
  _RAX = v196 * *(_QWORD *)(*((_QWORD *)&v196 + 1) + 8LL);
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v196 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v196 * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v196 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v196 * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v196 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v196 * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v196 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v196 * MEMORY[0x28];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v196 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v196 * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v196 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v196 * MEMORY[0x38];
  __asm { adcx    rbx, rax }
  _R12 = 0LL;
  __asm
  {
    adox    r12, r12
    adcx    r12, r8
  }
  __asm { adox    r13, [r9+30h] }
  v232 = v4[6];
  _R8 = (v232 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[6] * MEMORY[0];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  *(_QWORD *)(_R9 + 48) = _R13;
  _R8 = ((unsigned __int64)v232 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v232 + 1) + 8LL)) >> 64;
  _RAX = v232 * *(_QWORD *)(*((_QWORD *)&v232 + 1) + 8LL);
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v232 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v232 * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v232 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v232 * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v232 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v232 * MEMORY[0x20];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v232 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v232 * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v232 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v232 * MEMORY[0x30];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v232 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v232 * MEMORY[0x38];
  __asm { adcx    r12, rax }
  _R13 = 0LL;
  __asm
  {
    adox    r13, r13
    adcx    r13, r8
  }
  __asm { adox    r14, [r9+38h] }
  v268 = v4[7];
  _R8 = (v268 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[7] * MEMORY[0];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  *(_QWORD *)(_R9 + 56) = _R14;
  _R8 = ((unsigned __int64)v268 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v268 + 1) + 8LL)) >> 64;
  _RAX = v268 * *(_QWORD *)(*((_QWORD *)&v268 + 1) + 8LL);
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v268 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v268 * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v268 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v268 * MEMORY[0x18];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v268 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v268 * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v268 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v268 * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v268 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v268 * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v268 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v268 * MEMORY[0x38];
  __asm { adcx    r13, rax }
  _R14 = 0LL;
  __asm
  {
    adox    r14, r14
    adcx    r14, r8
  }
  v4 += 8;
  _R9 = (_QWORD *)(_R9 + 64);
  __asm { adox    r11, [r9] }
  v305 = *v4;
  _R8 = (v305 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = *v4 * MEMORY[0];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  *_R9 = _R11;
  _R8 = ((unsigned __int64)v305 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v305 + 1) + 8LL)) >> 64;
  _RAX = v305 * *(_QWORD *)(*((_QWORD *)&v305 + 1) + 8LL);
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v305 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v305 * MEMORY[0x10];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v305 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v305 * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v305 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v305 * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v305 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v305 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v305 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v305 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v305 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v305 * MEMORY[0x38];
  __asm { adcx    r14, rax }
  _R11 = 0LL;
  __asm
  {
    adox    r11, r11
    adcx    r11, r8
  }
  __asm { adox    rsi, [r9+8] }
  v341 = v4[1];
  _R8 = (v341 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[1] * MEMORY[0];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R9[1] = _RSI;
  _R8 = ((unsigned __int64)v341 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v341 + 1) + 8LL)) >> 64;
  _RAX = v341 * *(_QWORD *)(*((_QWORD *)&v341 + 1) + 8LL);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v341 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v341 * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v341 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v341 * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v341 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v341 * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v341 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v341 * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v341 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v341 * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v341 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v341 * MEMORY[0x38];
  __asm { adcx    r11, rax }
  _RSI = 0LL;
  __asm
  {
    adox    rsi, rsi
    adcx    rsi, r8
  }
  __asm { adox    rdi, [r9+10h] }
  v377 = v4[2];
  _R8 = (v377 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[2] * MEMORY[0];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R9[2] = _RDI;
  _R8 = ((unsigned __int64)v377 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v377 + 1) + 8LL)) >> 64;
  _RAX = v377 * *(_QWORD *)(*((_QWORD *)&v377 + 1) + 8LL);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v377 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v377 * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v377 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v377 * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v377 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v377 * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v377 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v377 * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v377 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v377 * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v377 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v377 * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  _RDI = 0LL;
  __asm
  {
    adox    rdi, rdi
    adcx    rdi, r8
  }
  __asm { adox    rbp, [r9+18h] }
  v413 = v4[3];
  _R8 = (v413 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[3] * MEMORY[0];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R9[3] = _RBP;
  _R8 = ((unsigned __int64)v413 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v413 + 1) + 8LL)) >> 64;
  _RAX = v413 * *(_QWORD *)(*((_QWORD *)&v413 + 1) + 8LL);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v413 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v413 * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v413 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v413 * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v413 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v413 * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v413 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v413 * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v413 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v413 * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v413 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v413 * MEMORY[0x38];
  __asm { adcx    rdi, rax }
  _RBP = 0LL;
  __asm
  {
    adox    rbp, rbp
    adcx    rbp, r8
  }
  __asm { adox    rbx, [r9+20h] }
  v449 = v4[4];
  _R8 = (v449 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[4] * MEMORY[0];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R9[4] = _RBX;
  _R8 = ((unsigned __int64)v449 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v449 + 1) + 8LL)) >> 64;
  _RAX = v449 * *(_QWORD *)(*((_QWORD *)&v449 + 1) + 8LL);
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v449 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v449 * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v449 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v449 * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v449 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v449 * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v449 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v449 * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v449 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v449 * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v449 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v449 * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  _RBX = 0LL;
  __asm
  {
    adox    rbx, rbx
    adcx    rbx, r8
  }
  __asm { adox    r12, [r9+28h] }
  v485 = v4[5];
  _R8 = (v485 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[5] * MEMORY[0];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R9[5] = _R12;
  _R8 = ((unsigned __int64)v485 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v485 + 1) + 8LL)) >> 64;
  _RAX = v485 * *(_QWORD *)(*((_QWORD *)&v485 + 1) + 8LL);
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v485 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v485 * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v485 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v485 * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v485 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v485 * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v485 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v485 * MEMORY[0x28];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v485 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v485 * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v485 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v485 * MEMORY[0x38];
  __asm { adcx    rbx, rax }
  _R12 = 0LL;
  __asm
  {
    adox    r12, r12
    adcx    r12, r8
  }
  __asm { adox    r13, [r9+30h] }
  v521 = v4[6];
  _R8 = (v521 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[6] * MEMORY[0];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R9[6] = _R13;
  _R8 = ((unsigned __int64)v521 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v521 + 1) + 8LL)) >> 64;
  _RAX = v521 * *(_QWORD *)(*((_QWORD *)&v521 + 1) + 8LL);
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v521 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v521 * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v521 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v521 * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v521 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v521 * MEMORY[0x20];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v521 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v521 * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v521 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v521 * MEMORY[0x30];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v521 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v521 * MEMORY[0x38];
  __asm { adcx    r12, rax }
  _R13 = 0LL;
  __asm
  {
    adox    r13, r13
    adcx    r13, r8
  }
  __asm { adox    r14, [r9+38h] }
  v557 = v4[7];
  _R8 = (v557 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[7] * MEMORY[0];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R9[7] = _R14;
  _R8 = ((unsigned __int64)v557 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v557 + 1) + 8LL)) >> 64;
  _RAX = v557 * *(_QWORD *)(*((_QWORD *)&v557 + 1) + 8LL);
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v557 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v557 * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v557 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v557 * MEMORY[0x18];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v557 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v557 * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v557 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v557 * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v557 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v557 * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v557 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v557 * MEMORY[0x38];
  __asm { adcx    r13, rax }
  _R14 = 0LL;
  __asm
  {
    adox    r14, r14
    adcx    r14, r8
  }
  _R9 += 8;
  *_R9 = _R11;
  _R9[1] = _RSI;
  _R9[2] = _RDI;
  _R9[3] = _RBP;
  _R9[4] = _RBX;
  _R9[5] = _R12;
  _R9[6] = _R13;
  _R9[7] = _R14;
  _R9 -= 8;
  v4 -= 8;
  _R11 = 0LL;
  _RSI = 0LL;
  _RDI = 0LL;
  _RBP = 0LL;
  _RBX = 0LL;
  _R12 = 0LL;
  _R13 = 0LL;
  _R14 = 0LL;
  __asm { adox    r11, [r9] }
  v601 = *v4;
  _R8 = (v601 * (unsigned __int128)MEMORY[0x40]) >> 64;
  _RAX = *v4 * MEMORY[0x40];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  *_R9 = _R11;
  _R8 = ((unsigned __int64)v601 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v601 + 1) + 8LL)) >> 64;
  _RAX = v601 * *(_QWORD *)(*((_QWORD *)&v601 + 1) + 8LL);
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v601 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v601 * MEMORY[0x10];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v601 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v601 * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v601 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v601 * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v601 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v601 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v601 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v601 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v601 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v601 * MEMORY[0x38];
  __asm { adcx    r14, rax }
  _R11 = 0LL;
  __asm
  {
    adox    r11, r11
    adcx    r11, r8
  }
  __asm { adox    rsi, [r9+8] }
  v637 = v4[1];
  _R8 = (v637 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[1] * MEMORY[0];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R9[1] = _RSI;
  _R8 = ((unsigned __int64)v637 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v637 + 1) + 8LL)) >> 64;
  _RAX = v637 * *(_QWORD *)(*((_QWORD *)&v637 + 1) + 8LL);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v637 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v637 * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v637 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v637 * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v637 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v637 * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v637 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v637 * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v637 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v637 * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v637 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v637 * MEMORY[0x38];
  __asm { adcx    r11, rax }
  _RSI = 0LL;
  __asm
  {
    adox    rsi, rsi
    adcx    rsi, r8
  }
  __asm { adox    rdi, [r9+10h] }
  v673 = v4[2];
  _R8 = (v673 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[2] * MEMORY[0];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R9[2] = _RDI;
  _R8 = ((unsigned __int64)v673 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v673 + 1) + 8LL)) >> 64;
  _RAX = v673 * *(_QWORD *)(*((_QWORD *)&v673 + 1) + 8LL);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v673 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v673 * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v673 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v673 * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v673 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v673 * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v673 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v673 * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v673 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v673 * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v673 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v673 * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  _RDI = 0LL;
  __asm
  {
    adox    rdi, rdi
    adcx    rdi, r8
  }
  __asm { adox    rbp, [r9+18h] }
  v709 = v4[3];
  _R8 = (v709 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[3] * MEMORY[0];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R9[3] = _RBP;
  _R8 = ((unsigned __int64)v709 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v709 + 1) + 8LL)) >> 64;
  _RAX = v709 * *(_QWORD *)(*((_QWORD *)&v709 + 1) + 8LL);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v709 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v709 * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v709 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v709 * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v709 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v709 * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v709 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v709 * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v709 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v709 * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v709 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v709 * MEMORY[0x38];
  __asm { adcx    rdi, rax }
  _RBP = 0LL;
  __asm
  {
    adox    rbp, rbp
    adcx    rbp, r8
  }
  __asm { adox    rbx, [r9+20h] }
  v745 = v4[4];
  _R8 = (v745 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[4] * MEMORY[0];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R9[4] = _RBX;
  _R8 = ((unsigned __int64)v745 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v745 + 1) + 8LL)) >> 64;
  _RAX = v745 * *(_QWORD *)(*((_QWORD *)&v745 + 1) + 8LL);
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v745 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v745 * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v745 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v745 * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v745 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v745 * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v745 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v745 * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v745 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v745 * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v745 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v745 * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  _RBX = 0LL;
  __asm
  {
    adox    rbx, rbx
    adcx    rbx, r8
  }
  __asm { adox    r12, [r9+28h] }
  v781 = v4[5];
  _R8 = (v781 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[5] * MEMORY[0];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R9[5] = _R12;
  _R8 = ((unsigned __int64)v781 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v781 + 1) + 8LL)) >> 64;
  _RAX = v781 * *(_QWORD *)(*((_QWORD *)&v781 + 1) + 8LL);
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v781 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v781 * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v781 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v781 * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v781 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v781 * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v781 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v781 * MEMORY[0x28];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v781 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v781 * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v781 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v781 * MEMORY[0x38];
  __asm { adcx    rbx, rax }
  _R12 = 0LL;
  __asm
  {
    adox    r12, r12
    adcx    r12, r8
  }
  __asm { adox    r13, [r9+30h] }
  v817 = v4[6];
  _R8 = (v817 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[6] * MEMORY[0];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R9[6] = _R13;
  _R8 = ((unsigned __int64)v817 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v817 + 1) + 8LL)) >> 64;
  _RAX = v817 * *(_QWORD *)(*((_QWORD *)&v817 + 1) + 8LL);
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v817 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v817 * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v817 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v817 * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v817 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v817 * MEMORY[0x20];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v817 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v817 * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v817 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v817 * MEMORY[0x30];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v817 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v817 * MEMORY[0x38];
  __asm { adcx    r12, rax }
  _R13 = 0LL;
  __asm
  {
    adox    r13, r13
    adcx    r13, r8
  }
  __asm { adox    r14, [r9+38h] }
  v853 = v4[7];
  _R8 = (v853 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[7] * MEMORY[0];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R9[7] = _R14;
  _R8 = ((unsigned __int64)v853 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v853 + 1) + 8LL)) >> 64;
  _RAX = v853 * *(_QWORD *)(*((_QWORD *)&v853 + 1) + 8LL);
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v853 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v853 * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v853 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v853 * MEMORY[0x18];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v853 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v853 * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v853 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v853 * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v853 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v853 * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v853 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v853 * MEMORY[0x38];
  __asm { adcx    r13, rax }
  _R14 = 0LL;
  __asm
  {
    adox    r14, r14
    adcx    r14, r8
  }
  v4 += 8;
  _R9 += 8;
  __asm { adox    r11, [r9] }
  v889 = *v4;
  _R8 = (v889 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = *v4 * MEMORY[0];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  *_R9 = _R11;
  _R8 = ((unsigned __int64)v889 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v889 + 1) + 8LL)) >> 64;
  _RAX = v889 * *(_QWORD *)(*((_QWORD *)&v889 + 1) + 8LL);
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v889 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v889 * MEMORY[0x10];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v889 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v889 * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v889 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v889 * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v889 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v889 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v889 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v889 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v889 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v889 * MEMORY[0x38];
  __asm { adcx    r14, rax }
  _R11 = 0LL;
  __asm
  {
    adox    r11, r11
    adcx    r11, r8
  }
  __asm { adox    rsi, [r9+8] }
  v925 = v4[1];
  _R8 = (v925 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[1] * MEMORY[0];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R9[1] = _RSI;
  _R8 = ((unsigned __int64)v925 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v925 + 1) + 8LL)) >> 64;
  _RAX = v925 * *(_QWORD *)(*((_QWORD *)&v925 + 1) + 8LL);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v925 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v925 * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v925 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v925 * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v925 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v925 * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v925 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v925 * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v925 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v925 * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v925 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v925 * MEMORY[0x38];
  __asm { adcx    r11, rax }
  _RSI = 0LL;
  __asm
  {
    adox    rsi, rsi
    adcx    rsi, r8
  }
  __asm { adox    rdi, [r9+10h] }
  v961 = v4[2];
  _R8 = (v961 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[2] * MEMORY[0];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R9[2] = _RDI;
  _R8 = ((unsigned __int64)v961 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v961 + 1) + 8LL)) >> 64;
  _RAX = v961 * *(_QWORD *)(*((_QWORD *)&v961 + 1) + 8LL);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v961 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v961 * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v961 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v961 * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v961 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v961 * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v961 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v961 * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v961 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v961 * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v961 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v961 * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  _RDI = 0LL;
  __asm
  {
    adox    rdi, rdi
    adcx    rdi, r8
  }
  __asm { adox    rbp, [r9+18h] }
  v997 = v4[3];
  _R8 = (v997 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[3] * MEMORY[0];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R9[3] = _RBP;
  _R8 = ((unsigned __int64)v997 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v997 + 1) + 8LL)) >> 64;
  _RAX = v997 * *(_QWORD *)(*((_QWORD *)&v997 + 1) + 8LL);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v997 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v997 * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v997 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v997 * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v997 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v997 * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v997 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v997 * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v997 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v997 * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v997 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v997 * MEMORY[0x38];
  __asm { adcx    rdi, rax }
  _RBP = 0LL;
  __asm
  {
    adox    rbp, rbp
    adcx    rbp, r8
  }
  __asm { adox    rbx, [r9+20h] }
  v1033 = v4[4];
  _R8 = (v1033 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[4] * MEMORY[0];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R9[4] = _RBX;
  _R8 = ((unsigned __int64)v1033 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v1033 + 1) + 8LL)) >> 64;
  _RAX = v1033 * *(_QWORD *)(*((_QWORD *)&v1033 + 1) + 8LL);
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v1033 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v1033 * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v1033 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v1033 * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v1033 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v1033 * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v1033 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v1033 * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v1033 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v1033 * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v1033 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v1033 * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  _RBX = 0LL;
  __asm
  {
    adox    rbx, rbx
    adcx    rbx, r8
  }
  __asm { adox    r12, [r9+28h] }
  v1069 = v4[5];
  _R8 = (v1069 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[5] * MEMORY[0];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R9[5] = _R12;
  _R8 = ((unsigned __int64)v1069 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v1069 + 1) + 8LL)) >> 64;
  _RAX = v1069 * *(_QWORD *)(*((_QWORD *)&v1069 + 1) + 8LL);
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v1069 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v1069 * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v1069 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v1069 * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v1069 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v1069 * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v1069 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v1069 * MEMORY[0x28];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v1069 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v1069 * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v1069 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v1069 * MEMORY[0x38];
  __asm { adcx    rbx, rax }
  _R12 = 0LL;
  __asm
  {
    adox    r12, r12
    adcx    r12, r8
  }
  __asm { adox    r13, [r9+30h] }
  v1105 = v4[6];
  _R8 = (v1105 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[6] * MEMORY[0];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R9[6] = _R13;
  _R8 = ((unsigned __int64)v1105 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v1105 + 1) + 8LL)) >> 64;
  _RAX = v1105 * *(_QWORD *)(*((_QWORD *)&v1105 + 1) + 8LL);
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = ((unsigned __int64)v1105 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v1105 * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v1105 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v1105 * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v1105 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v1105 * MEMORY[0x20];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v1105 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v1105 * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v1105 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v1105 * MEMORY[0x30];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v1105 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v1105 * MEMORY[0x38];
  __asm { adcx    r12, rax }
  _R13 = 0LL;
  __asm
  {
    adox    r13, r13
    adcx    r13, r8
  }
  __asm { adox    r14, [r9+38h] }
  v1141 = v4[7];
  _R8 = (v1141 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[7] * MEMORY[0];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R9[7] = _R14;
  _R8 = ((unsigned __int64)v1141 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v1141 + 1) + 8LL)) >> 64;
  _RAX = v1141 * *(_QWORD *)(*((_QWORD *)&v1141 + 1) + 8LL);
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v1141 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v1141 * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v1141 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v1141 * MEMORY[0x18];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v1141 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v1141 * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v1141 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v1141 * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v1141 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v1141 * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v1141 * (unsigned __int128)MEMORY[0x38]) >> 64;
  result = v1141 * MEMORY[0x38];
  __asm { adcx    r13, rax }
  _R14 = 0LL;
  __asm
  {
    adox    r14, r14
    adcx    r14, r8
  }
  _R9 += 8;
  *_R9 = _R11;
  _R9[1] = _RSI;
  _R9[2] = _RDI;
  _R9[3] = _RBP;
  _R9[4] = _RBX;
  _R9[5] = _R12;
  _R9[6] = _R13;
  _R9[7] = _R14;
  return result;
}
