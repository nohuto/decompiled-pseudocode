/*
 * XREFs of ?AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z @ 0x180099170
 * Callers:
 *     ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z @ 0x180099394 (-ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        double a3,
        double a4)
{
  unsigned int v4; // r9d
  int v8; // edi
  __int64 v9; // rcx
  int v10; // r10d
  unsigned __int64 v11; // xmm5_8
  double v12; // xmm1_8
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  double v16; // xmm2_8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // eax
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v24[2]; // [rsp+38h] [rbp-50h] BYREF

  v4 = *((_DWORD *)this + 14);
  if ( v4 <= 4 )
  {
    v9 = 0LL;
    memset(v24, 0, sizeof(v24));
    if ( v4 )
    {
      v10 = *((_DWORD *)this + 24);
      v11 = _mm_load_si128((const __m128i *)&_xmm).m128i_u64[0];
      do
      {
        if ( v10 == (_DWORD)v9 )
        {
          v12 = a3;
        }
        else
        {
          v13 = *((unsigned int *)this + 24);
          v14 = *((_QWORD *)this + 5);
          v15 = *((_QWORD *)this + 6);
          v16 = *(double *)(v14 + 8 * v13) - *(double *)(v15 + 8 * v13);
          if ( COERCE_DOUBLE(*(_QWORD *)&v16 & v11) >= 0.0001 )
            v12 = (*(double *)(v14 + 8 * v9) - *(double *)(v15 + 8 * v9)) * (a2 - *(double *)(v15 + 8 * v13)) / v16
                + *(double *)(v15 + 8 * v9);
          else
            v12 = *(double *)(v15 + 8 * v9);
        }
        *((double *)v24 + v9) = v12;
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *((_DWORD *)this + 14) );
    }
    v17 = *((_QWORD *)this + 3);
    v23 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _OWORD *))(*(_QWORD *)v17 + 72LL))(v17, &v23, v24);
    if ( v8 >= 0 )
    {
      v18 = *((_QWORD *)this + 2);
      v19 = v23;
      v20 = *((_QWORD *)this + 4);
      if ( *((_QWORD *)this + 16) == -1LL )
      {
        v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, v20, v23);
      }
      else
      {
        *((_QWORD *)this + 16) = -1LL;
        v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 48LL))(v18, v20, v19);
      }
      v8 = v21;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return (unsigned int)v8;
}
