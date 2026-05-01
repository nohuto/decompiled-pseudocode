/*
 * XREFs of ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801BD9DC
 * Callers:
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1801BD980 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Int.c)
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801D4400 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18024EDA0 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180134510 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1802C9E24 (_o_ceilf_0.c)
 *     floorf @ 0x1802C9E30 (floorf.c)
 *     ?UpdateMonitorInfoInternal@MonitorInformation@KeyboardHosting@@AEAAXXZ @ 0x180476418 (-UpdateMonitorInfoInternal@MonitorInformation@KeyboardHosting@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

void __fastcall KeyboardHosting::MonitorInformation::UpdateMonitorInfo(KeyboardHosting::MonitorInformation *this)
{
  HMONITOR v2; // rcx
  int ScaleFactorForMonitor; // eax
  RECT rcMonitor; // xmm1
  int v5; // r8d
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  unsigned int v9; // xmm8_4
  unsigned int v10; // xmm7_4
  float v11; // xmm6_4
  float *v12; // rax
  unsigned int v13; // xmm5_4
  __int128 v14; // xmm0
  int v15; // r8d
  float v16; // xmm8_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  __int128 v19; // [rsp+28h] [rbp-29h] BYREF
  float v20[4]; // [rsp+38h] [rbp-19h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v19, (RTL_SRWLOCK *)this + 10);
    KeyboardHosting::MonitorInformation::UpdateMonitorInfoInternal(this);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v19);
  }
  else
  {
    v2 = *(HMONITOR *)this;
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v2, &mi) )
    {
      ScaleFactorForMonitor = GetScaleFactorForMonitor(*(_QWORD *)this, (char *)this + 40);
      if ( ScaleFactorForMonitor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6E,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
          (const char *)(unsigned int)ScaleFactorForMonitor);
      rcMonitor = mi.rcMonitor;
      v5 = *((_DWORD *)this + 10);
      v6 = _mm_cvtsi128_si32((__m128i)mi.rcMonitor);
      v7 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 4));
      v8 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 8));
      *(RECT *)((char *)this + 24) = mi.rcMonitor;
      *(float *)&v9 = (float)v6;
      *(float *)&v19 = (float)v6;
      *(float *)&v10 = (float)v7;
      v11 = (float)(v8 - v6);
      *((float *)&v19 + 1) = (float)v7;
      *((float *)&v19 + 2) = v11;
      *((float *)&v19 + 3) = (float)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 12)) - v7);
      v12 = KeyboardHosting::ScalingHelper::PhysicalRectToRelative(v20, (float *)&v19, v5);
      *(_QWORD *)&v19 = __PAIR64__(v10, v9);
      *((_QWORD *)&v19 + 1) = __PAIR64__(v13, LODWORD(v11));
      v14 = v19;
      *(__m128i *)((char *)this + 8) = _mm_loadu_si128((const __m128i *)v12);
      v19 = v14;
      *(__m128i *)((char *)this + 44) = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                                           v20,
                                                                           (float *)&v19,
                                                                           v15));
      v16 = floorf(*((float *)this + 12));
      v17 = o_ceilf_0(*((float *)this + 13));
      v18 = o_ceilf_0(*((float *)this + 14));
      *((float *)this + 15) = floorf(*((float *)this + 11));
      *((float *)this + 16) = v16;
      *((float *)this + 17) = v17;
      *((float *)this + 18) = v18;
    }
  }
}
