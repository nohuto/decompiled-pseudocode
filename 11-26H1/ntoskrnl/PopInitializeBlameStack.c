/*
 * XREFs of PopInitializeBlameStack @ 0x140CD7764
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopBSDiagSetTriageData @ 0x1407E0B90 (PopBSDiagSetTriageData.c)
 */

__int64 PopInitializeBlameStack()
{
  struct _KLOCK_ENTRIES *v0; // r9

  memset_0(PopStateTransitonBlameStack, 0, 0xC18uLL);
  dword_140F120C0 = -1;
  xmmword_140F120C8 = 0LL;
  *(_QWORD *)&xmmword_140F120C8 = 0LL;
  return PopBSDiagSetTriageData(2, (__int64)PopStateTransitonBlameStack, 3096LL, v0);
}
