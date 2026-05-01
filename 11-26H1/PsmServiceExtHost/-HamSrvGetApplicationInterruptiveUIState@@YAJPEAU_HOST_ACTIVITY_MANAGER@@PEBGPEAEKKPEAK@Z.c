/*
 * XREFs of ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180015200
 * Callers:
 *     HamRpcSrvGetApplicationInterruptiveUIState @ 0x1800151B0 (HamRpcSrvGetApplicationInterruptiveUIState.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x1800170CC (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180036468 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetApplicationInterruptiveUIState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  char v9; // r15
  DWORD v10; // edi
  unsigned int v11; // edi
  _WORD *v12; // rdx
  __int64 v13; // r8
  __int16 v14; // ax
  _WORD *v15; // rax
  struct _HAM_APPLICATION *v16; // rax
  struct _HAM_APPLICATION *v17; // r14
  unsigned int InterruptiveUIState; // eax
  DWORD v19; // ebx
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  char v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v26; // [rsp+38h] [rbp-C8h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v27; // [rsp+40h] [rbp-C0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v30[464]; // [rsp+F0h] [rbp-10h] BYREF
  char DestinationSid[68]; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v32; // [rsp+304h] [rbp+204h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+310h] [rbp+210h] BYREF
  void *v34; // [rsp+320h] [rbp+220h]
  int v35; // [rsp+328h] [rbp+228h]
  int v36; // [rsp+32Ch] [rbp+22Ch]
  unsigned int *v37; // [rsp+330h] [rbp+230h]
  __int64 v38; // [rsp+338h] [rbp+238h]
  char *v39; // [rsp+340h] [rbp+240h]
  int v40; // [rsp+348h] [rbp+248h]
  int v41; // [rsp+34Ch] [rbp+24Ch]
  unsigned __int8 *v42; // [rsp+350h] [rbp+250h]
  int v43; // [rsp+358h] [rbp+258h]
  int v44; // [rsp+35Ch] [rbp+25Ch]
  unsigned int *v45; // [rsp+360h] [rbp+260h]
  __int64 v46; // [rsp+368h] [rbp+268h]
  char *v47; // [rsp+370h] [rbp+270h]
  __int64 v48; // [rsp+378h] [rbp+278h]

  v27 = a1;
  memset_0(v30, 0, 0x218uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CDE80);
  v9 = 0;
  memset_0(TlsValue, 0, 0x88uLL);
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v10, TlsValue);
  }
  v11 = 0;
  if ( (unsigned __int8)PsmIsValidKey(a2) )
  {
    if ( a4 >= 0xC && RtlValidSid(a3) && RtlLengthSid(a3) == a4 )
    {
      if ( (unsigned __int8)PsmIsValidKey(a2) && RtlValidSid(a3) )
        RtlLengthSid(a3);
      v12 = v30;
      v13 = 232LL;
      do
      {
        if ( v13 == -2147483414 )
          break;
        v14 = *(_WORD *)((char *)v12 + a2 - v30);
        if ( !v14 )
          break;
        *v12++ = v14;
        --v13;
      }
      while ( v13 );
      v15 = v12 - 1;
      if ( v13 )
        v15 = v12;
      *v15 = 0;
      RtlCopySid(0x44u, DestinationSid, a3);
      v32 = a5;
      v16 = HampAppFind(v27, (struct _HAM_APPLICATION_INFO *)v30);
      v17 = v16;
      if ( v16 )
      {
        InterruptiveUIState = HampAppGetInterruptiveUIState(v16);
        v9 = InterruptiveUIState;
        *a6 = InterruptiveUIState;
        CemRcObjectDereference(v17);
      }
      else
      {
        v11 = -1073741275;
      }
    }
    else
    {
      v11 = -1073741584;
    }
  }
  else
  {
    v11 = -1073741585;
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v25 = a5;
    v47 = &v24;
    v24 = v9;
    v45 = &v25;
    v26 = v11;
    v48 = 1LL;
    v46 = 4LL;
    v21 = a3[1];
    v42 = a3;
    v44 = 0;
    v43 = 4 * v21 + 8;
    if ( a2 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_WORD *)&a2[2 * v22] );
      v23 = 2 * v22 + 2;
    }
    else
    {
      a2 = (char *)&word_1800BBB1C;
      v23 = 2;
    }
    v40 = v23;
    v38 = 4LL;
    v37 = &v26;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v39 = a2;
    v41 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v34 = &unk_1800CEE52;
    UserData.Reserved = 2;
    v35 = 96;
    v36 = 1;
    LODWORD(v27) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  v19 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v19, 0LL);
  }
  return v11;
}
