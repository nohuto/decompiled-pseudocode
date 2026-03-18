/*
 * XREFs of ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x14009AFC8
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void InputObjectMap::OnProcessTermination(void)
{
  __int64 CurrentProcess; // r15
  __int64 UserInputMgrSessionState; // rbx
  __int64 v2; // r14
  _QWORD *v3; // rsi
  _QWORD *v4; // rdi
  PVOID *v5; // rbp
  _QWORD *i; // rcx

  CurrentProcess = PsGetCurrentProcess();
  UserInputMgrSessionState = W32GetUserInputMgrSessionState();
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserInputMgrSessionState + 8), 0);
  v2 = W32GetUserInputMgrSessionState();
  v3 = *(_QWORD **)(v2 + 24);
  v4 = v3;
  while ( v4 )
  {
    v4 = (_QWORD *)*v4;
    if ( ((unsigned __int8)v4 & 1) != 0 )
      break;
LABEL_7:
    v5 = (PVOID *)v4;
    if ( !v4 )
      goto LABEL_8;
    if ( *(_QWORD *)(v4[3] + 56LL) == CurrentProcess )
    {
      for ( i = v3; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v4 )
        {
          *i = *v4;
          --*(_DWORD *)(v2 + 16);
          *v4 |= 0x8000000000000002uLL;
          v4 = i;
          break;
        }
      }
      ObfDereferenceObject(v5[3]);
      ExFreePoolWithTag(v5, 0);
    }
  }
  for ( ++v3; (unsigned __int64)v3 < *(_QWORD *)(v2 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(v2 + 20) >> 5); ++v3 )
  {
    v4 = (_QWORD *)*v3;
    if ( (*v3 & 1) == 0 )
      goto LABEL_7;
  }
LABEL_8:
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserInputMgrSessionState + 8), 0);
}
