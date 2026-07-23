/*
 * XREFs of RtlpFcUpdateLocalConfiguration @ 0x18005EF24
 * Callers:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005F864 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcWnfCallback @ 0x18005FA70 (RtlpFcWnfCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x18005ED80 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlpFcMapSingleBuffer @ 0x18005F16C (RtlpFcMapSingleBuffer.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005F238 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlBackoff @ 0x18005F2E0 (RtlBackoff.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18005F370 (RtlpFcBufferManagerUpdateBuffers.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtQuerySystemInformationEx @ 0x180161C10 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     RtlpFcSectionTypeToBufferType @ 0x18016E764 (RtlpFcSectionTypeToBufferType.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFcUpdateLocalConfiguration(PRTL_SRWLOCK SRWLock, unsigned __int64 a2, char a3)
{
  __int64 v6; // r14
  PRTL_SRWLOCK v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v11; // rdi
  int v12; // eax
  PVOID *v13; // rdi
  __int64 v14; // rsi
  HANDLE *v15; // rdi
  unsigned __int64 Value; // rtt
  unsigned int v18; // r8d
  unsigned int v19; // eax
  __int64 v20; // r10
  int v21; // r8d
  _QWORD *v22; // r9
  int v23[4]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD InputBuffer[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD SystemInformation[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v26; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v28; // [rsp+D8h] [rbp-28h] BYREF

  memset(InputBuffer, 0, sizeof(InputBuffer));
  memset_thunk_772440563353939046(SystemInformation, 0, 0x68uLL);
  memset_thunk_772440563353939046(v27, 0, 0x60uLL);
  v6 = 4LL;
  if ( byte_1801CA908 )
  {
    v10 = -1073741058;
    goto LABEL_17;
  }
  if ( a3 )
  {
    RtlAcquireSRWLockExclusive(SRWLock);
  }
  else if ( !RtlTryAcquireSRWLockExclusive(SRWLock) )
  {
    v10 = -1073741608;
    goto LABEL_17;
  }
  v7 = SRWLock + 1;
  if ( SRWLock[(SRWLock[1].Value & 1) + 28].Value >= a2 )
  {
    v10 = 0;
  }
  else
  {
    v23[0] = 0;
    while ( 1 )
    {
      _m_prefetchw(v7);
      v8 = v7->Value & 1;
      v9 = v8 | ((v7->Value & 0xFFFFFFFFFFFFFFFEuLL) + 2);
      if ( v9 < 2 )
        __fastfail(0xEu);
      Value = v7->Value;
      if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)v7, v9, v7->Value) )
        break;
      RtlBackoff(v23, v8);
    }
    v18 = 0;
    do
    {
      v19 = RtlpFcSectionTypeToBufferType(v18);
      v18 = v21 + 1;
      *v22 = *(_QWORD *)(v20 + 24LL * v19 + 24);
    }
    while ( v18 < 4 );
    RtlpFcBufferManagerDereferenceBuffers(&SRWLock[1], v20 + 24);
    v10 = NtQuerySystemInformationEx(
            SystemFeatureConfigurationSectionInformation,
            InputBuffer,
            0x20u,
            SystemInformation,
            0x68u,
            0LL);
    if ( v10 >= 0 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = RtlpFcSectionTypeToBufferType((unsigned int)v11);
        v10 = RtlpFcMapSingleBuffer(&SystemInformation[3 * v11 + 1], &v27[24 * v12]);
        if ( v10 < 0 )
          break;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= 4 )
        {
          RtlpFcBufferManagerUpdateBuffers(&SRWLock[1], SystemInformation[0], v27);
          break;
        }
      }
    }
  }
  RtlReleaseSRWLockExclusive(SRWLock);
LABEL_17:
  v13 = (PVOID *)&v28;
  v14 = 4LL;
  do
  {
    if ( *v13 )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v13);
    v13 += 3;
    --v14;
  }
  while ( v14 );
  v15 = (HANDLE *)&v26;
  do
  {
    if ( *v15 )
      NtClose(*v15);
    v15 += 3;
    --v6;
  }
  while ( v6 );
  return (unsigned int)v10;
}
