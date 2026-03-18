/*
 * XREFs of UsbhDisarmHubForWakeDetect @ 0x140007684
 * Callers:
 *     UsbhArmHubForWakeDetect @ 0x1400070A0 (UsbhArmHubForWakeDetect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x140007630 (UsbhDisarmHubWakeOnConnect.c)
 *     Usbh_SSH_HubPendingResume @ 0x140028F5C (Usbh_SSH_HubPendingResume.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002A47C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoD0Worker_Action @ 0x14002B2F0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhUninitialize @ 0x14003E0D0 (UsbhUninitialize.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

void __fastcall UsbhDisarmHubForWakeDetect(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  signed __int32 v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 880), 0xFFFFFFFF);
        v7 = *(_DWORD *)(v5 + 884);
        v8 = *(_QWORD *)(v5 + 888);
        a2 = 32LL * ((v6 - 1) & v7);
        *(_DWORD *)(a2 + v8) = 760698728;
        *(_QWORD *)(a2 + v8 + 8) = 0LL;
        *(_QWORD *)(a2 + v8 + 16) = 0LL;
        *(_QWORD *)(a2 + v8 + 24) = 0LL;
      }
    }
  }
  v9 = FdoExt(a1, a2, a1, a4);
  v10 = v9;
  if ( *(_DWORD *)(v9 + 4884) )
  {
    _m_prefetchw((const void *)(v9 + 4884));
    v11 = *(_DWORD *)(v9 + 4884);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 4884), v11 | 1, v11);
    }
    while ( v12 != v11 );
    if ( v11 == 4 )
    {
      IoCancelIrp(*(PIRP *)(v10 + 4888));
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 4884), 4, 5) == 7 )
        IofCompleteRequest(*(PIRP *)(v10 + 4888), 0);
    }
  }
}
