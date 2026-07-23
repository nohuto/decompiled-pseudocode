/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x14063BEC0
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x1406D70BC (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14063BCCC (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapStart @ 0x14063CD08 (RtlCSparseBitmapStart.c)
 */

int __fastcall RtlpHpVaMgrCtxStart(__int64 a1)
{
  unsigned int v1; // eax
  int result; // eax
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  int v8; // ebx
  _DWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  ULONGLONG pullResult; // [rsp+68h] [rbp+20h] BYREF

  pullResult = 0LL;
  _BitScanForward(&v1, 0x20u);
  *(_DWORD *)(a1 + 24) = v1;
  result = RtlULongLongMult(0x8000000uLL, 8uLL, &pullResult);
  if ( result >= 0 )
  {
    result = RtlULongLongMult(pullResult, v4, &pullResult);
    if ( result >= 0 )
    {
      result = RtlCSparseBitmapStart(a1 + 32, pullResult, v5, 1LL);
      if ( result >= 0 )
      {
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = 0xFFFF800000000000uLL;
        v10 = 0LL;
        *(_DWORD *)(a1 + 2152) = 0x1000000;
        v8 = 0;
        v9[0] = -1;
        while ( v8 < 6 )
        {
          v9[1] = v8;
          result = RtlpHpVaMgrCtxAllocatorReference((int *)a1, (__int64)v9, v6, v7);
          if ( result < 0 )
            return result;
          ++v8;
        }
        return 0;
      }
    }
  }
  return result;
}
