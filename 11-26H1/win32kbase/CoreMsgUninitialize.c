/*
 * XREFs of CoreMsgUninitialize @ 0x1400DAAB4
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z @ 0x1400DA344 (-Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z.c)
 *     ?Uninitialize@BufferCache@CoreMessagingK@@SAXXZ @ 0x1400DA64C (-Uninitialize@BufferCache@CoreMessagingK@@SAXXZ.c)
 *     ?Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ @ 0x1400DAB50 (-Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ.c)
 *     ?Uninitialize@Log@CoreMessagingK@@SAXXZ @ 0x1401C4D8C (-Uninitialize@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ @ 0x1401C5E2C (-TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x1401C5E58 (-TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 */

void __fastcall CoreMsgUninitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 UserCoreMessagingSessionState; // rbx
  __int64 v11; // r8
  void *v12; // rcx
  __int64 v13; // rbx

  if ( *(_BYTE *)(W32GetUserCoreMessagingSessionState(a1, a2, a3) + 8) )
  {
    CoreMessagingK::Log::TraceUninitializeStart();
    CoreMessagingK::BufferCache::Uninitialize(v4, v3, v5);
    CoreMessagingK::ServerPorts::Uninitialize();
    UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(v7, v6, v8);
    v12 = *(void **)(UserCoreMessagingSessionState + 24);
    if ( v12 )
    {
      ZwClose(v12);
      *(_QWORD *)(UserCoreMessagingSessionState + 24) = 0LL;
    }
    v13 = W32GetUserCoreMessagingSessionState(v12, v9, v11);
    if ( *(_QWORD *)v13 )
    {
      CoreMessagingK::Runtime::Free(*(void **)v13, 0x4C454D43u);
      *(_QWORD *)v13 = 0LL;
    }
    *(_BYTE *)(v13 + 8) = 0;
    CoreMessagingK::Log::TraceUninitializeStop();
    CoreMessagingK::Log::Uninitialize();
  }
}
