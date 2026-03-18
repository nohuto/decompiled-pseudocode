/*
 * XREFs of ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x14013BA20
 * Callers:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140038CEC (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x14013BB94 (-ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?Initialize@DelayZoneTelemetry@@QEAAXKK@Z @ 0x14019D758 (-Initialize@DelayZoneTelemetry@@QEAAXKK@Z.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401F788C (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall DelayZonePalmRejection::Initialize(DelayZonePalmRejection *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  char v5; // si
  DelayZoneTelemetry *v6; // rcx
  DelayZoneTelemetry *v7; // rax
  __int64 v8; // rdx
  DelayZoneTelemetry *v9; // rdi
  bool v10; // bl
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  _OWORD v14[5]; // [rsp+40h] [rbp-58h] BYREF

  DelayZonePalmRejection::ReadSettingsFromRegKey(this);
  memset(v14, 0, 0x48uLL);
  v2 = v14[1];
  *(_OWORD *)this = v14[0];
  v3 = v14[2];
  *((_OWORD *)this + 1) = v2;
  v4 = v14[3];
  *((_OWORD *)this + 2) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)&v14[4];
  *((_OWORD *)this + 3) = v4;
  *((_QWORD *)this + 8) = v3;
  *((_QWORD *)this + 3) = 0LL;
  CEResourceLock::Initialize((DelayZonePalmRejection *)((char *)this + 112));
  v5 = 1;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  *((_DWORD *)this + 23) = 0;
  v6 = (DelayZoneTelemetry *)*((_QWORD *)this + 15);
  *((_DWORD *)this + 22) = 1;
  if ( v6 )
  {
    DelayZoneTelemetry::Initialize(v6, *((_DWORD *)this + 26), *((_DWORD *)this + 25));
  }
  else
  {
    v7 = (DelayZoneTelemetry *)Win32AllocPoolZInitImpl(256LL, 0x3010uLL, 0x7A647355u);
    v9 = v7;
    if ( v7 )
    {
      DelayZoneTelemetry::Initialize(v7, *((_DWORD *)this + 26), *((_DWORD *)this + 25));
      *((_QWORD *)this + 15) = v9;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v5 = 0;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 69144),
          4,
          4,
          22,
          (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
      }
    }
  }
}
