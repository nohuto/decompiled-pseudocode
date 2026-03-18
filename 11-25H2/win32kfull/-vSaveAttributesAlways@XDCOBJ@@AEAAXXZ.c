/*
 * XREFs of ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1403289E8
 * Callers:
 *     NtGdiStartPage @ 0x140214680 (NtGdiStartPage.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x14026EA58 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x14026F324 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 * Callees:
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1401443B0 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 */

void __fastcall XDCOBJ::vSaveAttributesAlways(XDCOBJ *this)
{
  if ( XDCOBJ::SaveAttributesHelper(this) )
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
}
