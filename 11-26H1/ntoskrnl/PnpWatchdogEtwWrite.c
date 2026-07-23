/*
 * XREFs of PnpWatchdogEtwWrite @ 0x1404995A0
 * Callers:
 *     PnpWatchdogSecondChanceCallback @ 0x1405DC5D0 (PnpWatchdogSecondChanceCallback.c)
 *     PnpWatchdogFirstChanceCallback @ 0x1407A6400 (PnpWatchdogFirstChanceCallback.c)
 *     PnpCancelWatchdog @ 0x140A1B180 (PnpCancelWatchdog.c)
 * Callees:
 *     McTemplateK0izzx_EtwWriteTransfer @ 0x140499910 (McTemplateK0izzx_EtwWriteTransfer.c)
 *     McTemplateK0izzxqjddjz_EtwWriteTransfer @ 0x140499A04 (McTemplateK0izzxqjddjz_EtwWriteTransfer.c)
 *     PnpTraceWatchdogViolation @ 0x1405324D8 (PnpTraceWatchdogViolation.c)
 */

__int64 __fastcall PnpWatchdogEtwWrite(__int64 *a1, int a2)
{
  __int64 v2; // r8
  unsigned __int128 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // r8
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // r11
  __int64 result; // rax
  __int16 *v13; // r9
  _QWORD *v14; // r10
  __int64 v15; // r11
  int v16; // ecx
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbx
  int v21; // ecx
  __int64 v22; // rax
  _QWORD v23[2]; // [rsp+70h] [rbp-18h] BYREF

  v2 = *a1;
  v23[1] = &SourceString;
  v23[0] = 0x20000LL;
  v5 = (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v2) * (unsigned __int128)0x346DC5D63886594BuLL;
  v6 = 0LL;
  v7 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
  v8 = *((_DWORD *)a1 + 4) - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v21 = v10 - 1;
        if ( v21 )
        {
          if ( v21 != 1 )
            goto LABEL_34;
          v11 = *(_QWORD *)(a1[3] + 16);
        }
        else
        {
          v22 = a1[3];
          v11 = *(_QWORD *)(v22 + 24);
          v6 = *(_QWORD *)(v22 + 8);
        }
      }
      else
      {
        v11 = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
        v6 = *(_QWORD *)a1[3];
      }
    }
    else
    {
      v11 = *(_QWORD *)&PnpDeviceActionThread;
      v6 = *(_QWORD *)(a1[3] + 16);
    }
  }
  else
  {
    v11 = *(_QWORD *)&PnpDeviceEventThread;
    v18 = *(_QWORD *)(a1[3] + 8);
    if ( v18 )
      v6 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
  }
  result = (__int64)(a1 + 5);
  v13 = &PnpEmptyUnicodeString;
  if ( *((_WORD *)a1 + 20) )
    v13 = (__int16 *)(a1 + 5);
  if ( v6 )
    v14 = (_QWORD *)(v6 + 40);
  else
    v14 = v23;
  if ( v11 )
  {
    v15 = *(_QWORD *)(v11 + 1296);
  }
  else
  {
    result = (__int64)KeGetCurrentThread();
    v15 = *(_QWORD *)(result + 1296);
  }
  if ( !a2 )
  {
    if ( *((_DWORD *)a1 + 4) == 1 )
    {
      v19 = a1[3];
      if ( byte_140EF412B < 0 )
        return McTemplateK0izzxqjddjz_EtwWriteTransfer(
                 (int)v19 + 44,
                 (unsigned int)KMPnPEvt_Watchdog_EventWorker_Start,
                 v7,
                 v15,
                 v14[1],
                 *((_QWORD *)v13 + 1),
                 v7,
                 *(_DWORD *)(v19 + 20),
                 v19 + 28,
                 *(_DWORD *)(v19 + 16),
                 *(_DWORD *)(v19 + 24),
                 v19 + 44,
                 *(_QWORD *)(v19 + 72));
      return result;
    }
    v16 = *((_DWORD *)a1 + 4) - 2;
    if ( *((_DWORD *)a1 + 4) == 2 )
    {
      if ( byte_140EF412B >= 0 )
        return result;
      v17 = KMPnPEvt_Watchdog_CompletionQueue_Start;
    }
    else
    {
      v16 = *((_DWORD *)a1 + 4) - 3;
      if ( *((_DWORD *)a1 + 4) == 3 )
      {
        if ( byte_140EF412B >= 0 )
          return result;
        v17 = KMPnPEvt_Watchdog_DelayedRemoveWorker_Start;
      }
      else
      {
        v16 = *((_DWORD *)a1 + 4) - 4;
        if ( *((_DWORD *)a1 + 4) != 4 )
        {
          if ( *((_DWORD *)a1 + 4) == 5 )
          {
            if ( byte_140EF412B >= 0 )
              return result;
            v17 = KMPnPEvt_Watchdog_DriverEntry_Start;
            return McTemplateK0izzx_EtwWriteTransfer(v16, (_DWORD)v17, v7, v15, v14[1], *((_QWORD *)v13 + 1), v7);
          }
          goto LABEL_34;
        }
        if ( byte_140EF412B >= 0 )
          return result;
        v17 = KMPnPEvt_Watchdog_AddDevice_Start;
      }
    }
    return McTemplateK0izzx_EtwWriteTransfer(v16, (_DWORD)v17, v7, v15, v14[1], *((_QWORD *)v13 + 1), v7);
  }
  if ( a2 == 1 )
  {
    if ( *((_DWORD *)a1 + 4) == 1 )
    {
      v20 = a1[3];
      if ( (byte_140EF412C & 1) != 0 )
        return McTemplateK0izzxqjddjz_EtwWriteTransfer(
                 (int)v20 + 44,
                 (unsigned int)KMPnPEvt_Watchdog_EventWorker_Stop,
                 v7,
                 v15,
                 v14[1],
                 *((_QWORD *)v13 + 1),
                 v7,
                 *(_DWORD *)(v20 + 20),
                 v20 + 28,
                 *(_DWORD *)(v20 + 16),
                 *(_DWORD *)(v20 + 24),
                 v20 + 44,
                 *(_QWORD *)(v20 + 72));
    }
    else
    {
      v16 = *((_DWORD *)a1 + 4) - 2;
      if ( *((_DWORD *)a1 + 4) == 2 )
      {
        if ( (byte_140EF412C & 1) != 0 )
        {
          v17 = KMPnPEvt_Watchdog_CompletionQueue_Stop;
          return McTemplateK0izzx_EtwWriteTransfer(v16, (_DWORD)v17, v7, v15, v14[1], *((_QWORD *)v13 + 1), v7);
        }
      }
      else
      {
        v16 = *((_DWORD *)a1 + 4) - 3;
        if ( *((_DWORD *)a1 + 4) == 3 )
        {
          if ( (byte_140EF412C & 1) != 0 )
          {
            v17 = KMPnPEvt_Watchdog_DelayedRemoveWorker_Stop;
            return McTemplateK0izzx_EtwWriteTransfer(v16, (_DWORD)v17, v7, v15, v14[1], *((_QWORD *)v13 + 1), v7);
          }
        }
        else
        {
          v16 = *((_DWORD *)a1 + 4) - 4;
          if ( *((_DWORD *)a1 + 4) != 4 )
          {
            if ( *((_DWORD *)a1 + 4) == 5 )
            {
              if ( (byte_140EF412C & 1) == 0 )
                return result;
              v17 = KMPnPEvt_Watchdog_DriverEntry_Stop;
              return McTemplateK0izzx_EtwWriteTransfer(v16, (_DWORD)v17, v7, v15, v14[1], *((_QWORD *)v13 + 1), v7);
            }
LABEL_34:
            __fastfail(5u);
          }
          if ( (byte_140EF412C & 1) != 0 )
          {
            v17 = KMPnPEvt_Watchdog_AddDevice_Stop;
            return McTemplateK0izzx_EtwWriteTransfer(v16, (_DWORD)v17, v7, v15, v14[1], *((_QWORD *)v13 + 1), v7);
          }
        }
      }
    }
  }
  else
  {
    result = (unsigned int)(a2 - 2);
    if ( (unsigned int)result <= 1 )
    {
      BYTE8(v5) = a2 == 2;
      result = PnpTraceWatchdogViolation(*((_DWORD *)a1 + 4), DWORD2(v5), v7, (_DWORD)v14, (__int64)v13);
      *((_BYTE *)a1 + 33) = 1;
    }
  }
  return result;
}
