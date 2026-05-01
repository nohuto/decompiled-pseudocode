/*
 * XREFs of ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180044DD0
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800085A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 * Callees:
 *     ?RmpEnforcementApplyLimits@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800452F0 (-RmpEnforcementApplyLimits@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180045630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180045A94 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180089DFC (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180089F38 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostApplyEnforcementSettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        int a3)
{
  char *v4; // rdi
  char v5; // si
  char *v6; // r12
  char v8; // al
  DWORD v9; // r14d
  _QWORD *Value; // rsi
  __int64 *v11; // rax
  __int64 v12; // rdx
  unsigned int v14; // ecx
  int *v15; // r14
  int v16; // esi
  char v17; // al
  int v18; // esi
  int v19; // r12d
  unsigned __int64 v20; // rdx
  char v21; // cl
  unsigned __int8 v22; // cl
  int v24; // eax
  struct _RM_ACTIVITY_HOST *v25; // rcx
  char v26; // [rsp+30h] [rbp-D0h] BYREF
  bool v27; // [rsp+31h] [rbp-CFh] BYREF
  char v28; // [rsp+32h] [rbp-CEh] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  char *v30; // [rsp+38h] [rbp-C8h]
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+8Ch] [rbp-74h]
  int *v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 *v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  __int64 *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int64 *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  __int64 *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  char *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  bool *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  char *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]

  v29 = a3;
  v4 = (char *)a1 + 1176;
  v5 = a3;
  v6 = (char *)a1 + 56;
  v30 = (char *)a1 + 56;
  if ( !memcmp_0(a2, (char *)a1 + 1176, 0x20uLL) && (v5 & 3) == 0 )
    return 0LL;
  v8 = *((_BYTE *)a2 + 28) & 1;
  if ( (v4[28] & 1) != 0 )
  {
    if ( !v8 )
      RmpGpuMonitorDisableForHost(a1);
  }
  else if ( v8 )
  {
    RmpGpuMonitorEnableForHost(a1);
  }
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v6);
  *((_DWORD *)v6 + 2) = GetCurrentThreadId();
  v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v12 = *v11;
    if ( (*v11 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v11[2]-- == 1 )
      *v11 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)v6 + 2) = 0;
  RtlReleaseSRWLockExclusive(v6);
  v14 = *((unsigned __int8 *)a2 + 28);
  if ( (((unsigned __int8)v4[28] ^ (unsigned __int8)v14) & 4) == 0 )
  {
LABEL_13:
    if ( *((_QWORD *)v4 + 2) == *((_QWORD *)a2 + 2)
      && *((_QWORD *)v4 + 1) == *((_QWORD *)a2 + 1)
      && *(_QWORD *)v4 == *(_QWORD *)a2
      && (v15 = (int *)((char *)a2 + 24), *((_DWORD *)v4 + 6) == *((_DWORD *)a2 + 6))
      && ((*((_BYTE *)a2 + 28) ^ (unsigned __int8)v4[28]) & 2) == 0 )
    {
      v17 = v29;
      if ( (v29 & 1) == 0 )
        goto LABEL_20;
    }
    else
    {
      v15 = (int *)((char *)a2 + 24);
    }
    v16 = RmpEnforcementApplyLimits(a1, a2);
    if ( v16 < 0 )
      goto LABEL_27;
    v17 = v29;
LABEL_20:
    v18 = v17 & 2;
    v19 = v18;
    if ( *v15 >= 2 && (*((_BYTE *)a2 + 28) & 2) != 0 && (v17 & 2) != 0 )
    {
      RmHamHostActOnProcesses(
        a1,
        0x2000u,
        1u,
        (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementApplyForegroundBoost,
        (void *)1);
      v19 = v29 & 2;
    }
    v20 = *((unsigned __int8 *)a2 + 28);
    v21 = v4[28];
    if ( (((unsigned __int8)v21 ^ (unsigned __int8)v20) & 0x70) != 0 || v18 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 6) + 620LL) & 0x10) != 0 )
      {
        v25 = 0LL;
        if ( a1 != (struct _RM_ACTIVITY_HOST *)-56LL )
          v25 = a1;
        RmHamHostActOnProcesses(
          v25,
          0x2000u,
          1u,
          (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampSystemSetBamWindowStateProcess,
          (void *)((v20 >> 4) & 7));
      }
      v21 = v4[28] ^ (*((_BYTE *)a2 + 28) ^ v4[28]) & 0x70;
      v4[28] = v21;
    }
    if ( ((v21 & 8) != 0) != ((*((_BYTE *)a2 + 28) & 8) != 0) || v19 )
    {
      if ( (*((_BYTE *)a2 + 28) & 8) != 0 )
      {
        v16 = RmHamHostActOnProcesses(
                a1,
                0x2000u,
                1u,
                (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostSetStoreHighMemoryPriorityProcessCallback,
                0LL);
        if ( v16 < 0 )
          goto LABEL_26;
      }
      v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 8;
    }
    v16 = 0;
LABEL_26:
    v6 = v30;
    goto LABEL_27;
  }
  v24 = RmpQoSEnableDisableForHost(a1, (v14 >> 2) & 1);
  v16 = v24;
  if ( v24 == -1073741822 )
  {
    v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 4;
    goto LABEL_13;
  }
  if ( v24 >= 0 )
    goto LABEL_13;
LABEL_27:
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v22 = v4[28];
    v29 = v16;
    v26 = (v22 >> 4) & 7;
    v28 = v4[24];
    v32 = *((_QWORD *)v4 + 1);
    v33 = *(_QWORD *)v4;
    v34 = *((_QWORD *)v4 + 2);
    v31 = *((_QWORD *)v6 - 3);
    v54 = &v26;
    v52 = &v27;
    v50 = &v28;
    v48 = &v32;
    v46 = &v33;
    v44 = &v34;
    v42 = &v31;
    v40 = &v29;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v27 = (v22 & 2) != 0;
    v55 = 1LL;
    v53 = 1LL;
    v51 = 1LL;
    v49 = 8LL;
    v47 = 8LL;
    v45 = 8LL;
    v43 = 8LL;
    v41 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v37 = &unk_1800D1FC8;
    UserData.Reserved = 2;
    v38 = 151;
    v39 = 1;
    LODWORD(v30) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
  return (unsigned int)v16;
}
