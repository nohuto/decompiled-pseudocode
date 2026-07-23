/*
 * XREFs of RtlCapabilityCheck @ 0x180059720
 * Callers:
 *     RtlCapabilityCheckForSingleSessionSku @ 0x180110150 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlpCapabilityCheckSystemCapability @ 0x180059088 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCheckTokenCapability @ 0x180059240 (RtlCheckTokenCapability.c)
 *     RtlIsMultiSessionSku @ 0x1800596E0 (RtlIsMultiSessionSku.c)
 *     RtlQueryPerformanceCounter @ 0x180059D10 (RtlQueryPerformanceCounter.c)
 *     RtlCheckTokenMembershipEx @ 0x180059E10 (RtlCheckTokenMembershipEx.c)
 *     RtlRunOnceBeginInitialize @ 0x18005A390 (RtlRunOnceBeginInitialize.c)
 *     EtwEventWriteTransfer @ 0x18005A770 (EtwEventWriteTransfer.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18005B900 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlRunOnceComplete @ 0x18008F440 (RtlRunOnceComplete.c)
 *     RtlReportCriticalFailure @ 0x18008F548 (RtlReportCriticalFailure.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016E69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  BOOLEAN v4; // r15
  BOOLEAN v5; // di
  BOOLEAN v6; // r13
  NTSTATUS v9; // ebx
  size_t v10; // rax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  bool v13; // zf
  BOOLEAN v14; // di
  NTSTATUS v15; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  BOOLEAN v20; // cl
  BOOLEAN v21; // [rsp+38h] [rbp-D0h] BYREF
  BOOLEAN IsMember; // [rsp+39h] [rbp-CFh] BYREF
  BOOLEAN v23; // [rsp+3Ah] [rbp-CEh] BYREF
  BOOLEAN v24; // [rsp+3Bh] [rbp-CDh] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  BOOLEAN HasCapabilitya[4]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-C4h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  LARGE_INTEGER v29; // [rsp+50h] [rbp-B8h] BYREF
  ULONG ResultLength[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR PerformanceCounter; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+78h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  __int128 KeyValueInformation; // [rsp+B8h] [rbp-50h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C8h] [rbp-40h] BYREF
  void *v37; // [rsp+D8h] [rbp-30h]
  int v38; // [rsp+E0h] [rbp-28h]
  int v39; // [rsp+E4h] [rbp-24h]
  LARGE_INTEGER *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  BOOLEAN *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  BOOLEAN *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  int *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  BOOLEAN *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  __int64 SidToCheck; // [rsp+138h] [rbp+30h] BYREF
  int v51; // [rsp+140h] [rbp+38h]
  int v52; // [rsp+144h] [rbp+3Ch]
  _BYTE CapabilityGroupSid[48]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+178h] [rbp+70h] BYREF

  ResultLength[0] = 0;
  v4 = 0;
  KeyHandle = 0LL;
  v5 = 0;
  *(_QWORD *)&PerformanceCounter.Id = 0LL;
  v6 = 0;
  v29.QuadPart = 0LL;
  LOBYTE(v25) = 0;
  v27 = 0;
  v33 = 0LL;
  LOWORD(v28) = 1280;
  memset(&ObjectAttributes, 0, 44);
  HasCapabilitya[0] = 0;
  v21 = 0;
  KeyValueInformation = 0LL;
  IsMember = 0;
  v23 = 0;
  v24 = 0;
  RtlQueryPerformanceCounter((PLARGE_INTEGER)&PerformanceCounter);
  if ( !CapabilityName || !HasCapability )
  {
    v9 = -1073741811;
    goto LABEL_20;
  }
  *HasCapability = 0;
  v9 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
  if ( v9 < 0 )
    goto LABEL_20;
  if ( !RtlIsMultiSessionSku() )
    goto LABEL_36;
  *((_QWORD *)&v33 + 1) = L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities";
  v10 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  if ( v10 >= 0xFFFE )
    LOWORD(v10) = -4;
  LOWORD(v33) = v10;
  WORD1(v33) = v10 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v33;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0
    && NtQueryValueKey(KeyHandle, CapabilityName, KeyValuePartialInformation, &KeyValueInformation, 0x10u, ResultLength) >= 0 )
  {
    LOBYTE(v25) = 1;
    SidToCheck = 0x500000000000101LL;
    v51 = 18;
    v11 = RtlCheckTokenMembershipEx(TokenHandle, &SidToCheck, 0, &IsMember);
    v5 = IsMember;
    v9 = v11;
    if ( v11 < 0 )
      goto LABEL_20;
    if ( IsMember )
      goto LABEL_14;
    *(_DWORD *)((char *)&SidToCheck + 2) = v27;
    HIWORD(SidToCheck) = v28;
    LOWORD(SidToCheck) = 513;
    v51 = 32;
    v52 = 544;
    v12 = RtlCheckTokenMembershipEx(TokenHandle, &SidToCheck, 0, &v21);
    v4 = v21;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_20;
    v13 = v21 == 0;
  }
  else
  {
LABEL_36:
    v9 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 2u, &v24);
    if ( v9 < 0 )
      goto LABEL_20;
    if ( v24 )
      goto LABEL_14;
    SidToCheck = 0x500000000000101LL;
    v51 = 18;
    v17 = RtlCheckTokenMembershipEx(TokenHandle, &SidToCheck, 0, &IsMember);
    v5 = IsMember;
    v9 = v17;
    if ( v17 < 0 )
      goto LABEL_20;
    if ( IsMember )
      goto LABEL_14;
    *(_DWORD *)((char *)&SidToCheck + 2) = v27;
    HIWORD(SidToCheck) = v28;
    LOWORD(SidToCheck) = 513;
    v51 = 32;
    v52 = 544;
    v18 = RtlCheckTokenMembershipEx(TokenHandle, &SidToCheck, 0, &v21);
    v4 = v21;
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_20;
    if ( v21 )
      goto LABEL_14;
    *(_DWORD *)((char *)&SidToCheck + 2) = v27;
    HIWORD(SidToCheck) = v28;
    LOWORD(SidToCheck) = 257;
    v51 = 4;
    v19 = RtlCheckTokenMembershipEx(TokenHandle, &SidToCheck, 2u, &v23);
    v6 = v23;
    v9 = v19;
    if ( v19 < 0 )
      goto LABEL_20;
    v13 = v23 == 0;
  }
  if ( !v13 )
  {
LABEL_14:
    v9 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, HasCapabilitya);
    if ( v9 < 0 )
      goto LABEL_20;
    *HasCapability = HasCapabilitya[0];
  }
  if ( *HasCapability && !v4 && !v5 )
    v9 = RtlpCapabilityCheckSystemCapability(TokenHandle, (const void **)CapabilityName, HasCapability);
LABEL_20:
  if ( KeyHandle )
    NtClose(KeyHandle);
  RtlQueryPerformanceCounter(&v29);
  if ( !v5 )
  {
    v14 = *HasCapability;
    if ( NtCurrentPeb()->ProcessHeap )
    {
      HasCapabilitya[0] = 0;
      v15 = RtlRunOnceBeginInitialize(&RtlpCapChkTelemetryRunOnceCtx, 0, 0LL);
      if ( v15 < 0 )
      {
        v20 = 0;
      }
      else
      {
        if ( v15 != 259
          || (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C4648),
              RtlpPerformanceCounterFrequency = MEMORY[0x7FFE0300],
              v15 = RtlRunOnceComplete(&RtlpCapChkTelemetryRunOnceCtx, 0, 0LL),
              v15 >= 0) )
        {
LABEL_26:
          if ( *(_QWORD *)&PerformanceCounter.Id
            && v29.QuadPart
            && RtlpPerformanceCounterFrequency
            && _InterlockedExchangeAdd16(&TelemetryEventThrottle, 0xFFFFu) == 1 )
          {
            if ( (unsigned int)dword_1801C4648 > 5
              && (qword_1801C4658 & 0x200000000000LL) != 0
              && (qword_1801C4660 & 0x200000000000LL) == qword_1801C4660 )
            {
              v29.QuadPart = 1000000
                           * (v29.QuadPart - *(_QWORD *)&PerformanceCounter.Id)
                           / RtlpPerformanceCounterFrequency;
              PerformanceCounter.Keyword = 0x200000000000LL;
              v40 = &v29;
              v41 = 8LL;
              v42 = HasCapabilitya;
              HasCapabilitya[0] = v4;
              v44 = &v24;
              v46 = &v25;
              v48 = &v23;
              UserData.Ptr = (unsigned __int64)off_1801C4650;
              v43 = 1LL;
              v24 = v6;
              v45 = 1LL;
              v47 = 1LL;
              v23 = v14;
              v49 = 1LL;
              *(_QWORD *)&PerformanceCounter.Id = 0x50B000000LL;
              UserData.Size = *(unsigned __int16 *)off_1801C4650;
              v37 = &unk_18019ADB4;
              UserData.Reserved = 2;
              v38 = 105;
              v39 = 1;
              v27 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EtwEventWriteTransfer(RegHandle, &PerformanceCounter, 0LL, 0LL, 7u, &UserData);
            }
            TelemetryEventThrottle = 100;
          }
          return v9;
        }
        v20 = 1;
      }
      HasCapabilitya[0] = v20;
      RtlReportCriticalFailure((unsigned int)v15, HasCapabilitya, 1LL);
      goto LABEL_26;
    }
  }
  return v9;
}
