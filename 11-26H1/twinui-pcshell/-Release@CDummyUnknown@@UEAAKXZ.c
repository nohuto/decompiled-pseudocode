/*
 * XREFs of ?Release@CDummyUnknown@@UEAAKXZ @ 0x180561EA0
 * Callers:
 *     ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x18055BC8C (--$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z.c)
 *     ?Release@CDummyUnknown@@W7EAAKXZ @ 0x180561ED0 (-Release@CDummyUnknown@@W7EAAKXZ.c)
 *     ?Release@CDummyUnknown@@WBA@EAAKXZ @ 0x180561EE0 (-Release@CDummyUnknown@@WBA@EAAKXZ.c)
 *     BindCtx_RegisterFolderEnumMode @ 0x1806CB598 (BindCtx_RegisterFolderEnumMode.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
