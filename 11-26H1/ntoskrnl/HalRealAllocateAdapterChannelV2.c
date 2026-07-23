/*
 * XREFs of HalRealAllocateAdapterChannelV2 @ 0x1404C4510
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateAdapterChannelV2 @ 0x14035BB40 (HalAllocateAdapterChannelV2.c)
 */

__int64 __fastcall HalRealAllocateAdapterChannelV2(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  a2[16] = a2;
  a2[17] = a2[4];
  a2[14] = a5;
  return HalAllocateAdapterChannelV2(a1, (__int64)(a2 + 10), a3, a4);
}
