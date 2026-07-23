/*
 * XREFs of _wtoi @ 0x140538D50
 * Callers:
 *     CmpCloneHwProfile @ 0x140858444 (CmpCloneHwProfile.c)
 *     WmipFindISinGEbyName @ 0x140A0A608 (WmipFindISinGEbyName.c)
 *     WmipPrepareWnodeSI @ 0x140A0E7D4 (WmipPrepareWnodeSI.c)
 * Callees:
 *     _wtol @ 0x140538D70 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
