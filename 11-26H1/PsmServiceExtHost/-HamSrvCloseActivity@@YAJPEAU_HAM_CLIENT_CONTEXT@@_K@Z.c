/*
 * XREFs of ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180010938
 * Callers:
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180046664 (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     HamRpcSrvCloseActivity @ 0x180068200 (HamRpcSrvCloseActivity.c)
 * Callees:
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x180011700 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012068 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800126A4 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCloseActivity(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  DWORD v4; // ebx
  int v5; // esi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // r15
  int v10; // edi
  int v11; // eax
  __int64 v12; // rax
  int v13; // edi
  DWORD v14; // ebx
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  void *v21; // [rsp+F0h] [rbp-10h]
  int v22; // [rsp+F8h] [rbp-8h]
  int v23; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+100h] [rbp+0h] BYREF
  void *v25; // [rsp+110h] [rbp+10h]
  int v26; // [rsp+118h] [rbp+18h]
  int v27; // [rsp+11Ch] [rbp+1Ch]
  unsigned int *v28; // [rsp+120h] [rbp+20h]
  __int64 v29; // [rsp+128h] [rbp+28h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+130h] [rbp+30h]
  __int64 v31; // [rsp+138h] [rbp+38h]

  memset_0(TlsValue, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v21 = &unk_1800CF192;
    UserData.Reserved = 2;
    v22 = 18;
    v23 = 1;
    v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  if ( HampLockTrackerId == -1 )
    goto LABEL_10;
  if ( !TlsGetValue(HampLockTrackerId) )
  {
    v4 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker == 0");
      TlsSetValue(v4, TlsValue);
    }
LABEL_10:
    v5 = 1;
    goto LABEL_11;
  }
  v5 = 0;
LABEL_11:
  if ( !HampClientIsActive(a1) )
  {
    v13 = -1073741661;
    goto LABEL_33;
  }
  v6 = *((unsigned __int8 *)a1 + 164);
  v7 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v17 = a2;
  v8 = v7 - 48 * v6 + 424;
  v9 = v8 + 16;
  RtlAcquireSRWLockShared(v8 + 16);
  v10 = *(_BYTE *)(v8 + 8) & 1;
  if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
  {
    v12 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 )
      goto LABEL_29;
    goto LABEL_43;
  }
  v8 = *(_QWORD *)v8;
  while ( v8 )
  {
    v11 = HampActCompareByHandle(&v17, (void *)v8);
    if ( v11 < 0 )
    {
      v12 = *(_QWORD *)v8;
    }
    else
    {
      if ( v11 <= 0 )
        break;
      v12 = *(_QWORD *)(v8 + 8);
    }
    if ( v10 && v12 )
LABEL_29:
      v8 ^= v12;
    else
      v8 = v12;
  }
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
        __fastfail(0xEu);
      goto LABEL_23;
    }
LABEL_43:
    v8 = 0LL;
  }
LABEL_23:
  RtlReleaseSRWLockShared(v9);
  if ( !v8 )
  {
LABEL_26:
    v13 = -1073741275;
    goto LABEL_33;
  }
  if ( *(struct _HAM_CLIENT_CONTEXT **)(v8 + 64) != a1 )
  {
    CemRcObjectDereference(v8);
    goto LABEL_26;
  }
  v13 = HampActClose((struct _HAM_ACTIVITY *)v8);
  if ( v13 >= 0 )
    v13 = 0;
  CemRcObjectDereference(v8);
LABEL_33:
  if ( v5 )
  {
    v14 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v14, 0LL);
    }
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v31 = 8LL;
    p_EventDescriptor = &EventDescriptor;
    *(_QWORD *)&UserData.Size = 8LL;
    v28 = &v16;
    v24.Ptr = (ULONGLONG)off_1800E12B8;
    *(_QWORD *)&EventDescriptor.Id = a2;
    v16 = v13;
    v29 = 4LL;
    UserData.Ptr = 0x2040B000000LL;
    v24.Size = *(unsigned __int16 *)off_1800E12B8;
    v25 = &unk_1800CECF5;
    v24.Reserved = 2;
    v26 = 39;
    v27 = 1;
    LODWORD(v17) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, (PCEVENT_DESCRIPTOR)&UserData, 0LL, 0LL, 4u, &v24);
  }
  return (unsigned int)v13;
}
