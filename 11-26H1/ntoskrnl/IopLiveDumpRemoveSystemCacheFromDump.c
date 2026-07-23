/*
 * XREFs of IopLiveDumpRemoveSystemCacheFromDump @ 0x1405D4098
 * Callers:
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405D38C0 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406FB8B8 (MmRemoveSystemCacheFromDump.c)
 */

__int64 __fastcall IopLiveDumpRemoveSystemCacheFromDump(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 MillisecondCounter; // rbx
  int v5; // eax
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h]

  MillisecondCounter = 0LL;
  v8[3] = 0LL;
  v9 = 0LL;
  v5 = *(_DWORD *)(a1 + 80);
  *a3 = 0LL;
  if ( (v5 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  LODWORD(v9) = v9 | 1;
  v8[2] = a1 + 600;
  v8[4] = 0LL;
  v8[0] = 0LL;
  v8[1] = IoFreeDumpRange;
  result = MmRemoveSystemCacheFromDump(v8);
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    result = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
    *a3 = result;
  }
  return result;
}
