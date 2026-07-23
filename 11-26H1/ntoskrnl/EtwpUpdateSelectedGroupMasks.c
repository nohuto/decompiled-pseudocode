/*
 * XREFs of EtwpUpdateSelectedGroupMasks @ 0x1404C6488
 * Callers:
 *     EtwpEnableMetaProviderGuid @ 0x14044EE5C (EtwpEnableMetaProviderGuid.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140AB0CE0 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpUpdateGroupMasks @ 0x140B09E5C (EtwpUpdateGroupMasks.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpEventWriteTemplateInvalidGroupMask @ 0x14082B96C (EtwpEventWriteTemplateInvalidGroupMask.c)
 *     EtwpCCSwapStop @ 0x1408381E4 (EtwpCCSwapStop.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1409FF720 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140A9A15C (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x140A9A1C8 (EtwpLogGroupMask.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140B377A8 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpCCSwapStart @ 0x140B66BF0 (EtwpCCSwapStart.c)
 */

__int64 __fastcall EtwpUpdateSelectedGroupMasks(int *a1, _DWORD *a2, _DWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // r12d
  __int64 v5; // r13
  int updated; // esi
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rax
  _DWORD *v15; // r8
  __int64 v16; // rdi
  __int64 v17; // r15
  char *v18; // r9
  char *v19; // r10
  __int64 v20; // rsi
  char *v21; // r11
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rsi
  __int128 v29; // xmm1
  __int64 i; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v34; // r9d
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int128 v44; // [rsp+40h] [rbp-49h] BYREF
  __int128 v45; // [rsp+50h] [rbp-39h]
  _OWORD v46[2]; // [rsp+60h] [rbp-29h] BYREF
  _OWORD v47[2]; // [rsp+80h] [rbp-9h] BYREF

  v4 = *a1;
  v5 = *((_QWORD *)a1 + 170);
  memset(v46, 0, sizeof(v46));
  memset(v47, 0, sizeof(v47));
  v44 = 0LL;
  v45 = 0LL;
  if ( a3 )
  {
    v35 = a3[1];
    if ( (v35 & 1) != 0 || (v35 & 0x10) != 0 )
    {
      *a3 |= 0x200u;
      *a2 |= 0x200u;
    }
  }
  updated = -1073741727;
  if ( *((_QWORD *)a1 + 170) != EtwpHostSiloState )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      if ( (~EtwpSiloAllowedGroupMask[i] & a3[i]) != 0 )
      {
        if ( EtwEventEnabled(
               (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
               &ETW_EVENT_INVALID_GROUP_MASK) )
        {
          EtwpEventWriteTemplateInvalidGroupMask(v32, v31, a1 + 34, a3);
        }
        return (unsigned int)updated;
      }
    }
  }
  if ( a3
    && (a3[1] & 0x402) != 0
    && a1[204] >= 0
    && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    if ( EtwEventEnabled(
           (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
           &ETW_EVENT_LACKS_PROFILING_PRIVILEGE) )
    {
      EtwpEventWriteTemplateAdmin(
        a1[3],
        (unsigned int)&ETW_EVENT_LACKS_PROFILING_PRIVILEGE,
        (_DWORD)a1 + 152,
        (_DWORD)a1 + 136,
        (__int64)(a1 + 38),
        97,
        a1[3]);
    }
    return (unsigned int)updated;
  }
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 172), 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64(a1 + 172, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 86, v10, (__int64)(a1 + 172));
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = *((unsigned __int8 *)a1 + 818);
  if ( !a2 )
    goto LABEL_10;
  v36 = a2[1];
  if ( (v36 & 4) == 0 && (v36 & 0x100) == 0 )
    goto LABEL_10;
  v37 = *((_QWORD *)a1 + 170);
  v38 = v37 + 32 * v13 + 4556;
  if ( v38 && (v41 = *(_DWORD *)(v38 + 4), (v41 & 4) != 0) && (v41 & 0x100) != 0 )
  {
    if ( !a3 || (v42 = a3[1], (v42 & 4) == 0) || (v42 & 0x100) == 0 )
    {
      LOBYTE(v37) = 1;
      EtwpCCSwapStop((unsigned int)a1[50], v37);
LABEL_10:
      v14 = *((_QWORD *)a1 + 170);
      v15 = (_DWORD *)(32 * v13 + v14 + 4556);
      v16 = (__int64)a3 - v14 + -32 * v13;
      v17 = (__int64)a2 - v14 + -32 * v13;
      v18 = (char *)v46 - v14 + -32 * v13;
      v19 = (char *)v47 - v14 + -32 * v13;
      v20 = 8LL;
      v21 = (char *)&v44 - v14 + -32 * v13;
      do
      {
        v22 = *(_DWORD *)((char *)v15 + v16 - 4556);
        v23 = *v15 & ~v22 & *(_DWORD *)((char *)v15 + v17 - 4556);
        *(_DWORD *)((char *)v15 + (_QWORD)v18 - 4556) = v23;
        v24 = v22 & ~*v15;
        *(_DWORD *)((char *)v15 + (_QWORD)v19 - 4556) = v24;
        v25 = *v15++ | v24;
        *(_DWORD *)((char *)v15 + (_QWORD)v21 - 4560) = ~v23 & v25;
        --v20;
      }
      while ( v20 );
      EtwpLogGroupMask(v5, v4, 32 * v13 + *((_QWORD *)a1 + 170) + 4556LL, 32LL);
      v26 = a1[3] & 0x400;
      if ( LOBYTE(stru_140F03830.CycleTime) && !v26 )
        EtwpKernelTraceRundown((unsigned int)v46, v5, v4, 0, 0LL, 0);
      v27 = *((_QWORD *)a1 + 170);
      v28 = 32 * v13;
      v29 = v45;
      *(_OWORD *)(v28 + v27 + 4556) = v44;
      *(_OWORD *)(v28 + v27 + 4572) = v29;
      updated = EtwpUpdateGlobalGroupMasks(v5, v4, (unsigned int)v13);
      if ( updated >= 0 )
      {
        EtwpLogGroupMask(v5, v4, &v44, 5LL);
        if ( LOBYTE(stru_140F03830.CycleTime) )
        {
          if ( !v26 || (a1[204] & 2) != 0 )
          {
            LOBYTE(v34) = 1;
            EtwpKernelTraceRundown((unsigned int)v47, v5, v4, v34, 0LL, 0);
          }
        }
      }
      EtwpLogAlwaysPresentRundown(v5, v4);
      goto LABEL_15;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_10;
  }
  v39 = a3[1];
  if ( (v39 & 4) == 0 )
    goto LABEL_10;
  if ( (v39 & 0x100) == 0 )
    goto LABEL_10;
  v40 = 32 * v13 + v37 + 4556;
  if ( v40 )
  {
    v43 = *(_DWORD *)(v40 + 4);
    if ( (v43 & 4) != 0 && (v43 & 0x100) != 0 )
      goto LABEL_10;
  }
  updated = EtwpCCSwapStart((unsigned int)a1[50]);
  if ( updated >= 0 )
    goto LABEL_10;
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a1 + 86);
  KeAbPostRelease((unsigned __int64)(a1 + 172));
  return (unsigned int)updated;
}
