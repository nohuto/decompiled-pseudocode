/*
 * XREFs of WheapInitializeErrorSource @ 0x14084D8E4
 * Callers:
 *     WheapInitializeDeferredErrorSources @ 0x1406D88F0 (WheapInitializeDeferredErrorSources.c)
 *     WheaAddErrorSource @ 0x14084D9D0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140CEE4C8 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x1404EF214 (WheapInitializeErrorRecordWrapper.c)
 *     WheapCallErrorSourceCorrect @ 0x1406DA88C (WheapCallErrorSourceCorrect.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall WheapInitializeErrorSource(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edi
  int v5; // esi
  int v6; // eax
  unsigned int v7; // esi
  __int64 Pool2; // rax
  __int64 v9; // r11
  __int64 v10; // rbp
  unsigned int i; // r14d

  v1 = *(_DWORD *)(a1 + 104);
  if ( v1 > 0x12 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v1;
    *(_DWORD *)(a1 + 36) = 1634035799;
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 120);
    v3 = 0;
    if ( (int)WheapCallErrorSourceCorrect(a1) < 0 )
      return 0LL;
    v5 = *(_DWORD *)(a1 + 68) + 72;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 128);
    v6 = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 28) = v6;
    v7 = (*(_DWORD *)(a1 + 120) * v5 + 175) & 0xFFFFFFF8;
    *(_DWORD *)(a1 + 32) = v7;
    if ( v6 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v9 = Pool2;
      if ( Pool2 )
      {
        v10 = Pool2;
        for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
        {
          WheapInitializeErrorRecordWrapper(v10, v7, a1);
          v10 += v7;
        }
        *(_QWORD *)(a1 + 48) = v9;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v3;
}
