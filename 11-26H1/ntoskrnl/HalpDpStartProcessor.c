/*
 * XREFs of HalpDpStartProcessor @ 0x140BF4634
 * Callers:
 *     HalpDpReplaceControl @ 0x140BF4360 (HalpDpReplaceControl.c)
 * Callees:
 *     HalGetProcessorIdByNtNumber @ 0x140432C50 (HalGetProcessorIdByNtNumber.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpInterruptStartProcessor @ 0x140BF0190 (HalpInterruptStartProcessor.c)
 */

__int64 __fastcall HalpDpStartProcessor(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  ULONG_PTR v5; // rsi
  ULONG_PTR MaximumRegisteredProcessorCount; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int i; // eax
  ULONG_PTR v13; // rbx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = (unsigned int)BugCheckParameter2;
  LODWORD(BugCheckParameter3[0]) = 0;
  MaximumRegisteredProcessorCount = (unsigned int)HalpQueryMaximumRegisteredProcessorCount();
  if ( (int)HalGetProcessorIdByNtNumber((unsigned int)v5, (__int64)BugCheckParameter3, v10, v11) < 0 )
    KeBugCheckEx(0x5Cu, 0x2001uLL, (unsigned int)v5, (unsigned int)MaximumRegisteredProcessorCount, 0LL);
  for ( i = 0; i < a4; ++i )
  {
    if ( *(_DWORD *)(a2 + 4LL * i) == LODWORD(BugCheckParameter3[0]) )
    {
      v4 = *(_DWORD *)(a3 + 4LL * i);
      v13 = v5;
      goto LABEL_8;
    }
  }
  v13 = v5;
  if ( i == a4 )
    KeBugCheckEx(0x5Cu, 0x2001uLL, v5, LODWORD(BugCheckParameter3[0]), 1uLL);
LABEL_8:
  result = HalpInterruptStartProcessor(
             v5,
             v4,
             3,
             (char *)HalpDeviceBlockUnblockPushLock.WaitBlock[3].Thread + 1504 * v13);
  if ( (_DWORD)result != 4 )
    KeBugCheckEx(0x5Cu, 0x2001uLL, v13, MaximumRegisteredProcessorCount, 2uLL);
  return result;
}
