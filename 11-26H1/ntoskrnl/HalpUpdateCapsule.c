/*
 * XREFs of HalpUpdateCapsule @ 0x14059A910
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     HalEfiUpdateCapsule @ 0x140586DE8 (HalEfiUpdateCapsule.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 HalpUpdateCapsule()
{
  char v1; // di
  unsigned int v2; // ecx
  unsigned int updated; // ebx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalpDeviceBlockUnblockPushLock.WaitBlockFill6[104] )
    return 3221225474LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v1 = 0;
  }
  else
  {
    v1 = 1;
    v2 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * KeGetPcr()->Prcb.Number);
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
    Affinity.Mask = 1LL << v2;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  updated = HalEfiUpdateCapsule();
  if ( v1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return updated;
}
