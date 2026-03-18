/*
 * XREFs of NlsKbdSendIMEProc @ 0x14021D638
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CD60 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CF90 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D090 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D1F0 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D2A0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     NlsKbdSendIMENotification @ 0x1401B0DF0 (NlsKbdSendIMENotification.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall NlsKbdSendIMEProc(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rbp
  int (*v15)(void); // rax
  int v16; // r8d
  __int64 v17; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v9 = 0;
  if ( *(_QWORD *)(UserSessionState + 18928) )
  {
    UserSessionState = W32GetUserSessionState(v7, v6, v8);
    v12 = *(_QWORD *)(UserSessionState + 18928);
    if ( *(_QWORD *)(v12 + 104) )
    {
      v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 18928);
      v14 = *(_QWORD *)(v13 + 104);
      v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13) + 48) + 5216LL);
      if ( !v15 || v15() < 0 )
        goto LABEL_8;
      UserSessionState = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 48) + 5224LL);
      if ( UserSessionState )
      {
        LODWORD(UserSessionState) = ((__int64 (__fastcall *)(__int64))UserSessionState)(v14);
        v9 = UserSessionState;
      }
      if ( (v9 & 0x800000) == 0 )
LABEL_8:
        LOBYTE(UserSessionState) = NlsKbdSendIMENotification(a1, a2, v16);
    }
  }
  return UserSessionState;
}
