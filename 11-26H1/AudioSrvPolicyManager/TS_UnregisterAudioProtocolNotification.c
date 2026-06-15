/*
 * XREFs of TS_UnregisterAudioProtocolNotification @ 0x18002A0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180027F68 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 */

__int64 __fastcall TS_UnregisterAudioProtocolNotification(__int64 a1, struct AUDIOPROTOCOLNOTIFY **a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*a2 )
  {
    v3 = -2147024809;
    v4 = 2437LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = TsSessionIdDeleteNotify(*a2);
  if ( v3 < 0 )
  {
    v4 = 2440LL;
    goto LABEL_3;
  }
  *a2 = 0LL;
  return 0LL;
}
