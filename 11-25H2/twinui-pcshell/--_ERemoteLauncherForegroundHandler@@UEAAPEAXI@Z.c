/*
 * XREFs of ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x1803CF0B0
 * Callers:
 *     ??_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z @ 0x1803CF060 (--_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ??1RemoteLauncherForegroundHandler@@UEAA@XZ @ 0x1803CF014 (--1RemoteLauncherForegroundHandler@@UEAA@XZ.c)
 */

RemoteLauncherForegroundHandler *__fastcall RemoteLauncherForegroundHandler::`vector deleting destructor'(
        RemoteLauncherForegroundHandler *this,
        char a2)
{
  RemoteLauncherForegroundHandler::~RemoteLauncherForegroundHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
