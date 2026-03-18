/*
 * XREFs of ?VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z @ 0x1400F7960
 * Callers:
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400BB700 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F75BC (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?Reset@VIDMM_SYSTEM_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F8560 (-Reset@VIDMM_SYSTEM_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmiSetPriorityForMemoryPages(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v6[1] = a2;
  v6[0] = a1;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, int *, int))ZwSetInformationVirtualMemory)(
             -1LL,
             1LL,
             1LL,
             v6,
             &v7,
             4);
  if ( (int)result < 0 )
  {
    result = WdLogSingleEntry3(3LL, a1, a2, (int)result);
    WdLogGlobalForLineNumber = 672;
  }
  return result;
}
