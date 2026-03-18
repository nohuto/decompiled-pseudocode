/*
 * XREFs of ?SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18006EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ED40 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x1800701A0 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DContext::SetClip(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  int v4; // eax
  __int64 v5; // rdi
  bool v9; // zf
  __int128 v10; // xmm0
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  CBatchOptimizer *v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // r14
  int v17; // ebx
  int v18; // ebx
  __m128i si128; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = *((_DWORD *)this + 86);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v4 - 1));
  if ( !*((_BYTE *)this + 429)
    || *((_BYTE *)this + 431)
    || a4 != *((_DWORD *)this + 102)
    || a3->left != *((float *)this + 98)
    || a3->top != *((float *)this + 99)
    || a3->right != *((float *)this + 100)
    || a3->bottom != *((float *)this + 101) )
  {
    if ( *((_QWORD *)this + 17) )
    {
      v14 = (CBatchOptimizer *)*((_QWORD *)this + 18);
      if ( v14 )
        CBatchOptimizer::Flush(v14);
      v15 = *((_QWORD *)this + 17);
      *(_DWORD *)(v15 + 44) = *((_DWORD *)this + 8);
      *(_QWORD *)(v15 + 32) = 0LL;
      v16 = (volatile signed __int32 *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = 0LL;
      if ( v16 )
      {
        CD2DContext::EnsureBeginDraw(this, (__int64)a2, (__int64)a3);
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**((_QWORD **)this + 26) + 120LL))(
          *((_QWORD *)this + 26),
          v16);
        v17 = _InterlockedDecrement(v16 + 2);
        if ( v17 < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            si128.m128i_i32[0]);
        if ( !v17 )
        {
          if ( _InterlockedAdd(v16 + 2, 1u) <= 0 )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              si128.m128i_i32[0]);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 40LL))(v16);
          v18 = _InterlockedDecrement(v16 + 2);
          if ( v18 < -1 )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x26,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              si128.m128i_i32[0]);
          if ( !v18 )
          {
            if ( _InterlockedDecrement(v16 + 2) < -1 )
              wil::details::in1diag3::Log_Hr(
                retaddr,
                (void *)0x26,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                (const char *)0x8007029CLL,
                si128.m128i_i32[0]);
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 32LL))(v16, 1LL);
          }
        }
      }
    }
    v9 = *(_BYTE *)(v5 + 78) == 0;
    v10 = (__int128)*a3;
    *(_DWORD *)(v5 + 68) = a4;
    *(_OWORD *)(v5 + 52) = v10;
    if ( !v9 )
    {
      v11 = *(_QWORD *)(v5 + 16);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(v11 + 200) + 240LL))(*(_QWORD *)(v11 + 200), &si128);
      v12 = *(_QWORD *)(v11 + 208);
      *(_BYTE *)(v11 + 431) = 0;
      v13 = *(_OWORD *)(v5 + 52);
      *(_DWORD *)(v11 + 408) = a4;
      *(_OWORD *)(v11 + 392) = v13;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 80LL))(v12, v5 + 52, a4);
    }
    *(_BYTE *)(v5 + 77) = 1;
  }
}
