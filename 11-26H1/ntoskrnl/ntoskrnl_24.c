/*
 * XREFs of ntoskrnl_24 @ 0x14083E510
 * Callers:
 *     sub_14083ED44 @ 0x14083ED44 (sub_14083ED44.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     sub_140A83AB0 @ 0x140A83AB0 (sub_140A83AB0.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
