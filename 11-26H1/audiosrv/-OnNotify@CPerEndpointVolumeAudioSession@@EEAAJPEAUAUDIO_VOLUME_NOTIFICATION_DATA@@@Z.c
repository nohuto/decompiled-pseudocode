/*
 * XREFs of ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180037310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180065F70 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180085190 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_bcf9c58b74ebdaae84df57cea6a1304a_::_lambda_bcf9c58b74ebdaae84df57cea6a1304a_ @ 0x1800C3E08 (_lambda_bcf9c58b74ebdaae84df57cea6a1304a_--_lambda_bcf9c58b74ebdaae84df57cea6a1304a_.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     _lambda_bcf9c58b74ebdaae84df57cea6a1304a_::operator() @ 0x1800CD640 (_lambda_bcf9c58b74ebdaae84df57cea6a1304a_--operator().c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     WPP_SF_q_guid_ @ 0x1800CFDEC (WPP_SF_q_guid_.c)
 *     WPP_SF_q_guid__guid_ @ 0x1800CFE44 (WPP_SF_q_guid__guid_.c)
 *     WPP_SF_qdd @ 0x1800CFF08 (WPP_SF_qdd.c)
 *     WPP_SF_qdgg @ 0x1800CFF6C (WPP_SF_qdgg.c)
 *     WPP_SF_qgg_HEX__HEX_ @ 0x1800CFFDC (WPP_SF_qgg_HEX__HEX_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerEndpointVolumeAudioSession::OnNotify(
        CPerEndpointVolumeAudioSession *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  __int64 v4; // rsi
  char v5; // r15
  _QWORD *v6; // rcx
  char *v7; // rdx
  __int64 v8; // rax
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  int bMuted; // r8d
  _QWORD *v11; // rcx
  float *p_fMasterVolume; // r12
  __m128 fMasterVolume_low; // xmm0
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // kr00_8
  void *v17; // rax
  float *v18; // rbx
  float v19; // xmm0_4
  __int64 v20; // rax
  unsigned int v21; // r15d
  int v22; // ecx
  __int64 v23; // rax
  float *v24; // r8
  __int64 v25; // rdx
  float v26; // xmm1_4
  __int64 v27; // rax
  int v29; // [rsp+28h] [rbp-79h]
  float *p_Data1; // [rsp+48h] [rbp-59h] BYREF
  __int16 v31; // [rsp+50h] [rbp-51h]
  char *v32; // [rsp+58h] [rbp-49h] BYREF
  __int16 v33; // [rsp+60h] [rbp-41h]
  char v34; // [rsp+68h] [rbp-39h] BYREF
  char v35; // [rsp+108h] [rbp+67h] BYREF
  int v36; // [rsp+110h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+118h] [rbp+77h] BYREF
  void *v38; // [rsp+120h] [rbp+7Fh]

  v4 = 0LL;
  v5 = 0;
  v35 = 0;
  LOBYTE(v36) = 0;
  v38 = 0LL;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      71,
      (unsigned int)&WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
      (_DWORD)this - 920,
      (__int64)a2);
    v6 = WPP_GLOBAL_Control;
  }
  v7 = (char *)this - 656;
  v8 = *(_QWORD *)&a2->guidEventContext.Data1 - *((_QWORD *)this - 82);
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == *((_QWORD *)this - 82) )
    v8 = *(_QWORD *)a2->guidEventContext.Data4 - *((_QWORD *)v7 + 1);
  if ( v8 )
  {
    if ( v6 != &WPP_GLOBAL_Control && (*((_BYTE *)v6 + 28) & 0x40) != 0 && *((_BYTE *)v6 + 25) >= 4u )
      WPP_SF_q_guid__guid_(
        v6[2],
        (_DWORD)v7,
        (unsigned int)&WPP_GLOBAL_Control,
        (_DWORD)this - 920,
        (__int64)a2,
        (__int64)this - 656);
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 184);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 184));
    bMuted = a2->bMuted;
    if ( bMuted == *((_DWORD *)this - 35) )
    {
      v11 = WPP_GLOBAL_Control;
    }
    else
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v29 = *((_DWORD *)this - 35);
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          74LL,
          &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
          (char *)this - 920);
        v11 = WPP_GLOBAL_Control;
      }
      v35 = 1;
    }
    p_fMasterVolume = &a2->fMasterVolume;
    fMasterVolume_low = (__m128)LODWORD(a2->fMasterVolume);
    if ( fMasterVolume_low.m128_f32[0] != *((float *)this - 36) )
    {
      if ( v11 != &WPP_GLOBAL_Control && (*((_BYTE *)v11 + 28) & 0x40) != 0 && *((_BYTE *)v11 + 25) >= 4u )
      {
        p_Data1 = &a2->fMasterVolume;
        v31 = 4;
        v32 = (char *)this - 144;
        v33 = 4;
        WPP_SF_qgg_HEX__HEX_(
          v11[2],
          4,
          bMuted,
          (_DWORD)this - 920,
          *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)this - 36)),
          *(_OWORD *)&_mm_cvtps_pd(fMasterVolume_low),
          (__int64)&v32,
          (__int64)&p_Data1);
        v11 = WPP_GLOBAL_Control;
      }
      LOBYTE(v36) = 1;
    }
    v14 = *((_DWORD *)this - 8);
    if ( a2->nChannels == v14 )
    {
      v16 = v14;
      v15 = 4LL * v14;
      if ( !is_mul_ok(v16, 4uLL) )
        v15 = -1LL;
      v17 = operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
      v38 = v17;
      if ( v17 && *((_DWORD *)this - 8) )
      {
        v18 = (float *)v17;
        do
        {
          if ( *p_fMasterVolume == 0.0 )
            v19 = FLOAT_1_0;
          else
            v19 = a2->afChannelVolumes[v4] / *p_fMasterVolume;
          v18[v4] = v19;
          v20 = *((_QWORD *)this - 3);
          if ( v19 == *(float *)(v20 + 4 * v4) )
          {
            v11 = WPP_GLOBAL_Control;
          }
          else
          {
            v11 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qdgg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                76LL,
                &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
                (char *)this - 920,
                v4,
                *(float *)(v20 + 4 * v4),
                v19);
              v11 = WPP_GLOBAL_Control;
            }
            v5 = 1;
          }
          v4 = (unsigned int)(v4 + 1);
        }
        while ( (unsigned int)v4 < *((_DWORD *)this - 8) );
        v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 184);
      }
      else
      {
        v11 = WPP_GLOBAL_Control;
      }
      LODWORD(v4) = 0;
    }
    if ( v9 )
    {
      LeaveCriticalSection(v9);
      v11 = WPP_GLOBAL_Control;
    }
    if ( v35 || (_BYTE)v36 || v5 )
    {
      if ( v11 != &WPP_GLOBAL_Control && (*((_BYTE *)v11 + 28) & 0x40) != 0 && *((_BYTE *)v11 + 25) >= 4u )
      {
        WPP_SF_(v11[2], 77LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids);
        v11 = WPP_GLOBAL_Control;
      }
      if ( v5 )
      {
        v21 = 0;
        if ( v11 != &WPP_GLOBAL_Control && (*((_BYTE *)v11 + 28) & 0x40) != 0 && *((_BYTE *)v11 + 25) >= 4u )
          WPP_SF_(v11[2], 78LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids);
        EnterCriticalSection(v9);
        v37 = v9;
        v22 = *((_DWORD *)this - 8);
        if ( a2->nChannels == v22 )
        {
          v23 = 0LL;
          if ( v22 )
          {
            v24 = (float *)v38;
            do
            {
              v25 = *((_QWORD *)this - 3);
              v26 = v24[v23];
              if ( *(float *)(v25 + 4 * v23) != v26 )
              {
                *(float *)(v25 + 4 * v23) = v26;
                v21 = v23;
              }
              v23 = (unsigned int)(v23 + 1);
            }
            while ( (unsigned int)v23 < *((_DWORD *)this - 8) );
          }
          LODWORD(v4) = 1;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v37);
        if ( (_DWORD)v4 )
        {
          LOBYTE(v29) = 1;
          CAudioSession::RecalculateSessionVolume((char *)this - 912, 1LL, a2, v21, v29, 0LL);
        }
        v11 = WPP_GLOBAL_Control;
      }
      if ( v35 )
      {
        CAudioSession::SetMute(
          (CPerEndpointVolumeAudioSession *)((char *)this - 920),
          a2->bMuted,
          &EVENTCONTEXT_AUDIOSUBSYSTEM,
          1,
          0LL);
        v11 = WPP_GLOBAL_Control;
      }
      if ( (_BYTE)v36 )
      {
        if ( v11 != &WPP_GLOBAL_Control && (*((_BYTE *)v11 + 28) & 0x40) != 0 && *((_BYTE *)v11 + 25) >= 4u )
          WPP_SF_(v11[2], 79LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids);
        EnterCriticalSection(v9);
        *((float *)this - 36) = *p_fMasterVolume;
        if ( v9 )
          LeaveCriticalSection(v9);
        v35 = 1;
        v36 = 0;
        p_Data1 = (float *)&a2->guidEventContext.Data1;
        LODWORD(v37) = 0;
        v27 = lambda_bcf9c58b74ebdaae84df57cea6a1304a_::_lambda_bcf9c58b74ebdaae84df57cea6a1304a_(
                (unsigned int)&v34,
                (int)this - 920,
                (unsigned int)&p_Data1,
                (unsigned int)&v35,
                (__int64)&v37,
                (__int64)&v36);
        lambda_bcf9c58b74ebdaae84df57cea6a1304a_::operator()(v27);
      }
    }
    operator delete(v38);
  }
  else if ( v6 != &WPP_GLOBAL_Control && (*((_BYTE *)v6 + 28) & 0x40) != 0 && *((_BYTE *)v6 + 25) >= 4u )
  {
    WPP_SF_q(v6[2], 72LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, (char *)this - 920);
  }
  return 0LL;
}
