/*
 * XREFs of ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x1800360B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000A9D0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x1800361CC (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006CE4C (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x18006D710 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@KPEBN@Z @ 0x1800A0530 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@KPEBN@Z.c)
 */

__int64 __fastcall CAcrylicSheet::ValidateVisual(CAcrylicSheet *this)
{
  int v1; // eax
  int updated; // edi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 8);
  if ( (v1 & 0x8000) != 0 )
  {
    updated = CAcrylicSheet::UpdateTransition(this);
    if ( updated < 0 )
    {
      v7 = 181LL;
      goto LABEL_13;
    }
    *((_DWORD *)this + 8) &= ~0x8000u;
    v1 = *((_DWORD *)this + 8);
  }
  if ( (v1 & 0x4000) != 0 )
  {
    updated = CAcrylicSheet::EnsureBackgroundEffects(this);
    if ( updated < 0 )
    {
      v7 = 187LL;
      goto LABEL_13;
    }
    *((_DWORD *)this + 8) &= 0xFFFF8FFF;
    v1 = *((_DWORD *)this + 8);
  }
  if ( (v1 & 0x1000) == 0 )
    goto LABEL_8;
  updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
              *((CAccentAcrylicBlurBehind **)this + 33),
              (CAcrylicSheet *)((char *)this + 424),
              *((_DWORD *)this + 108),
              (const double *)this + 55);
  if ( updated < 0 )
  {
    v7 = 196LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)updated,
      v8);
    return (unsigned int)updated;
  }
  *((_DWORD *)this + 8) &= ~0x1000u;
  v1 = *((_DWORD *)this + 8);
LABEL_8:
  if ( (v1 & 0x2000) == 0 )
    goto LABEL_9;
  updated = CAcrylicSheet::EnsureAcrylicAccentColor(this);
  if ( updated < 0 )
  {
    v7 = 202LL;
    goto LABEL_13;
  }
  *((_DWORD *)this + 8) &= ~0x2000u;
LABEL_9:
  v4 = CRenderDataVisual::ValidateVisual(this);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCE,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v4,
    v8);
  return v5;
}
