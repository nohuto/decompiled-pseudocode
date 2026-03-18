/*
 * XREFs of ?vMakeItWide@WIDENER@pathwide@@QEAAXAEAVEPATHOBJ@@@Z @ 0x1401D2BC0
 * Callers:
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140119278 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall pathwide::WIDENER::vMakeItWide(pathwide::WIDENER *this, struct EPATHOBJ *a2)
{
  char *v2; // rbx
  __int64 v4; // rcx

  v2 = (char *)this + 1128;
  EPATHOBJ::vFreeBlocks(a2);
  v4 = *((_QWORD *)a2 + 1);
  *((_DWORD *)a2 + 1) = *((_DWORD *)v2 + 1);
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 24LL);
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 32LL);
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 40LL) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 40LL);
  *(_DWORD *)(*((_QWORD *)a2 + 1) + 72LL) |= 3u;
  *(_DWORD *)a2 = *(_DWORD *)a2 & 0xFFFFFFEC | 0x10;
  *(_QWORD *)(*((_QWORD *)v2 + 1) + 24LL) = 0LL;
  EPATHOBJ::vUnlock((EPATHOBJ *)v2);
  *((_DWORD *)a2 + 1) = EPATHOBJ::cTotalCurves(a2);
}
