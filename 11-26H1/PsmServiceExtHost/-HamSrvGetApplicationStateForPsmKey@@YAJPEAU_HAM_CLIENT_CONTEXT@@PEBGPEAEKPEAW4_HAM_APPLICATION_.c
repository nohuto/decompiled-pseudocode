/*
 * XREFs of ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800403DC
 * Callers:
 *     HamRpcSrvGetApplicationStateForPsmKey @ 0x180040360 (HamRpcSrvGetApplicationStateForPsmKey.c)
 * Callees:
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026690 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180036468 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800412A0 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800566F4 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetApplicationStateForPsmKey(
        struct _HAM_CLIENT_CONTEXT *a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        enum _HAM_APPLICATION_EXECUTION_STATE *a5,
        enum _HAM_TERMINATE_REASON *a6)
{
  int v9; // edi
  int v10; // esi
  DWORD v11; // ebx
  int v12; // ebx
  unsigned __int16 *v13; // rcx
  __int64 v14; // rdx
  unsigned __int16 v15; // ax
  unsigned __int16 *v16; // rax
  struct _HAM_APPLICATION *v17; // rax
  struct _HAM_APPLICATION *v18; // r14
  _DWORD *v19; // rax
  unsigned int v20; // ebx
  DWORD v21; // r14d
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  int RegistryTerminateReason; // eax
  char v27; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-CCh] BYREF
  struct _HAM_CLIENT_CONTEXT *v29; // [rsp+38h] [rbp-C8h]
  enum _HAM_TERMINATE_REASON *v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v34[232]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE DestinationSid[68]; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v36; // [rsp+304h] [rbp+204h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+310h] [rbp+210h] BYREF
  void *v38; // [rsp+320h] [rbp+220h]
  int v39; // [rsp+328h] [rbp+228h]
  int v40; // [rsp+32Ch] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+330h] [rbp+230h] BYREF
  void *v42; // [rsp+340h] [rbp+240h]
  int v43; // [rsp+348h] [rbp+248h]
  int v44; // [rsp+34Ch] [rbp+24Ch]
  enum _HAM_TERMINATE_REASON **v45; // [rsp+350h] [rbp+250h]
  __int64 v46; // [rsp+358h] [rbp+258h]
  char *v47; // [rsp+360h] [rbp+260h]
  int v48; // [rsp+368h] [rbp+268h]
  int v49; // [rsp+36Ch] [rbp+26Ch]
  unsigned __int8 *v50; // [rsp+370h] [rbp+270h]
  int v51; // [rsp+378h] [rbp+278h]
  int v52; // [rsp+37Ch] [rbp+27Ch]
  int *v53; // [rsp+380h] [rbp+280h]
  __int64 v54; // [rsp+388h] [rbp+288h]
  char *v55; // [rsp+390h] [rbp+290h]
  __int64 v56; // [rsp+398h] [rbp+298h]
  unsigned int *v57; // [rsp+3A0h] [rbp+2A0h]
  __int64 v58; // [rsp+3A8h] [rbp+2A8h]

  v29 = a1;
  v30 = a6;
  memset_0(v34, 0, 0x218uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    v37.Ptr = (ULONGLONG)off_1800E12B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    v37.Size = *(unsigned __int16 *)off_1800E12B8;
    v38 = &unk_1800CE9A0;
    v37.Reserved = 2;
    v39 = 24;
    v40 = 1;
    v28 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 2u, &v37);
  }
  v9 = 6912;
  v28 = 6912;
  LOBYTE(v10) = 4;
  memset_0(TlsValue, 0, 0x88uLL);
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v11, TlsValue);
  }
  v12 = *((_DWORD *)v29 + 42);
  if ( (unsigned __int8)PsmIsValidKey(a2) )
  {
    if ( a4 >= 0xC && RtlValidSid(a3) && RtlLengthSid(a3) == a4 )
    {
      if ( (unsigned __int8)PsmIsValidKey(a2) && RtlValidSid(a3) )
        RtlLengthSid(a3);
      v13 = v34;
      v14 = 232LL;
      do
      {
        if ( v14 == -2147483414 )
          break;
        v15 = *(unsigned __int16 *)((char *)v13 + a2 - (char *)v34);
        if ( !v15 )
          break;
        *v13++ = v15;
        --v14;
      }
      while ( v14 );
      v16 = v13 - 1;
      if ( v14 )
        v16 = v13;
      *v16 = 0;
      RtlCopySid(0x44u, DestinationSid, a3);
      v36 = v12;
      v17 = HampAppFind(
              (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)v29 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                              - 48LL * *((unsigned __int8 *)v29 + 164)
                                              - 16),
              (struct _HAM_APPLICATION_INFO *)v34);
      v18 = v17;
      if ( v17 )
      {
        HampAppAcquireLockShared(v17);
        v9 = *((unsigned __int16 *)v18 + 308);
        v10 = (*((_DWORD *)v18 + 155) >> 5) & 7;
        HampAppReleaseLockShared(v18);
        if ( v10 == 4 )
          v10 = 3;
        v19 = v30;
        *(_DWORD *)a5 = v10;
        v20 = 0;
        *v19 = v9;
        CemRcObjectDereference(v18);
      }
      else
      {
        RegistryTerminateReason = HampUtilQueryRegistryTerminateReason(
                                    v34,
                                    DestinationSid,
                                    (enum _HAM_TERMINATE_REASON *)&v28);
        v9 = v28;
        v20 = RegistryTerminateReason;
        if ( RegistryTerminateReason >= 0 )
        {
          *(_DWORD *)a5 = 3;
          LOBYTE(v10) = 3;
          v20 = 0;
          *(_DWORD *)v30 = v9;
        }
      }
    }
    else
    {
      v20 = -1073741584;
    }
  }
  else
  {
    v20 = -1073741585;
  }
  v21 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v21, 0LL);
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v28 = v9;
    v27 = v10;
    LODWORD(v30) = v20;
    v31 = *((_DWORD *)v29 + 42);
    v57 = &v28;
    v55 = &v27;
    v53 = &v31;
    v58 = 4LL;
    v56 = 1LL;
    v54 = 4LL;
    v23 = a3[1];
    v50 = a3;
    v52 = 0;
    v51 = 4 * v23 + 8;
    if ( a2 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( *(_WORD *)&a2[2 * v24] );
      v25 = 2 * v24 + 2;
    }
    else
    {
      a2 = (char *)&word_1800BBB1C;
      v25 = 2;
    }
    v48 = v25;
    v46 = 4LL;
    v45 = &v30;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    EventDescriptor.Keyword = 8LL;
    v47 = a2;
    v49 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v42 = &unk_1800CDE1F;
    UserData.Reserved = 2;
    v43 = 96;
    v44 = 1;
    LODWORD(v29) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  return v20;
}
