/*
 * XREFs of LdrCreateEnclave @ 0x18010DF90
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCreateSoftwareEnclave @ 0x18010E094 (LdrpCreateSoftwareEnclave.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1801121DC (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x1801603F0 (ZwCreateEnclave.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG Reserved,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  int SoftwareEnclave; // ebx
  PVOID BaseAddressa; // [rsp+58h] [rbp-10h] BYREF

  BaseAddressa = *BaseAddress;
  SoftwareEnclave = ZwCreateEnclave(
                      ProcessHandle,
                      &BaseAddressa,
                      *(ULONG_PTR *)&Reserved,
                      Size,
                      InitialCommitment,
                      EnclaveType,
                      EnclaveInformation,
                      EnclaveInformationLength,
                      EnclaveError);
  if ( SoftwareEnclave >= 0 )
  {
    if ( EnclaveType - 16 > 1
      || (SoftwareEnclave = LdrpCreateSoftwareEnclave(BaseAddressa, Size, EnclaveType), SoftwareEnclave >= 0) )
    {
      *BaseAddress = BaseAddressa;
    }
    else
    {
      ZwFreeVirtualMemory(ProcessHandle, &BaseAddressa, 0LL, 0x8000u);
    }
  }
  if ( EnclaveType == 16 )
    LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(16LL, (unsigned int)SoftwareEnclave);
  return SoftwareEnclave;
}
