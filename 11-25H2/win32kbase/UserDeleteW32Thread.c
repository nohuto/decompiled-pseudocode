/*
 * XREFs of UserDeleteW32Thread @ 0x140084340
 * Callers:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DereferenceW32Thread @ 0x140084240 (DereferenceW32Thread.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400BAD54 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1960 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1A28 (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FreeMessageList @ 0x140100A30 (FreeMessageList.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140106F84 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     IsFreeMessageListSupported @ 0x140109270 (IsFreeMessageListSupported.c)
 *     FreeQueue @ 0x14010EDC4 (FreeQueue.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall UserDeleteW32Thread(PVOID Buffer)
{
  struct _KTHREAD *v1; // rsi
  _DWORD *ThreadWin32Thread; // rbx
  void *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  __int64 v7; // rax
  tagQ *v8; // rcx
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter4; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+10h]

  v1 = *(struct _KTHREAD **)Buffer;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&BugCheckParameter4);
  if ( *((_DWORD *)Buffer + 94) )
  {
    v11 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2480LL);
  }
  else
  {
    v4 = (void *)*((_QWORD *)Buffer + 96);
    if ( v4 )
      ObfDereferenceObject(v4);
    v5 = (char *)*((_QWORD *)Buffer + 116);
    if ( v5 )
      GreDeleteFastMutex(v5);
    v6 = (char *)*((_QWORD *)Buffer + 67);
    if ( v6 )
      GreDeleteFastMutex(v6);
    *((_QWORD *)Buffer + 96) = MmUserProbeAddress;
    *((_QWORD *)Buffer + 116) = MmUserProbeAddress;
    *((_QWORD *)Buffer + 67) = MmUserProbeAddress;
    v7 = *((_QWORD *)Buffer + 59);
    if ( v7 )
    {
      if ( !*(_DWORD *)(v7 + 416) )
      {
        v11 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2406LL);
      }
      --*(_DWORD *)(*((_QWORD *)Buffer + 59) + 416LL);
      v8 = (tagQ *)*((_QWORD *)Buffer + 59);
      if ( !*((_DWORD *)v8 + 104) && !tagQ::IsAnyThreadAttached(v8) )
      {
        if ( (int)IsFreeMessageListSupported() >= 0 )
          FreeMessageList(*((_QWORD *)Buffer + 59) + 24LL);
        FreeQueue(*((void **)Buffer + 59));
      }
    }
    if ( *((_QWORD *)Buffer + 62) )
      DeferrableUnlockObjectAssignment<tagDESKTOP>();
    ThreadWin32Thread = (_DWORD *)PsGetThreadWin32Thread(v1);
    *(_QWORD *)ThreadWin32Thread = 0LL;
    GreDeleteFastMutex((char *)Buffer);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline()
      && v1 == KeGetCurrentThread() )
    {
      ThreadWin32Thread[6] |= 0x20u;
    }
    else
    {
      PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    }
    if ( ThreadWin32Thread && !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v1 == KeGetCurrentThread() )
      {
        if ( (_BYTE)BugCheckParameter4 )
          KeBugCheckEx(
            0x164u,
            0x12uLL,
            (ULONG_PTR)KeGetCurrentThread(),
            (ULONG_PTR)ThreadWin32Thread,
            (ULONG_PTR)&BugCheckParameter4);
        UserSessionSwitchLeaveCritWithNonPaged((__int64)ThreadWin32Thread, v9);
        LOBYTE(BugCheckParameter4) = 1;
      }
      ExFreePoolWithTag(ThreadWin32Thread, 0);
    }
  }
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&BugCheckParameter4);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( ThreadWin32Thread )
      ExFreePoolWithTag(ThreadWin32Thread, 0);
  }
}
