/*
 * XREFs of CoreMsgUninitialize @ 0x1400FC8A0
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ @ 0x1400FC2FC (-Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ.c)
 *     ?Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z @ 0x1400FCBC8 (-Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z.c)
 *     ?Uninitialize@Log@CoreMessagingK@@SAXXZ @ 0x1401A136C (-Uninitialize@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ @ 0x1401A1F4C (-TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x1401A1F78 (-TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 */

void __fastcall CoreMsgUninitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 UserCoreMessagingSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r8
  void *v17; // rcx
  __int64 v18; // rbx

  if ( *(_BYTE *)(W32GetUserCoreMessagingSessionState(a1, a2, a3) + 8) )
  {
    CoreMessagingK::Log::TraceUninitializeStart();
    UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(v4, v3, v5);
    v9 = *(_QWORD *)(UserCoreMessagingSessionState + 16);
    *(_QWORD *)(UserCoreMessagingSessionState + 16) = 0LL;
    if ( v9 )
    {
      do
      {
        v10 = *(_QWORD *)(v9 + 8);
        CoreMessagingK::Runtime::Free(v9, 1128418627LL);
        v9 = v10;
      }
      while ( v10 );
    }
    CoreMessagingK::ServerPorts::Uninitialize(v9, v7, v8);
    v15 = W32GetUserCoreMessagingSessionState(v12, v11, v13);
    v17 = *(void **)(v15 + 24);
    if ( v17 )
    {
      ZwClose(v17);
      *(_QWORD *)(v15 + 24) = 0LL;
    }
    v18 = W32GetUserCoreMessagingSessionState(v17, v14, v16);
    if ( *(_QWORD *)v18 )
    {
      CoreMessagingK::Runtime::Free(*(_QWORD *)v18, 1279610179LL);
      *(_QWORD *)v18 = 0LL;
    }
    *(_BYTE *)(v18 + 8) = 0;
    CoreMessagingK::Log::TraceUninitializeStop();
    CoreMessagingK::Log::Uninitialize();
  }
}
