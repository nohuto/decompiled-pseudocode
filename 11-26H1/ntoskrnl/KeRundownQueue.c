/*
 * XREFs of KeRundownQueue @ 0x1403DAAD0
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x1403DC2B8 (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  char v1; // dl

  v1 = 1;
  return (PLIST_ENTRY)KeRundownQueueEx(Queue, v1);
}
