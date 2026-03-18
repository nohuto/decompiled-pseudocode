/*
 * XREFs of PopInitializePowerSettings @ 0x140CD149C
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *PopInitializePowerSettings()
{
  unsigned int *p_ReservedPreviousReadyTimeValue; // rax
  __int64 v1; // rdx
  unsigned int *v2; // rcx
  __int64 *result; // rax

  p_ReservedPreviousReadyTimeValue = &stru_140F10828.ReservedPreviousReadyTimeValue;
  v1 = 2LL;
  v2 = &stru_140F10828.ReservedPreviousReadyTimeValue;
  do
  {
    *((_QWORD *)p_ReservedPreviousReadyTimeValue + 1) = v2;
    *(_QWORD *)p_ReservedPreviousReadyTimeValue = v2;
    v2 += 4;
    p_ReservedPreviousReadyTimeValue += 4;
    --v1;
  }
  while ( v1 );
  LODWORD(stru_140F11D08.LastXStateSaveDebugInfo) = 1;
  stru_140F10828.WriteTransferCount = 0LL;
  stru_140F11D08.Process = (_KPROCESS *)&stru_140F11D08.536;
  *(_QWORD *)&stru_140F11D08.NextProcessor = &stru_140F11D08.536;
  stru_140F10828.QueuedScb = (_KSCB *)&stru_140F10828.OtherTransferCount;
  stru_140F10828.OtherTransferCount = (__int64)&stru_140F10828.OtherTransferCount;
  stru_140F10828.TracingPrivate[0] = (unsigned __int64)&stru_140F10828.ThreadTimerDelay;
  *(_QWORD *)&stru_140F10828.ThreadTimerDelay = &stru_140F10828.ThreadTimerDelay;
  result = &WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE;
  stru_140F11D08.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE;
  *(_QWORD *)&stru_140F11D08.ThreadFlags2 = 0LL;
  LODWORD(stru_140F11D08.QueueListEntry.Flink) = 0;
  LOWORD(stru_140F11D08.QueueListEntry.Blink) = 1;
  BYTE2(stru_140F11D08.QueueListEntry.Blink) = 6;
  HIDWORD(stru_140F11D08.QueueListEntry.Blink) = 0;
  *(_OWORD *)&stru_140F11D08.WaitBlockFill11[160] = 0LL;
  stru_140F11D08.Spare18 = 0LL;
  return result;
}
