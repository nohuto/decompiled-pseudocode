/*
 * XREFs of ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800272D4
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18007F970 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800265E4 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026E1C (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180027964 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?ResourceTimerSet@ModernResourceEnforcer@@QEAAJPEAX_KK@Z @ 0x180065A98 (-ResourceTimerSet@ModernResourceEnforcer@@QEAAJPEAX_KK@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x180067868 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x18008BBB0 (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampHostUpdateQuiesceState(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned __int64 *a2, HKEY *a3)
{
  struct _RM_ACTIVITY_HOST *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rcx
  LSTATUS v8; // eax
  bool v9; // sf
  unsigned int v10; // edi
  unsigned int v11; // r13d
  int IsDebugEnabled; // eax
  unsigned int v13; // r14d
  unsigned int v14; // r14d
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // si
  unsigned __int64 v18; // rax
  HKEY v19; // rax
  unsigned __int64 v20; // rdi
  unsigned int v21; // r15d
  __int64 v22; // r14
  unsigned __int64 v23; // rdx
  char *v24; // r8
  ModernResourceEnforcer *v25; // r14
  __int64 v26; // rcx
  void **v27; // rsi
  HKEY v28; // rax
  unsigned __int64 **v29; // rdi
  __int64 v30; // rcx
  char v31; // al
  const wchar_t *v32; // rbx
  __int64 v33; // rax
  int v34; // eax
  char v35; // [rsp+40h] [rbp-C0h] BYREF
  char v36; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v37; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v38[2]; // [rsp+48h] [rbp-B8h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v40[2]; // [rsp+58h] [rbp-A8h] BYREF
  HKEY *v41; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  char *v43; // [rsp+70h] [rbp-90h]
  HKEY v44; // [rsp+78h] [rbp-88h] BYREF
  void *v45; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v46; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-70h] BYREF
  __int128 v48; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h]
  int v52; // [rsp+DCh] [rbp-24h]
  const wchar_t *v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+ECh] [rbp-14h]
  __int64 *v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  char *v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  HKEY **v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  HKEY *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  char *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  void **v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  unsigned __int64 **v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]

  v41 = a3;
  v43 = 0LL;
  v46 = a2;
  v37 = 0;
  v5 = (struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a1 - 56) & -(__int64)(a1 != 0LL));
  v48 = 0LL;
  RmReleaseEnforcementLocks(v5);
  v6 = 48LL;
  if ( *a2 )
  {
    v7 = 48LL;
    if ( a1 )
      v7 = (__int64)a1 - 8;
    *(_QWORD *)&EventDescriptor.Id = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)v7 + 40LL) + 200LL))(*((_QWORD *)a1 + 100));
  }
  else
  {
    *(_QWORD *)&EventDescriptor.Id = 0LL;
  }
  hKey = 0LL;
  v40[0] = 5000;
  v38[0] = 600000;
  v8 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         0,
         1u,
         &hKey);
  v9 = v8 < 0;
  if ( v8 > 0 )
    v9 = 1;
  if ( v9
    || (int)HampSystemQueryDWordValue(hKey, L"QuiesceDurationMs", v40) < 0
    || (int)HampSystemQueryDWordValue(hKey, L"EeDurationMs", v38) < 0
    || (v11 = v40[0], v10 = v38[0], v40[0] > v38[0])
    || !v38[0] )
  {
    v10 = 600000;
    v11 = 5000;
  }
  if ( hKey )
    RegCloseKey(hKey);
  IsDebugEnabled = HampHostQueryIsDebugEnabled(a1, &v37);
  v13 = v37;
  if ( IsDebugEnabled < 0 )
    v13 = 0;
  v37 = v13;
  RmAcquireEnforcementLocks(v5);
  v14 = v13 & 1;
  v15 = *((_QWORD *)a1 + 83);
  hKey = *v41;
  v16 = *a2;
  v17 = v48;
  *(_QWORD *)v40 = v16;
  v18 = v15 >> 29;
  LOBYTE(v18) = (v15 >> 29) & 7;
  v42 = v18;
  if ( a1 )
    v6 = (__int64)a1 - 8;
  v19 = (HKEY)v10;
  v20 = *((_QWORD *)&v48 + 1);
  v44 = v19;
  *(_QWORD *)v38 = v6;
  do
  {
    v21 = (v15 >> 41) & 1 | (2 * ((v15 >> 42) & 1 | (2 * (v14 | (2 * ((v15 >> 46) & 1))))));
    RmReleaseEnforcementLocks(v5);
    v22 = *(_QWORD *)v38;
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(**(_QWORD **)v38 + 40LL) + 192LL))(*((_QWORD *)a1 + 100), 1LL);
    v23 = *(_QWORD *)&EventDescriptor.Id;
    if ( (v21 & 6) != 0 )
      v23 = *(_QWORD *)v40;
    v24 = (char *)hKey + *(_QWORD *)v40 - v23;
    if ( v24 >= (char *)v44 )
      v24 = (char *)v44;
    if ( v21 >= 8 )
    {
      v17 = 5;
      v43 = v24;
      v20 = 0LL;
      goto LABEL_32;
    }
    switch ( (unsigned __int8)v42 )
    {
      case 1u:
        if ( (v21 & 1) != 0 )
          v20 = (char *)v44 - v24;
        else
          v20 = v23;
        v17 = ((v21 & 1) != 0) + 1;
        if ( !v20 )
          v17 = 4;
        break;
      case 2u:
        v20 = v23;
        if ( (v21 & 1) != 0 )
        {
          v17 = 2;
        }
        else
        {
          v17 = 1;
          if ( v11 < v23 )
            v20 = v11;
        }
        if ( !v20 )
        {
          v17 = 3;
          v20 = 1000LL;
        }
        break;
      case 3u:
        v20 = v23;
        v17 = 4 - (v23 != 0);
        break;
      case 4u:
        v17 = 4;
        v20 = 0LL;
        break;
      default:
        goto LABEL_29;
    }
    v43 = v24;
LABEL_29:
    if ( v20 )
    {
      v25 = *(ModernResourceEnforcer **)(*(_QWORD *)v22 + 40LL);
      v45 = (void *)*((_QWORD *)a1 + 100);
      if ( (*((int (__fastcall **)(void *, unsigned __int64, _QWORD, HKEY))v25 + 23))(v45, v20, 0LL, v44) < 0 )
        ModernResourceEnforcer::ResourceTimerSet(v25, v45, v20, 1u);
    }
LABEL_32:
    HampHostQueryIsDebugEnabled(a1, &v37);
    RmAcquireEnforcementLocks(v5);
    v15 = *((_QWORD *)a1 + 83);
    v14 = v37 & 1;
  }
  while ( v21 != ((v15 >> 41) & 1 | (2 * ((v15 >> 42) & 1 | (2 * (v14 | (2 * ((v15 >> 46) & 1))))))) );
  if ( v17 == 3 )
  {
    HampHostRevokeQuiesceExtension(a1, 6LL);
  }
  else if ( v17 == 4 && (v15 & 0xE0000000) != 0x80000000 )
  {
    v38[0] = 0;
    HampHostQueueTerminateEx((__int64)a1, (v15 >> 44) & 1 | 2, 0xE00u, 0LL, 3, 0, 0LL, v38);
  }
  v26 = v17;
  v27 = (void **)v46;
  *((_QWORD *)a1 + 83) = (v26 << 29) ^ (*((_QWORD *)a1 + 83) ^ (v26 << 29)) & 0xFFFFFFFF1FFFFFFFuLL;
  v28 = (HKEY)v43;
  *v27 = (void *)v20;
  v29 = (unsigned __int64 **)v41;
  *v41 = v28;
  *((_DWORD *)a1 + 172) = *(_DWORD *)v27;
  *((_DWORD *)a1 + 171) = CempQueryUnbiasedInterruptTimeMs64();
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v30 = 32LL;
    v46 = *v29;
    v45 = *v27;
    v31 = ((unsigned __int64)*((unsigned int *)a1 + 166) >> 29) & 7;
    v69 = 8LL;
    v35 = v31;
    v44 = hKey;
    v41 = *(HKEY **)v40;
    v36 = v42;
    if ( a1 )
      v30 = (__int64)a1 - 24;
    v67 = 8LL;
    v63 = 8LL;
    v61 = 8LL;
    v57 = 8LL;
    v42 = *(_QWORD *)v30;
    v68 = &v46;
    v66 = &v45;
    v64 = &v35;
    v62 = &v44;
    v60 = &v41;
    v58 = &v36;
    v56 = (__int64 *)&v42;
    v65 = 1LL;
    v59 = 1LL;
    v32 = (const wchar_t *)((char *)a1 + 24);
    if ( v32 )
    {
      v33 = -1LL;
      do
        ++v33;
      while ( v32[v33] );
      v34 = 2 * v33 + 2;
    }
    else
    {
      v32 = &word_1800BBB1C;
      v34 = 2;
    }
    v54 = v34;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    EventDescriptor.Keyword = 8LL;
    v53 = v32;
    v55 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v50 = &unk_1800CD563;
    v52 = 1;
    UserData.Reserved = 2;
    v51 = 163;
    v38[0] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
}
