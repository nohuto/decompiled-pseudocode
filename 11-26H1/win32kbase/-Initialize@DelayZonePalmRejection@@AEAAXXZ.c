/*
 * XREFs of ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1400EBFFC
 * Callers:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140049048 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1400EDA10 (-ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401B5C70 (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 *     ?Initialize@DelayZoneTelemetry@@QEAAXKK@Z @ 0x1401BB638 (-Initialize@DelayZoneTelemetry@@QEAAXKK@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall DelayZonePalmRejection::Initialize(DelayZonePalmRejection *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  char v5; // si
  DelayZoneTelemetry *v6; // rcx
  DelayZoneTelemetry *v7; // rax
  int v8; // edx
  int v9; // r8d
  DelayZoneTelemetry *v10; // rdi
  bool v11; // bl
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  _OWORD v15[5]; // [rsp+40h] [rbp-58h] BYREF

  DelayZonePalmRejection::ReadSettingsFromRegKey(this);
  memset(v15, 0, 0x48uLL);
  v2 = v15[1];
  *(_OWORD *)this = v15[0];
  v3 = v15[2];
  *((_OWORD *)this + 1) = v2;
  v4 = v15[3];
  *((_OWORD *)this + 2) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)&v15[4];
  *((_OWORD *)this + 3) = v4;
  *((_QWORD *)this + 8) = v3;
  *((_QWORD *)this + 3) = 0LL;
  CEResourceLock::Initialize((DelayZonePalmRejection *)((char *)this + 112));
  v5 = 1;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  v6 = (DelayZoneTelemetry *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 11) = 1LL;
  if ( v6 )
  {
    DelayZoneTelemetry::Initialize(v6, *((_DWORD *)this + 26), *((_DWORD *)this + 25));
  }
  else
  {
    v7 = (DelayZoneTelemetry *)Win32AllocPoolZInitImpl(256LL, 0x3010uLL, 0x7A647355u);
    v10 = v7;
    if ( v7 )
    {
      DelayZoneTelemetry::Initialize(v7, *((_DWORD *)this + 26), *((_DWORD *)this + 25));
      *((_QWORD *)this + 15) = v10;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v5 = 0;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v9);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69136),
          4,
          4,
          22,
          (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
      }
    }
  }
}
