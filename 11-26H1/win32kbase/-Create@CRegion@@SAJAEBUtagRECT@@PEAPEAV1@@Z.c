/*
 * XREFs of ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1401677B4
 * Callers:
 *     ?CreateRegionFromRect@@YAJAEBUtagRECT@@PEAPEAUIRegion@@@Z @ 0x140167780 (-CreateRegionFromRect@@YAJAEBUtagRECT@@PEAPEAUIRegion@@@Z.c)
 * Callees:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140044A0C (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRegion::Create(const struct tagRECT *a1, struct CRegion **a2)
{
  int v4; // edi
  CRegion *Pool2; // rbx

  *a2 = 0LL;
  v4 = -1073741801;
  Pool2 = (CRegion *)ExAllocatePool2(256LL, 24LL, 1852273223LL);
  if ( Pool2 )
  {
    *((_QWORD *)Pool2 + 1) = 1LL;
    *(_QWORD *)Pool2 = &CRegion::`vftable';
    *((_QWORD *)Pool2 + 2) = 0LL;
    v4 = CRegion::InitializeFromRect(Pool2, a1);
    if ( v4 < 0 )
      (**(void (__fastcall ***)(CRegion *))Pool2)(Pool2);
    else
      *a2 = Pool2;
  }
  return (unsigned int)v4;
}
