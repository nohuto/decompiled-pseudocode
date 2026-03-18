/*
 * XREFs of DoTimer @ 0x1402463F0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1401196C0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140119D60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x14028BB5C (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14028BBF4 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DoTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v6; // rbp
  LARGE_INTEGER *v7; // rbx
  LARGE_INTEGER v8; // rax
  int v9; // eax
  DWORD HighPart; // eax
  LARGE_INTEGER *v12; // r10
  LARGE_INTEGER *QuadPart; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  DWORD v18; // r8d
  __int64 v19; // rcx
  LONGLONG v20; // rdx
  LARGE_INTEGER v21; // rax
  LARGE_INTEGER **v22; // rcx
  LARGE_INTEGER v24; // rcx
  LARGE_INTEGER *v25; // rbx
  LARGE_INTEGER *v26; // rax
  __int64 v27; // rax
  LARGE_INTEGER **v28; // rcx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    v6 = *CurrentThreadWin32Thread;
  else
    v6 = 0LL;
  v7 = *(LARGE_INTEGER **)(v6 + 1344);
  if ( v7 == (LARGE_INTEGER *)(v6 + 1344) )
    return 0LL;
  while ( (v7[-1].LowPart & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1327LL);
LABEL_17:
    v7 = (LARGE_INTEGER *)v7->QuadPart;
    if ( v7 == (LARGE_INTEGER *)(v6 + 1344) )
      return 0LL;
  }
  v8 = v7[6];
  if ( a1 && a1 != v8.QuadPart && (a1 != 1 || v8.QuadPart) )
  {
    if ( v8.QuadPart )
    {
      while ( (*(_BYTE *)(*(_QWORD *)(v8.QuadPart + 40) + 31LL) & 0xC0) == 0x40 )
      {
        v8 = *(LARGE_INTEGER *)(v8.QuadPart + 104);
        if ( a1 == v8.QuadPart )
        {
          v9 = 1;
          goto LABEL_16;
        }
        if ( !v8.QuadPart )
          break;
      }
    }
    v9 = 0;
LABEL_16:
    if ( !v9 )
      goto LABEL_17;
  }
  HighPart = v7[10].HighPart;
  if ( v7[10].LowPart == HighPart )
    v7[10].LowPart = HighPart;
  v12 = (LARGE_INTEGER *)AllocQEntryEx(v6 + 848, 0LL, 1);
  if ( v12 )
  {
    QuadPart = (LARGE_INTEGER *)v7[6].QuadPart;
    if ( QuadPart )
    {
      v14 = *(_DWORD *)(QuadPart[5].QuadPart + 288);
    }
    else
    {
      v15 = *(_QWORD *)(v6 + 472);
      v16 = *(_QWORD *)(v15 + 128);
      if ( v16 )
        v17 = *(_QWORD *)(v16 + 16);
      else
        v17 = *(_QWORD *)(v15 + 104);
      v14 = *(_DWORD *)(*(_QWORD *)(v17 + 464) + 268LL);
    }
    v18 = 280;
    if ( (v7[-1].LowPart & 2) == 0 || (v19 = 280LL, !v7[-3].QuadPart) )
      v19 = v7[-3].QuadPart;
    if ( (v7[-1].LowPart & 2) == 0 )
      v18 = 275;
    StoreQMessage(v12, QuadPart, v18, v7[7], v19, 0, 0LL, 0, 0LL, 0, 0LL, v14, 0LL, 0LL);
    SetWakeBit(v6, 264LL);
  }
  if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
  {
    DecTimerCountAndClearReadyFlag((struct tagTIMER *)&v7[-7]);
    goto LABEL_41;
  }
  v7[-1].LowPart &= ~1u;
  v20 = v7->QuadPart;
  v21 = v7[-4];
  if ( *(LARGE_INTEGER **)(v7->QuadPart + 8) != v7 )
    goto LABEL_45;
  v22 = (LARGE_INTEGER **)v7[1].QuadPart;
  if ( *v22 != v7 )
    goto LABEL_45;
  *v22 = (LARGE_INTEGER *)v20;
  *(_QWORD *)(v20 + 8) = v22;
  if ( (*(_DWORD *)(v21.QuadPart + 644))-- == 1 )
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v21.QuadPart + 488) + 8LL), 0xFFFFFFEF);
LABEL_41:
  v24 = v7[2];
  v25 = v7 + 2;
  if ( *(LARGE_INTEGER **)(v24.QuadPart + 8) != v25
    || (v26 = (LARGE_INTEGER *)v25[1].QuadPart, (LARGE_INTEGER *)v26->QuadPart != v25)
    || (*v26 = v24,
        *(_QWORD *)(v24.QuadPart + 8) = v26,
        v27 = ((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)((LARGE_INTEGER)v24.QuadPart, v20) + 57544,
        v28 = *(LARGE_INTEGER ***)(v27 + 8),
        *v28 != (LARGE_INTEGER *)v27) )
  {
LABEL_45:
    __fastfail(3u);
  }
  v25->QuadPart = v27;
  v25[1].QuadPart = (LONGLONG)v28;
  *v28 = v25;
  *(_QWORD *)(v27 + 8) = v25;
  return 1LL;
}
