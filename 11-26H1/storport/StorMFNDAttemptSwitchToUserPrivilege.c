/*
 * XREFs of StorMFNDAttemptSwitchToUserPrivilege @ 0x1400CD71C
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

__int64 __fastcall StorMFNDAttemptSwitchToUserPrivilege(__int64 a1)
{
  signed __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  ExAcquireFastMutex((PFAST_MUTEX)(*(_QWORD *)(a1 + 6224) + 128LL));
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 6224) + 120LL), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = *(_QWORD *)(a1 + 6224);
  v4 = v2 - 1;
  if ( v4 )
  {
    if ( v4 < 1 )
    {
      *(_DWORD *)(v3 + 8) |= 4u;
      v5 = -1073741595;
    }
    else if ( *(_DWORD *)(v3 + 32) == 1 )
    {
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 8) |= 2u;
      v5 = -1073741436;
    }
  }
  else
  {
    v5 = 0;
    if ( *(_DWORD *)(v3 + 32) )
      v5 = StorSetMFNDOperationPrivilege(a1, 0LL);
    else
      *(_DWORD *)(v3 + 8) |= 2u;
  }
  ExReleaseFastMutex((PFAST_MUTEX)(*(_QWORD *)(a1 + 6224) + 128LL));
  return v5;
}
