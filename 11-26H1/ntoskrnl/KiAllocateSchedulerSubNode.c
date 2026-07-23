/*
 * XREFs of KiAllocateSchedulerSubNode @ 0x1405F1CFC
 * Callers:
 *     KiAllocateProcessorNumber @ 0x1405F1B14 (KiAllocateProcessorNumber.c)
 * Callees:
 *     KiInitializeSchedulerSubNode @ 0x1405F2494 (KiInitializeSchedulerSubNode.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall KiAllocateSchedulerSubNode(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  LOBYTE(v7) = 3;
  *(_QWORD *)&v7 = v7 | 0x100;
  v2 = 0LL;
  DWORD2(v7) = *(unsigned __int16 *)(a1 + 2);
  v3 = ExAllocatePool3(72LL, 4480LL, 1850960203LL, &v7, 1);
  if ( v3 )
  {
    v4 = v3 + 768;
    v2 = v3;
    KiInitializeSchedulerSubNode(v3, a1);
    *(_QWORD *)(v2 + 192) = v4;
    v5 = (v4 + 2695) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_BYTE *)(v2 + 185) = 8;
    *(_QWORD *)(v2 + 200) = v5;
    *(_QWORD *)(v2 + 208) = v5 + 512;
  }
  return v2;
}
