/*
 * XREFs of _lambda_bcf9c58b74ebdaae84df57cea6a1304a_::operator() @ 0x1800CD640
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180037310 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180065F70 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180013780 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z @ 0x180061408 (-GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z.c)
 *     ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x1800713F4 (-reset@-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     WPP_SF_S_guid_ @ 0x1800CF89C (WPP_SF_S_guid_.c)
 *     WPP_SF_Sg @ 0x1800CFAD0 (WPP_SF_Sg.c)
 *     _alloca_probe @ 0x180162680 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bcf9c58b74ebdaae84df57cea6a1304a_::operator()(CAudioSession **a1, __int64 a2, int a3)
{
  unsigned int v4; // r14d
  GUID **v5; // rax
  GUID *v6; // rdx
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // r15
  size_t v9; // rcx
  __int64 v10; // rax
  void *v11; // rsp
  void **v12; // rdx
  _DWORD *v13; // rax
  void *v14; // rbx
  __int64 v15; // r8
  CAudioSession *v16; // rcx
  CAudioSession *v17; // rdx
  void (__fastcall *v18)(CAudioSession *, _QWORD, __int64); // r9
  struct _RTL_CRITICAL_SECTION *v19; // rdi
  int v20; // r8d
  int v21; // xmm6_4
  int v22; // edi
  int v23; // ecx
  unsigned __int64 v24; // rcx
  void **v25; // rax
  struct _RTL_CRITICAL_SECTION *v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // ecx
  __int64 v30; // [rsp+0h] [rbp-40h] BYREF
  int v31[2]; // [rsp+20h] [rbp-20h]
  void *v32; // [rsp+28h] [rbp-18h]
  __int64 v33; // [rsp+30h] [rbp-10h]
  int v34; // [rsp+40h] [rbp+0h] BYREF
  float v35; // [rsp+44h] [rbp+4h] BYREF
  __int64 v36; // [rsp+48h] [rbp+8h] BYREF
  void *v37; // [rsp+50h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+58h] [rbp+18h] BYREF
  void **v39; // [rsp+60h] [rbp+20h] BYREF
  CAudioSession *v40; // [rsp+68h] [rbp+28h]
  void *v41; // [rsp+70h] [rbp+30h]
  unsigned __int64 v42; // [rsp+78h] [rbp+38h]
  __int64 v43; // [rsp+80h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+78h]

  v4 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v5 = (GUID **)a1[1];
    v6 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( *v5 )
      v6 = *v5;
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)v6, a3, *((_QWORD *)*a1 + 82), (__int64)v6);
  }
  LOBYTE(v34) = 0;
  v35 = 1.0;
  v36 = 0LL;
  CAudioSession::GetCurrentSessionGain(*a1, (bool *)&v34, &v35, &v36);
  v37 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 736);
  EnterCriticalSection(v7);
  v38 = v7;
  v8 = *((unsigned int *)*a1 + 222);
  v9 = (4 * v8 + 16) & -(__int64)(4 * v8 < (unsigned __int64)(4 * v8 + 16));
  if ( v9 )
  {
    if ( v9 > 0x400 )
    {
      v13 = malloc(v9);
      if ( v13 )
      {
        *v13 = 56797;
        v13 += 4;
      }
      v12 = (void **)v13;
    }
    else
    {
      v10 = v9 + 15;
      if ( v9 + 15 < v9 )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
      v12 = (void **)&v34;
      if ( &v30 != (__int64 *)-64LL )
      {
        v34 = 52428;
        v12 = &v37;
      }
    }
  }
  else
  {
    v12 = 0LL;
  }
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(
    (__int64 *)&v37,
    (__int64)v12);
  v14 = v37;
  if ( !v37 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE71,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
    goto LABEL_35;
  }
  memcpy_0(v37, *((const void **)*a1 + 112), 4 * v8);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
  if ( !*(_BYTE *)a1[2] )
  {
    v16 = *a1;
    v17 = a1[3];
    v18 = *(void (__fastcall **)(CAudioSession *, _QWORD, __int64))(*(_QWORD *)*a1 + 416LL);
    v33 = v36;
    v32 = v14;
    v31[0] = v8;
    LOBYTE(v15) = v34;
    v18(v16, *(unsigned int *)v17, v15);
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*a1 + 8LL))(*a1);
  v19 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 736);
  EnterCriticalSection(v19);
  v36 = (__int64)v19;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      64,
      v20,
      *((_QWORD *)*a1 + 82),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)*a1 + 194)));
  }
  v21 = *((_DWORD *)*a1 + 194);
  v22 = *((_DWORD *)*a1 + 195);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v36);
  v23 = *(_DWORD *)a1[3];
  if ( v23 )
  {
    if ( v23 != 1 )
      goto LABEL_30;
    v27 = *(_QWORD *)a1[1];
    v28 = *(_DWORD *)a1[4];
    v25 = &CAudioChannelVolumeChanged::`vftable';
    v40 = *a1;
    v41 = v14;
    v42 = __PAIR64__(v28, v8);
    v43 = v27;
    v26 = (struct _RTL_CRITICAL_SECTION *)((char *)v40 + 432);
  }
  else
  {
    v24 = *(_QWORD *)a1[1];
    v25 = &CAudioSessionVolumeChanged::`vftable';
    v40 = *a1;
    LODWORD(v41) = v21;
    BYTE4(v41) = v22 != 0;
    v42 = v24;
    v26 = (struct _RTL_CRITICAL_SECTION *)((char *)v40 + 432);
  }
  v39 = v25;
  CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
    v26,
    (void (__fastcall ***)(_QWORD, void **))&v39);
LABEL_30:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x41u,
      (__int64)&WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
      *((const wchar_t **)*a1 + 82));
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*a1 + 16LL))(*a1);
LABEL_35:
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset((__int64 *)&v37, 0LL);
  return v4;
}
