/*
 * XREFs of RIMGetProductString @ 0x14012FEDC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     wcscmp_0 @ 0x14024BC0C (wcscmp_0.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
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
  ULONG_PTR Information; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  IRP *v14; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v16; // rax
  __int64 v17; // rax
  size_t v18; // r8
  void *v19; // rcx
  const wchar_t *v20; // r8
  _WORD *v21; // rdx
  unsigned __int64 i; // rax
  __int16 v23; // cx
  char v25; // bl
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v30; // bl
  bool v31; // di
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
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
    v14 = v10;
    if ( v10 )
    {
      v10->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      Status = IofCallDriver(a2, v14);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      v16 = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        "GetProductString",
        a4,
        (unsigned __int64)(1000 * (v16.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
        Status,
        0);
      if ( Status )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v30 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, Information, v12);
          LOBYTE(v33) = v31;
          LOBYTE(v34) = v30;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v34,
            v33,
            *(_QWORD *)(UserSessionState + 19368),
            3,
            1,
            21,
            (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids,
            Status);
        }
      }
      else
      {
        Information = IoStatusBlock.Information;
        if ( IoStatusBlock.Information > 0x200 )
        {
          Status = -1073741811;
        }
        else
        {
          v17 = Win32AllocPoolZInitImpl(256LL, IoStatusBlock.Information + 2, 0x77647352u);
          *(_QWORD *)(a1 + 384) = v17;
          if ( v17 )
          {
            *(_WORD *)(v17 + 2 * (IoStatusBlock.Information >> 1)) = 0;
            v18 = IoStatusBlock.Information;
            v19 = *(void **)(a1 + 384);
            *(_WORD *)(a1 + 376) = IoStatusBlock.Information;
            *(_WORD *)(a1 + 378) = v18 + 2;
            memmove(v19, OutputBuffer, v18);
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
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v25 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, Information, v12);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v25;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(v27 + 19368),
          3,
          1,
          20,
          (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
      }
    }
    GreDeleteFastMutex((char *)OutputBuffer, Information, v12, v13);
  }
  return Status;
}
