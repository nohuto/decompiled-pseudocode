/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x140406B20
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402D5420 (MiResolvePrivateZeroFault.c)
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x14036FF50 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiGetHardFaultPages @ 0x140372958 (MiGetHardFaultPages.c)
 *     MmGetAvailablePagesBelowPriority @ 0x140406314 (MmGetAvailablePagesBelowPriority.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140406A70 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiGetExtendedStandbyPage @ 0x140703824 (MiGetExtendedStandbyPage.c)
 *     MiAllocateCrcList @ 0x140B55EB8 (MiAllocateCrcList.c)
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
