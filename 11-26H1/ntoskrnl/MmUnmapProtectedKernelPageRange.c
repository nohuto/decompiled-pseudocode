/*
 * XREFs of MmUnmapProtectedKernelPageRange @ 0x140B3A4F8
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MmUnmapProtectedKernelPageRange(unsigned __int64 a1, __int64 a2)
{
  __int64 PteAddress; // rdi
  void *v5; // rax
  _BYTE v6[208]; // [rsp+30h] [rbp-E8h] BYREF

  memset_0(v6, 0, 0xC8uLL);
  PteAddress = MiGetPteAddress(a1);
  v5 = MiVaToFlushVm(a1);
  MiInitializeTbFlushList((__int64)v6, (__int64)v5, 20, 8, 1);
  for ( ; a2; --a2 )
  {
    if ( (*(_QWORD *)PteAddress & 1) != 0 )
    {
      MiInsertTbFlushEntry((__int64)v6, PteAddress << 25 >> 16, 1LL, 0);
      *(_QWORD *)PteAddress = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v6);
}
