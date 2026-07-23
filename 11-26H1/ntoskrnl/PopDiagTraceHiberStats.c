/*
 * XREFs of PopDiagTraceHiberStats @ 0x140AF79E8
 * Callers:
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PpmConvertTime @ 0x1402F32B0 (PpmConvertTime.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1404E1064 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     PopComputeDerivedHiberStats @ 0x140AF7DF8 (PopComputeDerivedHiberStats.c)
 *     PopPotsLogHibernatePerformance @ 0x140AF7EC0 (PopPotsLogHibernatePerformance.c)
 *     PopQpcTimeInMs @ 0x140C0CF00 (PopQpcTimeInMs.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140C0EEA0 (PopSstDiagQueryResumeTimestamp.c)
 */

BOOLEAN __fastcall PopDiagTraceHiberStats(int a1)
{
  int v1; // eax
  void *v2; // rdi
  __int64 ResumeTimestamp; // rax
  unsigned __int64 v4; // rbx
  ULONG *p_Size; // r15
  unsigned __int64 *v6; // r12
  _BYTE *Data; // r13
  __int64 *v8; // r14
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rax
  int v13; // esi
  ULONG DataSize; // ebx
  BOOLEAN result; // al
  _QWORD DestinationString[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h]
  __int128 v19; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v20[480]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+258h] [rbp+150h] BYREF

  LODWORD(v17) = a1;
  v19 = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  v1 = PopOpenPowerKey((__int64)DestinationString);
  v2 = (void *)DestinationString[0];
  if ( v1 < 0 )
    v2 = 0LL;
  ResumeTimestamp = PopSstDiagQueryResumeTimestamp();
  v4 = qword_140F10B38;
  qword_140F10B40 = ResumeTimestamp;
  dword_140F10C44 = dword_140F10924;
  dword_140F10C40 = dword_140F109B8;
  v18 = qword_140F10B38;
  dword_140F10BF0 = PopQpcTimeInMs(&qword_140F10A18, &qword_140F10A20);
  qword_140F10AA0 = (unsigned int)PopQpcTimeInMs(&qword_140F109E8, &qword_140F10AA8);
  PopComputeDerivedHiberStats(&qword_140F10A58, v4, &v19);
  p_Size = &UserData.Size;
  DestinationString[0] = 59LL;
  v6 = (unsigned __int64 *)v20;
  Data = v20;
  v8 = &qword_140004D90;
  do
  {
    v9 = *(_DWORD *)v8;
    v10 = *(v8 - 1);
    if ( (*(_DWORD *)v8 & 0x40000000) != 0 )
      v11 = (unsigned __int64 *)&v20[v10 - 8];
    else
      v11 = (unsigned __int64 *)((char *)&qword_140F10A58 + v10);
    if ( (v9 & 2) != 0 )
      v12 = *v11;
    else
      v12 = *(unsigned int *)v11;
    *v6 = v12;
    if ( v9 < 0 )
    {
      v12 /= v4;
      *v6 = v12;
    }
    if ( (v9 & 0x10000000) != 0 )
      *v6 = PpmConvertTime(v12, PopQpcFrequency, 0x3E8uLL);
    v13 = *(_DWORD *)v8 & 0x20;
    DataSize = v13 != 0 ? 8 : 4;
    if ( v2 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], (PCWSTR)*(v8 - 2));
      ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, v13 != 0 ? 11 : 4, Data, DataSize);
    }
    *((_QWORD *)p_Size - 1) = Data;
    *p_Size = DataSize;
    Data += 8;
    v4 = v18;
    v8 += 3;
    p_Size[1] = 0;
    ++v6;
    p_Size += 4;
    --DestinationString[0];
  }
  while ( DestinationString[0] );
  qword_140F10BB8 /= v4;
  qword_140F10A60 /= v4;
  qword_140F10C48 = 1000 * qword_140F10B40 / PopQpcFrequency
                  - (unsigned int)qword_140F10AB0
                  - (unsigned int)dword_140F10AB8;
  if ( v2 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"KernelResumeIoCpuTime");
    ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140F10BB8, 4u);
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberIoCpuTime");
    ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140F10A60, 4u);
    if ( qword_140F10BE0 )
    {
      dword_140F10904 += PopQpcTimeInMs(&qword_140F10A08, &qword_140F10BE8);
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HybridBootAnimationTime");
      ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &dword_140F10904, 4u);
    }
    qword_140F10C50 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ResumeCompleteTimestamp");
    ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, 0xBu, &qword_140F10C50, 8u);
    ZwClose(v2);
  }
  result = PopPotsLogHibernatePerformance(&qword_140F10A58, (unsigned int)v17);
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_HIBER_STATS);
    if ( result )
      return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_HIBER_STATS, 0LL, 0x3Bu, &UserData);
  }
  return result;
}
