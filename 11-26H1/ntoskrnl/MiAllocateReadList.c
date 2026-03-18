/*
 * XREFs of MiAllocateReadList @ 0x140A524C0
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiInitializePageChainHead @ 0x140449C90 (MiInitializePageChainHead.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MiAllocateReadList(int a1)
{
  int CurrentProcessorColor; // eax
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx

  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(64LL, 8LL * (unsigned int)(a1 - 1) + 248, 1817341261, CurrentProcessorColor | 0x80000000);
  if ( result )
  {
    MiInitializePageChainHead(result + 40);
    v5 = v4 + 64;
    do
    {
      MiInitializePageChainHead(v5);
      v5 = v7 + 24;
    }
    while ( v8 != 1 );
    v6[29] = v6 + 28;
    v6[28] = v6 + 28;
    v6[4] = v6 + 3;
    v6[3] = v6 + 3;
    return (__int64)v6;
  }
  return result;
}
