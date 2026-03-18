/*
 * XREFs of UserDeleteW32Thread @ 0x140091290
 * Callers:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DereferenceW32Thread @ 0x140091190 (DereferenceW32Thread.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400491B4 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     FreeQueue @ 0x1400B7FDC (FreeQueue.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1400B9344 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     IsFreeMessageListSupported @ 0x1400B9424 (IsFreeMessageListSupported.c)
 *     FreeMessageList @ 0x1400B94F0 (FreeMessageList.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall UserDeleteW32Thread(PVOID Buffer)
{
  struct _KTHREAD *v1; // rsi
  _DWORD *ThreadWin32Thread; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx
  __int64 v10; // rax
  tagQ *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // [rsp+40h] [rbp+8h] BYREF
  int v20; // [rsp+48h] [rbp+10h]

  v1 = *(struct _KTHREAD **)Buffer;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  if ( *((_DWORD *)Buffer + 92) )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2457LL);
  }
  else
  {
    v7 = (void *)*((_QWORD *)Buffer + 95);
    if ( v7 )
      ObfDereferenceObject(v7);
    v8 = (char *)*((_QWORD *)Buffer + 115);
    if ( v8 )
      GreDeleteFastMutex(v8, v4, v5, v6);
    v9 = (char *)*((_QWORD *)Buffer + 66);
    if ( v9 )
      GreDeleteFastMutex(v9, v4, v5, v6);
    *((_QWORD *)Buffer + 95) = MmUserProbeAddress;
    *((_QWORD *)Buffer + 115) = MmUserProbeAddress;
    *((_QWORD *)Buffer + 66) = MmUserProbeAddress;
    v10 = *((_QWORD *)Buffer + 58);
    if ( v10 )
    {
      if ( !*(_DWORD *)(v10 + 440) )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2390LL);
      }
      --*(_DWORD *)(*((_QWORD *)Buffer + 58) + 440LL);
      v11 = (tagQ *)*((_QWORD *)Buffer + 58);
      if ( !*((_DWORD *)v11 + 110) && !tagQ::IsAnyThreadAttached(v11) )
      {
        if ( (int)IsFreeMessageListSupported() >= 0 )
          FreeMessageList(*((_QWORD *)Buffer + 58) + 24LL);
        FreeQueue(*((void **)Buffer + 58));
      }
    }
    if ( *((_QWORD *)Buffer + 61) )
      DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)Buffer + 61, v4);
    ThreadWin32Thread = (_DWORD *)PsGetThreadWin32Thread(v1);
    *(_QWORD *)ThreadWin32Thread = 0LL;
    GreDeleteFastMutex((char *)Buffer, v12, v13, v14);
    if ( v1 == KeGetCurrentThread() )
      ThreadWin32Thread[6] |= 0x10u;
    else
      PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
  }
  if ( !v19 )
    UserSessionSwitchLeaveCritWithNonPaged(v16, v15, v17, v18);
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
