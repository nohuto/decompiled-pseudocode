/*
 * XREFs of RIMGetProductString @ 0x14013FD8C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     wcscmp_0 @ 0x140242E7C (wcscmp_0.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall RIMGetProductString(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        struct _FILE_OBJECT *a3,
        struct RIMDEV *a4)
{
  unsigned int Status; // esi
  void *OutputBuffer; // r12
  PIRP v10; // rax
  __int64 v11; // rdx
  IRP *v12; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v14; // rax
  __int64 v15; // rdx
  __int64 v17; // rax
  size_t Information; // r8
  void *v19; // rcx
  const wchar_t *v20; // r8
  _WORD *v21; // rdx
  unsigned __int64 i; // rax
  __int16 v23; // cx
  char v24; // bl
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v29; // bl
  bool v30; // di
  __int64 UserSessionState; // rax
  int v32; // r8d
  int v33; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  memset(&Event, 0, sizeof(Event));
  Status = -1073741811;
  IoStatusBlock = 0LL;
  OutputBuffer = (void *)Win32AllocPoolZInitImpl(64LL, 0x200uLL, 0x6B707352u);
  if ( OutputBuffer )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v10 = IoBuildDeviceIoControlRequest(0xB01BEu, a2, 0LL, 0, OutputBuffer, 0x200u, 0, &Event, &IoStatusBlock);
    v12 = v10;
    if ( v10 )
    {
      v10->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      Status = IofCallDriver(a2, v12);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      v14 = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        "GetProductString",
        a4,
        (unsigned __int64)(1000 * (v14.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
        Status,
        0);
      if ( Status )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v29 = 0;
        }
        v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
          LOBYTE(v32) = v30;
          LOBYTE(v33) = v29;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v33,
            v32,
            *(_QWORD *)(UserSessionState + 19336),
            3,
            1,
            21,
            (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids,
            Status);
        }
      }
      else if ( IoStatusBlock.Information <= 0x200 )
      {
        v17 = Win32AllocPoolZInitImpl(256LL, IoStatusBlock.Information + 2, 0x77647352u);
        *(_QWORD *)(a1 + 384) = v17;
        if ( v17 )
        {
          *(_WORD *)(v17 + 2 * (IoStatusBlock.Information >> 1)) = 0;
          Information = IoStatusBlock.Information;
          v19 = *(void **)(a1 + 384);
          *(_WORD *)(a1 + 376) = IoStatusBlock.Information;
          *(_WORD *)(a1 + 378) = Information + 2;
          memmove(v19, OutputBuffer, Information);
          v20 = *(const wchar_t **)(a1 + 384);
          if ( v20 )
          {
            v21 = *(_WORD **)(a1 + 384);
            for ( i = (unsigned __int64)*(unsigned __int16 *)(a1 + 378) >> 1; i; --i )
            {
              if ( !*v21 )
                break;
              ++v21;
            }
            if ( i )
              v23 = (*(_WORD *)(a1 + 378) >> 1) - i;
            else
              v23 = 0;
            if ( i )
              *(_WORD *)(a1 + 376) = 2 * v23;
          }
          if ( !wcscmp_0(v20, L"VHidPen") )
            *(_DWORD *)(a1 + 368) |= 0x2000u;
        }
      }
      else
      {
        Status = -1073741811;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 19336),
          3,
          1,
          20,
          (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
      }
    }
    GreDeleteFastMutex((char *)OutputBuffer);
  }
  return Status;
}
