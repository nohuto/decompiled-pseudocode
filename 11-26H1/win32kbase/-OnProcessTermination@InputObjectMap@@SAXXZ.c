/*
 * XREFs of ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1400CFAA4
 * Callers:
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall InputObjectMap::OnProcessTermination(__int64 a1)
{
  __int64 CurrentProcess; // r15
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 UserInputMgrSessionState; // r14
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  PVOID *v6; // rbp
  _QWORD *i; // rcx

  CurrentProcess = PsGetCurrentProcess(a1);
  v2 = (struct W32_PUSH_LOCK *)(W32GetUserInputMgrSessionState() + 8);
  W32AcquirePushLockExclusiveEx(v2);
  UserInputMgrSessionState = W32GetUserInputMgrSessionState();
  v4 = *(_QWORD **)(UserInputMgrSessionState + 24);
  v5 = v4;
  while ( v5 )
  {
    v5 = (_QWORD *)*v5;
    if ( ((unsigned __int8)v5 & 1) != 0 )
      break;
LABEL_7:
    v6 = (PVOID *)v5;
    if ( !v5 )
      goto LABEL_8;
    if ( *(_QWORD *)(v5[3] + 56LL) == CurrentProcess )
    {
      for ( i = v4; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v5 )
        {
          *i = *v5;
          --*(_DWORD *)(UserInputMgrSessionState + 16);
          *v5 |= 0x8000000000000002uLL;
          v5 = i;
          break;
        }
      }
      ObfDereferenceObject(v6[3]);
      ExFreePoolWithTag(v6, 0);
    }
  }
  for ( ++v4;
        (unsigned __int64)v4 < *(_QWORD *)(UserInputMgrSessionState + 24)
                             + 8 * ((unsigned __int64)*(unsigned int *)(UserInputMgrSessionState + 20) >> 5);
        ++v4 )
  {
    v5 = (_QWORD *)*v4;
    if ( (*v4 & 1) == 0 )
      goto LABEL_7;
  }
LABEL_8:
  W32ReleasePushLockExclusiveEx(v2);
}
