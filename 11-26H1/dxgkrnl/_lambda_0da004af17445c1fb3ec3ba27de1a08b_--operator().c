/*
 * XREFs of _lambda_0da004af17445c1fb3ec3ba27de1a08b_::operator() @ 0x140081494
 * Callers:
 *     HOSTVMMONITORMAPPING::IterateList__lambda_0da004af17445c1fb3ec3ba27de1a08b___ @ 0x140080CD4 (HOSTVMMONITORMAPPING--IterateList__lambda_0da004af17445c1fb3ec3ba27de1a08b___.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@PEAUDXGKVMB_SINGLEPACKETCONTEXT@@@Z @ 0x14005C894 (-VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140081D18 (McTemplateK0xqpp_EtwWriteTransfer.c)
 */

char __fastcall lambda_0da004af17445c1fb3ec3ba27de1a08b_::operator()(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rcx
  _DWORD *Pool2; // rax
  __int64 v6; // rax
  struct DXGKVMB_SINGLEPACKETCONTEXT *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  volatile __int32 *v12; // r9
  _QWORD v14[2]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+70h] [rbp-18h]

  v4 = *(_DWORD **)a1;
  if ( *(_DWORD *)(a2 + 16) == *v4 && *(_DWORD *)(a2 + 20) == v4[1] && *(_DWORD *)(a2 + 24) == **(_DWORD **)(a1 + 8) )
  {
    if ( *(_QWORD *)(a2 + 48) )
    {
      if ( !*(_QWORD *)(a2 + 88) )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1114077252LL);
        *(_QWORD *)(a2 + 88) = Pool2;
        if ( Pool2 )
        {
          *Pool2 = 1;
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 8LL) = 0LL;
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 736;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate DXGKVMB_SINGLEPACKETCONTEXT",
            736LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v6 = *(_QWORD *)(a2 + 88);
      if ( v6 )
      {
        if ( !*(_QWORD *)(v6 + 8) )
        {
          v7 = *(struct DXGKVMB_SINGLEPACKETCONTEXT **)(a2 + 88);
          v16 = 0LL;
          v8 = *(_QWORD *)(a2 + 48);
          v14[0] = 0LL;
          v14[1] = v8;
          v9 = *(_QWORD *)(a2 + 32);
          v15 = 0LL;
          v14[0] = v9;
          *(_WORD *)((char *)&v15 + 1) = 257;
          DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEventSinglePacket((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v14, v7);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
            McTemplateK0xqpp_EtwWriteTransfer(
              v10,
              (unsigned int)&RemoteMonitorVSyncTrigger,
              v11,
              *(_QWORD *)(a2 + 16),
              *(_DWORD *)(a2 + 24),
              *(_QWORD *)(a2 + 48),
              *(_QWORD *)(a2 + 32));
        }
      }
    }
    else
    {
      v12 = *(volatile __int32 **)(a2 + 56);
      if ( v12 )
      {
        _InterlockedExchange(v12, **(_DWORD **)(a1 + 16));
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a2 + 56) + 8LL), **(_QWORD **)(a1 + 24));
      }
    }
  }
  return 1;
}
