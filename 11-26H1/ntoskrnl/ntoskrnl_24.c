/*
 * XREFs of ntoskrnl_24 @ 0x1408382D0
 * Callers:
 *     sub_140838B04 @ 0x140838B04 (sub_140838B04.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 *     sub_140A7DC40 @ 0x140A7DC40 (sub_140A7DC40.c)
 * Callees:
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwpSecurityLock.MutantListHead.Blink )
    return EtwWrite((REGHANDLE)EtwpSecurityLock.MutantListHead.Blink, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
