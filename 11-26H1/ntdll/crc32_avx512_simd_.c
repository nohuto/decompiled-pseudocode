/*
 * XREFs of crc32_avx512_simd_ @ 0x18010435C
 * Callers:
 *     crc32_z @ 0x180104024 (crc32_z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall crc32_avx512_simd_(__int64 _RCX, __int64 a2, int _R8D, double _XMM3_8)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v13; // r8
  __int64 result; // rax
  unsigned __int64 v81; // rdx

  __asm { vmovdqu32 zmm1, zmmword ptr [rcx] }
  __asm { vmovdqu32 zmm6, zmmword ptr [rcx+40h] }
  v6 = a2 - 256;
  __asm { vmovdqu32 zmm12, zmmword ptr cs:byte_1801828C0 }
  __asm { vmovdqu32 zmm13, zmmword ptr [rcx+80h] }
  __asm { vmovdqu32 zmm14, zmmword ptr [rcx+0C0h] }
  _RCX = _RCX + 256;
  __asm
  {
    vmovd   xmm0, r8d
    vpxord  zmm7, zmm1, zmm0
  }
  if ( v6 >= 0x100 )
  {
    v13 = v6 >> 8;
    v6 += -256LL * (v6 >> 8);
    do
    {
      __asm
      {
        vmovdqu32 zmm5, zmmword ptr [rcx+80h]
        vmovdqu32 zmm4, zmmword ptr [rcx+0C0h]
        vpclmulqdq zmm8, zmm7, zmm12, 0
        vpclmulqdq zmm9, zmm6, zmm12, 0
        vpclmulqdq zmm0, zmm7, zmm12, 11h
        vmovdqu32 zmm7, zmmword ptr [rcx]
        vpclmulqdq zmm1, zmm6, zmm12, 11h
        vmovdqu32 zmm6, zmmword ptr [rcx+40h]
        vpclmulqdq zmm10, zmm13, zmm12, 0
        vpclmulqdq zmm11, zmm14, zmm12, 0
        vpclmulqdq zmm2, zmm13, zmm12, 11h
        vpclmulqdq zmm3, zmm14, zmm12, 11h
      }
      _RCX += 256LL;
      __asm
      {
        vpxord  zmm0, zmm0, zmm8
        vpxord  zmm1, zmm1, zmm9
        vpxord  zmm2, zmm2, zmm10
        vpxord  zmm3, zmm3, zmm11
        vpxord  zmm7, zmm0, zmm7
        vpxord  zmm6, zmm1, zmm6
        vpxord  zmm13, zmm2, zmm5
        vpxord  zmm14, zmm3, zmm4
      }
      --v13;
    }
    while ( v13 );
  }
  __asm
  {
    vmovdqu32 zmm5, zmmword ptr cs:byte_180182840
    vpclmulqdq zmm0, zmm7, zmm5, 11h
    vpxord  zmm1, zmm0, zmm6
    vpclmulqdq zmm2, zmm7, zmm5, 0
    vpxord  zmm2, zmm1, zmm2
    vpclmulqdq zmm0, zmm2, zmm5, 11h
    vpxord  zmm1, zmm0, zmm13
    vpclmulqdq zmm3, zmm2, zmm5, 0
    vpxord  zmm2, zmm1, zmm3
    vpclmulqdq zmm0, zmm2, zmm5, 11h
    vpxord  zmm1, zmm0, zmm14
    vpclmulqdq zmm4, zmm2, zmm5, 0
    vpxord  zmm3, zmm1, zmm4
  }
  if ( v6 >= 0x40 )
  {
    v81 = v6 >> 6;
    do
    {
      __asm { vmovdqu32 zmm1, zmmword ptr [rcx] }
      _RCX += 64LL;
      __asm
      {
        vpclmulqdq zmm0, zmm3, zmm5, 11h
        vpxord  zmm1, zmm0, zmm1
        vpclmulqdq zmm2, zmm3, zmm5, 0
        vpxord  zmm3, zmm1, zmm2
      }
      --v81;
    }
    while ( v81 );
  }
  __asm
  {
    vmovdqa xmm4, cs:xmmword_180182890
    vmovdqa xmm2, xmm3
    vpclmulqdq xmm2, xmm2, xmm4, 11h
    vmovdqa xmm0, xmm3
    vpclmulqdq xmm0, xmm0, xmm4, 0
    vxorps  xmm2, xmm2, xmm0
    vextracti32x4 xmm0, zmm3, 1
    vxorps  xmm2, xmm2, xmm0
    vmovdqa xmm1, xmm2
    vpclmulqdq xmm1, xmm1, xmm4, 11h
    vpclmulqdq xmm2, xmm2, xmm4, 0
    vxorps  xmm1, xmm1, xmm2
    vextracti32x4 xmm0, zmm3, 2
    vxorps  xmm1, xmm1, xmm0
    vmovdqa xmm2, xmm1
    vpclmulqdq xmm1, xmm1, xmm4, 0
    vpclmulqdq xmm2, xmm2, xmm4, 11h
    vxorps  xmm2, xmm2, xmm1
    vextracti32x4 xmm0, zmm3, 3
    vmovdqa xmm3, cs:__xmm@00000000ffffffff00000000ffffffff
    vxorps  xmm2, xmm2, xmm0
    vmovq   xmm0, cs:qword_180182800
    vmovdqa xmm1, xmm2
    vpclmulqdq xmm1, xmm1, xmm4, 10h
    vpsrldq xmm2, xmm2, 8
    vxorps  xmm1, xmm1, xmm2
    vmovdqa xmm2, xmm1
    vpsrldq xmm1, xmm1, 4
    vandps  xmm2, xmm2, xmm3
    vpclmulqdq xmm2, xmm2, xmm0, 0
    vxorps  xmm2, xmm2, xmm1
    vmovdqa xmm1, xmm2
    vandps  xmm1, xmm1, xmm3
    vpclmulqdq xmm1, xmm1, cs:xmmword_180182880, 10h
    vandps  xmm1, xmm1, xmm3
    vpclmulqdq xmm1, xmm1, cs:xmmword_180182880, 0
    vxorps  xmm1, xmm1, xmm2
    vpextrd rax, xmm1, 1
    vzeroupper
  }
  return result;
}
