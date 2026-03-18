/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x140116D6C
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x14003DB20 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 *     VidSchFlushContext @ 0x140116BF0 (VidSchFlushContext.c)
 *     VidSchFlushHwQueue @ 0x140119830 (VidSchFlushHwQueue.c)
 *     VidSchiFlushPendingFlips @ 0x14012747C (VidSchiFlushPendingFlips.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x140035C50 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400EA5D8 (VidSchRegisterCompletionEvent.c)
 */

_BOOL8 __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  bool v7; // zf

  VidSchRegisterCompletionEvent(a1, a2);
  v6 = *(_DWORD *)(a2 + 32);
  if ( (v6 & 0x10) != 0 )
  {
    v7 = **(_DWORD **)(a2 + 40) == 0;
  }
  else
  {
    if ( (v6 & 0x80u) == 0 )
    {
LABEL_6:
      VidSchWaitForCompletionEvent(a1, a2, a3);
      return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 2032), (_QWORD *)a2, 0LL);
    }
    v7 = **(_QWORD **)(a2 + 40) == 0LL;
  }
  if ( !v7 )
    goto LABEL_6;
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 2032), (_QWORD *)a2, 0LL);
}
