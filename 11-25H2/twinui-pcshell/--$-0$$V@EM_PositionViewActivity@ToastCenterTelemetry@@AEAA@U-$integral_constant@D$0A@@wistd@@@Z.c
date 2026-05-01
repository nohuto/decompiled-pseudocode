/*
 * XREFs of ??$?0$$V@EM_PositionViewActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180016C0C
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801EA8C8 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?StartActivity@EM_PositionViewActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180016CD8 (-StartActivity@EM_PositionViewActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
ToastCenterTelemetry::EM_PositionViewActivity *__fastcall ToastCenterTelemetry::EM_PositionViewActivity::EM_PositionViewActivity(
        ToastCenterTelemetry::EM_PositionViewActivity *this)
{
  char *v2; // rbx
  _QWORD *v3; // rcx

  v2 = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 12) = 0;
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = "EM_PositionViewActivity";
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 20) = 0;
  v3 = (_QWORD *)((char *)this + 88);
  v3[19] = 0LL;
  v3[20] = 0LL;
  memset_0(v3, 0, 0x98uLL);
  *((_DWORD *)v2 + 62) = 1;
  *((_QWORD *)v2 + 32) = 0LL;
  *((_QWORD *)this + 34) = v2;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = this;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = (char *)this + 48;
  *(_QWORD *)this = &ToastCenterTelemetry::EM_PositionViewActivity::`vftable';
  ToastCenterTelemetry::EM_PositionViewActivity::StartActivity(this);
  return this;
}
