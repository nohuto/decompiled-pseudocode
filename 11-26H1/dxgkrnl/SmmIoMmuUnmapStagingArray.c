/*
 * XREFs of SmmIoMmuUnmapStagingArray @ 0x14009BE10
 * Callers:
 *     SmmUnmapPagesFromIommuInternal @ 0x14006D4E4 (SmmUnmapPagesFromIommuInternal.c)
 *     SmmIommuMapStagingArray @ 0x14009BED4 (SmmIommuMapStagingArray.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmUnmapIommu @ 0x1400647DC (SmmUnmapIommu.c)
 *     SmmIoMmuReferencePages @ 0x14009BCA4 (SmmIoMmuReferencePages.c)
 */

__int64 __fastcall SmmIoMmuUnmapStagingArray(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 result; // rax

  do
  {
    if ( (int)SmmIoMmuReferencePages(a1 + 64, a2, 0) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 692;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(((NTSTATUS)(Status)) >= 0)", 692LL, 0LL, 0LL, 0LL, 0LL);
    }
    v4 = *(_DWORD *)(a2 + 28);
    if ( v4 )
      SmmUnmapIommu(a1, 0LL, *(_QWORD *)(a2 + 8), v4);
    result = *(unsigned int *)(a2 + 16);
  }
  while ( *(_DWORD *)(a2 + 24) != (_DWORD)result );
  return result;
}
