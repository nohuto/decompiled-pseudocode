/*
 * XREFs of ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800877E0
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x18002FC24 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x1800713F4 (-reset@-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180085190 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_dg @ 0x1800CFC84 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x1800CFCD8 (WPP_SF_g.c)
 *     _alloca_probe @ 0x180162680 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
        CPerEndpointVolumeAudioSession *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip *a3)
{
  unsigned int v5; // edi
  int v6; // esi
  __int64 v7; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rsp
  unsigned int *v13; // rsi
  unsigned int *v14; // rax
  unsigned int i; // r15d
  int v16; // eax
  unsigned int v17; // r12d
  unsigned int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // kr00_8
  void *v21; // rax
  void *v22; // rcx
  __int64 v23; // rdx
  float v24; // xmm6_4
  unsigned int v25; // r8d
  float v26; // xmm0_4
  unsigned int v27; // eax
  __int64 v28; // [rsp+0h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+30h] [rbp+0h] BYREF
  int v30; // [rsp+34h] [rbp+4h] BYREF
  int v31; // [rsp+38h] [rbp+8h] BYREF
  unsigned int *v32; // [rsp+40h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+48h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+58h]

  v5 = 0;
  v29 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, unsigned int *))(*(_QWORD *)a3 + 48LL))(a3, &v29);
  if ( v6 < 0 )
  {
    v7 = 1772LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v30 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, int *))(*(_QWORD *)a3 + 152LL))(a3, &v30);
  if ( v6 < 0 )
  {
    v7 = 1776LL;
    goto LABEL_3;
  }
  v6 = CAudioSession::SetMute(this, v30, &EVENTCONTEXT_AUDIOSUBSYSTEM, 1, 0LL);
  if ( v6 < 0 )
  {
    v7 = 1778LL;
    goto LABEL_3;
  }
  v31 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, int *))(*(_QWORD *)a3 + 80LL))(a3, &v31);
  if ( v6 < 0 )
  {
    v7 = 1782LL;
    goto LABEL_3;
  }
  v9 = 4LL * v29;
  v10 = (v9 + 16) & -(__int64)(v9 < v9 + 16);
  if ( v10 )
  {
    if ( v10 > 0x400 )
    {
      v14 = (unsigned int *)malloc((v9 + 16) & -(__int64)(v9 < v9 + 16));
      v13 = v14;
      if ( !v14 )
        goto LABEL_20;
      *v14 = 56797;
      goto LABEL_18;
    }
    v11 = v10 + 15;
    if ( v10 + 15 < v10 )
      v11 = 0xFFFFFFFFFFFFFF0LL;
    v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
    v13 = &v29;
    if ( &v28 != (__int64 *)-48LL )
    {
      v29 = 52428;
LABEL_18:
      v13 += 4;
    }
  }
  else
  {
    v13 = 0LL;
  }
LABEL_20:
  v32 = v13;
  if ( v13 )
  {
    for ( i = 0; i < v29; ++i )
    {
      v16 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, unsigned int *))(*(_QWORD *)a3 + 112LL))(
              a3,
              i,
              &v13[i]);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6FD,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v16);
LABEL_46:
        wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(
          (__int64 *)&v32,
          0LL);
        return v17;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v33 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
    *((_DWORD *)this + 194) = v31;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids);
    }
    v18 = v29;
    *((_DWORD *)this + 222) = v29;
    v20 = v18;
    v19 = 4LL * v18;
    if ( !is_mul_ok(v20, 4uLL) )
      v19 = -1LL;
    v21 = operator new[](v19, (const struct std::nothrow_t *)&std::nothrow);
    v22 = (void *)*((_QWORD *)this + 112);
    *((_QWORD *)this + 112) = v21;
    if ( v22 )
      operator delete(v22);
    v23 = *((_QWORD *)this + 112);
    if ( !v23 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x8007000ELL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v33);
      v17 = -2147024882;
      goto LABEL_46;
    }
    v24 = 0.0;
    v25 = 0;
    if ( *((_DWORD *)this + 222) )
    {
      do
      {
        *(_DWORD *)(v23 + 4LL * v25) = v13[v25];
        v23 = *((_QWORD *)this + 112);
        v26 = fmaxf(*(float *)(v23 + 4LL * v25), v24);
        v24 = v26;
        ++v25;
        v27 = *((_DWORD *)this + 222);
      }
      while ( v25 < v27 );
      if ( v26 > 0.0 && v27 )
      {
        do
        {
          *(float *)(*((_QWORD *)this + 112) + 4LL * v5) = *(float *)(*((_QWORD *)this + 112) + 4LL * v5) / v26;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_dg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              38LL,
              &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
              v5,
              *(float *)(*((_QWORD *)this + 112) + 4LL * v5));
          }
          ++v5;
        }
        while ( v5 < *((_DWORD *)this + 222) );
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v33);
    wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset((__int64 *)&v32, 0LL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset((__int64 *)&v32, 0LL);
    return 2147942414LL;
  }
}
