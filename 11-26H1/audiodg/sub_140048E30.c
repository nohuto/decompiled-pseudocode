/*
 * XREFs of sub_140048E30 @ 0x140048E30
 * Callers:
 *     sub_140048CF0 @ 0x140048CF0 (sub_140048CF0.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

int __fastcall sub_140048E30(unsigned __int16 *a1, unsigned __int64 a2)
{
  unsigned __int16 *v5; // rdi
  unsigned __int16 *v6; // rbx
  unsigned __int16 v8; // dx
  unsigned int v9; // ecx
  int result; // eax
  __int64 v17; // rax
  __m256 v42; // [rsp+40h] [rbp+0h] BYREF

  _RBP = (unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL;
  v5 = &a1[a2];
  v6 = a1;
  if ( a2 > 0x14 )
  {
    memset((void *)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL), 0, 0x100uLL);
    for ( ; v6 != v5; *(_BYTE *)(_RBP + v17) = -1 )
      v17 = *v6++;
    __asm
    {
      vmovdqu ymm1, [rbp+110h+var_50]
      vmovdqu ymm0, [rbp+110h+var_30]
      vpmovmskb ebx, ymm0
      vmovdqu ymm0, [rbp+110h+var_70]
      vpmovmskb r10d, ymm0
      vmovdqu ymm0, [rbp+110h+var_B0]
      vpmovmskb r8d, ymm0
      vmovdqu ymm0, [rbp+110h+var_F0]
      vpmovmskb ecx, ymm0
      vpmovmskb r11d, ymm1
      vmovdqu ymm1, [rbp+110h+var_90]
      vpmovmskb r9d, ymm1
      vmovdqu ymm1, [rbp+110h+var_D0]
      vpmovmskb edx, ymm1
      vmovdqu ymm1, [rbp+110h+var_110]
      vmovd   xmm0, r9d
      vpinsrd xmm0, xmm0, r10d, 1
      vpinsrd xmm0, xmm0, r11d, 2
      vpmovmskb eax, ymm1
      vmovd   xmm2, eax
      vpinsrd xmm2, xmm2, ecx, 1
      vpinsrd xmm2, xmm2, edx, 2
      vpinsrd xmm2, xmm2, r8d, 3
      vpinsrd xmm0, xmm0, ebx, 3
      vinsertf128 ymm0, ymm2, xmm0, 1
    }
  }
  else
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    if ( a1 != v5 )
    {
      do
      {
        v8 = *v6;
        v9 = *v6++;
        _EDX = v8 & 0x3F;
        result = 1 << ((v9 >> 3) & 0x18);
        __asm
        {
          vmovd   xmm1, eax
          vpmovzxbq ymm2, xmm1
          vmovd   xmm1, edx
          vpsllq  ymm2, ymm2, xmm1
          vpor    ymm0, ymm2, ymm0
        }
      }
      while ( v6 != v5 );
    }
  }
  return result;
}
