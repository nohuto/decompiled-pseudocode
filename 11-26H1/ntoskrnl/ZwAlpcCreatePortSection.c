/*
 * XREFs of ZwAlpcCreatePortSection @ 0x140728F80
 * Callers:
 *     DifZwAlpcCreatePortSectionWrapper @ 0x14069E410 (DifZwAlpcCreatePortSectionWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140B3B244 (CmFcpCreateAlpcSectionView.c)
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
