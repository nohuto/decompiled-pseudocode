/*
 * XREFs of ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18001AAFC
 * Callers:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180025310 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800079C0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetWindowBand@CWindowData@@QEBA?AW4ZBID@@XZ @ 0x18001AC0C (-GetWindowBand@CWindowData@@QEBA-AW4ZBID@@XZ.c)
 *     ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x18001C2F8 (-UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180025784 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

__int64 __fastcall CImmersiveState::Initialize(CImmersiveState *this, unsigned __int64 a2)
{
  struct _LIST_ENTRY *WindowListForDesktop; // rsi
  struct _LIST_ENTRY *i; // rbx
  int WindowBand; // eax

  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 16, 0x18u);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           a2);
  for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
  {
    WindowBand = CWindowData::GetWindowBand(i);
    if ( (HIDWORD(i[7].Flink) & 0x40000000) == 0 )
    {
      switch ( WindowBand )
      {
        case 6:
          if ( !CImmersiveState::UpdateInfoIfTaskbar(this, (const struct CWindowData *)i)
            && ((__int64)i[42].Blink & 0xFFF) == 9 )
          {
            if ( (BYTE4(i[42].Flink) & 1) == 0 )
              *((_BYTE *)this + 56) = 1;
            *(struct _LIST_ENTRY *)((char *)this + 72) = i[3];
          }
          break;
        case 12:
          if ( !*((_QWORD *)this + 6) )
            *((_QWORD *)this + 6) = i;
          break;
        case 1:
          CImmersiveState::UpdateInfoIfTaskbar(this, (const struct CWindowData *)i);
          break;
      }
    }
  }
  return 0LL;
}
