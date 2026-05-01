/*
 * XREFs of CemRcTableGetNext @ 0x18003BDF0
 * Callers:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x18003B6D4 (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003CCAC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180067DD4 (-ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180068744 (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180074E44 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007F4F8 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CemRcTableGetNext(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 i; // rbx
  _QWORD *v4; // rax
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  _QWORD **v8; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rsi
  signed __int64 v13; // rax
  bool v14; // cc
  signed __int64 v15; // rax

  v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockShared(v2 + 16);
  i = a1[1];
  v4 = a1;
  if ( i )
  {
    v10 = *(_QWORD **)i;
    if ( *(_QWORD *)i )
    {
      do
      {
        i = (unsigned __int64)v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
  }
  else
  {
    for ( i = a1[2] & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD **)i == v4 )
        break;
      v4 = (_QWORD *)i;
    }
  }
  while ( i )
  {
    if ( *(_QWORD *)(i + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
        __fastfail(0xEu);
      break;
    }
    v8 = *(_QWORD ***)(i + 8);
    v9 = i;
    if ( v8 )
    {
      v11 = *v8;
      for ( i = *(_QWORD *)(i + 8); v11; v11 = (_QWORD *)*v11 )
        i = (unsigned __int64)v11;
    }
    else
    {
      for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v9 )
          break;
        v9 = i;
      }
    }
  }
  RtlReleaseSRWLockShared(v2 + 16);
  _m_prefetchw(a1 + 3);
  v5 = a1[3];
  while ( v5 - 1 > 0 )
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange64(a1 + 3, v5 - 1, v5);
    if ( v6 == v5 )
      return i;
  }
  if ( v5 != 1 )
    __fastfail(0xEu);
  v12 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a1[2] != -1LL )
  {
    RtlAcquireSRWLockExclusive(v12 + 16);
    v13 = _InterlockedExchangeAdd64(a1 + 3, 0xFFFFFFFFFFFFFFFFuLL);
    v14 = v13 <= 1;
    v15 = v13 - 1;
    if ( v14 )
    {
      if ( v15 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(v12 + 16);
      (*(void (__fastcall **)(_QWORD *))(v12 + 24))(a1);
    }
    else
    {
      RtlReleaseSRWLockExclusive(v12 + 16);
    }
    return i;
  }
  if ( _InterlockedDecrement64(a1 + 3) <= -1 )
    __fastfail(0xEu);
  (*(void (__fastcall **)(_QWORD *))(v12 + 24))(a1);
  return i;
}
