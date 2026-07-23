/*
 * XREFs of MiGetVirtualFaultPageInfo @ 0x140528228
 * Callers:
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 *     MiLargePageFault @ 0x1403A95C0 (MiLargePageFault.c)
 *     MiIsVirtualizationFaultPrimaryPage @ 0x1404EFB1C (MiIsVirtualizationFaultPrimaryPage.c)
 *     MiMarkVirtualizationFaultPageInfoFailed @ 0x1404F2794 (MiMarkVirtualizationFaultPageInfoFailed.c)
 *     MiValidVirtualizationFault @ 0x140527ED0 (MiValidVirtualizationFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVirtualFaultPageInfo(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  __int64 v7; // r8

  v3 = *(unsigned __int64 **)(a1 + 8);
  v5 = *v3;
  if ( a2 < *v3 || a2 >= v5 + v3[1] )
    return 0LL;
  v6 = (a2 - v5) >> 12;
  v7 = *(_QWORD *)(a1 + 40) + 8 * v6;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a1 + 56) & 0x100) == 0 )
  {
    if ( v6 )
      return -(__int64)((*(_QWORD *)(v7 - 8) & 0x10000000000000LL) != 0) & v7;
  }
  return v7;
}
