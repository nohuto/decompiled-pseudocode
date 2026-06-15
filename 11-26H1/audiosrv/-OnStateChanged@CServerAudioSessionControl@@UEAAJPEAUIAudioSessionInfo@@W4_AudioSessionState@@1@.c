/*
 * XREFs of ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18001A6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnStateChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        unsigned int a4)
{
  int MediaEvent; // ebp
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int *v11; // rax
  unsigned __int64 v12; // r8
  unsigned int *v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  _WORD *v16; // rax
  __int16 v17; // cx
  _WORD *v18; // rcx
  HANDLE ProcessHeap; // rax

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 656);
    v9 = 2 * *(_DWORD *)(v8 - 16) + 2;
    v10 = 2 * *(_DWORD *)(v8 - 16) + 74;
    v11 = (unsigned int *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v11;
    if ( !v11 )
    {
      MediaEvent = -2147024882;
LABEL_14:
      AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnStateChanged", 0x2FDu, MediaEvent);
      goto LABEL_15;
    }
    *v11 = v10;
    v11[1] = 8;
    v11[6] = v9;
    v11[12] = a4;
    v14 = (unsigned __int64)v9 >> 1;
    v15 = *(_QWORD *)(*((_QWORD *)this + 9) + 656LL);
    v16 = v11 + 18;
    if ( v14 )
    {
      v12 = 2147483646 - v14;
      v15 -= (__int64)v16;
      do
      {
        if ( !(v12 + v14) )
          break;
        v17 = *(_WORD *)((char *)v16 + v15);
        if ( !v17 )
          break;
        *v16++ = v17;
        --v14;
      }
      while ( v14 );
      v18 = v16 - 1;
      if ( v14 )
        v18 = v16;
      *v18 = 0;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        25LL,
        &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
        v13,
        *((_DWORD *)this + 20));
    }
    MediaEvent = GenerateMediaEvent(v13, *((unsigned int *)this + 20), v12, v15);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v13);
    if ( MediaEvent < 0 )
      goto LABEL_14;
  }
LABEL_15:
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return (unsigned int)MediaEvent;
}
