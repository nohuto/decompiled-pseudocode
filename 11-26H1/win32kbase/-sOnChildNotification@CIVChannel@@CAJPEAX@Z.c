/*
 * XREFs of ?sOnChildNotification@CIVChannel@@CAJPEAX@Z @ 0x1402226B0
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x140222520 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CIVChannel::sOnChildNotification(_DWORD *a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  CIVChannel *v6; // rbx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rdx

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = (unsigned int)a1[4];
  v6 = *(CIVChannel **)(UserSessionState + 8 * v5 + 19488);
  v11 = 0;
  if ( isRootPartition(v7, v5, v8) )
  {
    v12 = a1[2];
    v13 = (unsigned int)a1[3];
    if ( v12 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v6 + 10);
      (*((void (__fastcall **)(_QWORD, __int64))v6 + 2))(*(_QWORD *)v6, v13);
    }
    else if ( v12 == 3 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v6 + 10);
    }
  }
  else if ( a1[2] == 2 )
  {
    return (unsigned int)CIVChannel::Reconnect(v6, v9, v10);
  }
  return v11;
}
