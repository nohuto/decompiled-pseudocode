/*
 * XREFs of RIMAddToActiveDevices @ 0x1401317B0
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1400FA16C (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x140131A10 (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x140131C9C (ApiSetPostPointerDeviceInRangeMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMAddToActiveDevices(struct RawInputManagerObject *a1, __int64 a2)
{
  char *v2; // r14
  char *v3; // rdi
  unsigned int v4; // ebp
  char *v7; // rsi
  int v8; // edx
  _QWORD *v9; // rsi
  int v10; // r8d
  __int64 v11; // r12
  char v12; // di
  bool v13; // bp
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  char *v17; // rax
  char **v18; // rcx
  void *v19; // rcx
  char *v21; // rax
  int v22; // eax
  union _LARGE_INTEGER DueTime; // [rsp+80h] [rbp+8h] BYREF

  v2 = (char *)a1 + 448;
  v3 = (char *)*((_QWORD *)a1 + 56);
  v4 = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION((__int64)a1, a2) )
    ApiSetPostPointerDeviceInRangeMessage(a2);
  else
    rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(a1);
  do
  {
    v7 = v3;
    if ( v3 == v2 )
    {
      v9 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x78707352u);
      if ( v9 )
      {
        v11 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(v11 + 172) |= 0x10u;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v12 = 0;
        }
        v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v10);
          LOBYTE(v15) = v13;
          LOBYTE(v16) = v12;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v16,
            v15,
            *(_QWORD *)(UserSessionState + 19368),
            4,
            1,
            40,
            (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids,
            v11);
        }
        *v9 = a2;
        v17 = (char *)(v9 + 1);
        v18 = (char **)*((_QWORD *)v2 + 1);
        if ( *v18 != v2 )
          __fastfail(3u);
        *(_QWORD *)v17 = v2;
        v4 = 1;
        v9[2] = v18;
        *v18 = v17;
        *((_QWORD *)v2 + 1) = v17;
        if ( *((_DWORD *)a1 + 116) == -1 )
        {
          DueTime.LowPart = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3280LL);
        }
        if ( ++*((_DWORD *)a1 + 116) == 1 )
        {
          v19 = (void *)*((_QWORD *)a1 + 42);
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v19, &DueTime, 0LL, 0LL, 0, 0, 0LL);
        }
      }
      return v4;
    }
    v21 = v3 - 8;
    v3 = *(char **)v3;
  }
  while ( *(_QWORD *)v21 != a2 );
  if ( (*((_DWORD *)v7 + 4) & 2) != 0 )
  {
    DueTime.LowPart = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3253LL);
  }
  v22 = *((_DWORD *)v7 + 4);
  if ( (v22 & 1) != 0 )
    *((_DWORD *)v7 + 4) = v22 & 0xFFFFFFFE;
  return 1;
}
