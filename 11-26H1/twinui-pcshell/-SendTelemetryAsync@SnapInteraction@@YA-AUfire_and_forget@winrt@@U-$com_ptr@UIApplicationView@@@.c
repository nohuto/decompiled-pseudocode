/*
 * XREFs of ?SendTelemetryAsync@SnapInteraction@@YA?AUfire_and_forget@winrt@@U?$com_ptr@UIApplicationView@@@3@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1800E1EF4
 * Callers:
 *     ?SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800E1E98 (-SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_stora.c)
 *     ??1InteractionRecord@SnapInteraction@@QEAA@XZ @ 0x1800E25A0 (--1InteractionRecord@SnapInteraction@@QEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x1800252D4 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x180269630 (SnapInteraction--SendTelemetryAsync$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall SnapInteraction::SendTelemetryAsync(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v6; // [rsp+48h] [rbp+10h]

  v6 = operator new(0x30uLL);
  v4 = *a1;
  *a1 = 0LL;
  v6[3] = v4;
  v6[4] = a2;
  *v6 = SnapInteraction::SendTelemetryAsync__ResumeCoro_1;
  *((_DWORD *)v6 + 2) = 65538;
  *((_BYTE *)v6 + 16) = 0;
  SnapInteraction::SendTelemetryAsync__ResumeCoro_1(v6);
  winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(a1);
  return 0;
}
