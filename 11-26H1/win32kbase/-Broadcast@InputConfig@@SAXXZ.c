/*
 * XREFs of ?Broadcast@InputConfig@@SAXXZ @ 0x14008D1D8
 * Callers:
 *     _lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_ @ 0x14008D1C0 (_lambda_ebe346d30a668a9733c532f644f5367b_--_lambda_invoker_cdecl_.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x14008E334 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14008B63C (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall InputConfig::Broadcast(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  char CanSendMessageToDestinationInternal; // al
  __int64 v6; // rcx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  _QWORD **v10; // r12
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  _QWORD **v14; // rcx
  _QWORD *i; // r14
  _QWORD **v16; // rbx
  unsigned int v17; // ebp
  unsigned __int64 v18; // rsi
  unsigned int v19; // esi
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  char *v24; // rdi
  int v25; // r13d
  __int64 v26; // rbp
  _QWORD **v27; // rbx
  _QWORD *j; // r9
  _OWORD *v29; // r8
  char *v30; // rdx
  __int128 v31; // xmm1
  _OWORD *v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  _DWORD v36[70]; // [rsp+20h] [rbp-118h] BYREF
  __int64 UserSessionState; // [rsp+148h] [rbp+10h]

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 16400);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3 + 8, 0LL);
  CanSendMessageToDestinationInternal = InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v3, 6, v4);
  v6 = v3 + 8;
  LOBYTE(v3) = CanSendMessageToDestinationInternal;
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v3 )
  {
    v10 = *(_QWORD ***)(W32GetUserSessionState(v8, v7, v9) + 18680);
    UserSessionState = W32GetUserSessionState(v12, v11, v13);
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
    v14 = (_QWORD **)*v10;
    for ( i = (_QWORD *)**v10; ; i = (_QWORD *)*i )
    {
      v16 = 0LL;
      if ( v14 != v10 )
        v16 = v14 + 2;
      if ( !v16 )
      {
LABEL_10:
        ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
        memset(&v36[1], 0, 0xD8uLL);
        v36[0] = 1;
        SendMessageTo(6, (int)v36, 220);
        return;
      }
      v17 = *((_DWORD *)v16 + 363);
      if ( v17 <= 1 )
      {
        v19 = 220;
      }
      else
      {
        v18 = 200LL * (v17 - 1);
        if ( v18 > 0xFFFFFFFF || (v19 = v18 + 220, v19 < 0xDC) )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1115LL);
          goto LABEL_20;
        }
      }
      v20 = Win32AllocPoolZInitImpl(256LL, v19, 0x496E436Fu);
      v24 = (char *)v20;
      if ( !v20 )
        goto LABEL_10;
      *(_DWORD *)v20 = 0;
      v25 = 0;
      *(_QWORD *)(v20 + 4) = *v16;
      *(_DWORD *)(v20 + 12) = *((_DWORD *)v16 + 2);
      *(_DWORD *)(v20 + 16) = v17;
      v26 = W32GetUserSessionState(v22, v21, v23);
      ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v26 + 18688));
      v27 = v16 + 182;
      for ( j = *v27; ; j = (_QWORD *)*j )
      {
        v29 = 0LL;
        if ( j != v27 )
          v29 = j + 2;
        if ( !v29 )
          break;
        v30 = &v24[200 * v25 + 20];
        *(_OWORD *)v30 = *v29;
        *((_OWORD *)v30 + 1) = v29[1];
        *((_OWORD *)v30 + 2) = v29[2];
        *((_OWORD *)v30 + 3) = v29[3];
        *((_OWORD *)v30 + 4) = v29[4];
        *((_OWORD *)v30 + 5) = v29[5];
        *((_OWORD *)v30 + 6) = v29[6];
        v30 += 128;
        v31 = v29[7];
        v32 = v29 + 8;
        ++v25;
        *((_OWORD *)v30 - 1) = v31;
        *(_OWORD *)v30 = *v32;
        *((_OWORD *)v30 + 1) = v32[1];
        *((_OWORD *)v30 + 2) = v32[2];
        *((_OWORD *)v30 + 3) = v32[3];
        *((_QWORD *)v30 + 8) = *((_QWORD *)v32 + 8);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v26 + 18688));
      SendMessageTo(6, (int)v24, v19);
      GreDeleteFastMutex(v24, v33, v34, v35);
LABEL_20:
      v14 = (_QWORD **)i;
    }
  }
}
