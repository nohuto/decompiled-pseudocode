/*
 * XREFs of ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x14017E0DC
 * Callers:
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x14017E000 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 * Callees:
 *     _anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool @ 0x140059760 (_anonymous_namespace_--SGCINPUTMGRg_pInputManager_CInputManager___--operator_bool.c)
 */

bool __fastcall CInputManager::OwnsPointerId(int a1, int a2)
{
  bool v4; // di
  __int64 v5; // rbx
  unsigned int i; // esi

  v4 = 0;
  if ( anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool() )
  {
    v5 = *(_QWORD *)W32GetUserInputMgrSessionState();
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v5 + 32, 0LL);
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL); ++i )
    {
      if ( **(_DWORD **)(*(_QWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 16LL) + 8LL * i) == a2 )
      {
        _mm_lfence();
        v4 = a1 == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 16LL) + 8LL * i)
                             + 4LL);
        break;
      }
    }
    ExReleasePushLockSharedEx(v5 + 32, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
