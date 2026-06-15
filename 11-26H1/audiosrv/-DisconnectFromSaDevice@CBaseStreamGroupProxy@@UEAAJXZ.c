/*
 * XREFs of ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180043770
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x180044D40 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x1800F99B8 (--1CExclusiveStreamGroupProxy@@MEAA@XZ.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FAF90 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::DisconnectFromSaDevice(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  ULONG_PTR *p_SpinCount; // r15
  _QWORD *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  size_t v8; // rbx
  int v9; // eax
  ULONG_PTR v11; // rdi
  void (__fastcall *v12)(ULONG_PTR, __int64, __int64, _QWORD); // rbx
  unsigned int v13; // eax
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v15[9]; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp-70h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-68h]
  LARGE_INTEGER Frequency; // [rsp+A8h] [rbp-60h] BYREF
  char pszDest[64]; // [rsp+B0h] [rbp-58h] BYREF
  char v20[128]; // [rsp+F0h] [rbp-18h] BYREF
  STRSAFE_LPSTR v21; // [rsp+170h] [rbp+68h] BYREF
  size_t cbDest[2]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v2 = this + 3;
  EnterCriticalSection(this + 3);
  p_SpinCount = &this[2].SpinCount;
  if ( this[2].SpinCount )
  {
    v15[0] = off_180170AF8;
    v15[7] = v15;
    (*(void (__fastcall **)(struct _RTL_CRITICAL_SECTION *, _QWORD *))&this->DebugInfo[7].EntryCount)(this, v15);
    v4 = (_QWORD *)*p_SpinCount;
    v5 = *(_QWORD *)*p_SpinCount;
    v14 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v5 + 56))(v4, &v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x303,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v6);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      goto LABEL_7;
    }
    if ( v14 )
    {
      v8 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      PerformanceCount.QuadPart = 0LL;
      v17 = 0LL;
      Frequency.QuadPart = 0LL;
      memset_0(pszDest, 0, sizeof(pszDest));
      memset_0(v20, 0, sizeof(v20));
      cbDest[1] = v8;
      StringCchPrintfExA(pszDest, 0x40uLL, &v21, cbDest, 0, "%s", "StreamGroup_DisconnectFromSaDevice");
      StringCchPrintfExA(v21, cbDest[0], 0LL, 0LL, 0, "-Start");
      QueryPerformanceCounter(&PerformanceCount);
      QueryPerformanceFrequency(&Frequency);
      v9 = (*(__int64 (__fastcall **)(HANDLE, __int64))(*(_QWORD *)this[2].LockSemaphore + 64LL))(
             this[2].LockSemaphore,
             v14);
      v7 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x308,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v9);
        CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_7:
        if ( v2 )
          LeaveCriticalSection(v2);
        return v7;
      }
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    }
    (*(void (__fastcall **)(ULONG_PTR, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)*p_SpinCount + 184LL))(
      *p_SpinCount,
      this);
    v11 = *p_SpinCount;
    v12 = *(void (__fastcall **)(ULONG_PTR, __int64, __int64, _QWORD))(*(_QWORD *)*p_SpinCount + 88LL);
    v13 = (*(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *))&this->DebugInfo[3].EntryCount)(this);
    v12(v11, 2LL, 0xFFFFFFFFLL, v13);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&this[2].SpinCount);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
