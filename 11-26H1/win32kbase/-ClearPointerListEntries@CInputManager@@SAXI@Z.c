/*
 * XREFs of ?ClearPointerListEntries@CInputManager@@SAXI@Z @ 0x1400B4A0C
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1400B4790 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool @ 0x140059760 (_anonymous_namespace_--SGCINPUTMGRg_pInputManager_CInputManager___--operator_bool.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x140165B64 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 */

void __fastcall CInputManager::ClearPointerListEntries(int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // edx
  unsigned int v5; // edx
  _QWORD *UserInputMgrSessionState; // rax

  v2 = 0LL;
  if ( anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool() )
  {
    v3 = *(_QWORD *)W32GetUserInputMgrSessionState();
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v3 + 32), v4);
    if ( *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL) )
    {
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 16LL) + 8 * v2) + 4LL) == a1 )
        {
          UserInputMgrSessionState = (_QWORD *)W32GetUserInputMgrSessionState();
          CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(
            *UserInputMgrSessionState + 16LL,
            (unsigned int)v2);
        }
        else
        {
          v2 = (unsigned int)(v2 + 1);
        }
      }
      while ( (unsigned int)v2 < *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL) );
    }
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v3 + 32), v5);
  }
}
