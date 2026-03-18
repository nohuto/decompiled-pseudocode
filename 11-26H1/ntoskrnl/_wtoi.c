/*
 * XREFs of _wtoi @ 0x1405368D0
 * Callers:
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     WmipFindISinGEbyName @ 0x140A0B3A0 (WmipFindISinGEbyName.c)
 *     WmipPrepareWnodeSI @ 0x140A0F5E4 (WmipPrepareWnodeSI.c)
 * Callees:
 *     _wtol @ 0x1405368F0 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
