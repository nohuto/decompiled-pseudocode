/*
 * XREFs of KiCreateKernelShadowStack @ 0x140A90E48
 * Callers:
 *     KiAllocateProcessorStacks @ 0x1405EC974 (KiAllocateProcessorStacks.c)
 *     KiAllocateProcessorHiberSwapShadowStacks @ 0x1405F3088 (KiAllocateProcessorHiberSwapShadowStacks.c)
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 */

__int64 __fastcall KiCreateKernelShadowStack(__int64 a1, int a2, int a3, int a4, _OWORD *a5)
{
  __int64 result; // rax
  _DWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int128 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  v7 = a1;
  v6[3] = 0;
  v8 = 0LL;
  v9 = 0LL;
  v6[0] = a3;
  v6[1] = a2;
  v6[2] = a4;
  result = MmCreateKernelStack((__int64)v6);
  if ( (int)result >= 0 )
    *a5 = v8;
  return result;
}
