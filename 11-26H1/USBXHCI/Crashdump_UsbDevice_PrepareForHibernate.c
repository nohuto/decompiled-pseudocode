/*
 * XREFs of Crashdump_UsbDevice_PrepareForHibernate @ 0x140054FF4
 * Callers:
 *     Crashdump_InitializeWithoutControllerReset @ 0x1400512DC (Crashdump_InitializeWithoutControllerReset.c)
 * Callees:
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x140053A18 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Crashdump_UsbDevice_PrepareForHibernate(__int64 a1)
{
  unsigned int i; // edi
  void *v3; // rbx
  ULONG_PTR v4; // r9
  int v5; // ebx

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_PrepareForHibernate: begin\n");
  memset(*(void **)(a1 + 40), 0, *(unsigned int *)(a1 + 48));
  for ( i = 1; i < 0x20; ++i )
  {
    v3 = *(void **)(a1 + 8LL * i + 112);
    if ( v3 )
    {
      v4 = 2048LL;
      if ( (*(_DWORD *)(**(_QWORD **)(a1 + 8) + 104LL) & 4) == 0 )
        v4 = 1024LL;
      PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(a1 + 64), v4, 0x43434858u);
      PoSetHiberRange(0LL, 0x10000u, v3, 0xC8uLL, 0x43434858u);
      v5 = Crashdump_Endpoint_PrepareForHibernate((__int64)v3);
      if ( v5 < 0 )
        goto LABEL_9;
    }
  }
  v5 = 0;
LABEL_9:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_PrepareForHibernate: end 0x%X\n", v5);
  return (unsigned int)v5;
}
