/*
 * XREFs of bServicingStackModifiedFonts @ 0x14010D098
 * Callers:
 *     InitFNTCache @ 0x14010CA54 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x14010C8D0 (bQueryFntCacheReg.c)
 *     bSetFntCacheReg @ 0x14026ECE0 (bSetFntCacheReg.c)
 */

_BOOL8 __fastcall bServicingStackModifiedFonts(__int64 a1, __int64 a2, __int64 a3)
{
  BOOL v3; // ebx
  __int64 SessionState; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v3 = 1;
  SessionState = W32GetSessionState(a1, a2, a3);
  if ( (unsigned int)bQueryFntCacheReg(
                       *(HANDLE *)(*(_QWORD *)(SessionState + 96) + 19616LL),
                       L"ServicingStackModifiedFonts",
                       &v6) )
    v3 = v6 != 2;
  bSetFntCacheReg(2LL, 2LL);
  return v3;
}
