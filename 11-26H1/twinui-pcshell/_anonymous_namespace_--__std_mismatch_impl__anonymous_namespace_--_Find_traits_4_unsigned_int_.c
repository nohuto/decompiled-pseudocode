/*
 * XREFs of _anonymous_namespace_::__std_mismatch_impl__anonymous_namespace_::_Find_traits_4_unsigned_int_ @ 0x1802CCCB0
 * Callers:
 *     __std_mismatch_4 @ 0x1802CD340 (__std_mismatch_4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall anonymous_namespace_::__std_mismatch_impl__anonymous_namespace_::_Find_traits_4_unsigned_int_(
        const __m128i *a1,
        __int64 a2,
        __int64 a3)
{
  const __m128i *v3; // rbx
  unsigned __int64 result; // rax
  char v5; // r10
  unsigned __int64 v6; // r8
  unsigned int v12; // r10d
  __int64 v21; // r9
  __int64 v22; // rdx
  __int32 *v23; // rdx

  v3 = a1;
  result = 0LL;
  if ( (_isa_enabled & 0x20) == 0 )
  {
    if ( (_isa_enabled & 4) != 0 )
    {
      if ( ((4 * a3) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v21 = a2 - (_QWORD)a1;
        while ( 1 )
        {
          LODWORD(v22) = _mm_movemask_epi8(_mm_cmpeq_epi32(_mm_loadu_si128((const __m128i *)((char *)a1 + v21)), _mm_loadu_si128(a1))) ^ 0xFFFF;
          if ( (_DWORD)v22 )
            break;
          result += 16LL;
          ++a1;
          if ( result == ((4 * a3) & 0xFFFFFFFFFFFFFFF0uLL) )
          {
            result >>= 2;
            goto LABEL_22;
          }
        }
        _BitScanForward((unsigned int *)&v22, v22);
        return (v22 + result) >> 2;
      }
      v21 = a2 - (_QWORD)a1;
      result = 0LL;
    }
    else
    {
      v21 = a2 - (_QWORD)a1;
    }
LABEL_22:
    if ( result != a3 )
    {
      v23 = &v3->m128i_i32[result];
      do
      {
        if ( *v23 != *(__int32 *)((char *)v23 + v21) )
          break;
        ++result;
        ++v23;
      }
      while ( result != a3 );
    }
    return result;
  }
  v5 = 4 * a3;
  v6 = (4 * a3) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v6 )
  {
    _RCX = a2;
    while ( 1 )
    {
      __asm
      {
        vmovdqu ymm1, ymmword ptr [rcx]
        vpcmpeqd ymm1, ymm1, ymmword ptr [r11+rcx]
        vpmovmskb edx, ymm1
      }
      if ( ~_EDX )
        break;
      result += 32LL;
      _RCX += 32LL;
      if ( result == v6 )
      {
        __asm { vzeroupper }
        goto LABEL_7;
      }
    }
    __asm
    {
      vzeroupper
      tzcnt   edx, edx
    }
    return (_EDX + result) >> 2;
  }
  else
  {
LABEL_7:
    v12 = v5 & 0x1C;
    if ( v12 )
    {
      _RCX = (char *)&unk_180792270 - (v12 & 0xFFFFFFFC);
      __asm
      {
        vmovdqu ymm0, ymmword ptr [rcx]
        vpmaskmovd ymm1, ymm0, ymmword ptr [rax+r9]
        vpmaskmovd ymm0, ymm0, ymmword ptr [rax+rbx]
        vpcmpeqd ymm1, ymm0, ymm1
        vpmovmskb ecx, ymm1
      }
      if ( ~(_DWORD)_RCX )
      {
        __asm
        {
          vzeroupper
          tzcnt   edx, ecx
        }
        return (_EDX + result) >> 2;
      }
      result += v12;
      __asm { vzeroupper }
    }
    result >>= 2;
  }
  return result;
}
