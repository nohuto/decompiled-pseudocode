/*
 * XREFs of ?Broadcast@InputConfig@@SAXXZ @ 0x1401F74B4
 * Callers:
 *     _lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_ @ 0x140153DE0 (_lambda_ebe346d30a668a9733c532f644f5367b_--_lambda_invoker_cdecl_.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F88D8 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020EC30 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall InputConfig::Broadcast(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char CanSendMessageToDestinationInternal; // al
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD **v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD **v10; // rcx
  _QWORD *i; // r14
  _QWORD **v12; // rbx
  unsigned int v13; // ebp
  unsigned int v14; // esi
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rdi
  int v19; // r13d
  __int64 v20; // rcx
  _QWORD **v21; // rbp
  __int64 v22; // rbx
  _QWORD *j; // r9
  _OWORD *v24; // r8
  char *v25; // rdx
  __int128 v26; // xmm1
  _OWORD *v27; // r8
  _DWORD v28[70]; // [rsp+20h] [rbp-118h] BYREF
  __int64 UserSessionState; // [rsp+148h] [rbp+10h]

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16408);
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(v2 + 8), 0);
  CanSendMessageToDestinationInternal = InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v2, 6LL);
  v4 = v2 + 8;
  LOBYTE(v2) = CanSendMessageToDestinationInternal;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v2 )
  {
    v7 = *(_QWORD ***)(W32GetUserSessionState(v6, v5) + 18632);
    UserSessionState = W32GetUserSessionState(v9, v8);
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18640));
    v10 = (_QWORD **)*v7;
    for ( i = (_QWORD *)**v7; ; i = (_QWORD *)*i )
    {
      v12 = 0LL;
      if ( v10 != v7 )
        v12 = v10 + 2;
      if ( !v12 )
      {
LABEL_19:
        ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18640));
        memset(&v28[1], 0, 0xD8uLL);
        v28[0] = 1;
        SendMessageTo(6LL, v28, 220LL);
        return;
      }
      v13 = *((_DWORD *)v12 + 363);
      if ( v13 > 1 )
      {
        v15 = 200LL * (v13 - 1);
        if ( v15 > 0xFFFFFFFF || (v14 = v15 + 220, v14 < 0xDC) )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1115);
          goto LABEL_18;
        }
      }
      else
      {
        v14 = 220;
      }
      v16 = Win32AllocPoolZInitImpl(256LL, v14, 0x496E436Fu);
      v18 = (char *)v16;
      if ( !v16 )
        goto LABEL_19;
      *(_DWORD *)v16 = 0;
      v19 = 0;
      *(_QWORD *)(v16 + 4) = *v12;
      v20 = *((unsigned int *)v12 + 2);
      *(_DWORD *)(v16 + 16) = v13;
      v21 = v12 + 182;
      *(_DWORD *)(v16 + 12) = v20;
      v22 = W32GetUserSessionState(v20, v17);
      ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v22 + 18640));
      for ( j = *v21; ; j = (_QWORD *)*j )
      {
        v24 = 0LL;
        if ( j != v21 )
          v24 = j + 2;
        if ( !v24 )
          break;
        v25 = &v18[200 * v19 + 20];
        *(_OWORD *)v25 = *v24;
        *((_OWORD *)v25 + 1) = v24[1];
        *((_OWORD *)v25 + 2) = v24[2];
        *((_OWORD *)v25 + 3) = v24[3];
        *((_OWORD *)v25 + 4) = v24[4];
        *((_OWORD *)v25 + 5) = v24[5];
        *((_OWORD *)v25 + 6) = v24[6];
        v25 += 128;
        v26 = v24[7];
        v27 = v24 + 8;
        ++v19;
        *((_OWORD *)v25 - 1) = v26;
        *(_OWORD *)v25 = *v27;
        *((_OWORD *)v25 + 1) = v27[1];
        *((_OWORD *)v25 + 2) = v27[2];
        *((_OWORD *)v25 + 3) = v27[3];
        *((_QWORD *)v25 + 8) = *((_QWORD *)v27 + 8);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v22 + 18640));
      SendMessageTo(6LL, v18, v14);
      GreDeleteFastMutex(v18);
LABEL_18:
      v10 = (_QWORD **)i;
    }
  }
}
