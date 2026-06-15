/*
 * XREFs of ?GetApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@PEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000D790
 * Callers:
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000D5A0 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000D5C0 (-GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSp.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180020EC8 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E70C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GetApplicationSpecificEndpointInfo(
        CApplication *this,
        struct CProcess *a2,
        struct IApplicationSpecificEndpointInfo **a3)
{
  _WORD *v6; // rax
  _WORD *v7; // rdi
  int v8; // r12d
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  SIZE_T v11; // rbx
  __m128i *v12; // r15
  __m128i *v14; // rax
  __m128i *v15; // rdi
  const __m128i *v16; // rdx
  unsigned __int64 v17; // rax
  const __m128i *v18; // rbx
  const __m128i *v19; // r11
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r8
  unsigned __int64 i; // rax
  __int16 *v25; // rax
  signed __int64 v26; // r11
  int v27; // r8d
  char v28; // cl
  __m128i **v29; // rax
  bool v30; // zf
  unsigned __int64 v31; // r11
  const __m128i *v32; // r10
  unsigned __int64 v33; // rdi
  const __m128i *v34; // rbx
  void *v35; // r15
  unsigned __int64 v36; // r8
  unsigned __int64 j; // rax
  unsigned __int16 v39; // r11
  unsigned int v40; // ecx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int16 *v45; // rax
  signed __int64 v46; // r10
  bool v47; // cf
  unsigned __int64 v48; // rax
  _QWORD *v49; // rbx
  unsigned __int64 v50; // rdi
  const struct std::nothrow_t *v51; // rdx
  struct IApplicationSpecificEndpointInfo *v52; // rcx
  __int64 result; // rax
  HANDLE ProcessHeap; // rax
  unsigned __int64 v55; // rax
  unsigned int v58; // eax
  unsigned __int64 v62; // rcx
  const __m128i *v63; // [rsp+28h] [rbp-A0h]
  void *v64; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v65; // [rsp+38h] [rbp-90h] BYREF
  struct IApplicationSpecificEndpointInfo **v66; // [rsp+40h] [rbp-88h]
  char *v67; // [rsp+48h] [rbp-80h]
  int v68; // [rsp+5Ch] [rbp-6Ch]
  __int128 v69; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v70; // [rsp+78h] [rbp-50h]
  __int64 v71; // [rsp+80h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    v66 = a3;
    v65 = (unsigned __int64)this;
    v6 = (_WORD *)(*(__int64 (__fastcall **)(struct CProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    v7 = v6;
    if ( !v6 || !*v6 )
      v7 = (_WORD *)(*(__int64 (__fastcall **)(struct CProcess *))(*(_QWORD *)a2 + 80LL))(a2);
    *a3 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v67 = (char *)this + 32;
    v69 = 0LL;
    v8 = -1;
    v9 = -1LL;
    do
      ++v9;
    while ( v7[v9] );
    v10 = 0x7FFFFFFFFFFFFFFELL;
    if ( v9 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( v9 <= 7 )
    {
      v70 = v9;
      v71 = 7LL;
      memcpy_0(&v69, v7, 2 * v9);
      *((_WORD *)&v69 + v9) = 0;
      v10 = v71;
      v9 = v70;
      v12 = (__m128i *)v69;
      v63 = (const __m128i *)v69;
      goto LABEL_18;
    }
    if ( (v9 | 7) > 0x7FFFFFFFFFFFFFFELL )
    {
      v11 = -2LL;
    }
    else
    {
      v10 = v9 | 7;
      if ( (v9 | 7) < 0xA )
        v10 = 10LL;
      if ( v10 + 1 > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
      v11 = 2 * (v10 + 1);
      if ( !v11 )
      {
        v12 = 0LL;
        v63 = 0LL;
LABEL_17:
        *(_QWORD *)&v69 = v12;
        v70 = v9;
        v71 = v10;
        memcpy_0(v12, v7, 2 * v9);
        v12->m128i_i16[v9] = 0;
LABEL_18:
        v14 = *(__m128i **)(v65 + 704);
        v15 = (__m128i *)v14->m128i_i64[1];
        v16 = 0LL;
        v68 = 0;
        v64 = v14;
        if ( v15[1].m128i_i8[9] )
          goto LABEL_45;
        v17 = 16LL;
        while ( 1 )
        {
          v18 = v15 + 2;
          v19 = (const __m128i *)&v69;
          if ( v10 > 7 )
            v19 = v12;
          v20 = v15[3].m128i_u64[0];
          if ( v15[3].m128i_i64[1] > 7uLL )
            v18 = (const __m128i *)v18->m128i_i64[0];
          v21 = v9;
          if ( v9 >= v20 )
            v21 = v15[3].m128i_u64[0];
          v22 = 0LL;
          _RCX = v18;
          v16 = v19;
          if ( Avx2WmemEnabledWeakValue )
          {
            while ( v17 <= v21 )
            {
              __asm
              {
                vmovdqu ymm1, ymmword ptr [rcx]
                vpcmpeqw ymm1, ymm1, ymmword ptr [rdx]
                vpmovmskb r9d, ymm1
              }
              if ( (_DWORD)_R9 != -1 )
              {
                _R9 = (unsigned int)~(_DWORD)_R9;
                _BitScanForward(&v58, _R9);
                v16 = (const __m128i *)((v58 >> 1) + v22);
                v27 = -1;
                if ( v18->m128i_i16[(_QWORD)v16] >= (unsigned int)v19->m128i_i16[(_QWORD)v16] )
                  v27 = 1;
                __asm { vzeroupper }
                goto LABEL_39;
              }
              v22 += 16LL;
              v17 += 16LL;
              _RCX += 2;
              v16 += 2;
              __asm { vzeroupper }
            }
          }
          for ( i = v22 + 8; i <= v21; i += 8LL )
          {
            _R9 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(v16), _mm_loadu_si128(_RCX)));
            if ( (_WORD)_R9 != 0xFFFF )
            {
              _BitScanForward(&v40, ~(unsigned __int16)_R9);
              v41 = v40 >> 1;
              v42 = (unsigned int)v41;
              v43 = v22 + v41;
              v44 = v22 + v42;
              v27 = -1;
              if ( v18->m128i_i16[v43] >= (unsigned int)v19->m128i_i16[v44] )
                v27 = 1;
              goto LABEL_39;
            }
            v22 += 8LL;
            ++_RCX;
            ++v16;
          }
          if ( v22 + 4 > v21 )
            goto LABEL_33;
          _R9 = _RCX->m128i_i64[0];
          if ( _RCX->m128i_i64[0] == v16->m128i_i64[0] )
            break;
          _BitScanForward64(&v55, _R9 ^ v16->m128i_i64[0]);
          v16 = (const __m128i *)(v22 + ((unsigned int)v55 >> 4));
          v27 = -1;
          if ( v18->m128i_i16[(_QWORD)v16] >= (unsigned int)v19->m128i_i16[(_QWORD)v16] )
            v27 = 1;
LABEL_39:
          if ( v27 < 0 )
            goto LABEL_64;
LABEL_40:
          v28 = 0;
          v64 = v15;
LABEL_41:
          v29 = (__m128i **)&v15[1];
          if ( !v28 )
            v29 = (__m128i **)v15;
          v15 = *v29;
          v30 = (*v29)[1].m128i_i8[9] == 0;
          v12 = (__m128i *)v63;
          v17 = 16LL;
          if ( !v30 )
          {
            v14 = (__m128i *)v64;
LABEL_45:
            v31 = 16LL;
            if ( v14[1].m128i_i8[9] )
            {
              v35 = (void *)v63;
              goto LABEL_98;
            }
            v32 = v14 + 2;
            v33 = v14[3].m128i_u64[0];
            if ( v14[3].m128i_i64[1] > 7uLL )
              v32 = (const __m128i *)v32->m128i_i64[0];
            v34 = (const __m128i *)&v69;
            v35 = (void *)v63;
            if ( v10 > 7 )
              v34 = v63;
            _R9 = v14[3].m128i_u64[0];
            if ( v33 >= v9 )
              _R9 = v9;
            v36 = 0LL;
            _RCX = v34;
            v16 = v32;
            if ( Avx2WmemEnabledWeakValue )
            {
              while ( v31 <= _R9 )
              {
                __asm
                {
                  vmovdqu ymm1, ymmword ptr [rcx]
                  vpcmpeqw ymm1, ymm1, ymmword ptr [rdx]
                  vpmovmskb eax, ymm1
                }
                if ( _EAX != -1 )
                {
                  _BitScanForward((unsigned int *)&v62, ~_EAX);
                  v16 = (const __m128i *)(v36 + (v62 >> 1));
                  if ( v34->m128i_i16[(_QWORD)v16] >= (unsigned int)v32->m128i_i16[(_QWORD)v16] )
                    v8 = 1;
                  __asm { vzeroupper }
LABEL_73:
                  if ( v8 < 0 )
                    goto LABEL_98;
                  goto LABEL_74;
                }
                v36 += 16LL;
                v31 += 16LL;
                _RCX += 2;
                v16 += 2;
                __asm { vzeroupper }
              }
            }
            for ( j = v36 + 8; j <= _R9; j += 8LL )
            {
              v39 = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(v16), _mm_loadu_si128(_RCX)));
              if ( v39 != 0xFFFF )
              {
                _BitScanForward((unsigned int *)&v48, ~v39);
                v47 = v34->m128i_i16[v36 + (v48 >> 1)] < (unsigned int)v32->m128i_i16[v36 + (v48 >> 1)];
                goto LABEL_71;
              }
              v36 += 8LL;
              ++_RCX;
              ++v16;
            }
            if ( v36 + 4 <= _R9 )
            {
              if ( _RCX->m128i_i64[0] != v16->m128i_i64[0] )
              {
                _BitScanForward64((unsigned __int64 *)&_RCX, _RCX->m128i_i64[0] ^ v16->m128i_i64[0]);
                v16 = (const __m128i *)(v36 + ((unsigned __int64)_RCX >> 4));
                v47 = v34->m128i_i16[(_QWORD)v16] < (unsigned int)v32->m128i_i16[(_QWORD)v16];
LABEL_71:
                if ( !v47 )
                  v8 = 1;
                goto LABEL_73;
              }
              v36 += 4LL;
            }
            v45 = &v34->m128i_i16[v36];
            v46 = (char *)v32 - (char *)v34;
            while ( v36 < _R9 )
            {
              v47 = (unsigned __int16)*v45 < *(unsigned __int16 *)((char *)v45 + v46);
              if ( *v45 != *(__int16 *)((char *)v45 + v46) )
                goto LABEL_71;
              ++v36;
              ++v45;
            }
            if ( v9 >= v33 )
            {
LABEL_74:
              v49 = v64;
              v50 = v65;
            }
            else
            {
LABEL_98:
              v50 = v65;
              v49 = *(_QWORD **)(v65 + 704);
            }
            if ( v10 > 7 )
            {
              v51 = (const struct std::nothrow_t *)(2 * v10 + 2);
              v65 = (unsigned __int64)v51;
              v64 = v35;
              if ( (unsigned __int64)v51 >= 0x1000 )
              {
                std::_Adjust_manually_vector_aligned(&v64, &v65);
                v51 = (const struct std::nothrow_t *)v65;
                v35 = v64;
              }
              operator delete(v35, v51);
            }
            if ( v49 == *(_QWORD **)(v50 + 704) )
            {
              if ( v50 != -32LL )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v50 + 32));
              return 2147943568LL;
            }
            else
            {
              v52 = (struct IApplicationSpecificEndpointInfo *)v49[8];
              if ( v52 )
              {
                *v66 = v52;
                (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *, const __m128i *))(*(_QWORD *)v52 + 8LL))(
                  v52,
                  v16);
              }
              else
              {
                *v66 = 0LL;
              }
              if ( v50 != -32LL )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v50 + 32));
              return 0LL;
            }
          }
        }
        v22 += 4LL;
LABEL_33:
        v25 = &v18->m128i_i16[v22];
        v26 = (char *)v19 - (char *)v18;
        while ( v22 < v21 )
        {
          if ( *v25 != *(__int16 *)((char *)v25 + v26) )
          {
            v27 = -1;
            _R9 = 1LL;
            if ( (unsigned __int16)*v25 >= *(unsigned __int16 *)((char *)v25 + v26) )
              v27 = 1;
            goto LABEL_39;
          }
          ++v22;
          ++v25;
        }
        if ( v20 >= v9 )
          goto LABEL_40;
LABEL_64:
        v28 = 1;
        goto LABEL_41;
      }
    }
    if ( v11 < 0x1000 )
    {
      ProcessHeap = GetProcessHeap();
      v12 = (__m128i *)HeapAlloc(ProcessHeap, 0, v11);
    }
    else
    {
      v12 = (__m128i *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v11);
    }
    v63 = v12;
    goto LABEL_17;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9CA,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           (const char *)_R9);
  }
  return result;
}
