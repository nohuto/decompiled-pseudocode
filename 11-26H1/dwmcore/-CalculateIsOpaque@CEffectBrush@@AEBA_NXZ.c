/*
 * XREFs of ?CalculateIsOpaque@CEffectBrush@@AEBA_NXZ @ 0x18015C41C
 * Callers:
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x18015AB10 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectBrush::CalculateIsOpaque(CEffectBrush *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 16LL))(*((_QWORD *)this + 20));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 120LL))(v2) )
    return 0;
  v3 = 0LL;
  v7 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT__Inf), (__m128)LODWORD(FLOAT__Inf)).m128_u64[0];
  while ( (unsigned int)v3 < *((_DWORD *)this + 48) )
  {
    v4 = *(_QWORD *)v2;
    v8 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(v4 + 128))(v2, (unsigned int)v3) )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v3);
      if ( !v5
        || !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *, __int128 *))(*(_QWORD *)v5 + 328LL))(
              v5,
              &v7,
              &v8)
        || *(float *)&v8 != 0.0
        || *((float *)&v8 + 1) != 0.0
        || *((float *)&v8 + 2) != INFINITY
        || *((float *)&v8 + 3) != INFINITY )
      {
        return 0;
      }
    }
    v3 = (unsigned int)(v3 + 1);
  }
  return 1;
}
