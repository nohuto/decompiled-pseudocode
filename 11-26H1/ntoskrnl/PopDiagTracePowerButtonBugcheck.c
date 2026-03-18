/*
 * XREFs of PopDiagTracePowerButtonBugcheck @ 0x1407D3B74
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14060CD70 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x1407C8FC0 (PopRecordLongPowerButtonPressDetected.c)
 */

void __fastcall PopDiagTracePowerButtonBugcheck(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int8 *v4; // rdx
  int v5; // r8d
  ULONG v6; // [rsp+20h] [rbp-E0h]
  char SchedulerSharedSwappablePage; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int KernelShadowStack; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int RealtimePriorityFloor; // [rsp+3Ch] [rbp-C4h] BYREF
  void *KernelShadowStackBase; // [rsp+40h] [rbp-C0h] BYREF
  int SchedulerSharedSwappablePage_high; // [rsp+48h] [rbp-B8h] BYREF
  void *AutoBoostThreadState; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int SchedulerAssistYieldCounter; // [rsp+54h] [rbp-ACh] BYREF
  int UserAbEntries_high; // [rsp+58h] [rbp-A8h] BYREF
  int KcsanThread_high; // [rsp+5Ch] [rbp-A4h] BYREF
  void *KernelShadowStackInitial; // [rsp+60h] [rbp-A0h] BYREF
  void *AllFields; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+80h] [rbp-80h] BYREF
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int *p_KernelShadowStack; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  unsigned int *p_RealtimePriorityFloor; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  char *p_SchedulerSharedSwappablePage; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  void **p_KernelShadowStackInitial; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  void **p_KernelShadowStackBase; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  void **v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  void **p_AllFields; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int *p_SchedulerSharedSwappablePage_high; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  char *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  void **p_AutoBoostThreadState; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  void **v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  unsigned int *p_SchedulerAssistYieldCounter; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  int *p_UserAbEntries_high; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  int *p_KcsanThread_high; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  __int64 *v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]

  if ( a1 == 7000 )
  {
    LOBYTE(a2) = 1;
    PopRecordLongPowerButtonPressDetected(1, a2, a3, a4);
    if ( (unsigned int)dword_140E07598 > 5 && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
    {
      v9 = 7000;
      v22 = &v9;
      v4 = (unsigned __int8 *)&byte_14004C987;
      KernelShadowStack = (int)PopModernStandbyStateNotify.KernelShadowStack;
      p_KernelShadowStack = &KernelShadowStack;
      RealtimePriorityFloor = PopModernStandbyStateNotify.RealtimePriorityFloor;
      p_RealtimePriorityFloor = &RealtimePriorityFloor;
      SchedulerSharedSwappablePage = (char)PopModernStandbyStateNotify.SchedulerSharedSwappablePage;
      p_SchedulerSharedSwappablePage = &SchedulerSharedSwappablePage;
      KernelShadowStackInitial = PopModernStandbyStateNotify.KernelShadowStackInitial;
      p_KernelShadowStackInitial = &KernelShadowStackInitial;
      KernelShadowStackBase = PopModernStandbyStateNotify.KernelShadowStackBase;
      p_KernelShadowStackBase = &KernelShadowStackBase;
      v34 = (void **)((char *)&KernelShadowStackBase + 4);
      AllFields = (void *)PopModernStandbyStateNotify.KernelShadowStackLimit.AllFields;
      p_AllFields = &AllFields;
      SchedulerSharedSwappablePage_high = HIDWORD(PopModernStandbyStateNotify.SchedulerSharedSwappablePage);
      p_SchedulerSharedSwappablePage_high = &SchedulerSharedSwappablePage_high;
      v8[0] = PopModernStandbyStateNotify.Spare32;
      v40 = v8;
      AutoBoostThreadState = PopModernStandbyStateNotify.AutoBoostThreadState;
      p_AutoBoostThreadState = &AutoBoostThreadState;
      v44 = (void **)((char *)&AutoBoostThreadState + 4);
      SchedulerAssistYieldCounter = PopModernStandbyStateNotify.SchedulerAssistYieldCounter;
      p_SchedulerAssistYieldCounter = &SchedulerAssistYieldCounter;
      UserAbEntries_high = HIDWORD(PopModernStandbyStateNotify.UserAbEntries);
      p_UserAbEntries_high = &UserAbEntries_high;
      KcsanThread_high = HIDWORD(PopModernStandbyStateNotify.KcsanThread);
      p_KcsanThread_high = &KcsanThread_high;
      v6 = 17;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 1LL;
      v31 = 8LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 8LL;
      v39 = 4LL;
LABEL_9:
      v43 = 4LL;
      v41 = 1LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, v4, 0LL, 0LL, v6, &v21);
    }
  }
  else if ( a1 == 15000
         && (unsigned int)dword_140E07598 > 5
         && tlgKeywordOn((__int64)&dword_140E07598, 0x800000000000LL) )
  {
    KcsanThread_high = v5;
    v22 = &KcsanThread_high;
    v4 = (unsigned __int8 *)&dword_14004C134;
    UserAbEntries_high = (int)PopModernStandbyStateNotify.KernelShadowStack;
    p_KernelShadowStack = &UserAbEntries_high;
    SchedulerAssistYieldCounter = PopModernStandbyStateNotify.RealtimePriorityFloor;
    p_RealtimePriorityFloor = &SchedulerAssistYieldCounter;
    v8[0] = PopModernStandbyStateNotify.SchedulerSharedSwappablePage;
    p_SchedulerSharedSwappablePage = v8;
    AllFields = PopModernStandbyStateNotify.KernelShadowStackInitial;
    p_KernelShadowStackInitial = &AllFields;
    p_KernelShadowStackBase = (void **)((char *)&AutoBoostThreadState + 4);
    AutoBoostThreadState = (void *)__PAIR64__(
                                     (unsigned int)PopModernStandbyStateNotify.KernelShadowStackBase,
                                     HIDWORD(PopModernStandbyStateNotify.KernelShadowStackBase));
    v34 = &AutoBoostThreadState;
    KernelShadowStackInitial = (void *)PopModernStandbyStateNotify.KernelShadowStackLimit.AllFields;
    p_AllFields = &KernelShadowStackInitial;
    SchedulerSharedSwappablePage_high = HIDWORD(PopModernStandbyStateNotify.SchedulerSharedSwappablePage);
    p_SchedulerSharedSwappablePage_high = &SchedulerSharedSwappablePage_high;
    SchedulerSharedSwappablePage = (char)PopModernStandbyStateNotify.Spare32;
    v40 = &SchedulerSharedSwappablePage;
    p_AutoBoostThreadState = (void **)((char *)&KernelShadowStackBase + 4);
    KernelShadowStackBase = (void *)__PAIR64__(
                                      (unsigned int)PopModernStandbyStateNotify.AutoBoostThreadState,
                                      HIDWORD(PopModernStandbyStateNotify.KernelAbEntries));
    v44 = &KernelShadowStackBase;
    RealtimePriorityFloor = PopModernStandbyStateNotify.SchedulerAssistYieldCounter;
    p_SchedulerAssistYieldCounter = &RealtimePriorityFloor;
    KernelShadowStack = HIDWORD(PopModernStandbyStateNotify.UserAbEntries);
    p_UserAbEntries_high = &KernelShadowStack;
    v9 = HIDWORD(PopModernStandbyStateNotify.KcsanThread);
    p_KcsanThread_high = &v9;
    v52 = &v20;
    v6 = 18;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 4LL;
    v29 = 1LL;
    v31 = 8LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 8LL;
    v39 = 4LL;
    v20 = 0x1000000LL;
    v53 = 8LL;
    goto LABEL_9;
  }
}
