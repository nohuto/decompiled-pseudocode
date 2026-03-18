/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1401B6B48
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x140162EB0 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z @ 0x14012E480 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z.c)
 *     IsEditionComputeInjectorUIPISupported @ 0x1401639A8 (IsEditionComputeInjectorUIPISupported.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x14017C054 (ApiSetEditionInitiateMouseEventProcessing.c)
 */

char __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  struct W32_PUSH_LOCK *v2; // r14
  char v5; // di
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  char v9; // si
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char *v14; // rbx
  __int64 v15; // rcx
  __int128 v16; // xmm6
  char v17; // bp
  unsigned int v18; // esi
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // esi
  BOOL v26; // eax
  __int64 v27; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v29; // eax
  __int128 v31; // [rsp+40h] [rbp-48h]
  int v32; // [rsp+50h] [rbp-38h]

  v2 = (CMouseProcessor *)((char *)this + 3008);
  v5 = 0;
  W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3008));
  if ( *((_WORD *)this + 1501) )
  {
    v6 = CMouseProcessor::CMouseQueue::GetItemForWrite((__int64)this + 56, 0);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 176) = a2;
      v5 = 1;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v9 = 0;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 69136),
          3,
          6,
          17,
          (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
      }
    }
  }
  v14 = (char *)this + 56;
  W32ReleasePushLockExclusiveEx(v2);
  if ( !v5 )
  {
    v16 = 0LL;
    v17 = 0;
    v18 = 0;
    if ( (int)IsEditionComputeInjectorUIPISupported(v15) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
      v22 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v21 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v22 = v21 & CurrentProcessWin32Process;
      }
      *(_QWORD *)&v31 = *(_QWORD *)(v22 + 864);
      DWORD2(v31) = *(_DWORD *)(v22 + 872);
      v23 = PsGetCurrentProcessWin32Process(v21);
      v24 = v23;
      if ( v23 )
        v24 = -(__int64)(*(_QWORD *)v23 != 0LL) & v23;
      v25 = *(_DWORD *)(v24 + 12);
      v17 = 1;
      v26 = v25 < 0;
      v18 = (unsigned int)v25 >> 31;
      HIDWORD(v31) = v26;
      v16 = v31;
    }
    W32AcquirePushLockExclusiveEx(v2);
    v27 = CMouseProcessor::CMouseQueue::GetItemForWrite((__int64)v14, 1);
    if ( v27 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)(v27 + 52) = 0LL;
      *(LARGE_INTEGER *)(v27 + 96) = PerformanceCounter;
      v29 = 2;
      *(_DWORD *)(v27 + 112) = 2;
      if ( v17 && v18 )
        v29 = 1;
      *(_DWORD *)(v27 + 116) = v29;
      *(_DWORD *)(v27 + 120) = 32896;
      if ( v17 )
      {
        LOBYTE(v32) = 1;
        *(_OWORD *)(v27 + 124) = v16;
        *(_DWORD *)(v27 + 140) = v32;
      }
      *(_QWORD *)(v27 + 176) = a2;
      v5 = 1;
    }
    W32ReleasePushLockExclusiveEx(v2);
    if ( v5 )
      ApiSetEditionInitiateMouseEventProcessing(0LL, 1u);
  }
  return v5;
}
