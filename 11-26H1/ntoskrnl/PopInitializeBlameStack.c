/*
 * XREFs of PopInitializeBlameStack @ 0x140CD15BC
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopBSDiagSetTriageData @ 0x1407DC970 (PopBSDiagSetTriageData.c)
 */

__int64 PopInitializeBlameStack()
{
  struct _KLOCK_ENTRIES *v0; // r9

  memset_0(&stru_140F110C0.ThreadLock, 0, 0xC18uLL);
  dword_140F11D00 = -1;
  *(_OWORD *)&stru_140F11D08.Header.Lock = 0LL;
  *(_QWORD *)&stru_140F11D08.Header.Lock = 0LL;
  return PopBSDiagSetTriageData(2, (struct _LIST_ENTRY *)&stru_140F110C0.ThreadLock, 3096LL, v0);
}
