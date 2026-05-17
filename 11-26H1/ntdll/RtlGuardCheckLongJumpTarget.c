/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x180080E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     RtlFailFast2 @ 0x180127850 (RtlFailFast2.c)
 *     bsearch @ 0x180129FE0 (bsearch.c)
 *     bsearch_s @ 0x18012A100 (bsearch_s.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, char a2, char *a3)
{
  char v6; // bp
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r10
  rsize_t v12; // r8
  unsigned int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rdi
  int Key; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]
  int v20; // [rsp+98h] [rbp+20h] BYREF

  Key = 0;
  if ( qword_1801E3518 && (dword_1801E34FC & 1) == 0 )
  {
    v6 = 0;
    v19 = 0LL;
    v18 = 0LL;
    if ( a1 < *((_QWORD *)&xmmword_1801E0450 + 1)
      || a1 >= *((_QWORD *)&xmmword_1801E0450 + 1) + (unsigned __int64)(unsigned int)qword_1801E0460 )
    {
      RtlpxLookupFunctionTable(a1, (__int64)&v18);
    }
    else
    {
      v18 = xmmword_1801E0450;
    }
    v7 = *((_QWORD *)&v18 + 1);
    if ( *((_QWORD *)&v18 + 1) )
    {
      v20 = 0;
      v17 = 0LL;
      RtlImageNtHeaderEx(1, *((unsigned __int64 *)&v18 + 1), 0LL, &v17);
      LOBYTE(v8) = 1;
      v9 = RtlImageDirectoryEntryToData(v7, v8, 10LL, &v20);
      v10 = v9;
      if ( v9 )
      {
        if ( v20 )
        {
          if ( v20 == *(_DWORD *)v9
            && *(_WORD *)(v17 + 4) == 0x8664
            && *(_DWORD *)v9 >= 0xC0u
            && (*(_DWORD *)(v9 + 144) & 0x10000) != 0 )
          {
            Key = a1 - v7;
            v12 = *(_QWORD *)(v9 + 184);
            v13 = (*(_DWORD *)(v9 + 144) >> 28) + 4;
            if ( !v12 || !bsearch_s(&Key, *(const void **)(v10 + 176), v12, v13, RtlpTargetCompare, 0LL) )
              goto LABEL_24;
          }
        }
      }
    }
    else
    {
      if ( !RtlpProtectedPolicies )
        goto LABEL_24;
      RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
      v14 = bsearch(
              &unk_180179A38,
              RtlpProtectedPolicies,
              (unsigned int)RtlpProtectedPoliciesActiveCount,
              0x18uLL,
              RtlpCompareProtectedPolicyEntry);
      if ( !v14 )
      {
        RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
        goto LABEL_24;
      }
      v15 = v14[2];
      RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
      if ( !v15 )
      {
LABEL_24:
        if ( !a2 )
          RtlFailFast2(38LL, a1);
        goto LABEL_10;
      }
    }
    v6 = 1;
LABEL_10:
    if ( a3 )
      *a3 = v6;
    return 0LL;
  }
  if ( a3 )
    *a3 = 1;
  return 0LL;
}
