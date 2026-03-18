/*
 * XREFs of Crashdump_UsbDevice_Cleanup @ 0x140054408
 * Callers:
 *     Crashdump_Cleanup @ 0x1400506A0 (Crashdump_Cleanup.c)
 * Callees:
 *     Crashdump_Endpoint_StopEndpoint @ 0x1400541FC (Crashdump_Endpoint_StopEndpoint.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Crashdump_UsbDevice_Cleanup(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rbx
  int v4; // ebx

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_Cleanup: begin\n");
  memset(*(void **)(a1 + 40), 0, *(unsigned int *)(a1 + 48));
  for ( i = 1; i < 0x20; ++i )
  {
    v3 = *(_QWORD *)(a1 + 8LL * i + 112);
    if ( v3 )
    {
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_Cleanup: begin\n");
      *(_QWORD *)(v3 + 168) = 1LL;
      *(_DWORD *)(v3 + 160) = 0;
      v4 = Crashdump_Endpoint_StopEndpoint(v3);
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_Cleanup: end 0x%X\n", v4);
      if ( v4 < 0 )
      {
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Endpoint_Cleanup failed with 0x%X\n", v4);
        goto LABEL_8;
      }
    }
  }
  v4 = 0;
LABEL_8:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_Cleanup: end 0x%X\n", v4);
  return (unsigned int)v4;
}
