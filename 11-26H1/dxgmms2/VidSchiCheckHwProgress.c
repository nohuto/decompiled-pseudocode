/*
 * XREFs of VidSchiCheckHwProgress @ 0x1400C4FC0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 *     VidSchWaitForEvents @ 0x14002FB1C (VidSchWaitForEvents.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1400C4B80 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     VidSchiCheckFlipQueueTimeout @ 0x14000ECF0 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1400268DC (VidSchiNeedToForcePreemptNode.c)
 *     VidSchIsTDRPending @ 0x140035D80 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x140035DA0 (VidSchiCheckTimeoutForced.c)
 *     VidSchiReportHwHang @ 0x140048588 (VidSchiReportHwHang.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchResetFlipQueueTimeout @ 0x14009BCF8 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1400C0650 (VidSchResetGPUTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1400C0880 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1400C1A0C (VidSchiResetEngines.c)
 *     VidSchiCheckNodeTimeout @ 0x1400C5470 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1400EAA60 (VidSchiSubmitPreemptionCommand.c)
 */

__int64 __fastcall VidSchiCheckHwProgress(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  unsigned int v5; // r15d
  LARGE_INTEGER v6; // r8
  unsigned __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 *v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned int i; // edi
  struct _VIDSCH_NODE **v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdi
  int v16; // esi
  _BYTE *v18; // r9
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  char v21; // al
  _BYTE *v22; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp+10h] BYREF
  int v27; // [rsp+90h] [rbp+18h] BYREF
  union _ULARGE_INTEGER v28; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 7068) == 0;
  *a2 = 0;
  if ( v2 )
  {
    v5 = 0;
    PerformanceFrequency.QuadPart = 0LL;
    v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v25 = 0LL;
    if ( is_mul_ok(v6.QuadPart, 0x989680uLL) )
      v7 = (unsigned __int64)v6.QuadPart
         * (unsigned __int128)0x989680uLL
         / (unsigned __int64)PerformanceFrequency.QuadPart;
    else
      v7 = 10000000 * (v6.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
         + 10000000 * (v6.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    if ( *(_BYTE *)(a1 + 3400) && v7 >= *(_QWORD *)(a1 + 3384) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 3344))(*(_QWORD *)(a1 + 16), MEMORY[0xFFFFF78000000320]);
    v8 = 0;
    for ( *a2 = 0; v8 < *(_DWORD *)(a1 + 88); ++v8 )
    {
      v9 = *(__int64 **)(a1 + 696);
      if ( v8 < *(_DWORD *)(a1 + 768) )
        v9 += v8;
      v10 = *v9;
      v11 = *(_QWORD *)(*v9 + 128);
      if ( v11 && v11 <= v7 )
      {
        if ( VidSchiNeedToForcePreemptNode(*v9) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 796));
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 3024));
          VidSchiSubmitPreemptionCommand(v10);
        }
        else
        {
          *a2 = 1;
        }
        *(_QWORD *)(v10 + 128) = 0LL;
      }
    }
    if ( VidSchiCheckTimeoutForced(a1) )
    {
      VidSchiReportHwHang(a1, MEMORY[0xFFFFF78000000320], 1, 0LL);
    }
    else if ( !VidSchIsTDRPending(a1) )
    {
      v28.QuadPart = 0LL;
      for ( i = 0; i < *(_DWORD *)(a1 + 88); ++i )
      {
        v13 = *(struct _VIDSCH_NODE ***)(a1 + 696);
        if ( i < *(_DWORD *)(a1 + 768) )
          v13 += i;
        if ( (unsigned int)VidSchiCheckNodeTimeout(*v13) )
        {
          v14 = *(__int64 **)(a1 + 696);
          if ( i < *(_DWORD *)(a1 + 768) )
            v14 += i;
          v15 = *v14;
          v16 = 0;
          v26 = 0LL;
          if ( *(_DWORD *)(v15 + 2152) )
          {
            LOBYTE(v16) = *(_BYTE *)(v15 + 2145) != 0;
            v16 += 10;
          }
          else if ( !VidSchiPrepareToResetEngine(v15, (__int64 *)&v26) || !VidSchiResetEngines(v15, v26) )
          {
            v16 = 9;
          }
          *(_BYTE *)(v15 + 2145) = 0;
          *(_DWORD *)(v15 + 2148) = 0;
          *(_BYTE *)(v15 + 2146) = 0;
          *(_DWORD *)(v15 + 2152) = 0;
          if ( *(_BYTE *)(v15 + 2156) )
          {
            v18 = (_BYTE *)(a1 + 3285);
            if ( v15 == -2156 )
              goto LABEL_48;
            v19 = 15LL;
            v20 = (_BYTE *)(a1 + 3285);
            do
            {
              if ( v19 == -2147483631 )
                break;
              v21 = v20[v15 - (_QWORD)v18 + 2156];
              if ( !v21 )
                break;
              *v20++ = v21;
              --v19;
            }
            while ( v19 );
            v22 = v20 - 1;
            if ( v19 )
              v22 = v20;
            *v22 = 0;
            if ( !v19 )
LABEL_48:
              *v18 = 0;
            *(_DWORD *)(a1 + 3300) = *(_DWORD *)(v15 + 2172);
            *(_BYTE *)(v15 + 2156) = 0;
            *(_DWORD *)(v15 + 2172) = 0;
          }
          if ( v16 && !VidSchIsTDRPending(a1) && !(unsigned int)VidSchiReportHwHang(a1, v28.QuadPart, v16, v15) )
            VidSchResetGPUTimeout(a1);
          break;
        }
      }
      LODWORD(v25) = 0;
      v27 = 0;
      LODWORD(v26) = 0;
      v24 = 0LL;
      if ( (unsigned int)VidSchiCheckFlipQueueTimeout(
                           (KSPIN_LOCK *)a1,
                           &v27,
                           (unsigned int *)&v26,
                           &v24,
                           &v28,
                           (unsigned int *)&v25) )
      {
        if ( !(unsigned int)VidSchiReportHwHang(a1, v28.QuadPart, 3, (__int64)&v25) )
          VidSchResetFlipQueueTimeout(a1);
      }
    }
    LOBYTE(v5) = !VidSchIsTDRPending(a1);
    return v5;
  }
  else
  {
    *(_BYTE *)(a1 + 3400) = 0;
    return 1LL;
  }
}
