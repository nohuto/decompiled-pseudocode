/*
 * XREFs of ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180036DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     MIDL_user_allocate @ 0x180031380 (MIDL_user_allocate.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180037160 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetIconPath(CAudioSession *this, unsigned __int16 **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // r9
  size_t v6; // rbx
  unsigned __int16 *v7; // rax
  int v8; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 280);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 7);
  v5 = *((_QWORD *)this + 32);
  v6 = 2LL * (*(_DWORD *)(v5 - 16) + 1);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, v5);
  }
  v7 = (unsigned __int16 *)MIDL_user_allocate(v6);
  *a2 = v7;
  if ( v7 )
  {
    v8 = StringCbCopyW(v7, v6, *((const unsigned __int16 **)this + 32));
    if ( v8 >= 0 )
      goto LABEL_10;
    operator delete(*a2);
    *a2 = 0LL;
  }
  else
  {
    v8 = -2147024882;
  }
  AudSrvTraceLoggingErrorHelper("CAudioSession::GetIconPath", 225, v8);
LABEL_10:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v8;
}
