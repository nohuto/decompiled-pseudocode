/*
 * XREFs of _GetTouchValidationStatus @ 0x14027C530
 * Callers:
 *     NtUserGetTouchValidationStatus @ 0x140298B60 (NtUserGetTouchValidationStatus.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1402A6240 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400828F0 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140082A30 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall GetTouchValidationStatus(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  int v4; // ecx
  __int64 UserSessionState; // rax
  struct W32_PUSH_LOCK *Lock; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct DEVICEINFO *i; // rdx
  __int64 v11; // rax

  v2 = 3;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 48) == 2 )
    {
      v3 = *(_QWORD *)(a1 + 440);
      if ( *(_WORD *)(v3 + 42) == 13 && (unsigned __int16)(*(_WORD *)(v3 + 40) - 4) <= 1u )
      {
        v4 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 368LL);
        if ( (v4 & 8) == 0 )
          return 2 - (unsigned int)((v4 & 0x100) != 0);
      }
    }
  }
  else
  {
    UserSessionState = W32GetUserSessionState(0LL, a2);
    Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(UserSessionState + 16840));
    W32AcquirePushLockSharedEx(Lock, 0);
    v9 = W32GetUserSessionState(v8, v7);
    for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v9 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( *((_DWORD *)i + 12) == 2 && (*((_DWORD *)i + 42) & 0x2000) == 0 )
      {
        v11 = *((_QWORD *)i + 55);
        if ( *(_WORD *)(v11 + 42) == 13 && *(_WORD *)(v11 + 40) == 4 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)i + 57) + 368LL) & 0x100) != 0 )
          {
            v2 = 1;
            break;
          }
          v2 = 2;
        }
      }
    }
    W32ReleasePushLockSharedEx(Lock, 0LL);
  }
  return v2;
}
