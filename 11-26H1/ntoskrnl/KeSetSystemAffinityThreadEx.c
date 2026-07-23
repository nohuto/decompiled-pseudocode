/*
 * XREFs of KeSetSystemAffinityThreadEx @ 0x14037C170
 * Callers:
 *     KeSetSystemAffinityThread @ 0x1404F6D50 (KeSetSystemAffinityThread.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 */

KAFFINITY __stdcall KeSetSystemAffinityThreadEx(KAFFINITY Affinity)
{
  unsigned __int16 v1; // ax
  _GROUP_AFFINITY Affinitya; // [rsp+20h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  *(_QWORD *)&Affinitya.Group = 0LL;
  Affinitya.Mask = Affinity;
  PreviousAffinity = 0LL;
  if ( KeForceGroupAwareness )
    v1 = KiActiveGroups - 1;
  Affinitya.Group = v1;
  KeSetSystemGroupAffinityThread(&Affinitya, &PreviousAffinity);
  return PreviousAffinity.Mask;
}
