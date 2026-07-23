/*
 * XREFs of PipKsrNotifyDrivers @ 0x1407B5F5C
 * Callers:
 *     PipKsrCallback @ 0x1407B5D70 (PipKsrCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PnpDereferenceNotify @ 0x140A1A800 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140A1A8A4 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PipKsrNotifyDrivers(_QWORD *a1)
{
  int v2; // esi
  PVOID *v3; // rbx
  PVOID *v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v15[20]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 0;
  memset(v15, 0, sizeof(v15));
  ExAcquireFastMutex(&PnpKsrNotifyLock);
  v3 = (PVOID *)PnpKsrNotifyList;
  while ( v3 != &PnpKsrNotifyList )
  {
    ++*((_WORD *)v3 + 28);
    v4 = v3;
    KeReleaseGuardedMutex(&PnpKsrNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v3[9], 1u);
    if ( *((_BYTE *)v3 + 58) )
      goto LABEL_21;
    v6 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1;
    if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1 )
      v6 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_CANCEL.Data4;
    if ( !v6 && !*((_BYTE *)v3 + 80) )
      goto LABEL_21;
    v7 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
    if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
      v7 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
    if ( v7 || !*((_BYTE *)v3 + 80) )
    {
      v8 = *(_OWORD *)a1;
      v14 = 0;
      *(_DWORD *)v15 = 1310721;
      *(_OWORD *)&v15[4] = v8;
      v2 = PnpNotifyDriverCallback(v3, v15, &v14);
      if ( v2 >= 0 )
      {
        v9 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
        if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
          v9 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
        if ( v9 )
        {
          v10 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1;
          if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1 )
            v10 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_CANCEL.Data4;
          v2 = v14;
          if ( !v10 )
            *((_BYTE *)v3 + 80) = 0;
        }
        else
        {
          v2 = v14;
          *((_BYTE *)v3 + 80) = 1;
        }
      }
    }
    else
    {
LABEL_21:
      v2 = 0;
    }
    ExReleaseResourceLite((PERESOURCE)v3[9]);
    KeLeaveCriticalRegion();
    ExAcquireFastMutex(&PnpKsrNotifyLock);
    v3 = (PVOID *)*v3;
    PnpDereferenceNotify(v4);
    if ( v2 < 0 )
    {
      v11 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
      if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
        v11 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
      if ( !v11 )
        break;
      v12 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_FINALIZE.Data1;
      if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_FINALIZE.Data1 )
        v12 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_FINALIZE.Data4;
      if ( !v12 )
        break;
    }
  }
  KeReleaseGuardedMutex(&PnpKsrNotifyLock);
  return (unsigned int)v2;
}
