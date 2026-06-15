/*
 * XREFs of sub_140048CF0 @ 0x140048CF0
 * Callers:
 *     sub_1400488F0 @ 0x1400488F0 (sub_1400488F0.c)
 * Callees:
 *     sub_140048E30 @ 0x140048E30 (sub_140048E30.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 */

unsigned __int64 __fastcall sub_140048CF0(void *Src, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v35; // edx
  unsigned __int64 result; // rax
  _BYTE v37[56]; // [rsp+A0h] [rbp+A0h] BYREF

  _RBP = (unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0uLL;
  _RBX = a2;
  _RDI = Src;
  sub_140048E30(a3, a4);
  __asm
  {
    vmovdqu ymm2, ymm0
    vmovdqu [rbp+110h+var_F0], ymm0
  }
  if ( _RBX < 8 )
  {
LABEL_5:
    if ( !(_DWORD)_RBX )
      goto LABEL_9;
    __asm { vzeroupper }
    memcpy((void *)((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0uLL), _RDI, 2LL * (unsigned int)_RBX);
    __asm
    {
      vpmovzxwd ymm5, [rbp+110h+var_110]
      vmovdqu ymm0, cs:ymmword_1400C7640
      vpand   ymm1, ymm0, ymm5
      vpandn  ymm0, ymm5, cs:ymmword_1400C7620
      vpxor   xmm2, xmm2, xmm2
      vpcmpeqd ymm4, ymm1, ymm2
      vpsrld  ymm2, ymm5, 5
      vpermd  ymm3, ymm2, [rbp+110h+var_F0]
      vpsllvd ymm1, ymm3, ymm0
    }
    __asm
    {
      vpand   ymm2, ymm1, ymm4
      vmovmskps edx, ymm2
    }
    v35 = ((1 << _RBX) - 1) & _EDX;
    if ( v35 )
      result = 31 - __lzcnt(v35);
    else
LABEL_9:
      result = -1LL;
    __asm { vzeroupper }
  }
  else
  {
    __asm
    {
      vmovdqu ymm6, cs:ymmword_1400C7640
      vmovdqu ymm7, cs:ymmword_1400C7620
      vpxor   xmm5, xmm5, xmm5
    }
    while ( 1 )
    {
      __asm { vpmovzxwd ymm4, xmmword ptr [rdi+rbx*2-10h] }
      _RBX -= 8LL;
      __asm
      {
        vpand   ymm0, ymm4, ymm6
        vpsrld  ymm1, ymm4, 5
        vpcmpeqd ymm3, ymm0, ymm5
        vpermd  ymm2, ymm1, ymm2
        vpandn  ymm0, ymm4, ymm7
        vpsllvd ymm2, ymm2, ymm0
        vpand   ymm1, ymm2, ymm3
        vmovmskps eax, ymm1
      }
      if ( _EAX )
        break;
      __asm { vmovdqu ymm2, [rbp+110h+var_F0] }
      if ( _RBX < 8 )
        goto LABEL_5;
    }
    __asm { vzeroupper }
    return _RBX - __lzcnt(_EAX) + 31;
  }
  return result;
}
