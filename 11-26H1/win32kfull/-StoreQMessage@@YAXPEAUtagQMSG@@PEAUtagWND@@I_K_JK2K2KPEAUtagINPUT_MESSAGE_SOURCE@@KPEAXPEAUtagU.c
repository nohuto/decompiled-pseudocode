/*
 * XREFs of ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140099480
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     NtUserScheduleDispatchNotification @ 0x140055AF0 (NtUserScheduleDispatchNotification.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     DoTimer @ 0x1400983E4 (DoTimer.c)
 *     _PostThreadMessageEx @ 0x1401D3210 (_PostThreadMessageEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x140099894 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x14009A2FC (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 */

void __fastcall StoreQMessage(
        LARGE_INTEGER *a1,
        LARGE_INTEGER *a2,
        DWORD a3,
        LARGE_INTEGER a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        DWORD a8,
        unsigned __int64 a9,
        char a10,
        struct tagINPUT_MESSAGE_SOURCE *a11,
        unsigned int a12,
        void *a13,
        struct tagUIPI_INFO *a14)
{
  __int64 v14; // rbp
  LARGE_INTEGER *v17; // rbx
  LARGE_INTEGER v18; // rax
  LARGE_INTEGER v19; // rdx
  LARGE_INTEGER PerformanceCounter; // r12
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  LARGE_INTEGER *v27; // rcx
  __int64 v28; // rdx
  LONG *p_HighPart; // rsi
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  struct tagINPUT_MESSAGE_SOURCE *v32; // rcx
  LONG HighPart; // ecx
  bool v34; // r15
  bool v35; // r13
  DWORD LowPart; // edi
  LONG v37; // esi
  DWORD v38; // ebp
  __int64 UserSessionState; // rax
  struct tagUIPI_INFO *v40; // rax
  __int64 *CurrentThreadWin32Thread; // rax
  DWORD v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx

  v14 = 0LL;
  v17 = a1;
  if ( a2 )
    v18 = *a2;
  else
    v18.QuadPart = 0LL;
  a1[5].QuadPart = a5;
  a1[2] = v18;
  a1[3].LowPart = a3;
  a1[4] = a4;
  LODWORD(a1) = a6;
  if ( !a6 )
    a1 = (LARGE_INTEGER *)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v17[6].LowPart = (unsigned int)a1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v17[20].LowPart = v17[6].LowPart;
  v21 = a3 - 512;
  v17[17] = PerformanceCounter;
  if ( (unsigned int)v21 <= 0xE
    && *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(v21, (LARGE_INTEGER)v19.QuadPart)
                 + 19176)
    && (v46 = *(_QWORD *)(W32GetUserSessionState(v44, v43) + 19176), *(_QWORD *)(v46 + 8))
    && (v23 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v46, v45) + 19176) + 8LL),
        (*(_DWORD *)(v23 + 64) & 1) != 0) )
  {
    v17[6].HighPart = (__int16)a5;
    v17[7].LowPart = SWORD1(a5);
  }
  else
  {
    *(LONGLONG *)((char *)&v17[6].QuadPart + 4) = LogicalCursorPosFromDpiAwarenessContext(a12);
  }
  v17[12].LowPart = a8;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v23, v22);
  v17[9].QuadPart = a9;
  v25 = v17[12].HighPart & 0xFFFFFFFE | (CurrentProcessWow64Process != 0);
  v17[12].HighPart = v25;
  v27 = *(LARGE_INTEGER **)(W32GetUserSessionState(v25, v26) + 19904);
  v17[10] = v27[620];
  p_HighPart = &v17[15].HighPart;
  v17[11] = *(LARGE_INTEGER *)(*(_QWORD *)(W32GetUserSessionState(v27, v28) + 19904) + 4952LL);
  v31 = v17[12].HighPart & 0xFFA7FFFD ^ (2 * a10) & 2 | ((a10 & 0x20 | (2 * (a10 & 0x40 | (2 * (a10 & 4))))) << 15);
  v32 = a11;
  v17[12].HighPart = v31;
  if ( a11 )
  {
    *p_HighPart = *(_DWORD *)a11;
    v17[16].LowPart = *((_DWORD *)a11 + 1);
  }
  else
  {
    SetUnavailableInputSource((char *)&v17[15].QuadPart + 4);
  }
  v17[19].QuadPart = (LONGLONG)a13;
  if ( (a10 & 2) != 0 || v17 != (LARGE_INTEGER *)-124LL && a3 - 512 <= 0xE && (*p_HighPart == 4 || *p_HighPart == 8) )
  {
    v40 = a14;
    if ( !a14 )
    {
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v32);
      if ( CurrentThreadWin32Thread )
        v14 = *CurrentThreadWin32Thread;
      v40 = (struct tagUIPI_INFO *)(*(_QWORD *)(v14 + 456) + 864LL);
    }
    v17[14] = *(LARGE_INTEGER *)v40;
    v42 = *((_DWORD *)v40 + 2);
    v17[12].HighPart |= 0x800u;
    v17[15].LowPart = v42;
  }
  else
  {
    v17[12].HighPart &= ~0x800u;
  }
  HighPart = v17[12].HighPart;
  if ( v17 != (LARGE_INTEGER *)-124LL && a3 - 512 <= 0xE && (*p_HighPart == 4 || *p_HighPart == 8) )
  {
    v31 = 4283520768LL;
    v17[9].QuadPart = (unsigned __int8)a9 | 0xFF515700LL;
    v17[20].LowPart = v17[6].LowPart - ((int)a9 >> 8);
  }
  if ( (HighPart & 8) != 0 && a2 && (a2[47].HighPart & 0x40000000) != 0 )
  {
    v34 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LowPart = v17[7].LowPart;
      v37 = v17[6].HighPart;
      v38 = v17[3].LowPart;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v35,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        18,
        32,
        (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
        v38,
        v37,
        LowPart);
    }
    InputTransform::OnInput((InputTransform *)a2, (struct tagWND *)PerformanceCounter.QuadPart, v30);
  }
  EtwTraceQueueMessage(v17);
}
