/*
 * XREFs of ?Uninitialize@BufferCache@CoreMessagingK@@SAXXZ @ 0x1400DA64C
 * Callers:
 *     CoreMsgUninitialize @ 0x1400DAAB4 (CoreMsgUninitialize.c)
 * Callees:
 *     ?Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z @ 0x1400DA344 (-Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z.c)
 */

void __fastcall CoreMessagingK::BufferCache::Uninitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 UserCoreMessagingSessionState; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx

  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  v4 = *(_QWORD **)(UserCoreMessagingSessionState + 16);
  *(_QWORD *)(UserCoreMessagingSessionState + 16) = 0LL;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)v4[1];
      CoreMessagingK::Runtime::Free(v4, 0x43424D43u);
      v4 = v5;
    }
    while ( v5 );
  }
}
