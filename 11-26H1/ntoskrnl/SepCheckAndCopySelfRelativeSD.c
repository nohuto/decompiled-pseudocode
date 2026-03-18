/*
 * XREFs of SepCheckAndCopySelfRelativeSD @ 0x1404AF614
 * Callers:
 *     SeOperationAuditAlarm @ 0x1409FA6B0 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409FAF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409FB6F8 (SepAdtStagingEvent.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x1409FA3BC (SepSecurityDescriptorStrictLength.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140A61650 (RtlAbsoluteToSelfRelativeSD.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCheckAndCopySelfRelativeSD(__int16 *a1, PVOID *a2, ULONG *a3, _BYTE *a4)
{
  NTSTATUS v7; // ebx
  void *v8; // r11
  void *Pool2; // rax
  __int16 *AbsoluteSecurityDescriptor; // [rsp+40h] [rbp+8h] BYREF

  AbsoluteSecurityDescriptor = a1;
  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  v7 = 0;
  if ( a1 )
  {
    if ( a1[1] >= 0 )
    {
      v7 = RtlAbsoluteToSelfRelativeSD(&AbsoluteSecurityDescriptor, 0LL, a3);
      if ( v7 == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        *a2 = Pool2;
        if ( Pool2 )
        {
          v7 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, Pool2, a3);
          if ( v7 >= 0 )
          {
            *a4 = 1;
          }
          else
          {
            ExFreePoolWithTag(*a2, 0);
            *a2 = 0LL;
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      *a3 = SepSecurityDescriptorStrictLength();
      *a2 = v8;
    }
  }
  return (unsigned int)v7;
}
