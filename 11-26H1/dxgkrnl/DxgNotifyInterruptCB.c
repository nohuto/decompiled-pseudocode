/*
 * XREFs of DxgNotifyInterruptCB @ 0x14003D130
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z @ 0x14005FD98 (-NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z.c)
 *     DpiProcessMiracastNotifyInterrupt @ 0x14006A3A8 (DpiProcessMiracastNotifyInterrupt.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400756EC (McTemplateK0dq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DxgNotifyInterruptCB(__int64 a1, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct DXGADAPTER *v6; // rdx
  __int64 v7; // rax
  DXGDODPRESENT *v8; // rcx

  if ( KeGetCurrentIrql() < 2u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 28;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() >= DISPATCH_LEVEL",
      28LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a2->InterruptType == DXGK_INTERRUPT_MICACAST_CHUNK_PROCESSING_COMPLETE )
  {
    DpiProcessMiracastNotifyInterrupt(a1, a2);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4056), 0, 0) & 2) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 && *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
      {
        v6 = *(struct DXGADAPTER **)(v5 + 4032);
        if ( v6 )
        {
          v7 = *((_QWORD *)v6 + 396);
          if ( v7 )
          {
            (*(void (__fastcall **)(__int64, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *))(*(_QWORD *)(*(_QWORD *)(v7 + 736) + 8LL)
                                                                                       + 8LL))(
              a1,
              a2);
          }
          else
          {
            v8 = *(DXGDODPRESENT **)(*((_QWORD *)v6 + 395) + 464LL);
            if ( v8 )
              DXGDODPRESENT::NotifyInterrupt(v8, v6, a2);
          }
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2173;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      McTemplateK0dq_EtwWriteTransfer(v4, &NotifyInterruptCB);
    }
  }
}
