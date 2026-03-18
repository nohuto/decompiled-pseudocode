/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x140530D10
 * Callers:
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 * Callees:
 *     RtlpControlFlowGuardEnforced @ 0x14041D914 (RtlpControlFlowGuardEnforced.c)
 *     RtlPcToFileHeader @ 0x14047F990 (RtlPcToFileHeader.c)
 *     RtlFailFast2 @ 0x140535240 (RtlFailFast2.c)
 *     bsearch_s @ 0x140536A50 (bsearch_s.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14077DECC (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Config; // rax
  rsize_t v6; // r8
  int Key; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  Key = 0;
  v9 = 0LL;
  if ( (unsigned int)RtlpControlFlowGuardEnforced(a1, a2, a3, a4) )
  {
    RtlPcToFileHeader(a1, &v9);
    if ( !v9
      || (Config = LdrImageDirectoryEntryToLoadConfig(v9)) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = a1 - v9, (v6 = *(_QWORD *)(Config + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(Config + 176),
             v6,
             (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
             0LL)) )
    {
      RtlFailFast2(38LL, a1);
    }
  }
  return 0LL;
}
