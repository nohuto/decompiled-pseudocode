/*
 * XREFs of InitCounterGroupBsp @ 0x140BF0EC0
 * Callers:
 *     DefaultInitializeProfiling @ 0x140BF0D10 (DefaultInitializeProfiling.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocateMemory @ 0x1405801F4 (HalpMmAllocateMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_DWORD *__fastcall InitCounterGroupBsp(int a1, int a2)
{
  _DWORD *result; // rax
  unsigned int v3; // edi
  __int64 v5; // rbx
  __int64 v6; // rbp
  void *Memory; // rax
  __int64 v8; // rax
  __int64 v9; // rcx

  result = (_DWORD *)KiProcessorBlock[0];
  v3 = 0;
  v5 = *(_QWORD *)(KiProcessorBlock[0] + 88);
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        v5 += 24LL;
        break;
      case 100:
        v5 += 48LL;
        break;
      case 101:
        v5 += 72LL;
        break;
      default:
        v5 = 0LL;
        break;
    }
  }
  *(_DWORD *)v5 = a1;
  *(_DWORD *)(v5 + 4) = a2;
  if ( a2 )
  {
    *(_DWORD *)(v5 + 8) = a2 - 1;
    v6 = 48 * *(_DWORD *)(v5 + 4) * (unsigned int)HalpQueryMaximumRegisteredProcessorCount();
    Memory = (void *)HalpMmAllocateMemory(v6);
    *(_QWORD *)(v5 + 16) = Memory;
    if ( !Memory )
      KeBugCheckEx(
        0x5Cu,
        0x9002uLL,
        (unsigned int)v6,
        (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\defaultprofile.c",
        0x110uLL);
    result = memset_0(Memory, 0, (unsigned int)v6);
    if ( *(_DWORD *)(v5 + 4) )
    {
      do
      {
        v8 = v3++;
        v9 = 3 * v8;
        result = *(_DWORD **)(v5 + 16);
        result[4 * v9 + 7] = a1;
      }
      while ( v3 < *(_DWORD *)(v5 + 4) );
    }
  }
  else
  {
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 16) = 0LL;
  }
  return result;
}
