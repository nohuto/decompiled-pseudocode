/*
 * XREFs of CleanupPlaySound @ 0x140225B10
 * Callers:
 *     <none>
 * Callees:
 *     PlaySoundDisconnect @ 0x1403D4714 (PlaySoundDisconnect.c)
 */

__int64 __fastcall CleanupPlaySound(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  unsigned int v6; // eax

  v2 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = UserSessionState;
  v5 = *(_QWORD **)(UserSessionState + 70544);
  if ( v5 )
  {
    if ( *v5 )
    {
      v6 = PlaySoundDisconnect(*(RPC_BINDING_HANDLE **)(UserSessionState + 70544));
      *v5 = 0LL;
      v2 = v6;
    }
    Win32FreePool(*(void **)(v4 + 70544));
    *(_QWORD *)(v4 + 70544) = 0LL;
  }
  return v2;
}
