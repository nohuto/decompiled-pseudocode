/*
 * XREFs of _anonymous_namespace_::__std_find_meow_of_bitmap::_Impl_last_avx_unsigned_short_ @ 0x18009C190
 * Callers:
 *     _anonymous_namespace_::__std_find_last_of::_Dispatch_pos_unsigned_short_ @ 0x18009BD90 (_anonymous_namespace_--__std_find_last_of--_Dispatch_pos_unsigned_short_.c)
 * Callees:
 *     _anonymous_namespace_::__std_find_meow_of_bitmap_details::_Make_bitmap_unsigned_short_ @ 0x18009C2D0 (_anonymous_namespace_--__std_find_meow_of_bitmap_details--_Make_bitmap_unsigned_short_.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

unsigned __int64 __fastcall anonymous_namespace_::__std_find_meow_of_bitmap::_Impl_last_avx_unsigned_short_(
        void *Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v35; // edx
  unsigned __int64 result; // rax
  _BYTE v37[56]; // [rsp+A0h] [rbp+A0h] BYREF

  _RBP = (unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0uLL;
  _RBX = a2;
  _RDI = Src;
  anonymous_namespace_::__std_find_meow_of_bitmap_details::_Make_bitmap_unsigned_short_(a3, a4);
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
    memcpy_0((void *)((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0uLL), _RDI, 2LL * (unsigned int)_RBX);
    __asm
    {
      vpmovzxwd ymm5, [rbp+110h+var_110]
      vmovdqu ymm0, cs:__ymm@ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00
      vpand   ymm1, ymm0, ymm5
      vpandn  ymm0, ymm5, cs:__ymm@0000001f0000001f0000001f0000001f0000001f0000001f0000001f0000001f
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
      vmovdqu ymm6, cs:__ymm@ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00
      vmovdqu ymm7, cs:__ymm@0000001f0000001f0000001f0000001f0000001f0000001f0000001f0000001f
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
