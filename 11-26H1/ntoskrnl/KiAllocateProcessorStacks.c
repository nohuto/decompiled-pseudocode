/*
 * XREFs of KiAllocateProcessorStacks @ 0x1405EC974
 * Callers:
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405ECB30 (KiAllocateProcessorStateInitializationParameters.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 *     MmSetPageProtection @ 0x1405031A0 (MmSetPageProtection.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmAllocateIsrStack @ 0x14087C1D0 (MmAllocateIsrStack.c)
 *     KiCreateKernelShadowStack @ 0x140A90E48 (KiCreateKernelShadowStack.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall KiAllocateProcessorStacks(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int i; // esi
  void *IndependentPages; // rax
  unsigned int j; // esi
  __int64 v8; // rbp
  _DWORD v9[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int128 v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-10h]

  v9[3] = 0;
  v12 = 0LL;
  v9[0] = 0;
  v11 = 0LL;
  v9[1] = 5;
  v9[2] = a2;
  v10 = 0LL;
  result = MmCreateKernelStack((__int64)v9);
  *(_QWORD *)(a1 + 64) = v11;
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int8)MmAllocateIsrStack(a1 + 72, a2) && (unsigned __int8)MmAllocateIsrStack(a1 + 80, a2) )
    {
      for ( i = 1; i <= 4; ++i )
      {
        if ( !(unsigned __int8)MmAllocateIsrStack(a1 + 8 * (i + 11LL), a2) )
          return 3221225495LL;
      }
      if ( !(_BYTE)KiKernelCetEnabled )
        return 0LL;
      result = KiCreateKernelShadowStack(0, 4, 0, a2, a1 + 136, a1 + 128);
      if ( (int)result < 0 )
        return result;
      IndependentPages = (void *)MmAllocateIndependentPagesEx(4096LL, a2, -1LL, 1LL);
      *(_QWORD *)(a1 + 224) = IndependentPages;
      if ( IndependentPages )
      {
        memset_0(IndependentPages, 0, 0x1000uLL);
        for ( j = 1; j <= 4; ++j )
        {
          v8 = j;
          result = KiCreateKernelShadowStack(0, 3, 0, a2, a1 + 184 + 8LL * j, a1 + 144 + 8LL * j);
          if ( (int)result < 0 )
            return result;
          *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8 * v8) = *(_QWORD *)(a1 + 8 * v8 + 144);
        }
        MmSetPageProtection(*(_QWORD *)(a1 + 224), 0x1000uLL, 2u);
        return 0LL;
      }
    }
    return 3221225495LL;
  }
  return result;
}
