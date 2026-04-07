/*
 * XREFs of ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x1800CDEE4
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180084BAC (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800A8A10 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ?UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ @ 0x1800CDFA4 (-UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ.c)
 */

void __fastcall CTrackingTooltip::Update(struct tagPOINT *this, const struct tagPOINT *a2, unsigned __int16 *a3)
{
  HWND *v3; // rsi
  struct tagRECT *v5; // rdi
  struct tagPOINT *v8; // r9
  HWND v9; // rcx

  v3 = (HWND *)&this[1];
  v5 = (struct tagRECT *)&this[2];
  if ( a3 )
  {
    v8 = this + 5;
    v9 = *v3;
    v8[6] = (struct tagPOINT)a3;
    SendMessageW(v9, 0x439u, 0LL, (LPARAM)v8);
    GetWindowRect(*v3, v5);
  }
  if ( a2 )
  {
    if ( !v5->left && !this[3].x )
      GetWindowRect(*v3, v5);
    this[4] = *a2;
  }
  if ( a3 || a2 )
    CTrackingTooltip::UpdateTooltipLocation((CTrackingTooltip *)this);
}
