/*
 * XREFs of SymCryptFdefMontgomeryReduceMulx @ 0x140569480
 * Callers:
 *     SymCryptFdefModMulMontgomeryMulx @ 0x14056F070 (SymCryptFdefModMulMontgomeryMulx.c)
 *     SymCryptFdefModSquareMontgomeryMulx @ 0x14056F570 (SymCryptFdefModSquareMontgomeryMulx.c)
 *     SymCryptFdefMontgomeryReduce @ 0x14056F890 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefMontgomeryReduceMulx(__int64 a1, __m128i *a2, __m128i *a3)
{
  __m128i *v3; // r10
  __int64 v12; // r8
  int v13; // r9d
  __int128 v14; // rdx
  __m128i *v287; // r8
  int i; // r9d
  __int128 v292; // rdx
  __int128 v328; // rdx
  __int128 v364; // rdx
  __int128 v400; // rdx
  __int128 v436; // rdx
  __int128 v472; // rdx
  __int128 v508; // rdx
  __int128 v544; // rdx
  __int64 v570; // r11
  __int64 v571; // r11
  _BOOL8 v572; // rtt
  __int64 v573; // rax
  __int64 v574; // rax
  __int64 v575; // rtt
  __int64 v576; // r11
  __int64 v577; // r11
  __int64 v578; // rtt
  __int64 v579; // rax
  __int64 v580; // rax
  __int64 v581; // rtt
  __int64 v582; // r11
  __int64 v583; // r11
  __int64 v584; // rtt
  __int64 v585; // rax
  __int64 v586; // rax
  __int64 v587; // rtt
  __int64 v588; // r11
  __int64 v589; // r11
  __int64 v590; // rtt
  int v591; // r9d
  bool v592; // cf
  int v593; // esi
  _QWORD *v594; // rcx
  __int64 *v595; // r8
  int v596; // edi
  const __m128i *v597; // rbp
  __m128i *v598; // rbx
  unsigned __int64 v599; // rtt
  unsigned __int64 v600; // r11
  unsigned __int64 v601; // rtt
  unsigned __int64 v602; // rax
  unsigned __int64 v603; // rtt
  unsigned __int64 v604; // r11
  unsigned __int64 v605; // rtt
  unsigned __int64 v606; // rax
  unsigned __int64 v607; // rtt
  unsigned __int64 v608; // r11
  unsigned __int64 v609; // rtt
  unsigned __int64 v610; // rax
  __int64 result; // rax
  unsigned __int64 v612; // rtt
  unsigned __int64 v613; // r11
  unsigned __int64 v614; // rtt
  __m128i v615; // xmm0
  __m128i v616; // xmm1
  __int64 v617; // [rsp+48h] [rbp+8h]
  __m128i *v618; // [rsp+50h] [rbp+10h]
  int v620; // [rsp+60h] [rbp+20h]
  int v621; // [rsp+64h] [rbp+24h]

  v3 = a2;
  v617 = a1;
  v618 = a2;
  v620 = *(_DWORD *)(a1 + 4);
  v621 = 0;
  do
  {
    _RSI = v3->m128i_i64[0];
    _RDI = v3->m128i_i64[1];
    _RBP = v3[1].m128i_i64[0];
    _RBX = v3[1].m128i_i64[1];
    _R12 = v3[2].m128i_i64[0];
    _R13 = v3[2].m128i_i64[1];
    _R14 = v3[3].m128i_i64[0];
    _R15 = v3[3].m128i_i64[1];
    v12 = *(_QWORD *)(a1 + 24);
    v13 = *(_DWORD *)(a1 + 4);
    *(_QWORD *)&v14 = v12 * v3->m128i_i64[0];
    _RAX = -1LL;
    __asm { adcx    rsi, rax }
    _RSI = 0LL;
    v3->m128i_i64[0] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)*(unsigned __int64 *)(a1 + 128)) >> 64;
    __asm { adox    rdi, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    r15, rax
      adcx    rsi, rsi
      adox    rsi, r11
    }
    *(_QWORD *)&v14 = v12 * _RDI;
    _RAX = -1LL;
    __asm { adcx    rdi, rax }
    _RDI = 0LL;
    v3->m128i_i64[1] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    rbp, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    rsi, rax
      adcx    rdi, rdi
      adox    rdi, r11
    }
    *(_QWORD *)&v14 = v12 * _RBP;
    _RAX = -1LL;
    __asm { adcx    rbp, rax }
    _RBP = 0LL;
    v3[1].m128i_i64[0] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    rbx, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    rdi, rax
      adcx    rbp, rbp
      adox    rbp, r11
    }
    *(_QWORD *)&v14 = v12 * _RBX;
    _RAX = -1LL;
    __asm { adcx    rbx, rax }
    _RBX = 0LL;
    v3[1].m128i_i64[1] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    r12, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    rbp, rax
      adcx    rbx, rbx
      adox    rbx, r11
    }
    *(_QWORD *)&v14 = v12 * _R12;
    _RAX = -1LL;
    __asm { adcx    r12, rax }
    _R12 = 0LL;
    v3[2].m128i_i64[0] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    r13, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    rbx, rax
      adcx    r12, r12
      adox    r12, r11
    }
    *(_QWORD *)&v14 = v12 * _R13;
    _RAX = -1LL;
    __asm { adcx    r13, rax }
    _R13 = 0LL;
    v3[2].m128i_i64[1] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    r14, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    r12, rax
      adcx    r13, r13
      adox    r13, r11
    }
    *(_QWORD *)&v14 = v12 * _R14;
    _RAX = -1LL;
    __asm { adcx    r14, rax }
    _R14 = 0LL;
    v3[3].m128i_i64[0] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    r15, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    r13, rax
      adcx    r14, r14
      adox    r14, r11
    }
    *(_QWORD *)&v14 = v12 * _R15;
    _RAX = -1LL;
    __asm { adcx    r15, rax }
    _R15 = 0LL;
    v3[3].m128i_i64[1] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    rsi, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    r14, rax
      adcx    r15, r15
      adox    r15, r11
    }
    v287 = v3;
    _R10 = v3 + 4;
    for ( i = v13 - 1; i; --i )
    {
      __asm { adox    rsi, [r10] }
      v292 = v287->m128i_u64[0];
      _R11 = (v292 * (unsigned __int128)MEMORY[0x40]) >> 64;
      _RAX = v287->m128i_i64[0] * MEMORY[0x40];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R10->m128i_i64[0] = _RSI;
      _R11 = ((unsigned __int64)v292 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v292 + 1) + 8LL)) >> 64;
      _RAX = v292 * *(_QWORD *)(*((_QWORD *)&v292 + 1) + 8LL);
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = ((unsigned __int64)v292 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v292 * MEMORY[0x10];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = ((unsigned __int64)v292 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v292 * MEMORY[0x18];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = ((unsigned __int64)v292 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v292 * MEMORY[0x20];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = ((unsigned __int64)v292 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v292 * MEMORY[0x28];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = ((unsigned __int64)v292 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v292 * MEMORY[0x30];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = ((unsigned __int64)v292 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v292 * MEMORY[0x38];
      __asm { adcx    r15, rax }
      _RSI = 0LL;
      __asm
      {
        adox    rsi, rsi
        adcx    rsi, r11
      }
      __asm { adox    rdi, [r10+8] }
      v328 = v287->m128i_u64[1];
      _R11 = (v328 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = v287->m128i_i64[1] * MEMORY[0];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R10->m128i_i64[1] = _RDI;
      _R11 = ((unsigned __int64)v328 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v328 + 1) + 8LL)) >> 64;
      _RAX = v328 * *(_QWORD *)(*((_QWORD *)&v328 + 1) + 8LL);
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = ((unsigned __int64)v328 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v328 * MEMORY[0x10];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = ((unsigned __int64)v328 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v328 * MEMORY[0x18];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = ((unsigned __int64)v328 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v328 * MEMORY[0x20];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = ((unsigned __int64)v328 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v328 * MEMORY[0x28];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = ((unsigned __int64)v328 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v328 * MEMORY[0x30];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = ((unsigned __int64)v328 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v328 * MEMORY[0x38];
      __asm { adcx    rsi, rax }
      _RDI = 0LL;
      __asm
      {
        adox    rdi, rdi
        adcx    rdi, r11
      }
      __asm { adox    rbp, [r10+10h] }
      v364 = v287[1].m128i_u64[0];
      _R11 = (v364 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = v287[1].m128i_i64[0] * MEMORY[0];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R10[1].m128i_i64[0] = _RBP;
      _R11 = ((unsigned __int64)v364 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v364 + 1) + 8LL)) >> 64;
      _RAX = v364 * *(_QWORD *)(*((_QWORD *)&v364 + 1) + 8LL);
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = ((unsigned __int64)v364 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v364 * MEMORY[0x10];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = ((unsigned __int64)v364 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v364 * MEMORY[0x18];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = ((unsigned __int64)v364 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v364 * MEMORY[0x20];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = ((unsigned __int64)v364 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v364 * MEMORY[0x28];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = ((unsigned __int64)v364 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v364 * MEMORY[0x30];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = ((unsigned __int64)v364 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v364 * MEMORY[0x38];
      __asm { adcx    rdi, rax }
      _RBP = 0LL;
      __asm
      {
        adox    rbp, rbp
        adcx    rbp, r11
      }
      __asm { adox    rbx, [r10+18h] }
      v400 = v287[1].m128i_u64[1];
      _R11 = (v400 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = v287[1].m128i_i64[1] * MEMORY[0];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R10[1].m128i_i64[1] = _RBX;
      _R11 = ((unsigned __int64)v400 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v400 + 1) + 8LL)) >> 64;
      _RAX = v400 * *(_QWORD *)(*((_QWORD *)&v400 + 1) + 8LL);
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = ((unsigned __int64)v400 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v400 * MEMORY[0x10];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = ((unsigned __int64)v400 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v400 * MEMORY[0x18];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = ((unsigned __int64)v400 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v400 * MEMORY[0x20];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = ((unsigned __int64)v400 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v400 * MEMORY[0x28];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = ((unsigned __int64)v400 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v400 * MEMORY[0x30];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = ((unsigned __int64)v400 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v400 * MEMORY[0x38];
      __asm { adcx    rbp, rax }
      _RBX = 0LL;
      __asm
      {
        adox    rbx, rbx
        adcx    rbx, r11
      }
      __asm { adox    r12, [r10+20h] }
      v436 = v287[2].m128i_u64[0];
      _R11 = (v436 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = v287[2].m128i_i64[0] * MEMORY[0];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R10[2].m128i_i64[0] = _R12;
      _R11 = ((unsigned __int64)v436 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v436 + 1) + 8LL)) >> 64;
      _RAX = v436 * *(_QWORD *)(*((_QWORD *)&v436 + 1) + 8LL);
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = ((unsigned __int64)v436 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v436 * MEMORY[0x10];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = ((unsigned __int64)v436 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v436 * MEMORY[0x18];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = ((unsigned __int64)v436 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v436 * MEMORY[0x20];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = ((unsigned __int64)v436 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v436 * MEMORY[0x28];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = ((unsigned __int64)v436 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v436 * MEMORY[0x30];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = ((unsigned __int64)v436 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v436 * MEMORY[0x38];
      __asm { adcx    rbx, rax }
      _R12 = 0LL;
      __asm
      {
        adox    r12, r12
        adcx    r12, r11
      }
      __asm { adox    r13, [r10+28h] }
      v472 = v287[2].m128i_u64[1];
      _R11 = (v472 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = v287[2].m128i_i64[1] * MEMORY[0];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R10[2].m128i_i64[1] = _R13;
      _R11 = ((unsigned __int64)v472 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v472 + 1) + 8LL)) >> 64;
      _RAX = v472 * *(_QWORD *)(*((_QWORD *)&v472 + 1) + 8LL);
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = ((unsigned __int64)v472 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v472 * MEMORY[0x10];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = ((unsigned __int64)v472 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v472 * MEMORY[0x18];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = ((unsigned __int64)v472 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v472 * MEMORY[0x20];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = ((unsigned __int64)v472 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v472 * MEMORY[0x28];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = ((unsigned __int64)v472 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v472 * MEMORY[0x30];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = ((unsigned __int64)v472 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v472 * MEMORY[0x38];
      __asm { adcx    r12, rax }
      _R13 = 0LL;
      __asm
      {
        adox    r13, r13
        adcx    r13, r11
      }
      __asm { adox    r14, [r10+30h] }
      v508 = v287[3].m128i_u64[0];
      _R11 = (v508 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = v287[3].m128i_i64[0] * MEMORY[0];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R10[3].m128i_i64[0] = _R14;
      _R11 = ((unsigned __int64)v508 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v508 + 1) + 8LL)) >> 64;
      _RAX = v508 * *(_QWORD *)(*((_QWORD *)&v508 + 1) + 8LL);
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = ((unsigned __int64)v508 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v508 * MEMORY[0x10];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = ((unsigned __int64)v508 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v508 * MEMORY[0x18];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = ((unsigned __int64)v508 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v508 * MEMORY[0x20];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = ((unsigned __int64)v508 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v508 * MEMORY[0x28];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = ((unsigned __int64)v508 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v508 * MEMORY[0x30];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = ((unsigned __int64)v508 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v508 * MEMORY[0x38];
      __asm { adcx    r13, rax }
      _R14 = 0LL;
      __asm
      {
        adox    r14, r14
        adcx    r14, r11
      }
      __asm { adox    r15, [r10+38h] }
      v544 = v287[3].m128i_u64[1];
      _R11 = (v544 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = v287[3].m128i_i64[1] * MEMORY[0];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R10[3].m128i_i64[1] = _R15;
      _R11 = ((unsigned __int64)v544 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v544 + 1) + 8LL)) >> 64;
      _RAX = v544 * *(_QWORD *)(*((_QWORD *)&v544 + 1) + 8LL);
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = ((unsigned __int64)v544 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v544 * MEMORY[0x10];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = ((unsigned __int64)v544 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v544 * MEMORY[0x18];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = ((unsigned __int64)v544 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v544 * MEMORY[0x20];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = ((unsigned __int64)v544 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v544 * MEMORY[0x28];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = ((unsigned __int64)v544 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v544 * MEMORY[0x30];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = ((unsigned __int64)v544 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v544 * MEMORY[0x38];
      __asm { adcx    r14, rax }
      _R15 = 0LL;
      __asm
      {
        adox    r15, r15
        adcx    r15, r11
      }
      _R10 += 4;
    }
    v592 = __CFADD__(v621 != 0, _R10->m128i_i64[0]) | __CFADD__(_RSI, (v621 != 0) + _R10->m128i_i64[0]);
    _R10->m128i_i64[0] += _RSI + (v621 != 0);
    v570 = _R10->m128i_i64[1];
    v572 = v592;
    v592 = __CFADD__(v592, v570);
    v571 = v572 + v570;
    _R10->m128i_i64[1] = _RDI + v571;
    v573 = _R10[1].m128i_i64[0];
    v575 = v592 | (unsigned __int8)__CFADD__(_RDI, v571);
    v592 = __CFADD__(v575, v573);
    v574 = v575 + v573;
    _R10[1].m128i_i64[0] = _RBP + v574;
    v576 = _R10[1].m128i_i64[1];
    v578 = v592 | (unsigned __int8)__CFADD__(_RBP, v574);
    v592 = __CFADD__(v578, v576);
    v577 = v578 + v576;
    _R10[1].m128i_i64[1] = _RBX + v577;
    v579 = _R10[2].m128i_i64[0];
    v581 = v592 | (unsigned __int8)__CFADD__(_RBX, v577);
    v592 = __CFADD__(v581, v579);
    v580 = v581 + v579;
    _R10[2].m128i_i64[0] = _R12 + v580;
    v582 = _R10[2].m128i_i64[1];
    v584 = v592 | (unsigned __int8)__CFADD__(_R12, v580);
    v592 = __CFADD__(v584, v582);
    v583 = v584 + v582;
    _R10[2].m128i_i64[1] = _R13 + v583;
    v585 = _R10[3].m128i_i64[0];
    v587 = v592 | (unsigned __int8)__CFADD__(_R13, v583);
    v592 = __CFADD__(v587, v585);
    v586 = v587 + v585;
    _R10[3].m128i_i64[0] = _R14 + v586;
    v588 = _R10[3].m128i_i64[1];
    v590 = v592 | (unsigned __int8)__CFADD__(_R14, v586);
    v592 = __CFADD__(v590, v588);
    v589 = v590 + v588;
    _R10[3].m128i_i64[1] = _R15 + v589;
    v591 = i + (v592 | __CFADD__(_R15, v589)) + i;
    v621 = v591;
    v592 = __CFADD__(v618, 64LL);
    v3 = v618 + 4;
    v618 += 4;
    a1 = v617;
    --v620;
  }
  while ( v620 );
  v593 = *(_DWORD *)(v617 + 4);
  v594 = (_QWORD *)(v617 + 128);
  v595 = (__int64 *)a3;
  v596 = v593;
  v597 = v3;
  v598 = a3;
  do
  {
    v599 = v592 + *v594;
    v592 = v3->m128i_i64[0] < v599;
    *v595 = v3->m128i_i64[0] - v599;
    v600 = v3->m128i_u64[1];
    v601 = v592 + v594[1];
    v595[1] = v600 - v601;
    v602 = v3[1].m128i_u64[0];
    v603 = (v600 < v601) + v594[2];
    v595[2] = v602 - v603;
    v604 = v3[1].m128i_u64[1];
    v605 = (v602 < v603) + v594[3];
    v595[3] = v604 - v605;
    v606 = v3[2].m128i_u64[0];
    v607 = (v604 < v605) + v594[4];
    v595[4] = v606 - v607;
    v608 = v3[2].m128i_u64[1];
    v609 = (v606 < v607) + v594[5];
    v595[5] = v608 - v609;
    v610 = v3[3].m128i_u64[0];
    v612 = (v608 < v609) + v594[6];
    v592 = v610 < v612;
    result = v610 - v612;
    v595[6] = result;
    v613 = v3[3].m128i_u64[1];
    v614 = v592 + v594[7];
    v592 = v613 < v614;
    v595[7] = v613 - v614;
    v3 += 4;
    v594 += 8;
    v595 += 8;
    --v593;
  }
  while ( v593 );
  v615 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v591 - (unsigned int)v592), 0);
  v616 = _mm_xor_si128((__m128i)-1LL, v615);
  do
  {
    *v598 = _mm_or_si128(_mm_and_si128(_mm_load_si128(v597), v615), _mm_and_si128(_mm_load_si128(v598), v616));
    v598[1] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v597 + 1), v615), _mm_and_si128(_mm_load_si128(v598 + 1), v616));
    v598[2] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v597 + 2), v615), _mm_and_si128(_mm_load_si128(v598 + 2), v616));
    v598[3] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v597 + 3), v615), _mm_and_si128(_mm_load_si128(v598 + 3), v616));
    v597 += 4;
    v598 += 4;
    --v596;
  }
  while ( v596 );
  return result;
}
