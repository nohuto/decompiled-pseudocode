/*
 * XREFs of ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x140165A28
 * Callers:
 *     NtDCompositionUpdatePointerCapture @ 0x1401659D0 (NtDCompositionUpdatePointerCapture.c)
 * Callees:
 *     _anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool @ 0x140059760 (_anonymous_namespace_--SGCINPUTMGRg_pInputManager_CInputManager___--operator_bool.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x140165B64 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x140165BB8 (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 */

__int64 __fastcall CInputManager::UpdatePointerCapture(int a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 UserInputMgrSessionState; // rax
  int v11; // [rsp+50h] [rbp+18h] BYREF
  int v12; // [rsp+54h] [rbp+1Ch]

  v2 = 0;
  v4 = 0;
  if ( anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool() )
  {
    v6 = *(_QWORD *)W32GetUserInputMgrSessionState();
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v6 + 32));
    if ( *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL) )
    {
      do
      {
        if ( **(_DWORD **)(*(_QWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 16LL) + 8LL * v4) == a2 )
          break;
        ++v4;
      }
      while ( v4 < *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL) );
    }
    if ( v4 < *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL) )
    {
      UserInputMgrSessionState = W32GetUserInputMgrSessionState();
      if ( a1 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)UserInputMgrSessionState + 16LL) + 8LL * v4) + 4LL) = a1;
      else
        CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(*(_QWORD *)UserInputMgrSessionState + 16LL, v4);
    }
    else if ( a1 )
    {
      v7 = *(_QWORD *)W32GetUserInputMgrSessionState();
      v8 = W32GetUserInputMgrSessionState();
      v11 = a2;
      v12 = a1;
      v2 = CStructDynamicArray<CInputManager::PointerCaptureInfo>::InsertAt(
             v7 + 16,
             &v11,
             *(unsigned int *)(*(_QWORD *)v8 + 24LL));
    }
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v6 + 32));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
