/*
 * XREFs of ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001113C
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180039C10 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampInProcStartActivityAsync@@YAJPEAX_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180068640 (-HampInProcStartActivityAsync@@YAJPEAX_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES.c)
 *     HamRpcSrvStartExtendedExecutionAsync @ 0x18006AD40 (HamRpcSrvStartExtendedExecutionAsync.c)
 * Callees:
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x180011700 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012068 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180012138 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvStartActivityAsync(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v7; // r13
  DWORD v8; // ebx
  int v9; // r15d
  unsigned int v10; // r12d
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  int v14; // edi
  int v15; // eax
  unsigned __int64 v16; // rax
  int started; // edi
  DWORD v18; // ebx
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v28; // [rsp+100h] [rbp+0h]
  int v29; // [rsp+108h] [rbp+8h]
  int v30; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+110h] [rbp+10h] BYREF
  void *v32; // [rsp+120h] [rbp+20h]
  int v33; // [rsp+128h] [rbp+28h]
  int v34; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  __int64 *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  unsigned int *v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  char *v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]

  v4 = a3;
  v22 = a3;
  v24 = a2;
  memset_0(TlsValue, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v28 = &unk_1800CE511;
    UserData.Reserved = 2;
    v29 = 23;
    v30 = 1;
    v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v7 = 0LL;
  v23 = 0LL;
  if ( HampLockTrackerId == -1 )
    goto LABEL_10;
  if ( !TlsGetValue(HampLockTrackerId) )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker == 0");
      TlsSetValue(v8, TlsValue);
    }
LABEL_10:
    v9 = 1;
    goto LABEL_11;
  }
  v9 = 0;
LABEL_11:
  v10 = 0;
  v21 = 0;
  if ( !HampClientIsActive((struct _HAM_CLIENT_CONTEXT *)a1) )
  {
    started = -1073741661;
    goto LABEL_35;
  }
  if ( a4 )
  {
    started = -1073741822;
    goto LABEL_35;
  }
  if ( v4 > 1 )
  {
    started = -1073741583;
    goto LABEL_35;
  }
  v11 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)&EventDescriptor.Id = v24;
  v12 = (v11 & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *(unsigned __int8 *)(a1 + 164) + 424;
  v13 = v12 + 16;
  RtlAcquireSRWLockShared(v12 + 16);
  v14 = *(_BYTE *)(v12 + 8) & 1;
  if ( (*(_BYTE *)(v12 + 8) & 1) != 0 )
  {
    v16 = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 )
      goto LABEL_31;
    goto LABEL_45;
  }
  v12 = *(_QWORD *)v12;
  while ( v12 )
  {
    v15 = HampActCompareByHandle(&EventDescriptor, (void *)v12);
    if ( v15 < 0 )
    {
      v16 = *(_QWORD *)v12;
    }
    else
    {
      if ( v15 <= 0 )
        break;
      v16 = *(_QWORD *)(v12 + 8);
    }
    if ( v14 && v16 )
LABEL_31:
      v12 ^= v16;
    else
      v12 = v16;
  }
  if ( v12 )
  {
    if ( *(_QWORD *)(v12 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24)) <= 1 )
        __fastfail(0xEu);
      goto LABEL_25;
    }
LABEL_45:
    v12 = 0LL;
  }
LABEL_25:
  RtlReleaseSRWLockShared(v13);
  if ( !v12 )
  {
LABEL_28:
    LOBYTE(v4) = v22;
    started = -1073741275;
    goto LABEL_35;
  }
  if ( *(_QWORD *)(v12 + 64) != a1 )
  {
    CemRcObjectDereference(v12);
    goto LABEL_28;
  }
  LOBYTE(v4) = v22;
  started = HampActStartAsync(v12, v22, &v21, &v23);
  if ( started >= 0 )
    started = 0;
  CemRcObjectDereference(v12);
  v10 = v21;
  v7 = v23;
LABEL_35:
  if ( v9 )
  {
    v18 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v18, 0LL);
    }
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v42 = 8LL;
    v43 = &v20;
    p_EventDescriptor = &EventDescriptor;
    v39 = &v22;
    v37 = &v24;
    v35 = &v21;
    v31.Ptr = (ULONGLONG)off_1800E12B8;
    v40 = 4LL;
    v38 = 8LL;
    v36 = 4LL;
    *(_QWORD *)&UserData.Size = 8LL;
    v20 = v4;
    *(_QWORD *)&EventDescriptor.Id = v7;
    v22 = v10;
    v21 = started;
    v44 = 1LL;
    UserData.Ptr = 0x2040B000000LL;
    v31.Size = *(unsigned __int16 *)off_1800E12B8;
    v32 = &unk_1800CE0D8;
    v31.Reserved = 2;
    v33 = 84;
    v34 = 1;
    LODWORD(v23) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, (PCEVENT_DESCRIPTOR)&UserData, 0LL, 0LL, 7u, &v31);
  }
  return (unsigned int)started;
}
