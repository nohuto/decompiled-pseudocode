/*
 * XREFs of ZwAlpcCreatePortSection @ 0x14069C100
 * Callers:
 *     DifZwAlpcCreatePortSectionWrapper @ 0x14062FE80 (DifZwAlpcCreatePortSectionWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140ABCEFC (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreatePortSection(
        HANDLE PortHandle,
        ULONG Flags,
        HANDLE SectionHandle,
        SIZE_T SectionSize,
        PALPC_HANDLE AlpcSectionHandle,
        PSIZE_T ActualSectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
