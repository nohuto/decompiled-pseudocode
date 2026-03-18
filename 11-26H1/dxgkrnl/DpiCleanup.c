/*
 * XREFs of DpiCleanup @ 0x14023E63C
 * Callers:
 *     DpiDriverUnload @ 0x14023E970 (DpiDriverUnload.c)
 *     DpiUnInitialize @ 0x14023F2C0 (DpiUnInitialize.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiDxgkDdiUnload @ 0x1400946D8 (DpiDxgkDdiUnload.c)
 */

void __fastcall DpiCleanup(struct _DRIVER_OBJECT *ClientIdentificationAddress, char a2)
{
  _DWORD *DriverObjectExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventEnterDpiDriverUnload);
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v5 = (__int64)DriverObjectExtension;
  if ( DriverObjectExtension && DriverObjectExtension[4] == 1953656900 && DriverObjectExtension[5] == 1 )
  {
    AcquireMiniportListMutex();
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)(v5 + 8), *v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    ReleaseMiniportListMutex();
    if ( a2 )
      DpiDxgkDdiUnload(v5, v8, v9);
    RtlFreeUnicodeString((PUNICODE_STRING)(v5 + 40));
  }
  else
  {
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3217;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventEnterDpiDriverUnload);
  }
}
