/*
 * XREFs of _anonymous_namespace_::__std_find_meow_of_bitmap::_Impl_first_avx_unsigned_short_ @ 0x1802CBB30
 * Callers:
 *     _anonymous_namespace_::__std_find_first_of::_Dispatch_pos_sse_1_2_unsigned_short_ @ 0x1802CB960 (_anonymous_namespace_--__std_find_first_of--_Dispatch_pos_sse_1_2_unsigned_short_.c)
 * Callees:
 *     _anonymous_namespace_::__std_find_meow_of_bitmap_details::_Make_bitmap_unsigned_short_ @ 0x1802CBE80 (_anonymous_namespace_--__std_find_meow_of_bitmap_details--_Make_bitmap_unsigned_short_.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall anonymous_namespace_::__std_find_meow_of_bitmap::_Impl_first_avx_unsigned_short_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v12; // rbx
  unsigned int v26; // edi
  __int64 result; // rax
  _OWORD v42[3]; // [rsp+48h] [rbp+0h] BYREF

  _RBP = (unsigned __int64)v42 & 0xFFFFFFFFFFFFFFE0uLL;
  _RSI = a1;
  anonymous_namespace_::__std_find_meow_of_bitmap_details::_Make_bitmap_unsigned_short_(a3, a4);
  _RAX = 0LL;
  __asm
  {
    vmovdqu ymm2, ymm0
    vmovdqu ymmword ptr [rbp+20h], ymm0
  }
  v12 = a2 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (a2 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    __asm
    {
      vmovdqu ymm6, cs:__ymm@ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00
      vmovdqu ymm7, cs:__ymm@0000001f0000001f0000001f0000001f0000001f0000001f0000001f0000001f
      vpxor   xmm5, xmm5, xmm5
    }
    while ( 1 )
    {
      __asm
      {
        vpmovzxwd ymm4, xmmword ptr [rsi+rax*2]
        vpand   ymm0, ymm4, ymm6
        vpsrld  ymm1, ymm4, 5
        vpcmpeqd ymm3, ymm0, ymm5
        vpermd  ymm2, ymm1, ymm2
        vpandn  ymm0, ymm4, ymm7
        vpsllvd ymm2, ymm2, ymm0
        vpand   ymm1, ymm2, ymm3
        vmovmskps ecx, ymm1
      }
      if ( _ECX )
        break;
      __asm { vmovdqu ymm2, ymmword ptr [rbp+20h] }
      _RAX += 8LL;
      if ( _RAX == v12 )
        goto LABEL_5;
    }
    __asm
    {
      vzeroupper
      tzcnt   edx, ecx
    }
    return _EDX + _RAX;
  }
  else
  {
LABEL_5:
    v26 = a2 & 7;
    if ( !v26 )
      goto LABEL_9;
    __asm { vzeroupper }
    memcpy_0((void *)((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFE0uLL), (const void *)(_RSI + 2 * v12), 2LL * v26);
    __asm
    {
      vpmovzxwd ymm5, [rbp+80h+var_80]
      vmovdqu ymm0, cs:__ymm@ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00ffffff00
      vpand   ymm1, ymm0, ymm5
      vpandn  ymm0, ymm5, cs:__ymm@0000001f0000001f0000001f0000001f0000001f0000001f0000001f0000001f
      vpxor   xmm2, xmm2, xmm2
      vpcmpeqd ymm4, ymm1, ymm2
      vpsrld  ymm2, ymm5, 5
      vpermd  ymm3, ymm2, ymmword ptr [rbp+20h]
      vpsllvd ymm1, ymm3, ymm0
    }
    __asm
    {
      vpand   ymm2, ymm1, ymm4
      vmovmskps edx, ymm2
    }
    if ( ((1 << v26) - 1) & _EDX )
    {
      __asm { tzcnt   eax, edx }
      result = v12 + _EAX;
    }
    else
    {
LABEL_9:
      result = -1LL;
    }
    __asm { vzeroupper }
  }
  return result;
}
