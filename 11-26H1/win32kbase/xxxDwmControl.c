/*
 * XREFs of xxxDwmControl @ 0x1401FBEF0
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1401ADDE8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1401FBD50 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 */

__int64 __fastcall xxxDwmControl(int a1, int a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // ecx
  bool v8; // zf
  int v9; // edx
  int v10; // r8d

  v5 = -1073741823;
  if ( a1 == 1034 )
  {
LABEL_9:
    v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 70544) == 0LL;
LABEL_10:
    if ( v8 )
      return v5;
    goto LABEL_11;
  }
  if ( a1 != 1035 && a1 != 1036 )
  {
    if ( a1 != 1037 )
    {
      if ( a1 != 1038 )
        return v5;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 70544) )
  {
    v8 = *(_DWORD *)(W32GetUserSessionState(v7, v6, a3) + 70552) == 0;
    goto LABEL_10;
  }
LABEL_11:
  v5 = PostWinlogonMessage(a1, a2, a3);
  if ( (v5 & 0x80000000) == 0 && ((a1 - 1034) & 0xFFFFFFFB) == 0 )
    *(_DWORD *)(W32GetUserSessionState(a1 - 1034, v9, v10) + 70552) = 1;
  return v5;
}
