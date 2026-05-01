/*
 * XREFs of ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x18003D7A0
 * Callers:
 *     HamRpcSrvGetStateSnapshotForAumid @ 0x18003D750 (HamRpcSrvGetStateSnapshotForAumid.c)
 * Callees:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180037EF0 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x18003D130 (-HampPkgGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     CempUtilValidateSid @ 0x18003DBEC (CempUtilValidateSid.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@6@Z @ 0x18003DCC4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_tlgWrapperByVa.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetStateSnapshotForAumid(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned int a5,
        union _HAM_STATE_SNAPSHOT *a6)
{
  char StateSnapshot; // bl
  DWORD v9; // edi
  __int64 v10; // rdi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  _WORD *v14; // rcx
  __int16 v15; // ax
  _WORD *v16; // rax
  struct _HAM_PACKAGE *v17; // rax
  unsigned int v18; // edi
  struct _HAM_PACKAGE *v19; // rsi
  DWORD v20; // esi
  bool v22; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[3]; // [rsp+51h] [rbp-AFh] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+54h] [rbp-ACh] BYREF
  UINT32 packageFamilyNameLength; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v26; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v27; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 *v29; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v30[8]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v31[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v32; // [rsp+140h] [rbp+40h]
  unsigned int v33; // [rsp+148h] [rbp+48h]
  _BYTE TlsValue[144]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v35[12]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v36; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v37; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2B0h] [rbp+1B0h] BYREF
  void *v39; // [rsp+2C0h] [rbp+1C0h]
  int v40; // [rsp+2C8h] [rbp+1C8h]
  int v41; // [rsp+2CCh] [rbp+1CCh]
  WCHAR packageFamilyName[72]; // [rsp+2D0h] [rbp+1D0h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+360h] [rbp+260h] BYREF

  v27 = a1;
  memset_0(v35, 0, 0xCCuLL);
  StateSnapshot = 0;
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v39 = &unk_1800CF5AE;
    UserData.Reserved = 2;
    v40 = 39;
    v41 = 1;
    packageRelativeApplicationIdLength = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  memset_0(TlsValue, 0, 0x88uLL);
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v9, TlsValue);
  }
  v10 = 65LL;
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  if ( ParseApplicationUserModelId(
         a2,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId) )
  {
    v18 = -1073741585;
  }
  else if ( (int)CempUtilValidateSid(a3) < 0 )
  {
    v18 = -1073741584;
  }
  else
  {
    memset_0(v30, 0, 0xCCuLL);
    v14 = v30;
    do
    {
      if ( v10 == -2147483581 )
        break;
      v15 = v14[296];
      if ( !v15 )
        break;
      *v14++ = v15;
      --v10;
    }
    while ( v10 );
    v16 = v14 - 1;
    if ( v10 )
      v16 = v14;
    *v16 = 0;
    RtlCopySid(0x44u, (char *)v31 + 4, a3);
    v33 = a5;
    v35[0] = v30[0];
    v35[1] = v30[1];
    v35[2] = v30[2];
    v35[3] = v30[3];
    v35[4] = v30[4];
    v35[5] = v30[5];
    v35[6] = v30[6];
    v35[7] = v30[7];
    v35[8] = v31[0];
    v35[9] = v31[1];
    v35[10] = v31[2];
    v35[11] = v31[3];
    v36 = v32;
    v37 = a5;
    v17 = HampPkgFindInManager(v27, (struct _HAM_PACKAGE_INFO *)v35);
    v18 = 0;
    v19 = v17;
    if ( v17 )
    {
      StateSnapshot = HampPkgGetStateSnapshot(v17, packageRelativeApplicationId);
      *(_BYTE *)a6 = StateSnapshot;
      CemRcObjectDereference(v19);
    }
    else
    {
      v18 = -1073741275;
    }
  }
  v20 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v20, 0LL);
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v26 = a5;
    v29 = a3;
    v22 = (StateSnapshot & 2) != 0;
    v23[0] = StateSnapshot & 1;
    *(_QWORD *)&EventDescriptor.Id = a2;
    LODWORD(v27) = v18;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v11,
      (unsigned int)&unk_1800CE9B9,
      v12,
      v13,
      (__int64)&v27,
      (__int64)&EventDescriptor,
      (__int64)&v29,
      (__int64)&v26,
      (__int64)v23,
      (__int64)&v22);
  }
  return v18;
}
