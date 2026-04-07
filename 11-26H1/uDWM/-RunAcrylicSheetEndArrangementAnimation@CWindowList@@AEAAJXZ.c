/*
 * XREFs of ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x1800E4260
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x1800E2064 (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800429A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z @ 0x18007E744 (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z.c)
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
  v9[0] = xmmword_1800FB0F0;
  v5 = ~*((_BYTE *)v3 + 741) & 8;
  v10 = 0x3FF0000000000000LL;
  v9[1] = xmmword_1800FB100;
  v6 = CAcrylicSheet::AnimateRect(v4, v3, v2, (4 * v5) | 1u, (__int64)v9);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x2140u, 0LL);
  }
  else
  {
    *(_BYTE *)(*((_QWORD *)this + 87) + 741LL) &= ~0x20u;
    *(_BYTE *)(*((_QWORD *)this + 87) + 741LL) &= ~0x40u;
  }
  return v7;
}
