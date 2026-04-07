/*
 * XREFs of ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x1800E7E60
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180090CA0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x1800E68AC (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x1800399F0 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004B350 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z @ 0x18008F4B4 (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z.c)
 */

__int64 __fastcall CWindowList::RunAcrylicSheetEndArrangementAnimation(CWindowList *this)
{
  __int64 v2; // r8
  struct CWindowData *v3; // rdx
  __int64 v4; // rcx
  char v5; // r9
  int v6; // eax
  unsigned int v7; // edi
  _OWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  if ( CDesktopManager::IsWindowAnimationEnabled() )
    CDesktopManager::CheckAnyPreference(0x10u);
  v3 = (struct CWindowData *)*((_QWORD *)this + 87);
  v4 = *((_QWORD *)this + 67);
  v9[0] = xmmword_1800FFA18;
  v5 = ~*((_BYTE *)v3 + 677) & 0x10;
  v10 = 0x3FF0000000000000LL;
  v9[1] = xmmword_1800FFA28;
  v6 = CAcrylicSheet::AnimateRect(v4, v3, v2, (2 * v5) | 1u, (__int64)v9);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1FF0u, 0LL);
  }
  else
  {
    *(_BYTE *)(*((_QWORD *)this + 87) + 677LL) &= ~0x40u;
    *(_BYTE *)(*((_QWORD *)this + 87) + 677LL) &= ~0x80u;
  }
  return v7;
}
