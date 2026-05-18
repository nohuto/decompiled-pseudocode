/*
 * XREFs of sub_18000B340 @ 0x18000B340
 * Callers:
 *     sub_180098138 @ 0x180098138 (sub_180098138.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

__int64 *__fastcall sub_18000B340(__int64 *_RCX, __int64 *a2, unsigned __int8 a3)
{
  unsigned int v11; // ebx
  __int64 *v14; // rdx
  __int64 *v15; // r9
  __int64 *v16; // rdi
  __int64 v18; // r10
  unsigned int v63; // edx
  __int64 v64; // rax
  unsigned __int64 i; // rax
  unsigned __int64 v66; // rdx
  int v68; // [rsp+28h] [rbp+0h] BYREF

  _RBP = (_DWORD *)((unsigned __int64)&v68 & 0xFFFFFFFFFFFFFFE0uLL);
  __asm
  {
    vmovdqu ymm0, ymmword ptr [rcx]
    vmovdqu ymm6, cs:ymmword_1800F9C80
  }
  v11 = a3;
  _R8 = &unk_1800F9C20;
  _RAX = 32LL * v11;
  v14 = (__int64 *)((char *)_RCX + (((char *)a2 - (char *)_RCX) & 0xFFFFFFFFFFFFFFE0uLL));
  v15 = _RCX;
  v16 = _RCX;
  _RCX = _RCX + 4;
  v18 = 0x7FFFFFFFFFFFFFFFLL;
  __asm
  {
    vpxor   xmm7, xmm7, xmm7
    vmovdqu ymm1, ymmword ptr [rax+r8]
    vpsubq  ymm2, ymm0, ymm1
    vmovdqu ymm5, ymm2
  }
  if ( _RCX != v14 )
  {
    __asm { vmovdqu ymm3, cs:ymmword_1800F9C80 }
    do
    {
      __asm
      {
        vmovdqu ymm0, ymmword ptr [rcx]
        vpsubq  ymm2, ymm0, ymm1
        vpcmpgtq ymm0, ymm5, ymm2
      }
      _RCX += 4;
      __asm
      {
        vpblendvb ymm7, ymm7, ymm6, ymm0
        vpaddq  ymm6, ymm3, ymm6
        vpblendvb ymm5, ymm5, ymm2, ymm0
      }
    }
    while ( _RCX != v14 );
  }
  if ( (((_BYTE)a2 - (_BYTE)_RCX) & 0x1C) != 0 )
  {
    _RAX = (char *)&unk_1800F9BE0 - (((_BYTE)a2 - (_BYTE)_RCX) & 0x1C);
    __asm
    {
      vmovdqu ymm4, ymmword ptr [rax]
      vpmaskmovd ymm0, ymm4, ymmword ptr [rcx]
      vpsubq  ymm1, ymm0, ymm1
      vpblendvb ymm3, ymm2, ymm1, ymm4
      vpcmpgtq ymm2, ymm5, ymm3
      vpand   ymm0, ymm2, ymm4
      vpblendvb ymm7, ymm7, ymm6, ymm0
      vpblendvb ymm5, ymm5, ymm3, ymm2
    }
    _RCX = (__int64 *)((char *)_RCX + (((_BYTE)a2 - (_BYTE)_RCX) & 0x1C));
  }
  __asm
  {
    vmovq   rax, xmm5
    vmovdqa xmm0, xmm5
    vpsrldq xmm0, xmm0, 8
    vmovq   r8, xmm0
  }
  __asm { vextractf128 xmm0, ymm5, 1 }
  if ( _R8 >= _RAX )
    _R8 = _RAX;
  __asm { vmovq   rdx, xmm0 }
  __asm
  {
    vextractf128 xmm0, ymm5, 1
    vpsrldq xmm0, xmm0, 8
  }
  if ( _RDX >= _R8 )
    _RDX = _R8;
  __asm { vmovq   rax, xmm0 }
  if ( _RAX >= _RDX )
    _RAX = _RDX;
  __asm
  {
    vmovq   xmm0, rax
    vpunpcklqdq xmm0, xmm0, xmm0
    vinsertf128 ymm0, ymm0, xmm0, 1
    vmovq   rax, xmm0
  }
  if ( _RAX != 0x7FFFFFFFFFFFFFFFLL )
  {
    __asm
    {
      vpcmpeqq ymm1, ymm0, ymm5
      vmovdqu ymm0, cs:ymmword_1800F9CA0
      vpblendvb ymm2, ymm0, ymm7, ymm1
    }
    v18 = _RAX;
    *_RBP = 0;
    __asm
    {
      vmovdqa xmm0, xmm2
      vmovq   rdx, xmm2
      vpsrldq xmm0, xmm0, 8
      vmovq   rax, xmm0
    }
    __asm { vextractf128 xmm0, ymm2, 1 }
    if ( _RAX < _RDX )
      _RDX = _RAX;
    __asm { vmovq   rax, xmm0 }
    __asm { vextractf128 xmm0, ymm2, 1 }
    if ( _RAX < _RDX )
      _RDX = _RAX;
    __asm
    {
      vpsrldq xmm0, xmm0, 8
      vmovq   rax, xmm0
    }
    __asm { vpmovmskb r8d, ymm1 }
    if ( _RAX < _RDX )
      _RDX = _RAX;
    __asm
    {
      vmovq   xmm0, rdx
      vpunpcklqdq xmm0, xmm0, xmm0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vpcmpeqq ymm0, ymm0, ymm2
      vpmovmskb eax, ymm0
    }
    _BitScanForward(&v63, _R8D & _EAX);
    __asm { vmovdqu [rbp+50h+var_48], ymm7 }
    v15 = (__int64 *)((char *)&v16[4
                                 * *(_QWORD *)(((unsigned __int64)&v68 & 0xFFFFFFFFFFFFFFE0uLL)
                                             + 8
                                             + 8 * ((unsigned __int64)v63 >> 3))]
                    + v63);
  }
  __asm { vzeroupper }
  if ( (_BYTE)v11 )
  {
    for ( ; _RCX != a2; v18 = v64 )
    {
      v64 = *_RCX;
      if ( *_RCX < v18 )
        v15 = _RCX;
      ++_RCX;
      if ( v64 >= v18 )
        v64 = v18;
    }
  }
  else
  {
    for ( i = v18 + 0x8000000000000000uLL; _RCX != a2; i = v66 )
    {
      v66 = *_RCX;
      if ( *_RCX < i )
        v15 = _RCX;
      ++_RCX;
      if ( v66 >= i )
        v66 = i;
    }
  }
  return v15;
}
