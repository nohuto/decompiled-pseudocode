/*
 * XREFs of TS_RegisterAudioProtocolNotification @ 0x180028FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000C800 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180017D2C (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 */

__int64 __fastcall TS_RegisterAudioProtocolNotification(void *a1, struct AUDIOPROTOCOLNOTIFY **a2)
{
  int v4; // edi
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF
  struct AUDIOPROTOCOLNOTIFY *v9; // [rsp+48h] [rbp+20h] BYREF

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x970,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  *a2 = 0LL;
  v7 = 0;
  v8 = 0;
  v4 = RpcClientProcessSessionId(a1, &v7, &v8);
  if ( v4 < 0 )
  {
    v5 = 2423LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v9 = 0LL;
  v4 = TsSessionIdAddNotify(v8, v7, &v9);
  if ( v4 < 0 )
  {
    v5 = 2426LL;
    goto LABEL_5;
  }
  *a2 = v9;
  return 0LL;
}
