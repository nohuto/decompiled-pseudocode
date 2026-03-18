/*
 * XREFs of ?PostHidInput_old@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x140274A2C
 * Callers:
 *     xxxProcessHidInput @ 0x1400388A0 (xxxProcessHidInput.c)
 * Callees:
 *     FreeHidData @ 0x1400C7E10 (FreeHidData.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     AllocateHidData @ 0x140120CE4 (AllocateHidData.c)
 *     ?DeliverRawInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@QEAUtagHIDDATA@@_N@Z @ 0x14012AF54 (-DeliverRawInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@QEAUtagHIDDATA@@_N@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall PostHidInput_old(
        struct DEVICEINFO *a1,
        void *a2,
        unsigned int a3,
        struct tagQ *a4,
        LARGE_INTEGER *a5,
        unsigned __int64 a6)
{
  size_t v7; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rdx
  int v11; // r14d
  bool v12; // bl
  bool v13; // di
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r9
  _DWORD *HidData; // rax
  __int64 v19; // rdx
  struct tagHIDDATA *v20; // rdi
  char v21; // bl
  int v22; // r9d
  __int64 v23; // rdx
  bool v24; // si
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  __int16 v28; // [rsp+30h] [rbp-78h]

  v7 = a3;
  v9 = *(unsigned __int16 *)(*((_QWORD *)a1 + 55) + 44LL);
  v10 = a3 % v9;
  v11 = a3 / v9;
  if ( (_DWORD)v10 )
  {
    v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v12 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10) + 69160);
    v28 = 11;
    goto LABEL_19;
  }
  if ( !v11 )
  {
    v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v12 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, (unsigned int)v10) + 69160);
    v28 = 12;
    goto LABEL_19;
  }
  if ( a3 >= 0xFFFFFFF8 )
    return 0LL;
  HidData = (_DWORD *)AllocateHidData(*(void **)a1, 2, a3 + 8, a6, (__int64)a5);
  v20 = (struct tagHIDDATA *)HidData;
  if ( !HidData )
  {
    v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v12 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19) + 69160);
    v28 = 13;
LABEL_19:
    LOBYTE(v15) = v13;
    LOBYTE(v14) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v15,
      v16,
      3,
      20,
      v28,
      (__int64)&WPP_7d973857189131ac5c90dd1780fc8b06_Traceguids);
    return 0LL;
  }
  HidData[20] = v9;
  HidData[21] = v11;
  memmove(HidData + 22, a2, v7);
  v21 = 1;
  InputTraceLogging::RIM::DeliverRawInput(a1, v20, a6 == 1, v22);
  if ( !(unsigned int)PostInputMessage(a4, a5, 0xFFu, a6, *(_QWORD *)v20, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, 0, 0, 0LL) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v21 = 0;
    }
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v21;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(UserSessionState + 69160),
        3,
        20,
        14,
        (__int64)&WPP_7d973857189131ac5c90dd1780fc8b06_Traceguids,
        a6,
        (char)a4);
    }
    FreeHidData((__int64)v20);
    return 0LL;
  }
  return 1LL;
}
