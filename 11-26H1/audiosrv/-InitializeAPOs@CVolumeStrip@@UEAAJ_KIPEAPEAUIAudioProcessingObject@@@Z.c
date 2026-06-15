/*
 * XREFs of ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180023D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeStrip::InitializeAPOs(
        CVolumeStrip *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  size_t v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h]
  LARGE_INTEGER Frequency; // [rsp+50h] [rbp-B0h] BYREF
  char pszDest[64]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[128]; // [rsp+98h] [rbp-68h] BYREF
  STRSAFE_LPSTR v22; // [rsp+118h] [rbp+18h] BYREF
  size_t cbDest[2]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v8 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  PerformanceCount.QuadPart = 0LL;
  v18 = 0LL;
  Frequency.QuadPart = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  memset_0(v21, 0, sizeof(v21));
  cbDest[1] = v8;
  StringCchPrintfExA(pszDest, 0x40uLL, &v22, cbDest, 0, "%s", "VolumeStrip_InitializeAPOs");
  StringCchPrintfExA(v22, cbDest[0], 0LL, 0LL, 0, "-Start");
  QueryPerformanceCounter(&PerformanceCount);
  QueryPerformanceFrequency(&Frequency);
  if ( a4 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_64ceff971abf396a2d7f0130c978516a_Traceguids, this);
    }
    v9 = *((_QWORD *)this + 21);
    if ( v9
      && (v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v9 + 72LL))(
                  v9,
                  a2,
                  a3,
                  a4),
          v11 = v10,
          v10 < 0) )
    {
      v12 = 646LL;
    }
    else
    {
      v15 = *((_QWORD *)this + 23);
      if ( v15
        && (v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v15 + 64LL))(
                    v15,
                    a2,
                    a3,
                    a4),
            v11 = v10,
            v10 < 0) )
      {
        v12 = 650LL;
      }
      else
      {
        v16 = *((_QWORD *)this + 22);
        if ( !v16
          || (v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v16 + 80LL))(
                      v16,
                      a2,
                      a3,
                      a4),
              v11 = v10,
              v10 >= 0) )
        {
          v11 = 0;
          goto LABEL_9;
        }
        v12 = 655LL;
      }
    }
    v13 = (unsigned int)v10;
  }
  else
  {
    v11 = -2147467261;
    v12 = 636LL;
    v13 = 2147500035LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
    (const char *)v13);
LABEL_9:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v11;
}
