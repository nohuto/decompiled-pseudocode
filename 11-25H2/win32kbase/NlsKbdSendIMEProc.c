/*
 * XREFs of NlsKbdSendIMEProc @ 0x1402187C8
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140217EF0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218120 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218220 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218380 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218430 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     NlsKbdSendIMENotification @ 0x14018D8F0 (NlsKbdSendIMENotification.c)
 *     ApiSetEditionGetAppImeCompatFlags @ 0x1402257A0 (ApiSetEditionGetAppImeCompatFlags.c)
 */

char __fastcall NlsKbdSendIMEProc(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(UserSessionState + 18888) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    if ( *(_QWORD *)(*(_QWORD *)(UserSessionState + 18888) + 104LL) )
    {
      v9 = W32GetUserSessionState(v8, v7);
      UserSessionState = ApiSetEditionGetAppImeCompatFlags(*(_QWORD *)(*(_QWORD *)(v9 + 18888) + 104LL));
      if ( (UserSessionState & 0x800000) == 0 )
        LOBYTE(UserSessionState) = NlsKbdSendIMENotification(v3, v2);
    }
  }
  return UserSessionState;
}
