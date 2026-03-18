/*
 * XREFs of ?SetD2DEffectProperties@CTurbulenceEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180285CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTurbulenceEffect::SetD2DEffectProperties(CTurbulenceEffect *this, struct ID2D1Effect *a2)
{
  __int64 (__fastcall *v4)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int); // rax
  int v5; // esi
  __int64 v6; // rdx
  __int64 (__fastcall *v8)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rax
  __int64 (__fastcall *v9)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rax
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !a2 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\turbulenceeffect.cpp",
      (const char *)0x8007029CLL);
  v4 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
  v13 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 88), (__m128)*((unsigned int *)this + 89)).m128_u64[0];
  v5 = v4(a2, 0LL, 0LL, &v13, 8);
  if ( v5 < 0 )
  {
    v6 = 23LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\turbulenceeffect.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
  v13 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 90), (__m128)*((unsigned int *)this + 91)).m128_u64[0];
  v5 = v8(a2, 2LL, 0LL, &v13, 8);
  if ( v5 < 0 )
  {
    v6 = 30LL;
    goto LABEL_5;
  }
  v9 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
  v13 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 92), (__m128)*((unsigned int *)this + 93)).m128_u64[0];
  v5 = v9(a2, 1LL, 0LL, &v13, 8);
  if ( v5 < 0 )
  {
    v6 = 37LL;
    goto LABEL_5;
  }
  v5 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         3LL,
         0LL,
         (char *)this + 376,
         4);
  if ( v5 < 0 )
  {
    v6 = 42LL;
    goto LABEL_5;
  }
  v5 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         4LL,
         0LL,
         (char *)this + 380,
         4);
  if ( v5 < 0 )
  {
    v6 = 47LL;
    goto LABEL_5;
  }
  v5 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         5LL,
         0LL,
         (char *)this + 384,
         4);
  if ( v5 < 0 )
  {
    v6 = 52LL;
    goto LABEL_5;
  }
  v10 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
          a2,
          6LL,
          0LL,
          (char *)this + 388,
          4);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\turbulenceeffect.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
