/*
 * XREFs of __memset_spec_alt @ 0x180165A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _memset_spec_alt(char *_RCX, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __m128 v6; // xmm0
  char *v7; // r8
  char *v10; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 *v19; // r9
  unsigned __int64 v20; // r8
  char *v21; // r9
  unsigned __int64 v22; // r8
  char *v23; // r8
  __m128 *v24; // rdx
  _OWORD *v25; // r9
  unsigned __int64 v26; // r8
  __m128 *v27; // r9

  result = (__int64)_RCX;
  v5 = 0x101010101010101LL * a2;
  if ( a3 >= 0x20 )
  {
    v6 = _mm_movelh_ps((__m128)(unsigned __int64)v5, (__m128)(unsigned __int64)v5);
    if ( (_isa_info & 4) != 0 )
    {
      if ( a3 < 0x80 )
      {
        __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
        _R9 = (__int64)&_RCX[a3 - 32];
        __asm { vmovups ymmword ptr [rcx], ymm0 }
        _R8 = (a3 & 0x40) >> 1;
        __asm
        {
          vmovups ymmword ptr [r9], ymm0
          vmovups ymmword ptr [rcx+r8], ymm0
        }
        _R8 = -(__int64)_R8;
        __asm
        {
          vmovups ymmword ptr [r9+r8], ymm0
          vzeroupper
        }
        return result;
      }
      if ( (_isa_info & 2) == 0 || a3 < 0x7D0 )
      {
        v7 = &_RCX[a3];
        __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
        _RDX = v7 - 32;
        __asm { vmovups ymmword ptr [rcx], ymm0 }
        v10 = v7 - 96;
        _RCX = (unsigned __int64)(_RCX + 32) & 0xFFFFFFFFFFFFFFE0uLL;
        v12 = (unsigned __int64)&v7[-_RCX];
        if ( v12 >= 0x80 )
        {
          v13 = v12 >> 7;
          do
          {
            __asm
            {
              vmovaps ymmword ptr [rcx], ymm0
              vmovaps ymmword ptr [rcx+20h], ymm0
            }
            _RCX += 128LL;
            --v13;
            __asm
            {
              vmovaps ymmword ptr [rcx-40h], ymm0
              vmovaps ymmword ptr [rcx-20h], ymm0
            }
          }
          while ( v13 );
        }
        _R9 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFE0uLL;
        __asm
        {
          vmovups ymmword ptr [rdx], ymm0
          vmovaps ymmword ptr [r9], ymm0
          vmovaps ymmword ptr [r9+20h], ymm0
          vmovaps ymmword ptr [r9+40h], ymm0
          vzeroupper
        }
        return result;
      }
      return _memset_spec_alt_repmovs();
    }
    if ( a3 >= 0x40 )
    {
      if ( (_isa_info & 2) != 0 && a3 >= 0x320 )
        return _memset_spec_alt_repmovs();
      *(__m128 *)_RCX = v6;
      v23 = &_RCX[a3];
      _RCX = (char *)((unsigned __int64)(_RCX + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      a3 = v23 - _RCX;
      if ( a3 >= 0x40 )
      {
        v24 = (__m128 *)&_RCX[a3 - 16];
        v25 = (_OWORD *)((unsigned __int64)&_RCX[a3 - 48] & 0xFFFFFFFFFFFFFFF0uLL);
        v26 = a3 >> 6;
        do
        {
          *(__m128 *)_RCX = v6;
          *((__m128 *)_RCX + 1) = v6;
          _RCX += 64;
          --v26;
          *((__m128 *)_RCX - 2) = v6;
          *((__m128 *)_RCX - 1) = v6;
        }
        while ( v26 );
        *v25 = v6;
        v25[1] = v6;
        v25[2] = v6;
        *v24 = v6;
        return result;
      }
    }
    v27 = (__m128 *)&_RCX[a3 - 32];
    *(__m128 *)_RCX = v6;
    *((__m128 *)_RCX + 1) = v6;
    *v27 = v6;
    v27[1] = v6;
    return result;
  }
  if ( a3 < 8 )
  {
    if ( a3 < 2 )
    {
      if ( a3 )
        *_RCX = v5;
    }
    else
    {
      v21 = &_RCX[a3 - 2];
      *(_WORD *)_RCX = v5;
      v22 = (a3 & 4) >> 1;
      *(_WORD *)v21 = v5;
      *(_WORD *)&_RCX[v22] = v5;
      *(_WORD *)&v21[-v22] = v5;
    }
  }
  else
  {
    v19 = (__int64 *)&_RCX[a3 - 8];
    *(_QWORD *)_RCX = v5;
    v20 = (a3 & 0x10) >> 1;
    *v19 = v5;
    *(_QWORD *)&_RCX[v20] = v5;
    *(__int64 *)((char *)v19 - v20) = v5;
  }
  return result;
}
