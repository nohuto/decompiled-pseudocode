/*
 * XREFs of ?SetD2DEffectProperties@CGaussianBlurEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180287D50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGaussianBlurEffect::SetD2DEffectProperties(CGaussianBlurEffect *this, struct ID2D1Effect *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\gaussianblureffect.cpp",
      (const char *)0x8007029CLL);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         (char *)this + 352,
         4);
  if ( v4 < 0 )
  {
    v5 = 15LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\gaussianblureffect.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         1LL,
         0LL,
         (char *)this + 356,
         4);
  if ( v4 < 0 )
  {
    v5 = 20LL;
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         2LL,
         0LL,
         (char *)this + 360,
         4);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\gaussianblureffect.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
