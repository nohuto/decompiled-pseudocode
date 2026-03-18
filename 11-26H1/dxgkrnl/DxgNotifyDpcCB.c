/*
 * XREFs of DxgNotifyDpcCB @ 0x1400374A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DpiProcessMiracastNotifyDpc @ 0x140037610 (DpiProcessMiracastNotifyDpc.c)
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14003E610 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400756EC (McTemplateK0dq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgNotifyDpcCB(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  struct DXGADAPTER *v4; // rdx
  __int64 v5; // rax
  int v7; // edx
  int v8; // r8d
  DXGDODPRESENT *v9; // rcx

  if ( KeGetCurrentIrql() != 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 85;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          85,
          v7,
          v8,
          0LL,
          2,
          -1,
          (__int64)L"KeGetCurrentIrql() == DISPATCH_LEVEL",
          85LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v2 = *(_QWORD *)(a1 + 64);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4056), 0, 0) & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
    {
      v4 = *(struct DXGADAPTER **)(v3 + 4032);
      if ( v4 )
      {
        v5 = *((_QWORD *)v4 + 396);
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v5 + 736) + 8LL) + 16LL))(a1);
        }
        else
        {
          v9 = *(DXGDODPRESENT **)(*((_QWORD *)v4 + 395) + 464LL);
          if ( v9 )
            DXGDODPRESENT::NotifyDpc(v9, v4);
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
    McTemplateK0dq_EtwWriteTransfer(v2, &NotifyDpcCB);
  }
  return DpiProcessMiracastNotifyDpc(a1);
}
