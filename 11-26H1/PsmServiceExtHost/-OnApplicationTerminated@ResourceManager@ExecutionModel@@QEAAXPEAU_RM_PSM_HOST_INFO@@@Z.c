/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180027FB8
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18002F650 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180028630 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180028FB8 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800291F8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002933C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18005C470 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180070998 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        struct _RM_PSM_HOST_INFO *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v4; // r15
  __int64 v5; // rbx
  __int64 v6; // r11
  __int64 v7; // r12
  __int64 v8; // r8
  int v9; // r13d
  __int64 v10; // r10
  __int64 v11; // r9
  int v12; // r8d
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  _QWORD *v17; // r13
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  PVOID P; // [rsp+38h] [rbp-91h] BYREF
  __int64 v26; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DESCRIPTOR v27; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-71h] BYREF
  void *v29; // [rsp+68h] [rbp-61h]
  int v30; // [rsp+70h] [rbp-59h]
  int v31; // [rsp+74h] [rbp-55h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-49h] BYREF
  void *v33; // [rsp+90h] [rbp-39h]
  int v34; // [rsp+98h] [rbp-31h]
  int v35; // [rsp+9Ch] [rbp-2Dh]
  struct _RM_PSM_HOST_INFO *v36; // [rsp+A0h] [rbp-29h]
  int v37; // [rsp+A8h] [rbp-21h]
  int v38; // [rsp+ACh] [rbp-1Dh]
  __int64 *v39; // [rsp+B0h] [rbp-19h]
  __int64 v40; // [rsp+B8h] [rbp-11h]
  PVOID *p_P; // [rsp+C0h] [rbp-9h]
  __int64 v42; // [rsp+C8h] [rbp-1h]
  EVENT_DESCRIPTOR *v43; // [rsp+D0h] [rbp+7h]
  __int64 v44; // [rsp+D8h] [rbp+Fh]

  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    *(_DWORD *)&v27.Level = 260;
    *(_QWORD *)&EventDescriptor.Id = off_1800E1280;
    v27.Keyword = 1LL;
    *(_DWORD *)&v27.Id = 184549376;
    LODWORD(EventDescriptor.Keyword) = *(unsigned __int16 *)off_1800E1280;
    v29 = &unk_1800D1350;
    HIDWORD(EventDescriptor.Keyword) = 2;
    v31 = 1;
    v30 = 33;
    LODWORD(P) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v27, 0LL, 0LL, 2u, (PEVENT_DATA_DESCRIPTOR)&EventDescriptor);
  }
  v4 = 0LL;
  P = 0LL;
  v26 = *((_QWORD *)a2 + 68);
  RmpAcquireGlobalLock();
  v5 = 0LL;
  *(_QWORD *)&v27.Id = *((_QWORD *)this + 16);
  RtlAcquireSRWLockShared(*(_QWORD *)&v27.Id + 32LL);
  v6 = *(_QWORD *)&v27.Id;
  v7 = -1LL;
  v8 = 0LL;
  v9 = -1073741275;
  v10 = -1LL << (*(_DWORD *)(*(_QWORD *)&v27.Id + 20LL) & 0x1F);
  v11 = v10 & (HIBYTE(v26)
             + 37
             * (BYTE6(v26)
              + 37
              * (BYTE5(v26)
               + 37
               * (BYTE4(v26)
                + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883LL))))))));
LABEL_3:
  if ( v8 )
    goto LABEL_6;
  v12 = *(_DWORD *)(*(_QWORD *)&v27.Id + 20LL) >> 5;
  if ( v12 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)&v27.Id + 24LL)
       + 8LL
       * ((v12 - 1) & (HIBYTE(v11)
                     - 877075889
                     + 442596621 * (unsigned __int8)v11
                     + 37
                     * (BYTE6(v11)
                      + 37
                      * (BYTE5(v11)
                       + 37 * (BYTE4(v11) + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (unsigned int)BYTE1(v11))))))));
