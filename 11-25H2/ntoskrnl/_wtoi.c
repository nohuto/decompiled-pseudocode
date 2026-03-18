/*
 * XREFs of _wtoi @ 0x1404FBF90
 * Callers:
 *     CmpCloneHwProfile @ 0x1407C391C (CmpCloneHwProfile.c)
 *     WmipPrepareWnodeSI @ 0x1409B6860 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1409B87C4 (WmipFindISinGEbyName.c)
 * Callees:
 *     _wtol @ 0x1404FBFB0 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
