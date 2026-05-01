/*
 * XREFs of ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800126A4
 * Callers:
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180010938 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001AD9C (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003CCAC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18006AAB8 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007DA28 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180012A20 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180012D50 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012DC0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012E20 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180012EA8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800131A4 (-HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800131F8 (-HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampActClose(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  int v3; // r14d
  struct _HAM_CLIENT_CONTEXT *v4; // rdi
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _OWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *Value; // rax
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  const wchar_t *v20; // r8
  const wchar_t *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // edi
  _DWORD v27[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v34; // [rsp+88h] [rbp-80h]
  int v35; // [rsp+90h] [rbp-78h]
  int v36; // [rsp+94h] [rbp-74h]
  __int64 *v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  __int64 *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  __int64 *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  const wchar_t *v43; // [rsp+C8h] [rbp-40h]
  int v44; // [rsp+D0h] [rbp-38h]
  int v45; // [rsp+D4h] [rbp-34h]
  const wchar_t *v46; // [rsp+D8h] [rbp-30h]
  int v47; // [rsp+E0h] [rbp-28h]
  int v48; // [rsp+E4h] [rbp-24h]
  _DWORD *v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  __int64 *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]

  LOBYTE(a2) = 4;
  v3 = HampActBeginStateChange(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v4 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
  if ( v4 )
  {
    HampClientAcquireLockExclusive(*((struct _HAM_CLIENT_CONTEXT **)a1 + 8));
    v5 = (_OWORD *)((char *)a1 + 48);
    v6 = *((_QWORD *)a1 + 6);
    if ( *(struct _HAM_ACTIVITY **)(v6 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 48)
      || (v7 = (_QWORD *)*((_QWORD *)a1 + 7), (_OWORD *)*v7 != v5) )
    {
LABEL_37:
      __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    HampClientReleaseLockExclusive(v4);
  }
  v8 = (_OWORD *)((char *)a1 + 96);
  v9 = *((_QWORD *)a1 + 12);
  if ( *(struct _HAM_ACTIVITY **)(v9 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 96) )
    goto LABEL_37;
  v10 = (_QWORD *)*((_QWORD *)a1 + 13);
  if ( (_OWORD *)*v10 != v8 )
    goto LABEL_37;
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  v11 = *((_QWORD *)a1 + 10);
  HampHostCheckSetCacheTimer((struct _RM_HAM_ACTIVITY_HOST *)v11);
  HampActCancelExpirationTimer(a1);
  if ( *(struct _HAM_ACTIVITY **)(v11 + 1008) == a1 )
    *(_QWORD *)(v11 + 1008) = 0LL;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)v11);
  v12 = -1LL;
  v13 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v15 = *Value;
    if ( (*Value & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[2]-- == 1 )
      *Value = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v13 + 8) = 0;
  RtlReleaseSRWLockExclusive(v13);
  v17 = *((_QWORD *)a1 + 9);
  if ( v17 )
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 24LL);
  else
    v18 = -1LL;
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v20 = (const wchar_t *)((char *)a1 + 252);
    v27[0] = *((_DWORD *)a1 + 28);
    v21 = (const wchar_t *)((char *)a1 + 124);
    v22 = 32LL;
    v30 = *((_QWORD *)a1 + 64);
    v29 = v18;
    v23 = *((_QWORD *)a1 + 10);
    v52 = 8LL;
    v50 = 4LL;
    if ( v23 )
      v22 = v23 - 24;
    v31 = *(_QWORD *)v22;
    v28 = *((_QWORD *)a1 + 5);
    v51 = &v29;
    v49 = v27;
    if ( a1 == (struct _HAM_ACTIVITY *)-252LL )
    {
      v20 = &word_1800BBB1C;
      v25 = 2;
    }
    else
    {
      v24 = -1LL;
      do
        ++v24;
      while ( v20[v24] );
      v25 = 2 * v24 + 2;
    }
    v46 = v20;
    v47 = v25;
    v48 = 0;
    if ( a1 == (struct _HAM_ACTIVITY *)-124LL )
    {
      v21 = &word_1800BBB1C;
      v26 = 2;
    }
    else
    {
      do
        ++v12;
      while ( v21[v12] );
      v26 = 2 * v12 + 2;
    }
    v43 = v21;
    v41 = &v30;
    v44 = v26;
    v39 = &v31;
    v45 = 0;
    v37 = &v28;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v42 = 8LL;
    v40 = 8LL;
    v38 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v34 = &unk_1800CFE0B;
    UserData.Reserved = 2;
    v35 = 106;
    v36 = 1;
    v27[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  HampActSystemResourceCleanup(a1);
  HampActEndStateChange(a1, 0);
  if ( *((_QWORD *)a1 + 8) )
    CemRcObjectDereference(a1);
  CemRcObjectDereference(a1);
  return (unsigned int)v3;
}
