/*
 * XREFs of xxxDwmControl @ 0x14017E230
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1400AEF0C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017DD8C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 *     Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DF8 (Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxDwmControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf

  v2 = (unsigned int)a2;
  v3 = a1;
  v4 = -1073741823;
  switch ( (_DWORD)a1 )
  {
    case 0x40A:
      goto LABEL_10;
    case 0x40B:
    case 0x40C:
      if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 70552) )
      {
LABEL_12:
        v4 = PostWinlogonMessage(v3, v2);
        goto LABEL_13;
      }
      v7 = *(_DWORD *)(W32GetUserSessionState(v6, v5) + 70560) == 0;
LABEL_11:
      if ( v7 )
        goto LABEL_13;
      goto LABEL_12;
    case 0x40D:
LABEL_10:
      v7 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 70552) == 0LL;
      goto LABEL_11;
  }
  if ( (_DWORD)a1 == 1038 && (unsigned int)Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_12;
LABEL_13:
  if ( (unsigned int)Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v4 < 0 )
      return (unsigned int)v4;
    v9 = v3 - 1034;
    v10 = (v9 & 0xFFFFFFFB) == 0;
  }
  else
  {
    if ( v4 < 0 )
      return (unsigned int)v4;
    v10 = v3 == 1034;
  }
  if ( v10 )
    *(_DWORD *)(W32GetUserSessionState(v9, v8) + 70560) = 1;
  return (unsigned int)v4;
}
