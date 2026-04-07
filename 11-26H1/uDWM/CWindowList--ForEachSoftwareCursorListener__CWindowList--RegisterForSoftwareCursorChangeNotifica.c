/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__CWindowList::RegisterForSoftwareCursorChangeNotification_::_2_::_lambda_1___ @ 0x1800DF078
 * Callers:
 *     ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z @ 0x1800E3350 (-RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CWindowList::ForEachSoftwareCursorListener__CWindowList::RegisterForSoftwareCursorChangeNotification_::_2_::_lambda_1___(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_DWORD *)(a1 + 664);
  v5 = 0LL;
  if ( v4 )
  {
    while ( *(_QWORD *)(*(_QWORD *)(a1 + 640) + 8 * v5) != **(_QWORD **)a2 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v4 )
        goto LABEL_6;
    }
    **(_BYTE **)(a2 + 8) = 1;
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
}
