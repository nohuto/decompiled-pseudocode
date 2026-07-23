/*
 * XREFs of SymCryptParallelSha256AppendBlocks_ymm @ 0x14055B204
 * Callers:
 *     SymCryptParallelSha256Append @ 0x140557370 (SymCryptParallelSha256Append.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptParallelSha256AppendBlocks_ymm(__int64 *a1, __int64 *a2, unsigned __int64 a3, __int64 _R9)
{
  unsigned __int64 v52; // r10
  __int64 v54; // rbx
  __int64 v112; // r8
  __int64 result; // rax
  __m256 v363; // [rsp+28h] [rbp+0h] BYREF

  _RBP = (unsigned __int64)&v363 & 0xFFFFFFFFFFFFFFE0uLL;
  _RAX = *a1;
  _XMM0 = 0LL;
  _XMM1 = 0LL;
  __asm
  {
    vmovdqu ymm12, cs:__ymm@0c0d0e0f08090a0b04050607000102030c0d0e0f08090a0b0405060700010203
    vmovups xmmword ptr [rbp+260h+var_240], xmm0
    vmovdqu ymm7, ymmword ptr [rax]
  }
  _RAX = a1[1];
  __asm
  {
    vmovups xmmword ptr [rbp+260h+var_240+10h], xmm0
    vmovups xmmword ptr [rbp+260h+var_260], xmm1
    vmovdqu ymm0, ymmword ptr [rax]
  }
  _RAX = a1[2];
  __asm
  {
    vpunpckldq ymm5, ymm7, ymm0
    vpunpckhdq ymm7, ymm7, ymm0
    vmovups xmmword ptr [rbp+260h+var_260+10h], xmm1
    vmovdqu ymm6, ymmword ptr [rax]
  }
  _RAX = a1[3];
  __asm { vmovdqu ymm3, ymmword ptr [rax] }
  _RAX = a1[4];
  __asm
  {
    vpunpckldq ymm0, ymm6, ymm3
    vpunpcklqdq ymm9, ymm5, ymm0
    vpunpckhqdq ymm10, ymm5, ymm0
    vmovdqu ymm8, ymmword ptr [rax]
  }
  _RAX = a1[5];
  __asm
  {
    vpunpckhdq ymm3, ymm6, ymm3
    vpunpcklqdq ymm11, ymm7, ymm3
    vpunpckhqdq ymm7, ymm7, ymm3
    vmovdqu ymm1, ymmword ptr [rax]
  }
  _RAX = a1[6];
  __asm
  {
    vpunpckldq ymm6, ymm8, ymm1
    vpunpckhdq ymm8, ymm8, ymm1
    vmovdqu ymm4, ymmword ptr [rax]
  }
  _RAX = a1[7];
  __asm
  {
    vmovdqu ymm2, ymmword ptr [rax]
    vpunpckldq ymm1, ymm4, ymm2
    vpunpckhdq ymm4, ymm4, ymm2
    vpunpcklqdq ymm2, ymm6, ymm1
    vperm2i128 ymm0, ymm9, ymm2, 20h ; ' '
    vmovdqu ymmword ptr [r9+160h], ymm0
    vpunpckhqdq ymm3, ymm6, ymm1
    vpunpcklqdq ymm5, ymm8, ymm4
    vperm2i128 ymm0, ymm10, ymm3, 20h ; ' '
    vmovdqu ymmword ptr [r9+140h], ymm0
    vperm2i128 ymm0, ymm11, ymm5, 20h ; ' '
    vmovdqu ymmword ptr [r9+120h], ymm0
    vperm2i128 ymm0, ymm9, ymm2, 31h ; '1'
    vmovdqu ymmword ptr [r9+0E0h], ymm0
    vperm2i128 ymm0, ymm10, ymm3, 31h ; '1'
    vmovdqu ymmword ptr [r9+0C0h], ymm0
    vpunpckhqdq ymm4, ymm8, ymm4
    vperm2i128 ymm0, ymm11, ymm5, 31h ; '1'
    vmovdqu ymmword ptr [r9+0A0h], ymm0
    vperm2i128 ymm1, ymm7, ymm4, 20h ; ' '
    vmovdqu ymmword ptr [r9+100h], ymm1
    vperm2i128 ymm9, ymm7, ymm4, 31h ; '1'
    vmovdqu ymmword ptr [r9+80h], ymm9
    vmovdqu ymmword ptr [r9], ymm1
    vmovdqu ymm0, ymmword ptr [r9+120h]
    vmovdqu ymmword ptr [r9+20h], ymm0
    vmovdqu ymm0, ymmword ptr [r9+140h]
    vmovdqu ymmword ptr [r9+40h], ymm0
    vmovdqu ymm0, ymmword ptr [r9+160h]
    vmovdqu ymmword ptr [r9+60h], ymm0
  }
  if ( a3 >= 0x40 )
  {
    _R11 = _R9 + 224;
    v52 = a3 >> 6;
    do
    {
      _R8 = _R9 + 448;
      v54 = 2LL;
      do
      {
        _RAX = *a2;
        __asm { vmovdqu ymm0, ymmword ptr [rax] }
        *a2 += 32LL;
        _RAX = a2[1];
        __asm
        {
          vpshufb ymm9, ymm0, ymm12
          vmovdqu ymm0, ymmword ptr [rax]
        }
        a2[1] = _RAX + 32;
        _RAX = a2[2];
        __asm
        {
          vpshufb ymm6, ymm0, ymm12
          vpunpckldq ymm4, ymm9, ymm6
          vpunpckhdq ymm6, ymm9, ymm6
          vmovdqu ymm0, ymmword ptr [rax]
        }
        a2[2] = _RAX + 32;
        _RAX = a2[3];
        __asm
        {
          vpshufb ymm5, ymm0, ymm12
          vmovdqu ymm0, ymmword ptr [rax]
        }
        a2[3] = _RAX + 32;
        _RAX = a2[4];
        __asm
        {
          vpshufb ymm2, ymm0, ymm12
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm7, ymm0, ymm12
        }
        a2[4] = _RAX + 32;
        _RAX = a2[5];
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm1, ymm0, ymm12
        }
        a2[5] = _RAX + 32;
        _RAX = a2[6];
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm8, ymm0, ymm12
        }
        a2[6] = _RAX + 32;
        _RAX = a2[7];
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm3, ymm0, ymm12
          vpunpckldq ymm0, ymm5, ymm2
          vpunpckhqdq ymm9, ymm4, ymm0
          vpunpckhdq ymm2, ymm5, ymm2
          vpunpckldq ymm5, ymm7, ymm1
          vpunpckhdq ymm7, ymm7, ymm1
          vpunpckldq ymm1, ymm8, ymm3
          vpunpcklqdq ymm10, ymm6, ymm2
          vpunpckhdq ymm3, ymm8, ymm3
          vpunpcklqdq ymm8, ymm4, ymm0
          vpunpcklqdq ymm4, ymm5, ymm1
          vpunpckhqdq ymm6, ymm6, ymm2
          vpunpckhqdq ymm2, ymm5, ymm1
          vpunpcklqdq ymm5, ymm7, ymm3
        }
        a2[7] = _RAX + 32;
        __asm
        {
          vperm2i128 ymm0, ymm8, ymm4, 20h ; ' '
          vmovdqu ymmword ptr [r8-40h], ymm0
          vperm2i128 ymm1, ymm9, ymm2, 20h ; ' '
          vmovdqu ymmword ptr [r8-20h], ymm1
          vpunpckhqdq ymm3, ymm7, ymm3
          vperm2i128 ymm0, ymm10, ymm5, 20h ; ' '
          vmovdqu ymmword ptr [r8], ymm0
        }
        _R8 += 256LL;
        __asm
        {
          vperm2i128 ymm1, ymm6, ymm3, 20h ; ' '
          vmovdqu ymmword ptr [r8-0E0h], ymm1
          vperm2i128 ymm0, ymm8, ymm4, 31h ; '1'
          vperm2i128 ymm1, ymm9, ymm2, 31h ; '1'
          vmovdqu ymmword ptr [r8-0C0h], ymm0
          vmovdqu ymmword ptr [r8-0A0h], ymm1
          vperm2i128 ymm0, ymm10, ymm5, 31h ; '1'
          vperm2i128 ymm1, ymm6, ymm3, 31h ; '1'
          vmovdqu ymmword ptr [r8-80h], ymm0
          vmovdqu ymmword ptr [r8-60h], ymm1
        }
        --v54;
      }
      while ( v54 );
      __asm
      {
        vmovdqu ymm8, ymmword ptr [r9+340h]
        vmovdqu ymm9, ymmword ptr [r9+360h]
        vmovdqu ymm10, ymmword ptr [r9+180h]
        vmovdqu [rbp+260h+var_240], ymm9
        vmovdqu [rbp+260h+var_260], ymm8
        vmovdqu ymm11, ymm8
        vmovdqu ymm13, ymm8
        vmovdqu ymm14, ymm8
        vmovdqu ymm15, ymm8
        vmovdqu ymm12, ymm9
      }
      _RAX = _R9 + 672;
      v112 = (unsigned int)(unsigned __int8)v54 + 24;
      do
      {
        __asm
        {
          vmovdqu ymm7, ymmword ptr [rax-100h]
          vpsrld  ymm5, ymm8, 0Ah
          vpslld  ymm0, ymm7, 19h
          vpsrld  ymm4, ymm7, 3
          vpsrld  ymm1, ymm7, 7
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm0, ymm15, 11h
          vpslld  ymm2, ymm7, 0Eh
          vpxor   ymm2, ymm1, ymm2
          vpslld  ymm1, ymm14, 0Fh
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm3, ymm7, 12h
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm6, ymm3, ymm4
          vpsrld  ymm4, ymm11, 13h
          vpslld  ymm2, ymm13, 0Dh
          vpxor   ymm2, ymm1, ymm2
          vpxor   ymm3, ymm2, ymm4
          vpxor   ymm0, ymm3, ymm5
          vpaddd  ymm1, ymm0, ymm10
          vpaddd  ymm2, ymm1, ymmword ptr [rax]
          vmovdqu ymm10, ymmword ptr [rax-0E0h]
        }
        _RAX += 64LL;
        __asm
        {
          vpaddd  ymm8, ymm2, ymm6
          vpslld  ymm0, ymm10, 19h
          vpsrld  ymm4, ymm10, 3
          vpsrld  ymm5, ymm9, 0Ah
          vpsrld  ymm1, ymm10, 7
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm0, ymm9, 11h
          vpslld  ymm2, ymm10, 0Eh
          vpxor   ymm2, ymm1, ymm2
          vpslld  ymm1, ymm9, 0Fh
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm3, ymm10, 12h
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm6, ymm3, ymm4
          vpslld  ymm2, ymm9, 0Dh
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm4, ymm12, 13h
          vpxor   ymm3, ymm2, ymm4
          vpxor   ymm0, ymm3, ymm5
          vpaddd  ymm1, ymm0, ymm7
          vpaddd  ymm2, ymm1, ymmword ptr [rax-20h]
          vpaddd  ymm9, ymm2, ymm6
          vmovdqu ymmword ptr [rax+0C0h], ymm9
          vmovdqu ymmword ptr [rax+0A0h], ymm8
          vmovdqu ymm11, ymm8
          vmovdqu ymm13, ymm8
          vmovdqu ymm14, ymm8
          vmovdqu ymm15, ymm8
          vmovdqu ymm12, ymm9
        }
        --v112;
      }
      while ( v112 );
      __asm
      {
        vmovdqu ymm11, ymmword ptr [r11]
        vmovdqu ymm13, ymmword ptr [r9+160h]
        vmovdqu ymm14, ymmword ptr [r9+140h]
        vmovdqu ymm15, ymmword ptr [r9+120h]
        vmovdqu ymm9, ymmword ptr [r9+100h]
        vmovdqu ymm12, cs:__ymm@0c0d0e0f08090a0b04050607000102030c0d0e0f08090a0b0405060700010203
        vmovdqu [rbp+260h+var_260], ymm11
      }
      _RBX = (char *)&SymCryptSha256K + 8;
      _R8 = _R9 + 224;
      do
      {
        __asm
        {
          vmovdqu ymm8, ymmword ptr [r8-40h]
          vmovdqu ymm10, ymmword ptr [r8-20h]
          vbroadcastss ymm7, dword ptr [rbx-8]
          vpxor   ymm0, ymm10, ymm8
          vpand   ymm1, ymm0, ymm11
          vpxor   ymm6, ymm1, ymm8
          vpslld  ymm0, ymm11, 1Ah
          vpslld  ymm4, ymm11, 7
          vpsrld  ymm5, ymm11, 19h
          vpsrld  ymm1, ymm11, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm11, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm11, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [r8+0A0h]
          vpaddd  ymm3, ymm2, ymmword ptr [r8-60h]
          vpaddd  ymm0, ymm3, ymm6
          vpaddd  ymm7, ymm0, ymm7
          vpaddd  ymm11, ymm7, ymm9
          vpor    ymm0, ymm14, ymm13
          vpand   ymm1, ymm0, ymm15
          vpand   ymm2, ymm14, ymm13
          vpor    ymm6, ymm1, ymm2
          vpslld  ymm0, ymm13, 1Eh
          vpslld  ymm4, ymm13, 0Ah
          vpsrld  ymm5, ymm13, 16h
          vmovdqu ymmword ptr [r8+20h], ymm11
          vpsrld  ymm1, ymm13, 2
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm13, 13h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm13, 0Dh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpxor   ymm0, ymm10, [rbp+260h+var_260]
          vpaddd  ymm2, ymm1, ymm7
          vbroadcastss ymm7, dword ptr [rbx-4]
          vpaddd  ymm3, ymm2, ymm6
          vpand   ymm1, ymm0, ymm11
          vpxor   ymm6, ymm1, ymm10
          vmovdqu [rbp+260h+var_240], ymm3
          vpslld  ymm0, ymm11, 1Ah
          vpslld  ymm4, ymm11, 7
          vpsrld  ymm5, ymm11, 19h
          vpsrld  ymm1, ymm11, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm11, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm11, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [r8+0C0h]
          vpaddd  ymm3, ymm2, ymm8
          vmovdqu ymm8, [rbp+260h+var_240]
          vpaddd  ymm0, ymm3, ymm6
          vpaddd  ymm7, ymm0, ymm7
          vpaddd  ymm9, ymm7, ymm15
          vpor    ymm0, ymm8, ymm13
          vpand   ymm1, ymm0, ymm14
          vpand   ymm2, ymm8, ymm13
          vpor    ymm6, ymm1, ymm2
          vpslld  ymm0, ymm8, 1Eh
          vpsrld  ymm1, ymm8, 2
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm8, 13h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm8, 0Dh
          vpxor   ymm3, ymm2, ymm3
          vpslld  ymm4, ymm8, 0Ah
          vpxor   ymm0, ymm3, ymm4
          vpsrld  ymm5, ymm8, 16h
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymm7
          vmovdqu ymmword ptr [r8+40h], ymm9
          vbroadcastss ymm7, dword ptr [rbx]
          vpaddd  ymm15, ymm2, ymm6
          vpxor   ymm0, ymm11, [rbp+260h+var_260]
          vpand   ymm1, ymm0, ymm9
          vpxor   ymm6, ymm1, [rbp+260h+var_260]
          vpslld  ymm0, ymm9, 1Ah
          vpslld  ymm4, ymm9, 7
          vpsrld  ymm5, ymm9, 19h
          vpsrld  ymm1, ymm9, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm9, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm9, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [r8+0E0h]
          vpaddd  ymm3, ymm2, ymm10
          vpand   ymm2, ymm15, [rbp+260h+var_240]
          vpaddd  ymm0, ymm3, ymm6
          vpaddd  ymm7, ymm0, ymm7
          vpor    ymm0, ymm15, [rbp+260h+var_240]
          vpand   ymm1, ymm0, ymm13
          vpor    ymm6, ymm1, ymm2
          vpaddd  ymm8, ymm7, ymm14
          vpslld  ymm0, ymm15, 1Eh
          vpslld  ymm4, ymm15, 0Ah
          vpsrld  ymm5, ymm15, 16h
          vmovdqu ymmword ptr [r8+60h], ymm8
          vpsrld  ymm1, ymm15, 2
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm15, 13h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm15, 0Dh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymm7
          vbroadcastss ymm7, dword ptr [rbx+4]
          vpaddd  ymm14, ymm2, ymm6
          vpxor   ymm0, ymm9, ymm11
          vmovdqu ymm9, [rbp+260h+var_240]
          vpand   ymm1, ymm0, ymm8
          vpxor   ymm6, ymm1, ymm11
          vpslld  ymm0, ymm8, 1Ah
          vpslld  ymm4, ymm8, 7
          vpsrld  ymm5, ymm8, 19h
          vpsrld  ymm1, ymm8, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm8, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm8, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [r8+100h]
          vpaddd  ymm3, ymm2, [rbp+260h+var_260]
          vpaddd  ymm0, ymm3, ymm6
          vpaddd  ymm7, ymm0, ymm7
          vpaddd  ymm11, ymm7, ymm13
          vpor    ymm0, ymm14, ymm15
          vpand   ymm1, ymm0, ymm9
          vpand   ymm2, ymm14, ymm15
          vpor    ymm6, ymm1, ymm2
          vpslld  ymm0, ymm14, 1Eh
          vpsrld  ymm1, ymm14, 2
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm14, 13h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm14, 0Dh
          vpxor   ymm3, ymm2, ymm3
          vpslld  ymm4, ymm14, 0Ah
          vpxor   ymm0, ymm3, ymm4
          vpsrld  ymm5, ymm14, 16h
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymm7
        }
        _R8 += 128LL;
        _RBX += 16;
        __asm
        {
          vpaddd  ymm13, ymm2, ymm6
          vmovdqu [rbp+260h+var_260], ymm11
          vmovdqu ymmword ptr [r8], ymm11
        }
      }
      while ( (__int64)_RBX < (__int64)((char *)&_xmm + 8) );
      __asm
      {
        vpaddd  ymm1, ymm13, ymmword ptr [r9+60h]
        vmovdqu ymmword ptr [r9+160h], ymm1
        vpaddd  ymm0, ymm14, ymmword ptr [r9+40h]
        vmovdqu ymmword ptr [r9+60h], ymm1
        vmovdqu ymmword ptr [r9+140h], ymm0
        vpaddd  ymm1, ymm15, ymmword ptr [r9+20h]
        vmovdqu ymmword ptr [r9+40h], ymm0
        vmovdqu ymmword ptr [r9+120h], ymm1
        vpaddd  ymm0, ymm9, ymmword ptr [r9]
        vmovdqu ymmword ptr [r9+20h], ymm1
        vmovdqu ymmword ptr [r9+100h], ymm0
        vmovdqu ymmword ptr [r9], ymm0
        vmovdqu ymm0, ymmword ptr [r9+0E0h]
        vpaddd  ymm1, ymm0, ymmword ptr [r9+8E0h]
        vmovdqu ymmword ptr [r9+0E0h], ymm1
        vmovdqu ymm2, ymmword ptr [r9+8C0h]
        vpaddd  ymm0, ymm2, ymmword ptr [r9+0C0h]
        vmovdqu ymmword ptr [r9+0C0h], ymm0
        vmovdqu ymm1, ymmword ptr [r9+8A0h]
        vpaddd  ymm2, ymm1, ymmword ptr [r9+0A0h]
        vmovdqu ymmword ptr [r9+0A0h], ymm2
        vmovdqu ymm0, ymmword ptr [r9+880h]
        vpaddd  ymm9, ymm0, ymmword ptr [r9+80h]
        vmovdqu ymmword ptr [r9+80h], ymm9
      }
      --v52;
    }
    while ( v52 );
  }
  __asm
  {
    vmovdqu ymm1, ymmword ptr [r9+160h]
    vmovdqu ymm0, ymmword ptr [r9+140h]
    vmovdqu ymm2, ymmword ptr [r9+120h]
  }
  _RAX = *a1;
  __asm
  {
    vpunpckldq ymm7, ymm1, ymm0
    vpunpckhdq ymm8, ymm1, ymm0
    vmovdqu ymm0, ymmword ptr [r9+100h]
    vmovdqu ymm1, ymmword ptr [r9+0E0h]
    vpunpckldq ymm3, ymm2, ymm0
    vpunpckhdq ymm4, ymm2, ymm0
    vmovdqu ymm0, ymmword ptr [r9+0C0h]
    vpunpckldq ymm5, ymm1, ymm0
    vpunpckhdq ymm6, ymm1, ymm0
    vmovdqu ymm1, ymmword ptr [r9+0A0h]
    vpunpckhdq ymm2, ymm1, ymm9
    vpunpckldq ymm0, ymm1, ymm9
    vpunpcklqdq ymm1, ymm5, ymm0
    vpunpcklqdq ymm10, ymm7, ymm3
    vpunpckhqdq ymm11, ymm7, ymm3
    vpunpckhqdq ymm3, ymm5, ymm0
    vpunpcklqdq ymm0, ymm6, ymm2
    vpunpcklqdq ymm12, ymm8, ymm4
    vpunpckhqdq ymm13, ymm8, ymm4
    vpunpckhqdq ymm6, ymm6, ymm2
    vperm2i128 ymm9, ymm10, ymm1, 20h ; ' '
    vmovdqu ymmword ptr [rax], ymm9
  }
  _RAX = a1[1];
  __asm
  {
    vperm2i128 ymm7, ymm12, ymm0, 20h ; ' '
    vperm2i128 ymm4, ymm10, ymm1, 31h ; '1'
    vperm2i128 ymm1, ymm12, ymm0, 31h ; '1'
    vperm2i128 ymm8, ymm11, ymm3, 20h ; ' '
    vmovdqu ymmword ptr [rax], ymm8
  }
  _RAX = a1[2];
  __asm
  {
    vperm2i128 ymm5, ymm13, ymm6, 20h ; ' '
    vperm2i128 ymm2, ymm11, ymm3, 31h ; '1'
    vperm2i128 ymm0, ymm13, ymm6, 31h ; '1'
    vmovdqu ymmword ptr [rax], ymm7
  }
  _RAX = a1[3];
  __asm { vmovdqu ymmword ptr [rax], ymm5 }
  _RAX = a1[4];
  __asm { vmovdqu ymmword ptr [rax], ymm4 }
  _RAX = a1[5];
  __asm { vmovdqu ymmword ptr [rax], ymm2 }
  _RAX = a1[6];
  __asm { vmovdqu ymmword ptr [rax], ymm1 }
  result = a1[7];
  __asm
  {
    vmovdqu ymmword ptr [rax], ymm0
    vzeroupper
  }
  return result;
}
