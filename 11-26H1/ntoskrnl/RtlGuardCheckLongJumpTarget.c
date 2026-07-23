/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x140533210
 * Callers:
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 * Callees:
 *     RtlpControlFlowGuardEnforced @ 0x140415164 (RtlpControlFlowGuardEnforced.c)
 *     RtlPcToFileHeader @ 0x140479300 (RtlPcToFileHeader.c)
 *     RtlFailFast2 @ 0x1405376C0 (RtlFailFast2.c)
 *     bsearch_s @ 0x140538ED0 (bsearch_s.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407809CC (LdrImageDirectoryEntryToLoadConfig.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  __int64 v3; // r9
  __int64 Config; // rax
  rsize_t v6; // r8
  int Key; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseOfImage; // [rsp+50h] [rbp+18h] BYREF

  Key = 0;
  BaseOfImage = 0LL;
  if ( (unsigned int)RtlpControlFlowGuardEnforced(
                       (__int64)PcValue,
                       *(__int64 *)&IsFastFail,
                       (__int64)IsLongJumpTarget,
                       v3) )
  {
    RtlPcToFileHeader(PcValue, &BaseOfImage);
    if ( !BaseOfImage
      || (Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage)) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = (_DWORD)PcValue - (_DWORD)BaseOfImage, (v6 = *(_QWORD *)(Config + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(Config + 176),
             v6,
             (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
             0LL)) )
    {
      RtlFailFast2(38LL, PcValue);
    }
  }
  return 0;
}
