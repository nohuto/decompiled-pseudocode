/*
 * XREFs of KiAllocateProcessorSchedulerStructures @ 0x1405EC84C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     KiAllocateDpcDelegateThread @ 0x1405EC528 (KiAllocateDpcDelegateThread.c)
 *     KiAllocateIdleSearchStructures @ 0x1405EC5B4 (KiAllocateIdleSearchStructures.c)
 *     KiAllocateSmtIsolationThread @ 0x1405F8EE4 (KiAllocateSmtIsolationThread.c)
 *     KiAllocateForceParkingData @ 0x1405FB2A0 (KiAllocateForceParkingData.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall KiAllocateProcessorSchedulerStructures(_QWORD *a1, __int64 a2, int a3, int a4)
{
  unsigned int v5; // edi
  __int64 result; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF

  v5 = *(unsigned __int16 *)(a1[24] + 138LL);
  result = KiAllocateDpcDelegateThread(a1 + 1799, v5, a3, a4);
  if ( (int)result >= 0 )
  {
    result = KiAllocateSmtIsolationThread(a1 + 4568, v5);
    if ( (int)result >= 0 )
    {
      v7 = a1[24];
      v13 = 0LL;
      LOBYTE(v13) = 3;
      v8 = *(unsigned __int16 *)(v7 + 138);
      *(_QWORD *)&v13 = v13 | 0x100;
      DWORD2(v13) = v8 | 0x80000000;
      v9 = ExAllocatePool3(72LL, 1792LL, 1364420939LL, &v13, 1);
      if ( !v9 )
        return 3221225626LL;
      a1[4744] = v9;
      v10 = a1[24];
      v13 = 0LL;
      LOBYTE(v13) = 3;
      v11 = *(unsigned __int16 *)(v10 + 138);
      *(_QWORD *)&v13 = v13 | 0x100;
      DWORD2(v13) = v11 | 0x80000000;
      v12 = ExAllocatePool3(64LL, 240LL, 1129474379LL, &v13, 1);
      if ( v12 )
      {
        a1[1789] = v12;
        result = KiAllocateIdleSearchStructures((__int64)a1);
        if ( (int)result >= 0 )
          return KiAllocateForceParkingData(a1);
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
