/*
 * XREFs of MiReferenceDriverPage @ 0x140295384
 * Callers:
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14050DFD8 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReferenceDriverPage(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // edx
  bool v5; // zf
  __int64 result; // rax

  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 32);
    v3 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v4 = 0;
    if ( !(_WORD)v2 )
    {
LABEL_9:
      *(_BYTE *)(a1 + 35) |= 0x20u;
      goto LABEL_10;
    }
    if ( (_WORD)v2 == 1 )
    {
      if ( v3 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
        v4 = 1;
      v5 = v4 == 0;
    }
    else
    {
      if ( (_WORD)v2 != 2 || !v3 )
        goto LABEL_10;
      v5 = (*(_BYTE *)(a1 + 34) & 8) == 0;
    }
    if ( !v5 )
      goto LABEL_9;
  }
LABEL_10:
  result = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = (result + 1) ^ (result ^ (result + 1)) & 0xFFFF0000;
  return result;
}
