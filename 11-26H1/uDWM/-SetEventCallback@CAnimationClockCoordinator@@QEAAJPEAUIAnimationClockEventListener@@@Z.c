/*
 * XREFs of ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x180076590
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationClockCoordinator::SetEventCallback(
        CAnimationClockCoordinator *this,
        struct IAnimationClockEventListener *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v5 = -2147019886;
  if ( !*((_QWORD *)this + 6) || !a2 )
  {
    *((_QWORD *)this + 6) = a2;
    v5 = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
