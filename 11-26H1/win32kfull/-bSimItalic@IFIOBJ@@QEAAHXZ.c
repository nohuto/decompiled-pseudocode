/*
 * XREFs of ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1400CA590
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400C74D0 (-bFoundForcedMatch@MAPPER@@QEAAHXZ.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400C8780 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1401EEDEC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IFIOBJ::bSimItalic(IFIOBJ *this)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)this;
  result = 0LL;
  v3 = *(int *)(*(_QWORD *)this + 24LL);
  if ( (_DWORD)v3 )
    return *(unsigned int *)(v3 + ((*(_BYTE *)(v1 + 52) & 0x20) != 0 ? 4 : 0) + v1 + 4);
  return result;
}
