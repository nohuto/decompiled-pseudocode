/*
 * XREFs of ?vSaveAttributesAlways@DCOBJ@@AEAAXXZ @ 0x140311EA0
 * Callers:
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1402965CC (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x140296EA8 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 * Callees:
 *     ?SaveAttributesHelper@DCOBJ@@AEAAHXZ @ 0x1400AE100 (-SaveAttributesHelper@DCOBJ@@AEAAHXZ.c)
 */

void __fastcall DCOBJ::vSaveAttributesAlways(DCOBJ *this)
{
  if ( DCOBJ::SaveAttributesHelper(this) )
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
}
