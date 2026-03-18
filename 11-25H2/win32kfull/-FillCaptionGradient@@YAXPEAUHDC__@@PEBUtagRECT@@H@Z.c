/*
 * XREFs of ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1400C1F70
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 * Callees:
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1400C2060 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 */

void __fastcall FillCaptionGradient(HDC a1, LPCRECT a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  HBRUSH v15; // r8

  if ( a3 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 4576LL);
    v11 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19872) + 4676LL);
  }
  else
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
    v6 = *(_DWORD *)(v12 + 4580);
    v10 = *(_QWORD *)(W32GetUserSessionState(v12, v13) + 19872);
    v11 = *(_DWORD *)(v10 + 4680);
  }
  if ( v6 == v11 )
  {
    v14 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872);
    if ( a3 )
      v15 = *(HBRUSH *)(v14 + 4712);
    else
      v15 = *(HBRUSH *)(v14 + 4720);
    FillRect(a1, a2, v15);
  }
  else
  {
    FillGradient(a1, a2, v6, v11);
  }
}
