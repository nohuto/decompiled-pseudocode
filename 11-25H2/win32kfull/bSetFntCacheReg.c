/*
 * XREFs of bSetFntCacheReg @ 0x14026ECE0
 * Callers:
 *     InitFNTCache @ 0x14010CA54 (InitFNTCache.c)
 *     bServicingStackModifiedFonts @ 0x14010D098 (bServicingStackModifiedFonts.c)
 *     EngCloseFNTCache @ 0x1403040D4 (EngCloseFNTCache.c)
 *     EngFntCacheFault @ 0x1403041E0 (EngFntCacheFault.c)
 * Callees:
 *     bSetRegDWORDValue @ 0x140216B54 (bSetRegDWORDValue.c)
 */

_BOOL8 __fastcall bSetFntCacheReg(unsigned int a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rbx
  __int64 SessionState; // rax

  v2 = a2;
  v3 = a1;
  SessionState = W32GetSessionState(a1, a2);
  return bSetRegDWORDValue(*(HANDLE *)(*(_QWORD *)(SessionState + 96) + 19616LL), off_14034EFE0[v3], v2);
}
