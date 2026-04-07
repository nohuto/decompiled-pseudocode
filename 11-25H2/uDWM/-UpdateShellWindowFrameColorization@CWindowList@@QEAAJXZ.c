/*
 * XREFs of ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x1800452F0
 * Callers:
 *     ?UpdateTabletMode@CDesktopManager@@QEAAJH@Z @ 0x1800451F8 (-UpdateTabletMode@CDesktopManager@@QEAAJH@Z.c)
 * Callees:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180019C6C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateShellWindowFrameColorization(CWindowList *this)
{
  _QWORD *v2; // rax
  CWindowData *v4; // rdi
  CWindowData *i; // rbx
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+48h] [rbp+10h]

  RestartKey = 0LL;
  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    if ( !v2 )
      break;
    v4 = (CWindowData *)(v2 + 10);
    for ( i = (CWindowData *)v2[10]; i != v4; i = *(CWindowData **)i )
    {
      if ( (*((_BYTE *)i + 676) & 0x40) != 0 )
        CWindowData::OnColorizationUpdated(i);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
