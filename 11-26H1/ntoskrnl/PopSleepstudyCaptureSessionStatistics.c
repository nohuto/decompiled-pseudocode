/*
 * XREFs of PopSleepstudyCaptureSessionStatistics @ 0x140B65FE4
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140526BA0 (Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     PopCalculateTotalHwDripsResidencyV1 @ 0x14053294C (PopCalculateTotalHwDripsResidencyV1.c)
 *     PopCalculateTotalHwDripsResidencyV0 @ 0x140532FFC (PopCalculateTotalHwDripsResidencyV0.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x1407E3D40 (SshSessionManagerTraceCsEnterReason.c)
 *     SshSessionManagerTraceCsExitReason @ 0x140B726FC (SshSessionManagerTraceCsExitReason.c)
 */

struct _KTHREAD *__fastcall PopSleepstudyCaptureSessionStatistics(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        void *a5)
{
  _BYTE *v5; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // ebp
  __int64 *v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 v15; // r15
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _KLOCK_ENTRIES *v24; // r9
  int v26; // [rsp+70h] [rbp+8h] BYREF
  int v27; // [rsp+74h] [rbp+Ch]
  __int64 v28; // [rsp+78h] [rbp+10h]
  __int64 v29; // [rsp+80h] [rbp+18h]
  __int64 v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  v27 = HIDWORD(a1);
  v5 = a5;
  *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[24] = a2;
  *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorSummary = a3;
  v26 = 0;
  v8 = a4;
  memset_0(a5, 0, 0x1F0uLL);
  v9 = *a2 - *(_QWORD *)&GUID_SPM_DEFAULT.Data1;
  if ( *a2 == *(_QWORD *)&GUID_SPM_DEFAULT.Data1 )
    v9 = a2[1] - *(_QWORD *)GUID_SPM_DEFAULT.Data4;
  if ( v9 )
  {
    SshSessionManagerTraceCsEnterReason(&byte_140F0EBD0[120 * dword_140F0EBC8]);
  }
  else
  {
    v10 = 0LL;
    v11 = 1;
    v29 = 0LL;
    v12 = PopSleepstudySessionContext;
    while ( v11 <= 2 )
    {
      v13 = 15LL * (((_BYTE)dword_140F0EBC8 - (_BYTE)v11) & 7);
      v14 = (__int64)&v12[v13 + 26];
      v5[388] = *(_BYTE *)(v14 + 58);
      v15 = (*(_QWORD *)(v14 + 24) - *(_QWORD *)(v14 + 16)) / 0xAuLL;
      v28 = *(_QWORD *)(v14 + 104) - *(_QWORD *)(v14 + 88);
      IsEnabledDeviceUsageNoInline = Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline();
      v17 = PopSleepstudySessionContext[v13 + 38];
      v18 = PopSleepstudySessionContext[v13 + 36];
      if ( IsEnabledDeviceUsageNoInline )
      {
        v19 = PopCalculateTotalHwDripsResidencyV1(v18, v17, v15, &v26);
        v12 = PopSleepstudySessionContext;
      }
      else
      {
        v19 = PopCalculateTotalHwDripsResidencyV0(v18, v17, v15);
      }
      if ( *(_DWORD *)v14 == 2 )
      {
        v5[288] = 1;
        *((_QWORD *)v5 + 40) = v15;
        *((_DWORD *)v5 + 82) = *(_DWORD *)(v14 + 40);
        *((_DWORD *)v5 + 84) = *(_DWORD *)(v14 + 48);
        *((_DWORD *)v5 + 83) = *(_DWORD *)(v14 + 44);
        *((_DWORD *)v5 + 85) = *(_DWORD *)(v14 + 52);
        *((_DWORD *)v5 + 110) = *(_DWORD *)(v14 + 68);
        *((_DWORD *)v5 + 111) = *(_DWORD *)(v14 + 72);
        *((_QWORD *)v5 + 52) = v28;
        v29 = v14;
        *((_QWORD *)v5 + 53) = v19;
      }
      else if ( *(_DWORD *)v14 == 1 )
      {
        *((_QWORD *)v5 + 37) = v15;
        v10 = v14;
        *((_DWORD *)v5 + 76) = *(_DWORD *)(v14 + 40);
        *((_DWORD *)v5 + 78) = *(_DWORD *)(v14 + 48);
        *((_DWORD *)v5 + 77) = *(_DWORD *)(v14 + 44);
        *((_DWORD *)v5 + 79) = *(_DWORD *)(v14 + 52);
        *((_DWORD *)v5 + 108) = *(_DWORD *)(v14 + 68);
        *((_DWORD *)v5 + 109) = *(_DWORD *)(v14 + 72);
        *((_QWORD *)v5 + 50) = v28;
        *((_QWORD *)v5 + 51) = v19;
        break;
      }
      ++v11;
    }
    v20 = &v12[15 * (unsigned int)dword_140F0EBC8];
    SshSessionManagerTraceCsExitReason(v10, v29, v20 + 26);
    if ( *((_DWORD *)v20 + 52) == 3 && qword_140E675D8 )
      guard_dispatch_icall_no_overrides(1LL, v21);
    v8 = v30;
  }
  PopReleaseRwLock(&PopSleepstudySessionLock);
  PopCaptureSleepStudyStatistics(a2, a3, v8, (__int64)v5);
  if ( qword_140E67590 )
    guard_dispatch_icall_no_overrides((__int64)a2, a3);
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepstudySessionLock, v22, v23, v24);
}
