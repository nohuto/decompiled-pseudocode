/*
 * XREFs of ?SetD2DEffectProperties@CShadowEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180287EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShadowEffect::SetD2DEffectProperties(CShadowEffect *this, struct ID2D1Effect *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 (__fastcall *v7)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int); // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shadoweffect.cpp",
      (const char *)0x8007029CLL);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         (char *)this + 352,
         4);
  if ( v4 < 0 )
  {
    v5 = 14LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shadoweffect.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)a2 + 72LL);
  v10 = *(_OWORD *)((char *)this + 356);
  v4 = v7(a2, 1LL, 0LL, &v10, 16);
  if ( v4 < 0 )
  {
    v5 = 20LL;
    goto LABEL_5;
  }
  v8 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         2LL,
         0LL,
         (char *)this + 372,
         4);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shadoweffect.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
