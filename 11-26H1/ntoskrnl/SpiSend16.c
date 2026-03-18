/*
 * XREFs of SpiSend16 @ 0x140722458
 * Callers:
 *     SpiMax311GetByte @ 0x140722120 (SpiMax311GetByte.c)
 *     SpiMax311PutByte @ 0x1407221F0 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x140722270 (SpiMax311RxReady.c)
 *     SpiMax311SetBaud @ 0x1407222D0 (SpiMax311SetBaud.c)
 *     SpiMax311TxEmpty @ 0x140722420 (SpiMax311TxEmpty.c)
 * Callees:
 *     SpiInit @ 0x140721FC8 (SpiInit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SpiSend16(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdx

  v3 = *a1;
  v4 = (unsigned __int16)a2;
  SpiInit(*a1, a2, a3, word_140E65018);
  guard_dispatch_icall_no_overrides(v3 + 16, 2LL);
  guard_dispatch_icall_no_overrides(v3 + 96, v4);
  while ( (guard_dispatch_icall_no_overrides(v3 + 40, v5) & 0xD) != 0xC )
    ;
  return guard_dispatch_icall_no_overrides(v3 + 96, v5);
}
