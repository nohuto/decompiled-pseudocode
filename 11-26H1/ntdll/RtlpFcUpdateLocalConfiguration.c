/*
 * XREFs of RtlpFcUpdateLocalConfiguration @ 0x1800137F4
 * Callers:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180014134 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcWnfCallback @ 0x180014340 (RtlpFcWnfCallback.c)
 * Callees:
 *     RtlTryAcquireSRWLockExclusive @ 0x180013650 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlpFcMapSingleBuffer @ 0x180013A3C (RtlpFcMapSingleBuffer.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180013B08 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlBackoff @ 0x180013BB0 (RtlBackoff.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x180013C40 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtQuerySystemInformationEx @ 0x180161D10 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     RtlpFcSectionTypeToBufferType @ 0x18016F764 (RtlpFcSectionTypeToBufferType.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFcUpdateLocalConfiguration(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 *v8; // rsi
  unsigned __int64 v9; // rcx
  int SystemInformation; // ebx
  __int64 v11; // rdi
  int v12; // eax
  char *v13; // rdi
  __int64 v14; // rsi
  HANDLE *v15; // rdi
  __int64 v17; // rtt
  unsigned int v18; // r8d
  unsigned int v19; // eax
  __int64 v20; // r10
  int v21; // r8d
  _QWORD *v22; // r9
  _DWORD v23[4]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v26; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v28; // [rsp+D8h] [rbp-28h] BYREF

  memset(v24, 0, sizeof(v24));
  memset_thunk_772440563353939046(v25, 0, 0x68uLL);
  memset_thunk_772440563353939046(v27, 0, 0x60uLL);
  v6 = 4LL;
  if ( byte_1801CB8C8 )
  {
    SystemInformation = -1073741058;
    goto LABEL_17;
  }
  if ( a3 )
  {
    RtlAcquireSRWLockExclusive(a1);
  }
  else if ( !RtlTryAcquireSRWLockExclusive((volatile signed __int32 *)a1) )
  {
    SystemInformation = -1073741608;
    goto LABEL_17;
  }
  v8 = (__int64 *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 8 + 8 * (*(_QWORD *)(a1 + 8) & 1LL) + 216) >= a2 )
  {
    SystemInformation = 0;
  }
  else
  {
    v23[0] = 0;
    while ( 1 )
    {
      _m_prefetchw(v8);
      v9 = *v8 & 1 | ((*v8 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
      if ( v9 < 2 )
        __fastfail(0xEu);
      v17 = *v8;
      if ( v17 == _InterlockedCompareExchange64(v8, v9, *v8) )
        break;
      RtlBackoff(v23);
    }
    v18 = 0;
    do
    {
      v19 = RtlpFcSectionTypeToBufferType(v18);
      v18 = v21 + 1;
      *v22 = *(_QWORD *)(v20 + 24LL * v19 + 24);
    }
    while ( v18 < 4 );
    RtlpFcBufferManagerDereferenceBuffers(a1 + 8, v20 + 24);
    SystemInformation = NtQuerySystemInformationEx(211LL, v24, 32LL, v25, 104, 0LL, v23[0]);
    if ( SystemInformation >= 0 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = RtlpFcSectionTypeToBufferType((unsigned int)v11);
        SystemInformation = RtlpFcMapSingleBuffer(&v25[3 * v11 + 1], &v27[24 * v12]);
        if ( SystemInformation < 0 )
          break;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= 4 )
        {
          RtlpFcBufferManagerUpdateBuffers(a1 + 8, v25[0], v27);
          break;
        }
      }
    }
  }
  RtlReleaseSRWLockExclusive(a1, v7);
LABEL_17:
  v13 = &v28;
  v14 = 4LL;
  do
  {
    if ( *(_QWORD *)v13 )
      NtUnmapViewOfSection(-1LL, *(_QWORD *)v13);
    v13 += 24;
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
  return (unsigned int)SystemInformation;
}
