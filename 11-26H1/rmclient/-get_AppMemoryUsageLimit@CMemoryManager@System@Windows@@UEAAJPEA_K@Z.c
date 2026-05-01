/*
 * XREFs of ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x180002480
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180002CB0 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003270 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::get_AppMemoryUsageLimit(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  int InformationProcess; // eax
  ModernResourceManagerProxy *v6; // r15
  signed int v7; // edi
  NTSTATUS v8; // eax
  ModernResourceManagerProxy *v9; // r15
  NTSTATUS v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  signed int v13; // eax
  signed int v15; // eax
  signed int v16; // eax
  int v17; // [rsp+38h] [rbp-89h] BYREF
  int v18; // [rsp+3Ch] [rbp-85h] BYREF
  ULONG v19; // [rsp+40h] [rbp-81h] BYREF
  __int128 v20; // [rsp+48h] [rbp-79h] BYREF
  __int64 v21; // [rsp+58h] [rbp-69h]
  __int128 v22; // [rsp+60h] [rbp-61h] BYREF
  __int128 v23; // [rsp+70h] [rbp-51h]
  _OWORD ProcessInformation[2]; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int64 v25; // [rsp+A0h] [rbp-21h]
  _OWORD SystemInformation[4]; // [rsp+A8h] [rbp-19h] BYREF

  v3 = 0LL;
  if ( !a2 )
    return 2147942487LL;
  v25 = 0LL;
  v19 = 0;
  v4 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v22 = 0LL;
  v23 = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess < 0 )
  {
    v13 = RtlNtStatusToDosError(InformationProcess);
    v7 = v13;
    if ( v13 <= 0 )
      goto LABEL_16;
    goto LABEL_27;
  }
  if ( (int)Windows::System::CMemoryManager::Init() < 0 )
  {
    v4 = v25;
    goto LABEL_11;
  }
  v6 = Windows::System::CMemoryManager::s_pProxy;
  v18 = 0;
  v17 = 0;
  v20 = 0LL;
  v21 = 0LL;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 96);
  *((_DWORD *)v6 + 26) = GetCurrentThreadId();
  v7 = ModernResourceManagerProxy::RegisterWithServer(v6);
  if ( v7 < 0 )
    goto LABEL_23;
  v17 = 24;
  v8 = NtQueryWnfStateData((char *)v6 + 48, 0LL, 0LL, &v18, &v20, &v17);
  if ( v8 < 0 )
  {
    v16 = RtlNtStatusToDosError(v8);
    v7 = v16;
    if ( v16 > 0 )
      v7 = (unsigned __int16)v16 | 0x80070000;
LABEL_23:
    *((_DWORD *)v6 + 26) = 0;
    RtlReleaseSRWLockExclusive((char *)v6 + 96);
    if ( v7 < 0 )
      goto LABEL_24;
    goto LABEL_7;
  }
  v4 = *((_QWORD *)&v20 + 1);
  *((_DWORD *)v6 + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)v6 + 96);
LABEL_7:
  v9 = Windows::System::CMemoryManager::s_pProxy;
  v18 = 0;
  v17 = 0;
  v20 = 0LL;
  v21 = 0LL;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 96);
  *((_DWORD *)v9 + 26) = GetCurrentThreadId();
  v7 = ModernResourceManagerProxy::RegisterWithServer(v9);
  if ( v7 >= 0 )
  {
    v17 = 24;
    v10 = NtQueryWnfStateData((char *)v9 + 48, 0LL, 0LL, &v18, &v20, &v17);
    if ( v10 >= 0 )
    {
      *((_DWORD *)v9 + 26) = 0;
      RtlReleaseSRWLockExclusive((char *)v9 + 96);
      goto LABEL_11;
    }
    v15 = RtlNtStatusToDosError(v10);
    v7 = v15;
    if ( v15 > 0 )
      v7 = (unsigned __int16)v15 | 0x80070000;
  }
  *((_DWORD *)v9 + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)v9 + 96);
  if ( v7 < 0 )
    goto LABEL_24;
LABEL_11:
  if ( ((v4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v11 = DWORD2(SystemInformation[0]);
    v12 = NtQuerySystemInformation(MaxSystemInfoClass|SystemFullMemoryInformation, &v22, 0x20u, &v19);
    if ( v12 >= 0 )
    {
      v4 = v11 * v23;
      goto LABEL_14;
    }
    v13 = RtlNtStatusToDosError(v12);
    v7 = v13;
    if ( v13 <= 0 )
      goto LABEL_16;
LABEL_27:
    v7 = (unsigned __int16)v13 | 0x80070000;
LABEL_16:
    if ( v7 >= 0 )
      goto LABEL_17;
LABEL_24:
    *a2 = 0LL;
    return (unsigned int)v7;
  }
LABEL_14:
  v3 = v4;
LABEL_17:
  *a2 = v3;
  return 0LL;
}
