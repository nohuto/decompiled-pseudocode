/*
 * XREFs of ?IsFailFastTriggered@@YA_NXZ @ 0x1801BE5E0
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x180081A80 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x1801ABF10 (--1CFailFastError@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool IsFailFastTriggered(void)
{
  char v0; // bl

  v0 = 0;
  if ( g_dwFailFastForThreadId )
    return g_dwFailFastForThreadId == GetCurrentThreadId();
  return v0;
}
