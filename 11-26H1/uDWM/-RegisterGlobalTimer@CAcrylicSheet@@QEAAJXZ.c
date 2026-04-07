/*
 * XREFs of ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x180040A48
 * Callers:
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x18004282C (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x180095A98 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180005A2C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAcrylicSheet::RegisterGlobalTimer(CAcrylicSheet *this)
{
  unsigned int v1; // ebx
  int v4; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 352) )
  {
    v4 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x16Eu, 0LL);
    else
      *((_BYTE *)this + 352) = 1;
  }
  return v1;
}
