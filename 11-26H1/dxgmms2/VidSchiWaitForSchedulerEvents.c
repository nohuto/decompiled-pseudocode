/*
 * XREFs of VidSchiWaitForSchedulerEvents @ 0x1400C4B80
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiAcceptsIncomingWork @ 0x140004660 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIsFlipQueueBusy @ 0x140030220 (VidSchiIsFlipQueueBusy.c)
 *     VidSchIsTDRPending @ 0x140035D80 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     VidSchiCheckHwProgress @ 0x1400C4FC0 (VidSchiCheckHwProgress.c)
 *     VidSchiHandleControlEvent @ 0x1400C577C (VidSchiHandleControlEvent.c)
 */

__int64 __fastcall VidSchiWaitForSchedulerEvents(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // r14d
  PRKEVENT v4; // rsi
  int v6; // eax
  char v7; // di
  char IsFlipQueueBusy; // r14
  union _LARGE_INTEGER *Timeout; // r8
  ULONG v10; // r10d
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  PRKEVENT v14; // rcx
  unsigned int v15; // eax
  LARGE_INTEGER v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned int v19; // r10d
  unsigned int i; // ecx
  __int64 *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r8
  char v25[8]; // [rsp+40h] [rbp-29h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-19h] BYREF
  PRKEVENT Event[4]; // [rsp+58h] [rbp-11h]
  PVOID Object[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v30; // [rsp+88h] [rbp+1Fh]

  Event[1] = (PRKEVENT)(a1 + 1464);
  Event[0] = (PRKEVENT)(a1 + 1520);
  Event[2] = (PRKEVENT)(a1 + 1632);
  while ( 1 )
  {
    v2 = 0;
    v3 = VidSchiAcceptsIncomingWork(a1) + 1;
    while ( v2 < v3 )
    {
      v4 = Event[v2];
      *(_QWORD *)&v4[2].Header.Lock = MEMORY[0xFFFFF78000000320];
      if ( KeReadStateEvent(v4) )
      {
        v4[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
        KeResetEvent(v4);
        goto LABEL_6;
      }
      ++v2;
    }
    if ( v2 == v3 )
    {
      VidSchiProfilePerformanceTick(14LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
LABEL_13:
      if ( (*(_DWORD *)(a1 + 2824) & 2) != 0 )
        ExReleaseResourceLite((PERESOURCE)(a1 + 1152));
      while ( 1 )
      {
        v6 = *(_DWORD *)(a1 + 792);
        v27 = 0LL;
        if ( v6 || *(_DWORD *)(a1 + 76) || (v7 = 0, *(_DWORD *)(a1 + 80)) )
          v7 = 1;
        IsFlipQueueBusy = VidSchiIsFlipQueueBusy(a1);
        if ( !VidSchiAcceptsIncomingWork(a1) )
          break;
        PerformanceFrequency.QuadPart = 0LL;
        v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( is_mul_ok(v16.QuadPart, 0x989680uLL) )
          v17 = (unsigned __int64)v16.QuadPart
              * (unsigned __int128)0x989680uLL
              / (unsigned __int64)PerformanceFrequency.QuadPart;
        else
          v17 = 10000000 * (v16.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
              + 10000000
              * (v16.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
              / PerformanceFrequency.QuadPart;
        v18 = -1LL;
        if ( *(_BYTE *)(a1 + 3400) )
          v18 = *(_QWORD *)(a1 + 3384);
        v19 = *(_DWORD *)(a1 + 88);
        for ( i = 0; i < v19; ++i )
        {
          if ( i >= *(_DWORD *)(a1 + 768) )
            v21 = *(__int64 **)(a1 + 696);
          else
            v21 = (__int64 *)(*(_QWORD *)(a1 + 696) + 8LL * i);
          v22 = *v21;
          v23 = *(_QWORD *)(v22 + 128);
          if ( v23 && v18 >= v23 )
            v18 = *(_QWORD *)(v22 + 128);
        }
        if ( (v7 || IsFlipQueueBusy) && v18 >= v17 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1) )
          v18 = v17 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
        if ( v18 != -1LL )
        {
          if ( v18 <= v17 )
            v24 = 0LL;
          else
            v24 = v17 - v18;
          v27 = v24;
          v10 = 3;
          Timeout = (union _LARGE_INTEGER *)&v27;
          goto LABEL_19;
        }
        Timeout = 0LL;
        *(_BYTE *)(a1 + 780) = 1;
        v10 = 3;
LABEL_20:
        v11 = v10;
        *(_OWORD *)Object = 0LL;
        v12 = 0LL;
        v30 = 0LL;
        v13 = MEMORY[0xFFFFF78000000320];
        do
        {
          v14 = Event[v12++];
          *(_QWORD *)&v14[1].Header.Lock = v13;
          Event[v12 + 3] = v14;
          --v11;
        }
        while ( v11 );
        v15 = KeWaitForMultipleObjects(v10, Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
        *(_BYTE *)(a1 + 780) = 0;
        v2 = v15;
        if ( v15 <= 1 || v15 == 258 )
        {
          if ( (*(_DWORD *)(a1 + 2824) & 2) != 0 )
            ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1152), 1u);
          v25[0] = 0;
          if ( v2 == 258 && (unsigned int)VidSchiCheckHwProgress(a1, v25) )
          {
            if ( v25[0] )
            {
              v2 = 1;
              goto LABEL_29;
            }
            goto LABEL_13;
          }
LABEL_29:
          VidSchiProfilePerformanceTick(15LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_6;
        }
      }
      Timeout = 0LL;
      v10 = 1;
LABEL_19:
      *(_BYTE *)(a1 + 780) = 0;
      goto LABEL_20;
    }
LABEL_6:
    if ( v2 )
      break;
    VidSchiHandleControlEvent(a1);
    if ( VidSchIsTDRPending(a1) )
      return 258LL;
  }
  if ( VidSchIsTDRPending(a1) )
    return 258;
  return v2;
}
