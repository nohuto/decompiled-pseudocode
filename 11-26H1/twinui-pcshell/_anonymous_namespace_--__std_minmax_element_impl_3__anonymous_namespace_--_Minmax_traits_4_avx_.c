/*
 * XREFs of _anonymous_namespace_::__std_minmax_element_impl_3__anonymous_namespace_::_Minmax_traits_4_avx_ @ 0x1802CC600
 * Callers:
 *     __std_minmax_element_4 @ 0x1802CD230 (__std_minmax_element_4.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall anonymous_namespace_::__std_minmax_element_impl_3__anonymous_namespace_::_Minmax_traits_4_avx_(
        _OWORD *a1,
        int *_RDX,
        int *a3,
        unsigned __int8 a4)
{
  unsigned __int64 v12; // rbp
  unsigned int v14; // r12d
  unsigned __int64 v15; // rax
  int *v19; // r11
  int *v20; // r10
  int v21; // edi
  signed int v22; // ebx
  int *v25; // r9
  int *v34; // r14
  unsigned int v69; // r8d
  unsigned int v91; // r8d
  unsigned __int64 v95; // rax
  signed int v96; // ecx
  int v97; // eax
  unsigned int v98; // r8d
  unsigned int v99; // r9d
  unsigned int v100; // ecx
  unsigned int v101; // eax
  _OWORD *result; // rax
  int v103; // [rsp+28h] [rbp+0h] BYREF

  v12 = (unsigned __int64)&v103 & 0xFFFFFFFFFFFFFFE0uLL;
  __asm { vmovdqu ymm11, cs:__ymm@0000000100000001000000010000000100000001000000010000000100000001 }
  v14 = a4;
  *(_QWORD *)(v12 + 8) = _RDX;
  *(_QWORD *)(v12 + 16) = _RDX;
  v15 = ((char *)a3 - (char *)_RDX) & 0xFFFFFFFFFFFFFFE0uLL;
  _RCX = &unk_1807922C0;
  v19 = _RDX;
  if ( v15 > 0x2000000000LL )
    v15 = 0x2000000000LL;
  v20 = _RDX;
  v21 = 0x7FFFFFFF;
  v22 = 0x80000000;
  __asm
  {
    vpxor   xmm9, xmm9, xmm9
    vpxor   xmm7, xmm7, xmm7
  }
  v25 = (int *)((char *)_RDX + v15);
  _RAX = 32LL * v14;
  __asm
  {
    vpxor   xmm8, xmm8, xmm8
    vpxor   xmm6, xmm6, xmm6
    vmovdqu ymm10, ymmword ptr [rax+rcx]
  }
  while ( 1 )
  {
    __asm
    {
      vmovdqu ymm0, ymmword ptr [rdx]
      vpsubd  ymm2, ymm0, ymm10
      vmovdqu ymm5, ymm2
      vmovdqu ymm4, ymm2
    }
    v34 = _RDX;
    while ( 1 )
    {
      _RDX += 8;
      __asm { vpaddd  ymm6, ymm11, ymm6 }
      if ( _RDX == v25 )
        break;
      __asm
      {
        vmovdqu ymm0, ymmword ptr [rdx]
        vpsubd  ymm2, ymm0, ymm10
        vpcmpgtd ymm0, ymm4, ymm2
        vpblendvb ymm7, ymm7, ymm6, ymm0
        vpcmpgtd ymm0, ymm5, ymm2
        vpblendvb ymm8, ymm6, ymm8, ymm0
        vpminsd ymm4, ymm2, ymm4
        vpmaxsd ymm5, ymm2, ymm5
      }
    }
    if ( (((char *)a3 - (char *)_RDX) & 0xFFFFFFFFFFFFFFE0uLL) == 0 && (((_BYTE)a3 - (_BYTE)_RDX) & 0x1C) != 0 )
    {
      _RAX = (char *)&unk_180792270 - (((_BYTE)a3 - (_BYTE)_RDX) & 0x1C);
      __asm
      {
        vmovdqu ymm3, ymmword ptr [rax]
        vpmaskmovd ymm0, ymm3, ymmword ptr [rdx]
        vpsubd  ymm1, ymm0, ymm10
        vpblendvb ymm2, ymm2, ymm1, ymm3
        vpcmpgtd ymm0, ymm4, ymm2
        vpand   ymm1, ymm0, ymm3
        vpcmpgtd ymm0, ymm5, ymm2
        vpblendvb ymm7, ymm7, ymm6, ymm1
        vpandn  ymm1, ymm0, ymm3
        vpblendvb ymm8, ymm8, ymm6, ymm1
        vpminsd ymm4, ymm2, ymm4
        vpmaxsd ymm5, ymm2, ymm5
      }
      _RDX = (int *)((char *)_RDX + (((_BYTE)a3 - (_BYTE)_RDX) & 0x1C));
    }
    __asm
    {
      vpermq  ymm0, ymm4, 4Eh ; 'N'
      vpminsd ymm2, ymm0, ymm4
      vpshufd ymm1, ymm2, 4Eh ; 'N'
      vpminsd ymm3, ymm1, ymm2
      vpshufd ymm0, ymm3, 0B1h
      vpminsd ymm1, ymm0, ymm3
      vmovd   eax, xmm1
    }
    if ( _EAX < v21 )
    {
      __asm
      {
        vmovdqu ymm0, cs:__ymm@ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
        vpcmpeqd ymm4, ymm1, ymm4
        vpblendvb ymm3, ymm0, ymm7, ymm4
      }
      v21 = _EAX;
      *(_DWORD *)(((unsigned __int64)&v103 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
      __asm
      {
        vpmovmskb eax, ymm4
        vpermq  ymm1, ymm3, 4Eh ; 'N'
        vpminud ymm2, ymm1, ymm3
        vpshufd ymm0, ymm2, 4Eh ; 'N'
        vpminud ymm1, ymm0, ymm2
        vpshufd ymm0, ymm1, 0B1h
        vpminud ymm1, ymm0, ymm1
        vpcmpeqd ymm2, ymm1, ymm3
        vpmovmskb ecx, ymm2
      }
      _BitScanForward(&v69, _EAX & _ECX);
      _RAX = v69 >> 2;
      __asm
      {
        vmovd   xmm0, eax
        vpermd  ymm1, ymm0, ymm7
        vmovd   eax, xmm1
      }
      v19 = (int *)((char *)&v34[8 * _RAX] + v69);
      *(_QWORD *)(((unsigned __int64)&v103 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v19;
    }
    __asm
    {
      vpermq  ymm0, ymm5, 4Eh ; 'N'
      vpmaxsd ymm2, ymm0, ymm5
      vpshufd ymm1, ymm2, 4Eh ; 'N'
      vpmaxsd ymm3, ymm1, ymm2
      vpshufd ymm0, ymm3, 0B1h
      vpmaxsd ymm1, ymm0, ymm3
      vmovd   eax, xmm1
    }
    if ( v22 <= _EAX )
    {
      v22 = _EAX;
      *(_DWORD *)v12 = 0;
      __asm
      {
        vpcmpeqd ymm5, ymm1, ymm5
        vpblendvb ymm4, ymm9, ymm8, ymm5
        vpmovmskb eax, ymm5
        vpermq  ymm0, ymm4, 4Eh ; 'N'
        vpmaxud ymm2, ymm0, ymm4
        vpshufd ymm1, ymm2, 4Eh ; 'N'
        vpmaxud ymm3, ymm1, ymm2
        vpshufd ymm0, ymm3, 0B1h
        vpmaxud ymm1, ymm0, ymm3
        vpcmpeqd ymm2, ymm1, ymm4
        vpmovmskb ecx, ymm2
      }
      _BitScanReverse(&v91, _EAX & _ECX);
      v91 -= 3;
      _RAX = v91 >> 2;
      __asm
      {
        vmovd   xmm0, eax
        vpermd  ymm1, ymm0, ymm8
        vmovd   eax, xmm1
      }
      v20 = (int *)((char *)&v34[8 * _RAX] + v91);
      *(_QWORD *)(((unsigned __int64)&v103 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v20;
    }
    v95 = ((char *)a3 - (char *)_RDX) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( !v95 )
      break;
    __asm { vmovdqu ymm7, ymm9 }
    if ( v95 > 0x2000000000LL )
      v95 = 0x2000000000LL;
    v25 = (int *)((char *)v25 + v95);
    __asm { vmovdqu ymm8, ymm9 }
  }
  __asm { vzeroupper }
  if ( (_BYTE)v14 )
  {
    if ( _RDX != a3 )
    {
      do
      {
        v96 = *_RDX;
        v97 = *_RDX;
        if ( *_RDX < v21 )
          v19 = _RDX;
        else
          v97 = v21;
        v21 = v97;
        if ( v22 <= v96 )
          v20 = _RDX;
        ++_RDX;
        if ( v22 > v96 )
          v96 = v22;
        v22 = v96;
      }
      while ( _RDX != a3 );
LABEL_38:
      *(_QWORD *)(((unsigned __int64)&v103 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v19;
      *(_QWORD *)(((unsigned __int64)&v103 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v20;
    }
  }
  else
  {
    v98 = v22 + 0x80000000;
    v99 = v21 + 0x80000000;
    if ( _RDX != a3 )
    {
      do
      {
        v100 = *_RDX;
        v101 = *_RDX;
        if ( *_RDX < v99 )
          v19 = _RDX;
        else
          v101 = v99;
        v99 = v101;
        if ( v98 <= v100 )
          v20 = _RDX;
        ++_RDX;
        if ( v98 > v100 )
          v100 = v98;
        v98 = v100;
      }
      while ( _RDX != a3 );
      goto LABEL_38;
    }
  }
  result = a1;
  *a1 = *(_OWORD *)(((unsigned __int64)&v103 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  return result;
}
