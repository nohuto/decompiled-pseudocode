/*
 * XREFs of CmpPrepareForSubtreeInvalidationWorker @ 0x1408B5FCC
 * Callers:
 *     CmpPrepareForSubtreeInvalidation @ 0x1408B5EAC (CmpPrepareForSubtreeInvalidation.c)
 * Callees:
 *     CmpTryAcquireKcbIXLocks @ 0x1408B75D4 (CmpTryAcquireKcbIXLocks.c)
 */

__int64 __fastcall CmpPrepareForSubtreeInvalidationWorker(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rbx
  __int64 v4; // r9
  int v5; // ecx
  __int64 result; // rax

  v3 = (int *)a2;
  if ( (*(_DWORD *)(a2 + 24) & 4) != 0 || (*(_DWORD *)(a1 + 8) & 0x80u) == 0 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    LOBYTE(a2) = 1;
    v5 = CmpTryAcquireKcbIXLocks(a1, a2, a3, v4);
    result = 0LL;
    if ( v5 == -1073741267 )
    {
      ++v3[2];
    }
    else if ( v5 < 0 )
    {
      *v3 = v5;
      return 1LL;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 4);
    return 0LL;
  }
  return result;
}
