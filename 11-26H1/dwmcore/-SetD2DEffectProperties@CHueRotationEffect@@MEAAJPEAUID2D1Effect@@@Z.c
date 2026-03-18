/*
 * XREFs of ?SetD2DEffectProperties@CHueRotationEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x18024ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHueRotationEffect::SetD2DEffectProperties(CHueRotationEffect *this, struct ID2D1Effect *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\HueRotationEffect.h",
      (const char *)0x8007029CLL);
  return (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           0LL,
           0LL,
           (char *)this + 352,
           4);
}
