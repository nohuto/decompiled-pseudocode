/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x14003B56C
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x14003B530 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsEditionComputeInjectorUIPISupported @ 0x14012C0D4 (IsEditionComputeInjectorUIPISupported.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z @ 0x140190004 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x140195A04 (ApiSetEditionInitiateMouseEventProcessing.c)
 */

char __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  struct W32_PUSH_LOCK *v2; // rbx
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // di
  bool v9; // bp
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int128 v13; // xmm6
  char v14; // r14
  unsigned int v15; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // ebp
  BOOL v21; // eax
  __int64 v22; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  int v24; // eax
  __int128 v26; // [rsp+40h] [rbp-58h]
  int v27; // [rsp+50h] [rbp-48h]

  v2 = (CMouseProcessor *)((char *)this + 3008);
  v5 = 0;
  W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3008), 0);
  if ( *((_WORD *)this + 1501) )
  {
    v6 = CMouseProcessor::CMouseQueue::GetItemForWrite((char *)this + 56, 0LL);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 176) = a2;
      v5 = 1;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v8 = 0;
      }
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v8;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v12,
          v11,
          *(_QWORD *)(UserSessionState + 69144),
          3,
          6,
          17,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
      }
    }
  }
  W32ReleasePushLockExclusiveEx(v2, 0);
  if ( !v5 )
  {
    v13 = 0LL;
    v14 = 0;
    v15 = 0;
    if ( (int)IsEditionComputeInjectorUIPISupported() >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      v17 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v17 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      *(_QWORD *)&v26 = *(_QWORD *)(v17 + 864);
      DWORD2(v26) = *(_DWORD *)(v17 + 872);
      v18 = PsGetCurrentProcessWin32Process();
      v19 = v18;
      if ( v18 )
        v19 = -(__int64)(*(_QWORD *)v18 != 0LL) & v18;
      v20 = *(_DWORD *)(v19 + 12);
      v14 = 1;
      v21 = v20 < 0;
      v15 = (unsigned int)v20 >> 31;
      HIDWORD(v26) = v21;
      v13 = v26;
    }
    W32AcquirePushLockExclusiveEx(v2, 0);
    v22 = CMouseProcessor::CMouseQueue::GetItemForWrite((char *)this + 56, 1LL);
    if ( v22 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)(v22 + 52) = 0LL;
      *(LARGE_INTEGER *)(v22 + 96) = PerformanceCounter;
      v24 = 2;
      *(_DWORD *)(v22 + 112) = 2;
      if ( v14 && v15 )
        v24 = 1;
      *(_DWORD *)(v22 + 116) = v24;
      *(_DWORD *)(v22 + 120) = 32896;
      if ( v14 )
      {
        LOBYTE(v27) = 1;
        *(_OWORD *)(v22 + 124) = v13;
        *(_DWORD *)(v22 + 140) = v27;
      }
      *(_QWORD *)(v22 + 176) = a2;
      v5 = 1;
    }
    W32ReleasePushLockExclusiveEx(v2, 0);
    if ( v5 )
      ApiSetEditionInitiateMouseEventProcessing(0LL, 1LL);
  }
  return v5;
}
