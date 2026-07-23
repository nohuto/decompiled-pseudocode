/*
 * XREFs of IopIoRingDispatchComplete @ 0x14077EE58
 * Callers:
 *     IopProcessIoRingEntry @ 0x140B02A30 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x140410C94 (IopCompleteIoRingEntry.c)
 */

void __fastcall IopIoRingDispatchComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = a3;
  IopCompleteIoRingEntry(a1, v3, &v4, 0);
}
