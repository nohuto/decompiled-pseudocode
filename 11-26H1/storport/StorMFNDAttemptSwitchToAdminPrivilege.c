/*
 * XREFs of StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400CD670
 * Callers:
 *     StorMFNDChildPFControl @ 0x140192010 (StorMFNDChildPFControl.c)
 *     StorMFNDNSPageMapControl @ 0x14019214C (StorMFNDNSPageMapControl.c)
 *     StorMFNDNameSpaceReadWrite @ 0x140192278 (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x1401937F8 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1401940C4 (StorQueryMFNDNamespacePageMap.c)
 *     StorResetMFND @ 0x140194654 (StorResetMFND.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x140194E40 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x140195058 (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x140195250 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQoSStatisticsProperty @ 0x1401954C0 (StorSetMFNDChildPFQoSStatisticsProperty.c)
 *     StorSetMFNDChildPFQueuesState @ 0x1401956CC (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x1401959F8 (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x140195D18 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x14019627C (StorSetMFNDOperationInfo.c)
 * Callees:
 *     StorSetMFNDOperationPrivilege @ 0x1400CD8C8 (StorSetMFNDOperationPrivilege.c)
 */

__int64 __fastcall StorMFNDAttemptSwitchToAdminPrivilege(__int64 a1)
{
  __int64 v2; // rdx
  signed __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int v6; // ebx

  ExAcquireFastMutex((PFAST_MUTEX)(*(_QWORD *)(a1 + 6224) + 128LL));
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 6224) + 120LL), 1uLL);
  v4 = *(_QWORD *)(a1 + 6224);
  v5 = v3 + 1;
  if ( v5 != 1 )
  {
    if ( v5 <= 1 )
    {
      *(_DWORD *)(v4 + 8) |= 4u;
      v6 = -1073741595;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(v4 + 32) != 1 )
    {
      *(_DWORD *)(v4 + 8) |= 2u;
      v6 = -1073741436;
      goto LABEL_10;
    }
    goto LABEL_5;
  }
  if ( *(_DWORD *)(v4 + 32) == 1 )
  {
    *(_DWORD *)(v4 + 8) |= 0x10u;
LABEL_5:
    v6 = 0;
    goto LABEL_10;
  }
  LOBYTE(v2) = 1;
  v6 = StorSetMFNDOperationPrivilege(a1, v2);
LABEL_10:
  ExReleaseFastMutex((PFAST_MUTEX)(*(_QWORD *)(a1 + 6224) + 128LL));
  return v6;
}
