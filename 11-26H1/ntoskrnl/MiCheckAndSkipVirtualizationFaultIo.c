/*
 * XREFs of MiCheckAndSkipVirtualizationFaultIo @ 0x1407041B8
 * Callers:
 *     MiResolveMappedFileFaultInitialize @ 0x140371768 (MiResolveMappedFileFaultInitialize.c)
 *     MiEvaluatePageFileRead @ 0x1403721F0 (MiEvaluatePageFileRead.c)
 * Callees:
 *     MiIsVirtualizationFaultPrimaryPage @ 0x1404EFB1C (MiIsVirtualizationFaultPrimaryPage.c)
 *     MiMarkVirtualizationFaultPageInfoFailed @ 0x1404F2794 (MiMarkVirtualizationFaultPageInfoFailed.c)
 */

__int64 __fastcall MiCheckAndSkipVirtualizationFaultIo(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  int v4; // r14d

  v4 = *(_DWORD *)(a1 + 56);
  if ( (v4 & 4) == 0
    || MiIsVirtualizationFaultPrimaryPage(a1, a2)
    || (v4 & 0x10) == 0 && a3 && (a4 & 8) != 0 && a4 >> 12 == *(_DWORD *)(a3 + 1300) )
  {
    return 0LL;
  }
  MiMarkVirtualizationFaultPageInfoFailed(a1, a2);
  return 1LL;
}
