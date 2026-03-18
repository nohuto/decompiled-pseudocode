/*
 * XREFs of PpDevCfgProcessDevices @ 0x1407ACC4C
 * Callers:
 *     PnpBootPhaseComplete @ 0x14079BF3C (PnpBootPhaseComplete.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PnpRequestDeviceAction @ 0x140482588 (PnpRequestDeviceAction.c)
 *     _CmDeleteDevice @ 0x14089690C (_CmDeleteDevice.c)
 *     PpDeviceRegistration @ 0x140912C9C (PpDeviceRegistration.c)
 *     _CmGetDeviceStatus @ 0x14099522C (_CmGetDeviceStatus.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     PpDevNodeLockTree @ 0x140A88424 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A921A4 (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140AC6C80 (PipForDeviceNodeSubtree.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 PpDevCfgProcessDevices()
{
  char v0; // si
  int v1; // edi
  __int64 v2; // rdx
  PVOID *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r9
  UNICODE_STRING *v6; // rbx
  __int64 v7; // rax
  int v9; // [rsp+30h] [rbp-20h]
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+80h] [rbp+30h] BYREF
  int v12; // [rsp+88h] [rbp+38h] BYREF
  int v13; // [rsp+90h] [rbp+40h] BYREF
  PVOID v14; // [rsp+98h] [rbp+48h] BYREF

  v14 = 0LL;
  P[1] = P;
  v0 = 0;
  v11 = 0;
  P[0] = P;
  v13 = 0;
  v12 = 0;
  if ( (PiDevCfgMode & 2) != 0 )
  {
    v1 = PipForDeviceNodeSubtree(IopRootDeviceNode, PiDevCfgProcessDeviceCallback, P);
    if ( v1 >= 0 && P[0] != P )
    {
      v1 = PiPnpRtlBeginOperation(&v14, v2);
      if ( v1 >= 0 )
      {
        for ( i = (PVOID *)P[0]; i != P; i = (PVOID *)*i )
        {
          if ( (int)CmGetDeviceStatus(
                      PiPnpRtlCtx,
                      (unsigned int)i[3],
                      0,
                      (unsigned int)&v11,
                      (__int64)&v13,
                      (__int64)&v12,
                      v9) < 0
            || (v11 & 2) == 0 )
          {
            PpDevNodeLockTree(3LL);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            LOBYTE(v5) = 1;
            PpDeviceRegistration(i + 2, 0LL, 0LL, v5);
            if ( (int)CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, i[3], 0LL) >= 0 )
              v0 = 1;
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegion();
            PpDevNodeUnlockTree(3LL);
          }
        }
        PiPnpRtlEndOperation(v14);
        if ( v0 )
          PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 8u, 0, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    v1 = 0;
  }
  while ( 1 )
  {
    v6 = (UNICODE_STRING *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v7 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v7 + 8) = P;
    RtlFreeAnsiString(v6 + 1);
    ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)v1;
}
