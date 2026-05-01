/*
 * XREFs of ?EnableTouchEdgeGesture@TouchEdgeGestureManager@@UEAAJ_N@Z @ 0x180569980
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1800FC364 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ??$EnableTouchEdgeGesture@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x180568AF0 (--$EnableTouchEdgeGesture@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     ??$SetEnabledTouchEdgeGesture@AEAW4TouchEdgeGestureType@@@TouchEdgeGestureTelemetry@@SAXAEAW4TouchEdgeGestureType@@@Z @ 0x180570578 (--$SetEnabledTouchEdgeGesture@AEAW4TouchEdgeGestureType@@@TouchEdgeGestureTelemetry@@SAXAEAW4Tou.c)
 */

__int64 __fastcall TouchEdgeGestureManager::EnableTouchEdgeGesture(TouchEdgeGestureManager *this, char a2)
{
  int v4; // ebx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v8) = a2;
  TouchEdgeGestureTelemetry::EnableTouchEdgeGesture<bool &>((char *)&v8);
  v4 = a2 != 0 ? 0x1E : 0;
  v8 = v4;
  TouchEdgeGestureTelemetry::SetEnabledTouchEdgeGesture<enum TouchEdgeGestureType &>(&v8);
  try
  {
    if ( *((_DWORD *)this + 47) != v4 )
    {
      *((_DWORD *)this + 47) = v4;
      TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration((__int64)this + 96, v4);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x27,
                           (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
                           v5);
  }
  return result;
}
