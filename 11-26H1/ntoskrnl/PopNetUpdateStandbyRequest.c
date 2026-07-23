/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x140B6B9E8
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140493B20 (RtlCheckTokenMembership.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetUpdateStandbyRequest(char a1)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-8h]
  BOOLEAN IsMember; // [rsp+38h] [rbp+10h] BYREF

  IsMember = 0;
  if ( PopPdcDeviceListLock.SchedulerApc.NormalContext )
  {
    v2 = RtlCheckTokenMembership(0LL, PopPdcDeviceListLock.SchedulerApc.NormalContext, &IsMember);
    if ( v2 < 0 )
      return (unsigned int)v2;
    if ( !IsMember )
      return (unsigned int)-1073741790;
    PopAcquirePolicyLock(v4, v3);
    if ( LOBYTE(PopPdcDeviceListLock.Spare35[1]) )
    {
      if ( !a1 )
        goto LABEL_8;
    }
    else if ( a1 )
    {
LABEL_8:
      LOBYTE(PopPdcDeviceListLock.Spare35[1]) = a1;
LABEL_9:
      PopReleasePolicyLock(v6, v5, v7, v8, v10);
      return (unsigned int)v2;
    }
    v2 = -1073741811;
    goto LABEL_9;
  }
  return (unsigned int)-1073741823;
}
