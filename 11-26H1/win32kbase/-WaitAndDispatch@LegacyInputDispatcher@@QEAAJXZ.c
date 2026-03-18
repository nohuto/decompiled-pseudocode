/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1401AFD20
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x14013F820 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdi
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  void (*v7)(void); // rax

  while ( 1 )
  {
    v2 = KeWaitForMultipleObjects(
           *((_DWORD *)this + 13),
           *((PVOID **)this + 1),
           WaitAny,
           WrUserRequest,
           *((_BYTE *)this + 56),
           *((_BYTE *)this + 57),
           0LL,
           *((PKWAIT_BLOCK *)this + 3));
    v3 = (unsigned int)v2;
    if ( v2 < 0 )
      return (unsigned int)v3;
    v4 = *((_DWORD *)this + 13);
    if ( (unsigned int)v3 >= v4 )
      goto LABEL_15;
    v5 = *((_DWORD *)this + 10);
    if ( v5 >= v4 && v5 != 64 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3276LL);
    v6 = *((_DWORD *)this + 10);
    if ( v6 == 64 || (unsigned int)v3 < v6 )
    {
LABEL_15:
      if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
        return (unsigned int)v3;
      v7 = *(void (**)(void))(*((_QWORD *)this + 4) + 16 * v3);
      if ( !v7 )
        return (unsigned int)v3;
      v7();
    }
    else
    {
      LegacyInputDispatcher::Dispatch(this, v3);
    }
  }
}
