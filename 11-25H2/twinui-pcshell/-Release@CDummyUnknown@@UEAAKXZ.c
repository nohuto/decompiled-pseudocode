/*
 * XREFs of ?Release@CDummyUnknown@@UEAAKXZ @ 0x18053E050
 * Callers:
 *     ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x180537ED4 (--$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z.c)
 *     ?Release@CDummyUnknown@@W7EAAKXZ @ 0x18053E080 (-Release@CDummyUnknown@@W7EAAKXZ.c)
 *     ?Release@CDummyUnknown@@WBA@EAAKXZ @ 0x18053E090 (-Release@CDummyUnknown@@WBA@EAAKXZ.c)
 *     BindCtx_RegisterFolderEnumMode @ 0x1806A34C4 (BindCtx_RegisterFolderEnumMode.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CDummyUnknown::Release(CDummyUnknown *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 6) - 1);
  *((_DWORD *)this + 6) = result;
  if ( (int)result <= 0 )
  {
    operator delete(this, (const struct std::nothrow_t *)0x40);
    return 0LL;
  }
  return result;
}
