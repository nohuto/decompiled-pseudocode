/*
 * XREFs of ?ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z @ 0x1800C8AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180025784 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x18004485C (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

char __fastcall CHidePopup::ShouldShowAnimation(CHidePopup *this, struct CWindowData *a2)
{
  char v3; // di
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rbx
  RECT v6; // xmm1
  RECT rcSrc2; // [rsp+28h] [rbp-40h] BYREF
  RECT rcSrc1; // [rsp+38h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+48h] [rbp-20h] BYREF

  v3 = 1;
  if ( (unsigned int)GetDesktopID(1LL) )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             0LL);
    for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
    {
      if ( ((__int64)i[42].Blink & 0xFFF) == 0x18 )
      {
        if ( !CWindowData::WillEndAnimationCloaked((CWindowData *)i) )
        {
          v6 = (RECT)*((_OWORD *)a2 + 3);
          rcSrc1 = (RECT)i[3];
          rcDst = 0LL;
          rcSrc2 = v6;
          if ( IntersectRect(&rcDst, &rcSrc1, &rcSrc2) )
            return 0;
        }
        return v3;
      }
    }
  }
  return v3;
}
