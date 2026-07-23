/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x1800781F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     RtlFailFast2 @ 0x1801275C0 (RtlFailFast2.c)
 *     bsearch @ 0x180129D50 (bsearch.c)
 *     bsearch_s @ 0x180129E70 (bsearch_s.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  bool v4; // r14
  char v6; // bp
  PVOID v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // r10
  rsize_t v11; // r8
  unsigned int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rdi
  int Key; // [rsp+30h] [rbp-48h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp-40h] BYREF
  PVOID BaseOfImage[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]
  ULONG Size; // [rsp+98h] [rbp+20h] BYREF

  v4 = IsFastFail;
  Key = 0;
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    v6 = 0;
    v18 = 0LL;
    *(_OWORD *)BaseOfImage = 0LL;
    if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_1801DF450 + 1)
      || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_1801DF450 + 1)
                                    + (unsigned __int64)(unsigned int)qword_1801DF460 )
    {
      RtlpxLookupFunctionTable(PcValue, (char **)BaseOfImage);
    }
    else
    {
      *(_OWORD *)BaseOfImage = xmmword_1801DF450;
    }
    v7 = BaseOfImage[1];
    if ( BaseOfImage[1] )
    {
      Size = 0;
      OutHeaders = 0LL;
      RtlImageNtHeaderEx(1u, BaseOfImage[1], 0LL, &OutHeaders);
      v8 = RtlImageDirectoryEntryToData(v7, 1u, 0xAu, &Size);
      v9 = v8;
      if ( v8 )
      {
        if ( Size )
        {
          if ( Size == *(_DWORD *)v8
            && OutHeaders->FileHeader.Machine == 0x8664
            && *(_DWORD *)v8 >= 0xC0u
            && (v8[18] & 0x10000) != 0 )
          {
            Key = (_DWORD)PcValue - (_DWORD)v7;
            v11 = v8[23];
            v12 = (*((_DWORD *)v8 + 36) >> 28) + 4;
            if ( !v11 || !bsearch_s(&Key, (const void *)v9[22], v11, v12, RtlpTargetCompare, 0LL) )
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
      v13 = bsearch(
              &unk_180178558,
              RtlpProtectedPolicies,
              (unsigned int)RtlpProtectedPoliciesActiveCount,
              0x18uLL,
              RtlpCompareProtectedPolicyEntry);
      if ( !v13 )
      {
        RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
        goto LABEL_24;
      }
      v14 = v13[2];
      RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
      if ( !v14 )
      {
LABEL_24:
        if ( !v4 )
          RtlFailFast2(38LL, PcValue);
        goto LABEL_10;
      }
    }
    v6 = 1;
LABEL_10:
    if ( IsLongJumpTarget )
      *(_BYTE *)IsLongJumpTarget = v6;
    return 0;
  }
  if ( IsLongJumpTarget )
    *(_BYTE *)IsLongJumpTarget = 1;
  return 0;
}
