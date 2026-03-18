/*
 * XREFs of ?SetD2DEffectProperties@CBrightnessEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1802878C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrightnessEffect::SetD2DEffectProperties(CBrightnessEffect *this, struct ID2D1Effect *a2)
{
  __int64 (__fastcall *v4)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int); // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 (__fastcall *v8)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rax
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( !a2 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brightnesseffect.cpp",
      (const char *)0x8007029CLL);
  v4 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
  v12 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 88), (__m128)*((unsigned int *)this + 89)).m128_u64[0];
  v5 = v4(a2, 0LL, 0LL, &v12, 8);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
    v12 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 90), (__m128)*((unsigned int *)this + 91)).m128_u64[0];
    v9 = v8(a2, 1LL, 0LL, &v12, 8);
    v10 = v9;
    if ( v9 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brightnesseffect.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brightnesseffect.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
