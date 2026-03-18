/*
 * XREFs of ntoskrnl_24 @ 0x1407A90D0
 * Callers:
 *     sub_1407A98F4 @ 0x1407A98F4 (sub_1407A98F4.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 *     sub_140978BA4 @ 0x140978BA4 (sub_140978BA4.c)
 * Callees:
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
