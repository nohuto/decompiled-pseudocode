/*
 * XREFs of ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801663B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?WaitForNextTick@CClockBase@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x180166730 (-WaitForNextTick@CClockBase@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 *     ?GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z @ 0x180166840 (-GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z.c)
 *     ?TranslateWaitResult@CMonitorClock@@IEAA?AW4WaitResult@ICompositorClock@@K@Z @ 0x18018EF90 (-TranslateWaitResult@CMonitorClock@@IEAA-AW4WaitResult@ICompositorClock@@K@Z.c)
 *     McTemplateU0xn_EventWriteTransfer @ 0x180217DA0 (McTemplateU0xn_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMonitorClock::WaitForNextTick(__int64 a1, void *a2)
{
  __int64 v4; // rax
  unsigned int Tick; // ebx
  __int64 v6; // rcx
  int v7; // edx
  int v8; // ecx
  int v9; // r9d
  unsigned __int64 DefaultVBlankDuration; // rax
  LARGE_INTEGER v11; // r8
  LARGE_INTEGER v12; // r9
  unsigned __int64 v13; // r10
  int v14; // r11d
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // si
  int v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  DWORD v21; // r9d
  DWORD v22; // eax
  unsigned int v24; // eax
  __int64 v25; // rcx
  HANDLE Handles; // [rsp+30h] [rbp-48h] BYREF
  __int64 v27; // [rsp+38h] [rbp-40h]
  int v28; // [rsp+40h] [rbp-38h]
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+8h] BYREF
  __int64 v30; // [rsp+90h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) + 32LL))(*(_QWORD *)(a1 + 96) + 8LL);
  Tick = 0;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)v4;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(v4 + 16);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(v4 + 24);
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v6 = *(_QWORD *)(a1 + 96);
  Handles = 0LL;
  v27 = 0LL;
  v28 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, HANDLE *, _QWORD))(*(_QWORD *)v6 + 216LL))(
         v6,
         a1 + 104,
         &Handles,
         0LL) )
  {
    DefaultVBlankDuration = *(_QWORD *)(a1 + 112);
  }
  else
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_DWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 112) = 0LL;
    DefaultVBlankDuration = CScheduler::GetDefaultVBlankDuration(*(const struct IMonitorTarget **)(a1 + 96));
  }
  *(_QWORD *)(a1 + 24) = DefaultVBlankDuration;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0xn_EventWriteTransfer(v8, v7, DefaultVBlankDuration, v9, a1 + 56);
  v11 = *(LARGE_INTEGER *)(a1 + 104);
  if ( !v11.QuadPart )
    goto LABEL_31;
  v12 = *(LARGE_INTEGER *)(a1 + 40);
  v30 = 0LL;
  if ( *(_BYTE *)(a1 + 88) )
    v12.QuadPart -= *(_QWORD *)(a1 + 24);
  if ( PerformanceCount.QuadPart >= (unsigned __int64)v12.QuadPart )
  {
    v16 = 0LL;
    v17 = 0;
  }
  else
  {
    if ( v11.QuadPart < (unsigned __int64)PerformanceCount.QuadPart
      && (unsigned int)((PerformanceCount.QuadPart - v11.QuadPart) / *(_QWORD *)(a1 + 112)) > 3 )
    {
      v16 = 0LL;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 112);
      v14 = *(_DWORD *)(a1 + 120);
      v15 = v12.QuadPart + (v13 >> 1);
      if ( v15 < v11.QuadPart )
        v16 = v14 - (unsigned int)((v11.QuadPart - v15) / v13) - 1;
      else
        v16 = v14 + (unsigned int)((v15 - v11.QuadPart) / v13);
    }
    v17 = 1;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 96) + 208LL))(
          *(_QWORD *)(a1 + 96),
          v16,
          &v30);
  if ( v18 < 0 )
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 96) + 200LL))(*(_QWORD *)(a1 + 96), a2);
    Tick = CMonitorClock::TranslateWaitResult(v25, v24);
    goto LABEL_27;
  }
  if ( v18 == 142213121 )
  {
LABEL_31:
    Tick = CClockBase::WaitForNextTick(a1, a2);
    goto LABEL_28;
  }
  if ( v17 )
  {
    v27 = v30;
    Handles = a2;
    if ( g_pComposition )
    {
      if ( *((_BYTE *)g_pComposition + 6465) )
      {
        v19 = *((_DWORD *)g_pComposition + 1612);
        if ( v19 )
        {
          if ( v19 != -1 )
          {
            v20 = 4LL;
            if ( v19 != 1 )
              goto LABEL_23;
            v21 = 1000;
LABEL_25:
            v22 = WaitForMultipleObjects(2u, &Handles, 0, v21);
            if ( v22 == 1 )
            {
              Tick = 1;
            }
            else if ( v22 )
            {
              if ( v22 == 258 )
                Tick = 4;
            }
            else
            {
              Tick = 3;
            }
LABEL_27:
            if ( Tick )
              goto LABEL_28;
            goto LABEL_31;
          }
LABEL_46:
          v20 = 1LL;
          goto LABEL_23;
        }
      }
      if ( g_pComposition )
      {
        if ( *((_BYTE *)g_pComposition + 6465) )
        {
          v20 = 4LL;
          if ( *((_DWORD *)g_pComposition + 1613) )
          {
LABEL_23:
            v21 = 80;
            if ( (unsigned int)((unsigned __int64)(1000 * *(_QWORD *)(a1 + 24) * v20) / g_qpcFrequency.QuadPart) < 0x50 )
              v21 = (unsigned __int64)(1000 * *(_QWORD *)(a1 + 24) * v20) / g_qpcFrequency.QuadPart;
            goto LABEL_25;
          }
        }
      }
    }
    if ( !GetSystemMetrics(0x2000) )
    {
      v21 = CScheduler::s_vBlankWaitTimeoutMonitorOffMs;
      goto LABEL_25;
    }
    goto LABEL_46;
  }
  Tick = 2;
  WaitForSingleObject(a2, 0);
LABEL_28:
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0t_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &WaitForVerticalBlank_Stop, Tick);
  return Tick;
}
