/*
 * XREFs of MiCreateKernelHalSlabRange @ 0x140CFE280
 * Callers:
 *     <none>
 * Callees:
 *     MiConvertActiveLargePageToSmall @ 0x140206BB8 (MiConvertActiveLargePageToSmall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MiCreateBootSlabEntries @ 0x140CFE048 (MiCreateBootSlabEntries.c)
 */

__int64 __fastcall MiCreateKernelHalSlabRange(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // r15
  ULONG_PTR v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // rbx
  __int64 v9; // r14
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 result; // rax
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  while ( (unsigned __int64)v2 < v3 )
  {
    v4 = (*v2 >> 12) & 0xFFFFFFFFFFLL;
    v5 = 48 * v4 - 0x220000000000LL;
    if ( (*(_QWORD *)(v5 + 40) & 0x10000000000LL) != 0 )
    {
      MiConvertActiveLargePageToSmall(48 * v4 - 0x220000000000LL, 0);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v6);
      }
      v8 = v5 + 24;
      v9 = 512LL;
      do
      {
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v13);
          while ( *(__int64 *)v8 < 0 );
        }
        *(_DWORD *)(v8 + 8) = (*(_DWORD *)(v8 + 8) - 1) ^ (*(_DWORD *)(v8 + 8) ^ (*(_DWORD *)(v8 + 8) - 1)) & 0xFFFF0000;
        _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
        v8 += 48LL;
        --v9;
      }
      while ( v9 );
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v10 = MiPageToNode(v4);
    v11 = MiPageToNode(v4 + 511);
    if ( v10 != v11 )
      KeBugCheckEx(0x1Au, 0x3030317uLL, v4, v10, v11);
    result = MiCreateBootSlabEntries(qword_140E37CD0 + 15912 + 56320LL * v10, v4, 512LL, 1);
    if ( (int)result < 0 )
      return result;
    ++v2;
  }
  return 0LL;
}
