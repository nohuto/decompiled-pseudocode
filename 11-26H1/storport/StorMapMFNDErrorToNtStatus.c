/*
 * XREFs of StorMapMFNDErrorToNtStatus @ 0x14006F2A0
 * Callers:
 *     RaidAdapterMFNDChildPFControl @ 0x140062DF0 (RaidAdapterMFNDChildPFControl.c)
 *     RaidAdapterMFNDNameSpacePageMapControl @ 0x14006324C (RaidAdapterMFNDNameSpacePageMapControl.c)
 *     RaidAdapterReconfigureMFND @ 0x140065184 (RaidAdapterReconfigureMFND.c)
 *     StorGetMFNDCapabilities @ 0x140191E14 (StorGetMFNDCapabilities.c)
 *     StorMFNDNameSpaceReadWrite @ 0x140192278 (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x140192814 (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x140192A90 (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x140192C54 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQoSStatisticsLog @ 0x1401932C0 (StorQueryMFNDChildPFQoSStatisticsLog.c)
 *     StorQueryMFNDChildPFQoSStatisticsProperty @ 0x1401935F4 (StorQueryMFNDChildPFQoSStatisticsProperty.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x1401937F8 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x140193BD4 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x140193EE4 (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1401940C4 (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x1401944CC (StorQueryMFNDOperationInfo.c)
 *     StorRetrieveMFNDChildPFGlobalProperty @ 0x14019473C (StorRetrieveMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x140194E40 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x140195058 (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x140195250 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQoSStatisticsProperty @ 0x1401954C0 (StorSetMFNDChildPFQoSStatisticsProperty.c)
 *     StorSetMFNDChildPFQueuesState @ 0x1401956CC (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x1401959F8 (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x140195D18 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x14019627C (StorSetMFNDOperationInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall StorMapMFNDErrorToNtStatus(unsigned __int16 a1, _DWORD *a2)
{
  char v2; // r8
  int v3; // eax

  v2 = 1;
  v3 = a1 >> 1;
  switch ( (unsigned __int8)v3 )
  {
    case 0xC5u:
      goto LABEL_9;
    case 0xC6u:
    case 0xC7u:
      *a2 = -2147483210;
      return v2;
    case 0xC8u:
LABEL_9:
      *a2 = -2147483599;
      return v2;
  }
  if ( (unsigned __int8)v3 != 201 )
    return 0;
  *a2 = -1073741790;
  return v2;
}
