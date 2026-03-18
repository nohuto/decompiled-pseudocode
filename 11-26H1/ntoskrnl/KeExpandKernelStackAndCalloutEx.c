/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x140263890
 * Callers:
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402C5110 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     IoMountBootLayer @ 0x140793F80 (IoMountBootLayer.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14079AEA8 (IopIssueSystemEnvironmentRequest.c)
 *     sub_140AB5C94 @ 0x140AB5C94 (sub_140AB5C94.c)
 *     ViPtLogPoolTraceWrapper @ 0x140C4505C (ViPtLogPoolTraceWrapper.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402638C0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCalloutEx(
        PEXPAND_STACK_CALLOUT Callout,
        PVOID Parameter,
        SIZE_T Size,
        BOOLEAN Wait,
        PVOID Context)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, (__int64)Context);
}
