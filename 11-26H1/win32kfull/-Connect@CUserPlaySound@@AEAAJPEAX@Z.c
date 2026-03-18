/*
 * XREFs of ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x14023526C
 * Callers:
 *     NtUserDoSoundConnect @ 0x140235090 (NtUserDoSoundConnect.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     PlaySoundConnect @ 0x1403E3834 (PlaySoundConnect.c)
 *     PlaySoundDisconnect @ 0x1403E3A48 (PlaySoundDisconnect.c)
 */

__int64 __fastcall CUserPlaySound::Connect(CUserPlaySound *this, void *a2)
{
  unsigned int CurrentWin32kSessionId; // eax
  int v5; // edi
  RPC_BINDING_HANDLE Binding; // [rsp+40h] [rbp+18h] BYREF

  Binding = 0LL;
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId((__int64)this);
  v5 = PlaySoundConnect(CurrentWin32kSessionId, a2, &Binding);
  if ( v5 >= 0 )
  {
    W32AcquirePushLockExclusiveEx((CUserPlaySound *)((char *)this + 8), 0);
    if ( !*(_QWORD *)this )
    {
      *(_QWORD *)this = Binding;
      Binding = 0LL;
    }
    W32ReleasePushLockExclusiveEx((CUserPlaySound *)((char *)this + 8), 0LL);
  }
  if ( Binding )
  {
    PlaySoundDisconnect(&Binding);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
