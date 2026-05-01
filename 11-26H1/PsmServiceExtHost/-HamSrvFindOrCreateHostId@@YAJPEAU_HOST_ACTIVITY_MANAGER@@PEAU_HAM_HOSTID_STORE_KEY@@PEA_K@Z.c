/*
 * XREFs of ?HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18003546C
 * Callers:
 *     HamRpcSrvFindOrCreateHostId @ 0x180035450 (HamRpcSrvFindOrCreateHostId.c)
 * Callees:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180035880 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvFindOrCreateHostId(struct _HOST_ACTIVITY_MANAGER *a1, wchar_t *a2, unsigned __int64 *a3)
{
  DWORD v6; // edi
  __int64 v7; // rsi
  unsigned __int64 v8; // r15
  const wchar_t *v9; // rdi
  char *v10; // r14
  int v11; // eax
  unsigned int v12; // r13d
  DWORD v13; // r12d
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // esi
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v22; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F0h] [rbp-10h] BYREF
  void *v25; // [rsp+100h] [rbp+0h]
  int v26; // [rsp+108h] [rbp+8h]
  int v27; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v29; // [rsp+120h] [rbp+20h]
  int v30; // [rsp+128h] [rbp+28h]
  int v31; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v32; // [rsp+130h] [rbp+30h]
  __int64 v33; // [rsp+138h] [rbp+38h]
  wchar_t *v34; // [rsp+140h] [rbp+40h]
  int v35; // [rsp+148h] [rbp+48h]
  int v36; // [rsp+14Ch] [rbp+4Ch]
  const wchar_t *v37; // [rsp+150h] [rbp+50h]
  int v38; // [rsp+158h] [rbp+58h]
  int v39; // [rsp+15Ch] [rbp+5Ch]
  EVENT_DESCRIPTOR *v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  char *v42; // [rsp+170h] [rbp+70h]
  int v43; // [rsp+178h] [rbp+78h]
  int v44; // [rsp+17Ch] [rbp+7Ch]
  unsigned int *v45; // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+188h] [rbp+88h]

  memset_0(TlsValue, 0, 0x88uLL);
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v6, TlsValue);
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    *(_DWORD *)&v22.Level = 260;
    *(_QWORD *)&EventDescriptor.Id = off_1800E12B8;
    *(_DWORD *)&v22.Id = 184549376;
    v22.Keyword = 64LL;
    LODWORD(EventDescriptor.Keyword) = *(unsigned __int16 *)off_1800E12B8;
    v25 = &unk_1800CF647;
    HIDWORD(EventDescriptor.Keyword) = 2;
    v26 = 23;
    v27 = 1;
    v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &v22, 0LL, 0LL, 2u, (PEVENT_DATA_DESCRIPTOR)&EventDescriptor);
  }
  v7 = -1LL;
  v8 = -1LL;
  v20 = -1LL;
  if ( (unsigned __int8)PsmIsValidKey(a2)
    && (v9 = a2 + 268, wcsnlen(a2 + 268, 0x100uLL) != 256)
    && (v10 = (char *)(a2 + 232), RtlValidSid(a2 + 232)) )
  {
    v11 = HampHostIdStoreFindOrCreateIdForKey(
            (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 792),
            (struct _HAM_HOSTID_STORE_KEY *)a2,
            &v20);
    v8 = v20;
    v12 = v11;
    if ( v11 >= 0 )
    {
      *a3 = v20;
      v12 = 0;
    }
  }
  else
  {
    a2[231] = 0;
    v9 = a2 + 268;
    a2[523] = 0;
    v12 = -1073741585;
    v10 = (char *)(a2 + 232);
  }
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v13, 0LL);
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v19 = *((_DWORD *)a2 + 133);
    v45 = &v19;
    *(_QWORD *)&v22.Id = v8;
    v21 = v12;
    v46 = 4LL;
    v14 = (unsigned __int8)v10[1];
    v42 = v10;
    v44 = 0;
    v41 = 8LL;
    v43 = 4 * v14 + 8;
    v40 = &v22;
    if ( v9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v9[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v9 = &word_1800BBB1C;
      v16 = 2;
    }
    v37 = v9;
    v38 = v16;
    v39 = 0;
    if ( a2 )
    {
      do
        ++v7;
      while ( a2[v7] );
      v17 = 2 * v7 + 2;
    }
    else
    {
      a2 = (wchar_t *)&word_1800BBB1C;
      v17 = 2;
    }
    v36 = 0;
    v32 = &v21;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v33 = 4LL;
    EventDescriptor.Keyword = 8LL;
    v34 = a2;
    v35 = v17;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v29 = &unk_1800CE3E4;
    UserData.Reserved = 2;
    v30 = 83;
    v31 = 1;
    LODWORD(v20) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  return v12;
}
