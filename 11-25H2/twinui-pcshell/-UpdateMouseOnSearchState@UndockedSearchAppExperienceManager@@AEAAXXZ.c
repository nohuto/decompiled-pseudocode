/*
 * XREFs of ?UpdateMouseOnSearchState@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803B1C50
 * Callers:
 *     _lambda_a21e1a2925ef670440b4b94eb1909895_::_lambda_invoker_cdecl_ @ 0x18039DCC0 (_lambda_a21e1a2925ef670440b4b94eb1909895_--_lambda_invoker_cdecl_.c)
 *     ?TrackMouseMovement@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803B14E4 (-TrackMouseMovement@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall UndockedSearchAppExperienceManager::UpdateMouseOnSearchState(UndockedSearchAppExperienceManager *this)
{
  HWND v2; // rcx
  BOOL v3; // eax
  RECT *v4; // rbx
  RECT *v5; // rsi
  BOOL v6; // eax
  POINT pt; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-30h] BYREF
  RECT rc; // [rsp+38h] [rbp-20h] BYREF

  if ( *((_QWORD *)this + 26) )
  {
    pt = 0LL;
    GetCursorPos(&pt);
    v2 = (HWND)*((_QWORD *)this + 26);
    Rect = 0LL;
    GetWindowRect(v2, &Rect);
    v3 = PtInRect(&Rect, pt);
    *((_BYTE *)this + 216) = v3;
    if ( v3 )
    {
      v4 = (RECT *)*((_QWORD *)this + 29);
      v5 = (RECT *)*((_QWORD *)this + 30);
      while ( v4 != v5 )
      {
        rc = *v4;
        v6 = PtInRect(&rc, pt);
        *((_BYTE *)this + 216) = !v6;
        if ( v6 )
          break;
        ++v4;
      }
    }
  }
}
