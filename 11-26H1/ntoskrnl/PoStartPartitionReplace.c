/*
 * XREFs of PoStartPartitionReplace @ 0x1407D414C
 * Callers:
 *     PnprQuiesceDevices @ 0x140BF80F0 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1409F5718 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPartitionReplace(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  *(_DWORD *)(a1 + 32) = 10;
  PopDispatchStateCallout(a1, &v4);
  *(_DWORD *)(a1 + 32) = 9;
  return PopDispatchStateCallout(a1, 0LL);
}
