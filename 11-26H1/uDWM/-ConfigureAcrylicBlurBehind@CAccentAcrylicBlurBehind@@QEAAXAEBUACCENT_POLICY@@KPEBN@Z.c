/*
 * XREFs of ?ConfigureAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAXAEBUACCENT_POLICY@@KPEBN@Z @ 0x180093B8C
 * Callers:
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18008BAF0 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x180095924 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAccentAcrylicBlurBehind::ConfigureAcrylicBlurBehind(
        CAccentAcrylicBlurBehind *this,
        const struct ACCENT_POLICY *a2,
        int a3,
        double *a4)
{
  char v4; // al
  double v5; // xmm1_8
  _DWORD *v6; // rax
  __int64 v7; // r10
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*((_DWORD *)a2 + 1) & 2) != 0;
  if ( a4 )
    v5 = *a4;
  else
    v5 = DOUBLE_N1_0;
  if ( *((_BYTE *)this + 224) != v4 || *((_DWORD *)this + 52) != a3 || *((double *)this + 27) != v5 )
  {
    *((_BYTE *)this + 224) = v4;
    *((double *)this + 27) = v5;
    *((_DWORD *)this + 52) = a3;
    v6 = ___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v8);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, (unsigned int)*v6);
  }
}
