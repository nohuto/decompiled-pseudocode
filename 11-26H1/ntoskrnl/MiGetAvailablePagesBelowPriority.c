/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x1403FFC10
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402B71E0 (MiResolvePrivateZeroFault.c)
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x140371D00 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     MiGetHardFaultPages @ 0x140374708 (MiGetHardFaultPages.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1403FF408 (MmGetAvailablePagesBelowPriority.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1403FFB60 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiGetExtendedStandbyPage @ 0x1407084F4 (MiGetExtendedStandbyPage.c)
 *     MiAllocateCrcList @ 0x140B58BB8 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesBelowPriority(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx

  result = *(_QWORD *)(a1 + 3408) + *(_QWORD *)(a1 + 3280);
  v3 = a1 + 3648;
  v4 = a1 + 88LL * a2 + 3648;
  if ( a1 + 3648 < v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v3 + 16);
      v3 += 88LL;
      result += v5;
    }
    while ( v3 < v4 );
  }
  return result;
}
