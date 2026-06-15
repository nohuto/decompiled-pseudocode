/*
 * XREFs of ??1?$CAutoPtr@I@ATL@@QEAA@XZ @ 0x180037758
 * Callers:
 *     _CProcess::UpdateStreamCountAndProcessCategory_::_1_::dtor$1 @ 0x18004C7C0 (_CProcess--UpdateStreamCountAndProcessCategory_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<unsigned int>::~CAutoPtr<unsigned int>(void **a1)
{
  operator delete(*a1, (const struct std::nothrow_t *)4);
  *a1 = 0LL;
}
