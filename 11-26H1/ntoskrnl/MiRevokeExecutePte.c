/*
 * XREFs of MiRevokeExecutePte @ 0x140428F80
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiGetPfnProtection @ 0x1404290C0 (MiGetPfnProtection.c)
 */

__int64 __fastcall MiRevokeExecutePte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r15
  __int64 PteShadow; // rbx
  __int64 v8; // rcx
  __int64 *ProcessorFlushList; // rax

  v4 = (__int64)(a2 << 25) >> 16;
  if ( v4 < 0x7FFFFFFF0000LL )
  {
    v5 = *(_QWORD *)(a1 + 32);
    PteShadow = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
    if ( PteShadow >= 0
      && (MiGetPfnProtection(
            0xFFFFDE0000000000uLL,
            v4,
            48 * (((unsigned __int64)PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) & 2) == 0 )
    {
      MiWriteValidPteNewProtection((__int64 *)a2, PteShadow | 0x8000000000000000uLL);
      v8 = *(_QWORD *)(a1 + 184);
      if ( !v8 )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList((__int64)ProcessorFlushList, v5, *((_DWORD *)ProcessorFlushList + 3), 8, 32);
        *(_QWORD *)(a1 + 184) = v8;
      }
      MiInsertTbFlushEntry(v8, v4, 1LL, 0);
    }
  }
  return 0LL;
}