LABEL_6:
    while ( 1 )
    {
      v8 = *(_QWORD *)v8;
      if ( (v8 & 1) != 0 )
        break;
      if ( v11 == (v10 & *(_QWORD *)(v8 + 8)) )
      {
        if ( !v8 )
          break;
        if ( v26 == *(_QWORD *)(v8 + 32) )
        {
          v9 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 16)) <= 1 )
            __fastfail(0xEu);
          v5 = v8;
          break;
        }
        goto LABEL_3;
      }
    }
  }
  RtlReleaseSRWLockShared(v6 + 32);
  if ( v9 >= 0 )
  {
    P = (PVOID)v5;
    v4 = (struct _RM_HAM_ACTIVITY_HOST *)(v5 + 56);
    RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v5 + 56));
    RmpReleaseGlobalLock();
    HampHostCheckNotifyZeroProcess((struct _RM_HAM_ACTIVITY_HOST *)(v5 + 56));
    RmpAcquireGlobalLock();
    RmpActivityHostZeroProcessNotification((PVOID)v5);
  }
  if ( *((_QWORD *)this + 23) )
  {
    v14 = utl::hash<_RM_PSM_HOST_INFO>::operator()(v13, a2);
    v15 = *((_QWORD *)this + 23);
    v16 = *(_QWORD **)(v15 + 16 * (v14 & ((8LL << *((_BYTE *)this + 200)) - 1)));
    if ( v16 )
    {
      v17 = **(_QWORD ***)(v15 + 16 * (v14 & ((8LL << *((_BYTE *)this + 200)) - 1)) + 8);
      while ( v16 != v17 )
      {
        if ( v16[2] >= v14 )
        {
          if ( v16[2] > v14 )
            break;
          if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v15, a2, v16 + 3) )
          {
            if ( v16 != (_QWORD *)((char *)this + 168) )
            {
              NtDeleteWnfStateName(v16 + 72);
              NtDeleteWnfStateName(v16 + 73);
              v18 = (_QWORD *)*v16;
              v19 = (_QWORD *)v16[1];
              v20 = (8LL << *((_BYTE *)this + 200)) - 1;
              *v19 = *v16;
              v18[1] = v19;
              v21 = v20 & v16[2];
              v22 = *((_QWORD *)this + 23);
              v23 = 2 * v21;
              if ( *(_QWORD **)(v22 + 8 * v23) == v16 )
              {
                if ( *(_QWORD **)(v22 + 8 * v23 + 8) == v16 )
                {
                  *(_QWORD *)(v22 + 8 * v23 + 8) = 0LL;
                  v24 = 0LL;
                }
                else
                {
                  v24 = (_QWORD *)*v16;
                }
                *(_QWORD *)(v22 + 8 * v23) = v24;
              }
              else if ( *(_QWORD **)(v22 + 8 * v23 + 8) == v16 )
              {
                *(_QWORD *)(v22 + 8 * v23 + 8) = v16[1];
              }
              --*((_QWORD *)this + 24);
              operator delete(v16);
            }
            break;
          }
        }
        v16 = (_QWORD *)*v16;
      }
    }
  }
  RmpReleaseGlobalLock();
  if ( P )
    RmpObjectRelease((char *)P);
  if ( v4 )
    RmHamHostDereference(v4);
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 9) != 0 && (qword_1800E1290 & 9) == qword_1800E1290 )
  {
    *(_QWORD *)&v27.Id = v26;
    LODWORD(P) = *((_DWORD *)a2 + 133);
    LODWORD(v26) = *((_DWORD *)a2 + 134);
    v43 = &v27;
    p_P = &P;
    v39 = &v26;
    v44 = 8LL;
    v42 = 4LL;
    v40 = 4LL;
    do
      ++v7;
    while ( *((_WORD *)a2 + v7) );
    v36 = a2;
    v37 = 2 * v7 + 2;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v38 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v33 = &unk_1800D151C;
    UserData.Reserved = 2;
    v34 = 73;
    v35 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
}
