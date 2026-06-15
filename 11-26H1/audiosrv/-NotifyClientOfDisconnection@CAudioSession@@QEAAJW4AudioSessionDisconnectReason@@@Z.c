/*
 * XREFs of ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800371DC
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800494A0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180037160 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSession::NotifyClientOfDisconnection(
        CAudioSession *this,
        enum AudioSessionDisconnectReason a2)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebp
  char *v7; // rax
  char *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int MediaEvent; // ebx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      41LL,
      &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
      *((_QWORD *)this + 82));
  }
  v4 = *((_QWORD *)this + 82);
  v5 = 2 * *(_DWORD *)(v4 - 16) + 2;
  v6 = 2 * *(_DWORD *)(v4 - 16) + 74;
  v7 = (char *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    MediaEvent = -2147024882;
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CAudioSession::NotifyClientOfDisconnection", 2468, MediaEvent);
    return (unsigned int)MediaEvent;
  }
  *(_DWORD *)v7 = v6;
  *((_DWORD *)v7 + 6) = v5;
  *((_DWORD *)v7 + 1) = 32;
  *((_DWORD *)v7 + 12) = a2;
  StringCbCopyW(v7 + 72, v5, *((char **)this + 82));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, v8);
  }
  MediaEvent = GenerateMediaEvent(v8, 0LL, v9, v10);
  operator delete(v8);
  if ( MediaEvent < 0 )
    goto LABEL_13;
  return (unsigned int)MediaEvent;
}
