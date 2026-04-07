/*
 * XREFs of ?SetMonitorDesktopWorkArea@CImmersiveState@@QEAAXPEAUHMONITOR__@@AEBUtagRECT@@@Z @ 0x1800B8A44
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x180045388 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveState::SetMonitorDesktopWorkArea(
        CImmersiveState *this,
        HMONITOR a2,
        const struct tagRECT *a3)
{
  __int64 i; // r9
  __int64 v4; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v4 = *((_QWORD *)this + 2);
    if ( *(HMONITOR *)(v4 + 24 * i + 16) == a2 )
    {
      *(struct tagRECT *)(v4 + 24 * i) = *a3;
      return;
    }
  }
}
