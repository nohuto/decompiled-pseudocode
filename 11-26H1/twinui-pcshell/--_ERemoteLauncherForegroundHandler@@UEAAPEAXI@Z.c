/*
 * XREFs of ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x1803D8CE0
 * Callers:
 *     ??_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z @ 0x1803D8C90 (--_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1RemoteLauncherForegroundHandler@@UEAA@XZ @ 0x1803D8C48 (--1RemoteLauncherForegroundHandler@@UEAA@XZ.c)
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
