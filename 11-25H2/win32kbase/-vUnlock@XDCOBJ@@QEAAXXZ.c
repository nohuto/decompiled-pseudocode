/*
 * XREFs of ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1400C03B4
 * Callers:
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140041880 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400418B8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400856CC (-vCleanupDCs@@YAXK@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1401C3FC0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1400C03DC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlock(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
  *(_QWORD *)this = 0LL;
}
