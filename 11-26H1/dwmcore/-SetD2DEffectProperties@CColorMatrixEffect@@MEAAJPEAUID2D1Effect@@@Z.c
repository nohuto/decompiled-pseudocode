/*
 * XREFs of ?SetD2DEffectProperties@CColorMatrixEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1802879D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorMatrixEffect::SetD2DEffectProperties(CColorMatrixEffect *this, struct ID2D1Effect *a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(struct ID2D1Effect *, _QWORD, _QWORD, _OWORD *, int); // rax
  int v6; // esi
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  _OWORD v11[5]; // [rsp+30h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( !a2 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\colormatrixeffect.cpp",
      (const char *)0x8007029CLL);
  v4 = *(_QWORD *)a2;
  v11[0] = *((_OWORD *)this + 22);
  v5 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _OWORD *, int))(v4 + 72);
  v11[1] = *((_OWORD *)this + 23);
  v11[2] = *((_OWORD *)this + 24);
  v11[3] = *((_OWORD *)this + 25);
  v11[4] = *((_OWORD *)this + 26);
  v6 = v5(a2, 0LL, 0LL, v11, 80);
  if ( v6 < 0 )
  {
    v7 = 19LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\colormatrixeffect.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         1LL,
         0LL,
         (char *)this + 432,
         4);
  if ( v6 < 0 )
  {
    v7 = 24LL;
    goto LABEL_5;
  }
  v9 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         2LL,
         0LL,
         (char *)this + 436,
         4);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\colormatrixeffect.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
