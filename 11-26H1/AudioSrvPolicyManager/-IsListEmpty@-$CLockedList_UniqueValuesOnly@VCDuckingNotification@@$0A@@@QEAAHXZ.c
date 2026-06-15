/*
 * XREFs of ?IsListEmpty@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAHXZ @ 0x18002D564
 * Callers:
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18002D43C (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18003FC94 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18003FE28 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18003FF6C (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CLockedList_UniqueValuesOnly<CDuckingNotification,0>::IsListEmpty(
        LPCRITICAL_SECTION lpCriticalSection)
{
  BOOL v2; // edi

  EnterCriticalSection(lpCriticalSection);
  v2 = lpCriticalSection[1].DebugInfo == *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
