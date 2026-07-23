/*
 * XREFs of IopUncacheInterfaceInformation @ 0x1409B21E4
 * Callers:
 *     IopDestroyDeviceNode @ 0x1409B0BD8 (IopDestroyDeviceNode.c)
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PipProcessStartPhase1 @ 0x1409B29C0 (PipProcessStartPhase1.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopUncacheInterfaceInformation(__int64 a1, __int64 a2)
{
  int v2; // r15d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *v9; // r14
  __int64 *v10; // rbp
  void *v11; // r12
  __int64 *v12; // rbp
  void *v13; // r14

  v2 = a2;
  if ( (_DWORD)a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  if ( a1 )
    v5 = *(_QWORD **)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = v5 + 61;
  v7 = (_QWORD *)v5[61];
  while ( v7 != v6 )
  {
    v12 = (__int64 *)v7[3];
    v13 = v7;
    if ( v12 )
    {
      guard_dispatch_icall_no_overrides(v12[1], a2);
      ExFreePoolWithTag(v12, 0);
    }
    v7 = (_QWORD *)*v7;
    ExFreePoolWithTag(v13, 0);
  }
  v8 = v5 + 63;
  v9 = (_QWORD *)v5[63];
  while ( v9 != v8 )
  {
    v10 = (__int64 *)v9[3];
    v11 = v9;
    if ( v10 )
    {
      guard_dispatch_icall_no_overrides(v10[1], a2);
      ExFreePoolWithTag(v10, 0);
    }
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v11, 0);
  }
  v5[62] = v5 + 61;
  *v6 = v6;
  v5[64] = v5 + 63;
  *v8 = v8;
  v5[65] = 0LL;
  if ( v2 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
  }
}
