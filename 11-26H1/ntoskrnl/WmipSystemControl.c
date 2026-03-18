/*
 * XREFs of WmipSystemControl @ 0x140AC4740
 * Callers:
 *     <none>
 * Callees:
 *     IoWMISystemControl @ 0x140AC4764 (IoWMISystemControl.c)
 */

__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(WmipWmiLibInfo, a1, a2);
}
