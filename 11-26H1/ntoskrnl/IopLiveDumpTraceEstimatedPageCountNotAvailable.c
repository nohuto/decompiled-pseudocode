/*
 * XREFs of IopLiveDumpTraceEstimatedPageCountNotAvailable @ 0x1405DA1A8
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404DD93C (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405DA220 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall IopLiveDumpTraceEstimatedPageCountNotAvailable(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v5[3]; // [rsp+38h] [rbp-30h] BYREF

  v5[0] = a1;
  v4[0] = L"AllocatedPageCount";
  v5[1] = a2;
  v4[1] = L"EstimatedPageCount";
  v5[2] = a3;
  v4[2] = L"EstimatedRequiredPageCount";
  return IopLiveDumpTraceEventGeneric(L"EstimatedPageCount Not Available", 3LL, v4, v5);
}
