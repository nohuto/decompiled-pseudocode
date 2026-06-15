/*
 * XREFs of ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180018650
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180012FDC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180016D50 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180017BC0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180019EA0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     WPP_SF_qS @ 0x1800CFD64 (WPP_SF_qS.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 *     _lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator() @ 0x1800D1E7C (_lambda_d9535dcdb7548fef18ac21c0bf23d41c_--operator().c)
 *     _lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator() @ 0x1800D1EF0 (_lambda_e7a2b3fb80c66b26b9fa382759a6ec05_--operator().c)
 *     WPP_SF_dq @ 0x1800D2FC8 (WPP_SF_dq.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::GetAudioSessions(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        unsigned int *a3,
        void ***a4,
        unsigned __int16 ***a5)
{
  struct IAudioProcess *v7; // r14
  int v9; // r12d
  int v10; // r15d
  const unsigned __int16 *v11; // rdx
  int v12; // ebx
  int v14; // eax
  unsigned int v15; // esi
  _QWORD *v16; // rdx
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx
  struct _RTL_CRITICAL_SECTION *v21; // r12
  unsigned __int64 v22; // rcx
  void *v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int16 **v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // rdi
  _QWORD *v28; // rbx
  unsigned int v29; // eax
  __int64 v30; // r9
  int v31; // ecx
  volatile signed __int32 *v32; // rsi
  unsigned int v33; // r13d
  char *v34; // rax
  volatile signed __int32 *v35; // r14
  int v36; // r13d
  int v37; // eax
  unsigned int v38; // r14d
  unsigned int *v39; // r9
  void ***v40; // rdx
  _QWORD *v41; // rdx
  _QWORD *v42; // rdx
  _QWORD *v43; // rdx
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  void *v46; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v48; // rbx
  int v49; // [rsp+40h] [rbp-C0h] BYREF
  struct CAudioSession *v50; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID lpMem; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 **v52; // [rsp+58h] [rbp-A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v53; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v55[2]; // [rsp+70h] [rbp-90h] BYREF
  char v56; // [rsp+80h] [rbp-80h]
  _QWORD v57[2]; // [rsp+88h] [rbp-78h] BYREF
  char v58; // [rsp+98h] [rbp-68h]
  struct IAudioProcess *v59; // [rsp+A0h] [rbp-60h]
  unsigned int *v60; // [rsp+A8h] [rbp-58h]
  void ***v61; // [rsp+B0h] [rbp-50h]
  unsigned __int16 ***v62; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-30h]
  GUID v66; // [rsp+D8h] [rbp-28h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  int v68; // [rsp+F0h] [rbp-10h]
  int v69; // [rsp+F8h] [rbp-8h]
  int v70; // [rsp+FCh] [rbp-4h]
  int v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v61 = a4;
  v60 = a3;
  v7 = a2;
  v59 = a2;
  v62 = a5;
  v9 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
  LODWORD(v54) = v9;
  v10 = 0;
  *a4 = 0LL;
  *a5 = 0LL;
  *a3 = 0;
  v50 = 0LL;
  v63 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v64 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v65 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v67 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v66 = GUID_00000000_0000_0000_0000_000000000000;
  v68 = 0;
  v70 = -1;
  v69 = 0;
  v71 = 0;
  v72 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids, this, v9);
  }
  v11 = (const unsigned __int16 *)((char *)this + 240);
  if ( *((_QWORD *)this + 33) > 7uLL )
    v11 = *(const unsigned __int16 **)v11;
  v12 = CAudioEndpointId::Initialize((CAudioEndpointId *)&v63, v11);
  if ( v12 < 0 )
    goto LABEL_5;
  if ( !memcmp_0(&GUID_SystemSounds_AudioSessionId, &GUID_00000000_0000_0000_0000_000000000000, 0x10uLL) )
  {
    v12 = -2147024809;
    goto LABEL_60;
  }
  v66 = GUID_SystemSounds_AudioSessionId;
  v68 = 1;
  v12 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)&v64);
  if ( v12 < 0 )
LABEL_60:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v12);
  if ( v12 < 0
    || (v71 = 1,
        v69 = 0,
        v70 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 48LL))(v7),
        v12 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)&v63),
        v12 < 0) )
  {
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v12);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v12);
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)&v63);
    return (unsigned int)v12;
  }
  v14 = CAudioSessionManager::CreateAudioSession(this, v7, (struct CAudioSessionInstanceId *)&v63, 0xEu, 0, 0, &v50);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = (_QWORD *)(v72 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v72 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
    v17 = (_QWORD *)(v67 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v67 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
    v18 = (_QWORD *)(v65 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v65 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 8LL))(*v18);
    v19 = (_QWORD *)(v64 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v64 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 8LL))(*v19);
    v20 = (_QWORD *)(v63 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v63 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 8LL))(*v20);
    v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
    v53 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    v49 = 0;
    v22 = 8LL * *((_QWORD *)this + 8);
    if ( v22 > 0x40000 )
    {
      lpMem = 0LL;
    }
    else
    {
      v23 = operator new[](v22, (const struct std::nothrow_t *)&std::nothrow);
      lpMem = v23;
      if ( v23 )
      {
        memset_0(v23, 0, 8LL * *((_QWORD *)this + 8));
        v57[0] = &v49;
        v57[1] = &lpMem;
        v58 = 1;
        v24 = 8LL * *((_QWORD *)this + 8);
        if ( v24 > 0x40000 )
        {
          v52 = 0LL;
        }
        else
        {
          v25 = (unsigned __int16 **)operator new[](v24, (const struct std::nothrow_t *)&std::nothrow);
          v52 = v25;
          if ( v25 )
          {
            memset_0(v25, 0, 8LL * *((_QWORD *)this + 8));
            v55[0] = &v49;
            v55[1] = &v52;
            v56 = 1;
            v27 = (_QWORD *)*((_QWORD *)this + 7);
            v28 = (_QWORD *)*v27;
            v29 = v49;
            while ( 1 )
            {
              if ( v28 == v27 )
              {
                v39 = v60;
                *v60 = v29;
                v40 = v61;
                *v61 = (void **)lpMem;
                *v62 = v52;
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), v40, v26, *v39, *v40);
                }
                if ( v21 )
                  LeaveCriticalSection(v21);
                if ( v50 )
                  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v50 + 16LL))(v50);
                return 0LL;
              }
              v30 = v28[12];
              v31 = *(_DWORD *)(v30 + 644);
              if ( (!v31 || v31 == (_DWORD)v54) && *(_DWORD *)(v30 + 336) != 2 )
                break;
LABEL_51:
              v28 = (_QWORD *)*v28;
            }
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qS(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                31,
                (unsigned int)&WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids,
                v30,
                0LL);
            }
            v32 = 0LL;
            v33 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 40LL))(v7);
            v53 = (struct _RTL_CRITICAL_SECTION *)v28[12];
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids, 0LL);
            }
            v34 = (char *)operator new[](0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
            v35 = (volatile signed __int32 *)v34;
            if ( v34 )
            {
              *((_DWORD *)v34 + 4) = 1;
              *(_QWORD *)v34 = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
              *((_QWORD *)v34 + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
              *((_DWORD *)v34 + 6) = 0;
              InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v34 + 32), 0, 0);
              *((_QWORD *)v35 + 9) = 0LL;
              *((_BYTE *)v35 + 84) = 0;
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_S(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  10LL,
                  &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
                  0LL);
              }
            }
            else
            {
              v35 = 0LL;
            }
            if ( v35 )
            {
              v36 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, _QWORD, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)v35 + 256LL))(
                      v35,
                      v33,
                      0LL,
                      v53);
              if ( v36 >= 0 )
              {
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_qS(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    12,
                    (unsigned int)&WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids,
                    (_DWORD)v35,
                    0LL);
                }
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
                _InterlockedIncrement(v35 + 6);
                v32 = v35;
                goto LABEL_46;
              }
            }
            else
            {
              v36 = -2147024882;
            }
            AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x1A2u, v36);
LABEL_46:
            if ( v35 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
            if ( v36 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3B9,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                (const char *)(unsigned int)v36);
              if ( v32 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
              v56 = 0;
              lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator()(v55);
              v58 = 0;
              lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator()(v57);
              if ( v21 )
                LeaveCriticalSection(v21);
              if ( v50 )
                (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v50 + 16LL))(v50);
              return (unsigned int)v36;
            }
            v37 = (*(__int64 (__fastcall **)(volatile signed __int32 *, unsigned __int16 **))(*(_QWORD *)v32 + 120LL))(
                    v32,
                    &v52[v49]);
            v38 = v37;
            if ( v37 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3BA,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                (const char *)(unsigned int)v37);
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
              v56 = 0;
              lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator()(v55);
              v58 = 0;
              lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator()(v57);
              if ( v21 )
                LeaveCriticalSection(v21);
              if ( v50 )
                (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v50 + 16LL))(v50);
              return v38;
            }
            *((_QWORD *)lpMem + v49) = v32;
            v29 = ++v49;
            v7 = v59;
            goto LABEL_51;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x396,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)0x8007000ELL);
        if ( v49 > 0 )
        {
          v48 = 0LL;
          do
          {
            v54 = *(_QWORD *)((char *)lpMem + v48);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v54);
            ++v10;
            v48 += 8LL;
          }
          while ( v10 < v49 );
        }
        v46 = lpMem;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v46);
LABEL_90:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v53);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v50);
        return 2147942414LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_90;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x381,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)(unsigned int)v14);
  v41 = (_QWORD *)(v72 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v72 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v41 + 8LL))(*v41);
  v42 = (_QWORD *)(v67 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v67 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v42 + 8LL))(*v42);
  v43 = (_QWORD *)(v65 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v65 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v43 + 8LL))(*v43);
  v44 = (_QWORD *)(v64 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v64 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v44 + 8LL))(*v44);
  v45 = (_QWORD *)(v63 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v63 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v45 + 8LL))(*v45);
  if ( v50 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v50 + 16LL))(v50);
  return v15;
}
