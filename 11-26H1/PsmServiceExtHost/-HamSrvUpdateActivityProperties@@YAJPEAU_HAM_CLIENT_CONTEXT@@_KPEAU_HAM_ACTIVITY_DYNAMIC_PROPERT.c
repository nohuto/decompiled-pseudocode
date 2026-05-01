/*
 * XREFs of ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180010484
 * Callers:
 *     HamRpcSrvUpdateActivityProperties @ 0x180069430 (HamRpcSrvUpdateActivityProperties.c)
 * Callees:
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18000FABC (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x180011700 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012068 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvUpdateActivityProperties(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a3)
{
  DWORD v6; // ebx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rax
  int updated; // ebx
  DWORD v17; // edi
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v26; // [rsp+100h] [rbp+0h]
  int v27; // [rsp+108h] [rbp+8h]
  int v28; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+110h] [rbp+10h] BYREF
  void *v30; // [rsp+120h] [rbp+20h]
  int v31; // [rsp+128h] [rbp+28h]
  int v32; // [rsp+12Ch] [rbp+2Ch]
  int *v33; // [rsp+130h] [rbp+30h]
  __int64 v34; // [rsp+138h] [rbp+38h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+140h] [rbp+40h]
  __int64 v36; // [rsp+148h] [rbp+48h]
  unsigned int *v37; // [rsp+150h] [rbp+50h]
  __int64 v38; // [rsp+158h] [rbp+58h]
  unsigned int *v39; // [rsp+160h] [rbp+60h]
  __int64 v40; // [rsp+168h] [rbp+68h]

  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v26 = &unk_1800CF44D;
    UserData.Reserved = 2;
    v27 = 29;
    v28 = 1;
    v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  memset_0(TlsValue, 0, 0x88uLL);
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v6, TlsValue);
  }
  v7 = *(_DWORD *)a3;
  v19 = v7;
  if ( (v7 & 0xFFF0) != 0 || HIWORD(v7) >= 8u )
    goto LABEL_51;
  if ( !HampClientIsActive(a1) )
  {
    updated = -1073741661;
    goto LABEL_43;
  }
  if ( (v19 & 0x10000) == 0 && (v7 & 1) != 0
    || (v19 & 0x20000) == 0 && (v7 & 6) != 0
    || (v19 & 0x40000) == 0 && (v7 & 8) != 0
    || (v7 & 6) >= 6
    || (v8 = *((_DWORD *)a3 + 1), (v8 & 1) == 0) && v8
    || (v8 & 0xF000) != 0
    || ((v8 & 0xE) == 0) != ((v8 & 0x30) == 0)
    || *((_BYTE *)a3 + 7)
    || (*((_BYTE *)a3 + 4) & 1) == 0 && !HIWORD(v19) )
  {
LABEL_51:
    updated = -1073741583;
    goto LABEL_43;
  }
  v9 = *((unsigned __int8 *)a1 + 164);
  v10 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v22 = a2;
  v11 = v10 - 48 * v9 + 424;
  v12 = v11 + 16;
  RtlAcquireSRWLockShared(v11 + 16);
  v13 = *(_BYTE *)(v11 + 8) & 1;
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
  {
    v15 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 )
      goto LABEL_39;
  }
  else
  {
    v11 = *(_QWORD *)v11;
    while ( v11 )
    {
      v14 = HampActCompareByHandle(&v22, (void *)v11);
      if ( v14 < 0 )
      {
        v15 = *(_QWORD *)v11;
      }
      else
      {
        if ( v14 <= 0 )
          break;
        v15 = *(_QWORD *)(v11 + 8);
      }
      if ( v13 && v15 )
LABEL_39:
        v11 ^= v15;
      else
        v11 = v15;
    }
    if ( !v11 )
      goto LABEL_33;
    if ( *(_QWORD *)(v11 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
        __fastfail(0xEu);
      goto LABEL_33;
    }
  }
  v11 = 0LL;
LABEL_33:
  RtlReleaseSRWLockShared(v12);
  if ( !v11 )
  {
LABEL_36:
    updated = -1073741275;
    goto LABEL_43;
  }
  if ( *(struct _HAM_CLIENT_CONTEXT **)(v11 + 64) != a1 )
  {
    CemRcObjectDereference(v11);
    goto LABEL_36;
  }
  updated = HampActUpdateProperties((struct _HAM_ACTIVITY *)v11, a3);
  if ( updated >= 0 )
    updated = 0;
  CemRcObjectDereference(v11);
LABEL_43:
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v17, 0LL);
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v19 = *((_DWORD *)a3 + 1);
    v20 = *(_DWORD *)a3;
    v39 = &v19;
    v37 = &v20;
    p_EventDescriptor = &EventDescriptor;
    v33 = &v21;
    v29.Ptr = (ULONGLONG)off_1800E12B8;
    v40 = 4LL;
    v38 = 4LL;
    v36 = 8LL;
    v34 = 4LL;
    *(_QWORD *)&UserData.Size = 8LL;
    *(_QWORD *)&EventDescriptor.Id = a2;
    v21 = updated;
    UserData.Ptr = 0x2040B000000LL;
    v29.Size = *(unsigned __int16 *)off_1800E12B8;
    v30 = &unk_1800CF55D;
    v29.Reserved = 2;
    v31 = 69;
    v32 = 1;
    LODWORD(v22) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, (PCEVENT_DESCRIPTOR)&UserData, 0LL, 0LL, 6u, &v29);
  }
  return (unsigned int)updated;
}
