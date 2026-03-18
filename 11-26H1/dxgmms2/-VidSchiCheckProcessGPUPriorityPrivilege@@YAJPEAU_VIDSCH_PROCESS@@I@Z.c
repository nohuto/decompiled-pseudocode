/*
 * XREFs of ?VidSchiCheckProcessGPUPriorityPrivilege@@YAJPEAU_VIDSCH_PROCESS@@I@Z @ 0x1400541F0
 * Callers:
 *     VidSchSetAbsolutePriorityHwContext @ 0x1400C42E0 (VidSchSetAbsolutePriorityHwContext.c)
 *     VidSchSetAbsolutePriorityContext @ 0x140122F90 (VidSchSetAbsolutePriorityContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckProcessGPUPriorityPrivilege(struct _VIDSCH_PROCESS *a1)
{
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 408LL) & 2) != 0 || *((_BYTE *)a1 + 2633) )
    return 0LL;
  else
    return SeSinglePrivilegeCheck((LUID)14LL, 1) == 0 ? 0xC0000022 : 0;
}
