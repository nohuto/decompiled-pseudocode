/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x18008F550
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x18013A520 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x18013A5C0 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpQueryCriticalSectionOwner32 @ 0x18008F3CC (RtlpQueryCriticalSectionOwner32.c)
 *     RtlpQueryCriticalSectionOwner64 @ 0x18008F488 (RtlpQueryCriticalSectionOwner64.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18008FF88 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800902A0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x180090470 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800909B8 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpQueryProcessMachine @ 0x180090A84 (RtlpQueryProcessMachine.c)
 *     RtlQueryCriticalSectionOwner @ 0x180090B90 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessModuleInformation @ 0x180090CA8 (RtlQueryProcessModuleInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x180090DF0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800917B0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x180091A70 (RtlQueryProcessLockInformation.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x18015F400 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18015F720 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x18015F9A0 (NtTerminateThread.c)
 *     NtPowerInformation @ 0x18015FB10 (NtPowerInformation.c)
 *     NtCreateThreadEx @ 0x180160850 (NtCreateThreadEx.c)
 *     NtQuerySystemInformationEx @ 0x180161D10 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163610 (_alloca_probe.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessDebugInformation(void *a1, int a2, __int64 a3)
{
  NTSTATUS ProcessModuleInformation; // ebx
  unsigned int v7; // r13d
  __int128 *v8; // r12
  void *v9; // rax
  __int64 v10; // r8
  struct _TEB *v11; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v13; // rax
  HANDLE *p_ProcessHandle; // rbx
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // edx
  __int16 v21; // cx
  __int64 v22; // r8
  void (__fastcall __noreturn *v23)(); // rbx
  __int64 result; // rax
  HANDLE v25; // r14
  HANDLE v26; // r15
  size_t v27; // rax
  HANDLE v28; // rcx
  __int64 v29; // rcx
  __int64 CriticalSectionOwner32; // rax
  HANDLE v31; // rax
  HANDLE v32; // r12
  __int64 v33; // rax
  unsigned int v34; // eax
  HANDLE v35; // r15
  NTSTATUS v36; // eax
  HANDLE ProcessHandle; // [rsp+60h] [rbp+0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+8h] BYREF
  HANDLE v39; // [rsp+70h] [rbp+10h] BYREF
  __int128 v40; // [rsp+78h] [rbp+18h] BYREF
  __int64 v41; // [rsp+88h] [rbp+28h] BYREF
  void (__fastcall __noreturn *v42)(); // [rsp+90h] [rbp+30h]
  HANDLE v43[2]; // [rsp+98h] [rbp+38h] BYREF
  __int128 v44; // [rsp+A8h] [rbp+48h] BYREF
  __int128 v45; // [rsp+B8h] [rbp+58h]
  __int128 v46; // [rsp+C8h] [rbp+68h]
  __int128 v47; // [rsp+D8h] [rbp+78h] BYREF
  __int128 v48; // [rsp+E8h] [rbp+88h]
  __int128 v49; // [rsp+F8h] [rbp+98h]
  LARGE_INTEGER Timeout; // [rsp+108h] [rbp+A8h] BYREF
  __int128 v51; // [rsp+110h] [rbp+B0h] BYREF
  NTSTATUS (__stdcall *v52)(HANDLE, PROCESSINFOCLASS, PVOID, ULONG, PULONG); // [rsp+120h] [rbp+C0h]
  _QWORD v53[4]; // [rsp+128h] [rbp+C8h] BYREF
  __int128 v54; // [rsp+148h] [rbp+E8h]
  _OWORD v55[2]; // [rsp+158h] [rbp+F8h] BYREF
  __int64 v56; // [rsp+178h] [rbp+118h]
  int v57; // [rsp+180h] [rbp+120h]
  _QWORD ProcessInformation[2]; // [rsp+190h] [rbp+130h] BYREF
  __int128 v59; // [rsp+1A0h] [rbp+140h]
  __int128 v60; // [rsp+1B0h] [rbp+150h]
  __int128 v61; // [rsp+1C0h] [rbp+160h]
  _QWORD v62[6]; // [rsp+1D0h] [rbp+170h] BYREF
  __int128 v63; // [rsp+200h] [rbp+1A0h]
  __int64 v64; // [rsp+210h] [rbp+1B0h]
  _BYTE v65[4]; // [rsp+240h] [rbp+1E0h] BYREF
  int v66; // [rsp+244h] [rbp+1E4h]
  void (__fastcall __noreturn *v67)(); // [rsp+280h] [rbp+220h]
  __int128 v68; // [rsp+370h] [rbp+310h] BYREF
  HANDLE v69; // [rsp+380h] [rbp+320h]

  v56 = 0LL;
  v57 = 0;
  *(_QWORD *)&v49 = 0LL;
  DWORD2(v49) = 0;
  v39 = 0LL;
  v42 = RtlpQueryProcessDebugInformationRemote;
  ProcessModuleInformation = 0;
  v7 = 0;
  v52 = 0LL;
  v8 = 0LL;
  v9 = *(void **)(a3 + 48);
  memset(v55, 0, sizeof(v55));
  v47 = 0LL;
  v48 = 0LL;
  v40 = 0LL;
  v51 = 0LL;
  if ( v9 && v9 != a1 )
    return 3221225485LL;
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return 3221225659LL;
  *(_DWORD *)(a3 + 64) = a2;
  v10 = *(_QWORD *)(a3 + 72);
  Timeout.QuadPart = -600000000LL;
  if ( v10 )
    memset_thunk_772440563353939046((void *)(a3 + 208), 0, v10 - 208);
  *(_QWORD *)(a3 + 72) = 208LL;
  if ( a2 == -2147481600 )
  {
    DWORD1(v44) = 0;
    HIDWORD(v45) = 0;
    LOWORD(Handle) = 0;
    ProcessHandle = 0LL;
    if ( !*(_QWORD *)(a3 + 160) )
      return (unsigned int)-1073741811;
    *((_QWORD *)&v44 + 1) = 0LL;
    DWORD2(v45) = 0;
    *(_QWORD *)&v45 = 0LL;
    v43[1] = 0LL;
    LODWORD(v44) = 48;
    v46 = 0LL;
    v43[0] = a1;
    ProcessModuleInformation = NtOpenProcess(&ProcessHandle, 4112LL, &v44, v43);
    if ( ProcessModuleInformation < 0 )
      goto LABEL_109;
    ProcessModuleInformation = RtlpQueryProcessMachine(ProcessHandle, &Handle);
    if ( ProcessModuleInformation < 0 )
      goto LABEL_109;
    if ( (unsigned __int16)Handle != 34404 )
    {
      if ( (unsigned __int16)Handle == 332 || (unsigned __int16)Handle == 452 )
      {
        CriticalSectionOwner32 = RtlpQueryCriticalSectionOwner32((__int64)ProcessHandle, *(_QWORD *)(a3 + 160));
LABEL_108:
        *(_QWORD *)(a3 + 168) = CriticalSectionOwner32;
        ProcessModuleInformation = 0;
        goto LABEL_109;
      }
      if ( (unsigned __int16)Handle != 43620 )
      {
        ProcessModuleInformation = -1073741811;
LABEL_109:
        v28 = ProcessHandle;
        if ( !ProcessHandle )
          return (unsigned int)ProcessModuleInformation;
        goto LABEL_66;
      }
    }
    CriticalSectionOwner32 = RtlpQueryCriticalSectionOwner64((__int64)ProcessHandle, *(_QWORD *)(a3 + 160));
    goto LABEL_108;
  }
  if ( a2 < 0 && (a2 & 0x41) != 0 && (a2 & 0x3FFFFFBE) == 0 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v8 = (__int128 *)a1;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 )
    {
      v8 = 0LL;
    }
    else
    {
      *((_QWORD *)&v47 + 1) = 0LL;
      DWORD2(v48) = 0;
      *(_QWORD *)&v48 = 0LL;
      LODWORD(v47) = 48;
      v49 = 0LL;
      v40 = (unsigned __int64)a1;
      if ( (int)NtOpenProcess(&v39, 0x1FFFFFLL, &v47, &v40) >= 0 )
      {
        v31 = v39;
      }
      else
      {
        v31 = 0LL;
        v39 = 0LL;
      }
      *(_QWORD *)&v51 = v31;
      v8 = &v51;
      *((_QWORD *)&v51 + 1) = RtlpQueryReadVirtualMemory;
      v52 = NtQueryInformationProcess;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 || (a2 & 0x40000000) != 0 || v39 )
  {
    if ( ((a2 & 0x41) == 0
       || (ProcessModuleInformation = RtlQueryProcessModuleInformation(v8, (unsigned int)a2, a3)) == 0)
      && ((a2 & 2) == 0 || (ProcessModuleInformation = RtlQueryProcessBackTraceInformation(a3)) == 0)
      && ((a2 & 0x20) == 0 || (ProcessModuleInformation = RtlQueryProcessLockInformation(a3)) == 0)
      && ((a2 & 0x21C) == 0 || (ProcessModuleInformation = RtlQueryProcessHeapInformation(a3)) == 0)
      && ((a2 & 0x80u) == 0 || (ProcessModuleInformation = AVrfpQueryProcessVerifierOptions(a3)) == 0)
      && (a2 & 0xC00) != 0 )
    {
      v29 = *(_QWORD *)(a3 + 160);
      *(_QWORD *)(a3 + 168) = 0LL;
      ProcessModuleInformation = 0;
      if ( v29 )
        *(_QWORD *)(a3 + 168) = RtlQueryCriticalSectionOwner(v29, (a2 & 0x800) != 0);
      else
        ProcessModuleInformation = -1073741811;
    }
    v28 = v39;
    if ( !v39 )
      return (unsigned int)ProcessModuleInformation;
    goto LABEL_66;
  }
  if ( a2 >= 0 && ((a2 - 1024) & 0xFFFFFBFF) == 0 )
  {
    LODWORD(v47) = 48;
    *((_QWORD *)&v47 + 1) = 0LL;
    DWORD2(v48) = 0;
    *(_QWORD *)&v48 = 0LL;
    v40 = (unsigned __int64)a1;
    v49 = 0LL;
    if ( (int)NtOpenProcess(&v39, 4096LL, &v47, &v40) < 0 )
    {
LABEL_44:
      v39 = 0LL;
      goto LABEL_45;
    }
    ProcessHandle = v39;
    if ( v39 != (HANDLE)-1LL )
      goto LABEL_27;
    if ( !NtCurrentTeb()->WowTebOffset )
    {
LABEL_43:
      NtClose(v39);
      goto LABEL_44;
    }
    v11 = NtCurrentTeb();
    WowTebOffset = v11->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v11 = (struct _TEB *)((char *)v11 + WowTebOffset);
    v13 = (_DWORD)v11 == LODWORD(v11->NtTib.SubSystemTib)
        ? (_WORD *)LODWORD(v11->glDispatchTable[137])
        : v11->TlsSlots[10];
    if ( !v13 || !v13[17] || !v13[16] )
    {
LABEL_27:
      LODWORD(Handle) = 20;
      p_ProcessHandle = (HANDLE *)&v68;
      v15 = NtQuerySystemInformationEx(230LL, &ProcessHandle, 8LL, &v68, 20, &Handle);
      if ( v15 == -1073741789 )
      {
        v16 = (unsigned int)Handle + 15LL;
        if ( v16 <= (unsigned int)Handle )
          v16 = 0xFFFFFFFFFFFFFF0LL;
        v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
        v18 = alloca(v17);
        v19 = alloca(v17);
        p_ProcessHandle = &ProcessHandle;
        v15 = NtQuerySystemInformationEx(230LL, &ProcessHandle, 8LL, &ProcessHandle, (_DWORD)Handle, &Handle);
      }
      if ( v15 < 0 )
        goto LABEL_43;
      v20 = *(_DWORD *)p_ProcessHandle;
      v21 = 0;
      LODWORD(v22) = 0;
      if ( !(unsigned __int16)*(_DWORD *)p_ProcessHandle )
        goto LABEL_43;
      do
      {
        v22 = (unsigned int)(v22 + 1);
        if ( (v20 & 0x1C0000) != 0x180000 )
          LOWORD(v20) = v21;
        v21 = v20;
        v20 = *((_DWORD *)p_ProcessHandle + v22);
      }
      while ( (_WORD)v20 );
      if ( !v21 )
        goto LABEL_43;
    }
    Handle = 0LL;
    v23 = 0LL;
    if ( (int)ZwDuplicateObject(-1LL, v39, -1LL, &Handle, 16, 0, 0) >= 0 )
    {
      v66 = 0;
      memset_thunk_772440563353939046(v65, 0, 0x124uLL);
      v41 = 0LL;
      if ( (int)ZwReadVirtualMemory(Handle, &LdrSystemDllInitBlock, v65, 296LL, &v41) >= 0 && v41 == 296 )
        v23 = v67;
      NtClose(Handle);
      if ( v23 )
      {
        v42 = v23;
        v7 = 1;
      }
    }
    goto LABEL_43;
  }
LABEL_45:
  ProcessHandle = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(a3, a1, v7, &ProcessHandle);
  if ( (int)result < 0 )
    return result;
  v25 = ProcessHandle;
  v26 = ProcessHandle;
  if ( !ProcessHandle )
    v26 = *(HANDLE *)(a3 + 136);
  ProcessHandle = 0LL;
  v59 = 0LL;
  *(_QWORD *)&v46 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  ProcessInformation[1] = 0LL;
  ProcessInformation[0] = 64LL;
  v44 = 0LL;
  v45 = 0LL;
  ProcessModuleInformation = NtQueryInformationProcess(v26, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  if ( ProcessModuleInformation < 0 )
    goto LABEL_55;
  if ( (BYTE8(v61) & 0x40) == 0 )
  {
    v32 = 0LL;
    goto LABEL_82;
  }
  DWORD1(v44) = 1;
  *((_QWORD *)&v44 + 1) = 0LL;
  *(_QWORD *)&v45 = L"QueryDebugInformation request";
  v27 = 2 * wcslen(L"QueryDebugInformation request");
  if ( v27 >= 0xFFFE )
    LOWORD(v27) = -4;
  WORD4(v44) = v27;
  WORD5(v44) = v27 + 2;
  ProcessModuleInformation = NtPowerInformation(72LL, &v44, 40LL, &ProcessHandle, 8);
  if ( ProcessModuleInformation < 0 )
    goto LABEL_55;
  v69 = v26;
  *(_WORD *)((char *)&v68 + 13) = 0;
  HIBYTE(v68) = 0;
  *(_QWORD *)&v68 = ProcessHandle;
  DWORD2(v68) = 3;
  BYTE12(v68) = 1;
  ProcessModuleInformation = NtPowerInformation(44LL, &v68, 24LL, 0LL, 0);
  if ( ProcessModuleInformation >= 0 )
  {
    v32 = ProcessHandle;
LABEL_82:
    v62[5] = 0LL;
    v63 = 0LL;
    v62[3] = &v68;
    v64 = 0LL;
    v33 = *(_QWORD *)(a3 + 16);
    v53[0] = 48LL;
    v53[3] = 512LL;
    v68 = 0LL;
    v43[0] = 0LL;
    v53[1] = 0LL;
    v53[2] = 0LL;
    v54 = 0LL;
    v62[1] = 65539LL;
    v62[2] = 16LL;
    v62[4] = 0LL;
    v62[0] = 40LL;
    ProcessModuleInformation = NtCreateThreadEx(v43, 0x1FFFFFLL, v53, v25, v42, v33, 6, 0LL, 0LL, 0LL, v62);
    if ( ProcessModuleInformation >= 0 )
    {
      v35 = v43[0];
      v36 = NtWaitForSingleObject(v43[0], 1u, &Timeout);
      ProcessModuleInformation = v36;
      if ( v36 < 0 )
      {
        NtTerminateThread(v35, (unsigned int)v36);
      }
      else
      {
        ProcessModuleInformation = ZwQueryInformationThread(v35, 0LL, v55, 48LL, 0LL);
        if ( ProcessModuleInformation >= 0 )
          ProcessModuleInformation = v55[0];
      }
      NtClose(v35);
    }
    NtClose(v25);
    if ( v32 )
    {
      *(_WORD *)((char *)&v68 + 13) = 0;
      HIBYTE(v68) = 0;
      *(_QWORD *)&v68 = v32;
      DWORD2(v68) = 3;
      BYTE12(v68) = 0;
      v69 = 0LL;
      NtPowerInformation(44LL, &v68, 24LL, 0LL, 0);
      NtClose(v32);
    }
    if ( ProcessModuleInformation < 0 )
      return (unsigned int)ProcessModuleInformation;
    if ( v7 == 1 )
    {
      ProcessModuleInformation = 0;
      *(_QWORD *)(a3 + 168) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a3 + 88) + a3 + 80), 4));
    }
    else
    {
      ProcessModuleInformation = RtlpCopyRemoteDebugInformation(a3);
      if ( ProcessModuleInformation < 0 )
        return (unsigned int)ProcessModuleInformation;
    }
    v34 = -1073741558;
    if ( (a2 & 1) != 0 && !*(_QWORD *)(a3 + 96) )
      ProcessModuleInformation = -1073741558;
    if ( (a2 & 0x40) == 0 || *(_QWORD *)(a3 + 96) )
    {
      if ( ProcessModuleInformation < 0 )
        return (unsigned int)ProcessModuleInformation;
      return (unsigned int)RtlpValidateRemoteDebugInformation(
                             a3,
                             (unsigned int)a2,
                             a3 + 208,
                             *(_QWORD *)(a3 + 72) - 208LL);
    }
    return v34;
  }
  NtClose(ProcessHandle);
LABEL_55:
  v28 = v25;
LABEL_66:
  NtClose(v28);
  return (unsigned int)ProcessModuleInformation;
}
