/*
 * XREFs of ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140119D60
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _PostThreadMessageEx @ 0x1401AAC9C (_PostThreadMessageEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     DoTimer @ 0x1402463F0 (DoTimer.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x14011A154 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x14011AB60 (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
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
  int v14; // ebp
  LARGE_INTEGER *v17; // rbx
  LARGE_INTEGER v18; // rax
  LARGE_INTEGER v19; // rdx
  LARGE_INTEGER PerformanceCounter; // r12
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  LARGE_INTEGER *v26; // rcx
  __int64 v27; // rdx
  LONG *p_HighPart; // rsi
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  struct tagINPUT_MESSAGE_SOURCE *v31; // rcx
  LONG HighPart; // ecx
  bool v33; // r15
  bool v34; // r13
  DWORD LowPart; // edi
  LONG v36; // esi
  DWORD v37; // ebp
  __int64 UserSessionState; // rax
  struct tagUIPI_INFO *v39; // rax
  DWORD v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *v45; // rax

  v14 = 0;
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
                 + 19144)
    && (v44 = *(_QWORD *)(W32GetUserSessionState(v42, v41) + 19144), *(_QWORD *)(v44 + 8))
    && (v45 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v44, v43) + 19144) + 8LL),
        v23 = *v45,
        (*(_DWORD *)(*v45 + 64) & 1) != 0) )
  {
    v17[6].HighPart = (__int16)a5;
    v17[7].LowPart = SWORD1(a5);
  }
  else
  {
    *(LONGLONG *)((char *)&v17[6].QuadPart + 4) = LogicalCursorPosFromDpiAwarenessContext(a12);
  }
  v17[12].LowPart = a8;
  LOBYTE(v14) = PsGetCurrentProcessWow64Process(v23, v22) != 0;
  v17[12].HighPart = v17[12].HighPart & 0xFFFFFFFE | v14;
  v17[9].QuadPart = a9;
  v26 = *(LARGE_INTEGER **)(W32GetUserSessionState(v25, v24) + 19872);
  v17[10] = v26[620];
  p_HighPart = &v17[15].HighPart;
  v17[11] = *(LARGE_INTEGER *)(*(_QWORD *)(W32GetUserSessionState(v26, v27) + 19872) + 4952LL);
  v30 = v17[12].HighPart & 0xFFA7FFFD ^ (2 * a10) & 2 | ((a10 & 0x20 | (2 * (a10 & 0x40 | (2 * (a10 & 4))))) << 15);
  v31 = a11;
  v17[12].HighPart = v30;
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
  if ( (a10 & 2) == 0 && (v17 == (LARGE_INTEGER *)-124LL || a3 - 512 > 0xE || ((*p_HighPart - 4) & 0xFFFFFFFB) != 0) )
  {
    v17[12].HighPart &= ~0x800u;
  }
  else
  {
    v39 = a14;
    if ( !a14 )
      v39 = (struct tagUIPI_INFO *)(*((_QWORD *)PtiCurrent((__int64)v31, v30) + 58) + 864LL);
    v17[14] = *(LARGE_INTEGER *)v39;
    v40 = *((_DWORD *)v39 + 2);
    v17[12].HighPart |= 0x800u;
    v17[15].LowPart = v40;
  }
  HighPart = v17[12].HighPart;
  if ( v17 != (LARGE_INTEGER *)-124LL && a3 - 512 <= 0xE && ((*p_HighPart - 4) & 0xFFFFFFFB) == 0 )
  {
    v30 = 4283520768LL;
    v17[9].QuadPart = (unsigned __int8)a9 | 0xFF515700LL;
    v17[20].LowPart = v17[6].LowPart - ((int)a9 >> 8);
  }
  if ( (HighPart & 8) != 0 && a2 && (a2[47].HighPart & 0x40000000) != 0 )
  {
    v33 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LowPart = v17[7].LowPart;
      v36 = v17[6].HighPart;
      v37 = v17[3].LowPart;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v30);
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v33,
        v34,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        18,
        32,
        (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
        v37,
        v36,
        LowPart);
    }
    InputTransform::OnInput((InputTransform *)a2, (struct tagWND *)PerformanceCounter.QuadPart, v29);
  }
  EtwTraceQueueMessage(v17);
}
