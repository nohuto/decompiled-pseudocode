/*
 * XREFs of RtlGuardRestoreContext @ 0x180080B50
 * Callers:
 *     KiUserExceptionDispatcher @ 0x180162FC0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlGuardIsValidStackPointer @ 0x180080DF0 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardCheckExceptionHandler @ 0x180081080 (RtlGuardCheckExceptionHandler.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x180081428 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180081510 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrpValidateUserCallTarget @ 0x180127700 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180127750 (LdrpValidateUserCallTargetES.c)
 *     RtlFailFast2 @ 0x180127850 (RtlFailFast2.c)
 *     bsearch @ 0x180129FE0 (bsearch.c)
 *     bsearch_s @ 0x18012A100 (bsearch_s.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  int ExceptionCode; // eax
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  int v8; // edi
  __int64 Config; // rax
  rsize_t v10; // r8
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]
  int Key; // [rsp+78h] [rbp+10h] BYREF

  if ( !ExceptionRecord )
  {
LABEL_23:
    if ( !qword_1801E3518 || (dword_1801E34FC & 1) != 0 || (unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
      goto LABEL_26;
    goto LABEL_33;
  }
  ExceptionCode = ExceptionRecord->ExceptionCode;
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionCode == -2147483607 )
    {
      if ( ExceptionRecord->NumberParameters )
      {
        v11 = ExceptionRecord->ExceptionInformation[0];
        if ( (unsigned int)LdrControlFlowGuardEnforced(ContextRecord) )
        {
          if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v13, v12, v14) )
            LdrpValidateUserCallTargetES(v11);
          else
            LdrpValidateUserCallTarget(v11);
        }
      }
    }
    else if ( ExceptionCode == -1073741785 )
    {
      if ( (((unsigned __int64)qword_1801E3508 >> 60) & 3) != 1 )
        RtlGuardCheckExceptionHandler(ContextRecord->Rip, 0LL, 0LL);
      goto LABEL_26;
    }
    goto LABEL_23;
  }
  v5 = ExceptionRecord->ExceptionInformation[0];
  v6 = qword_1801E3518;
  if ( qword_1801E3518 && (dword_1801E34FC & 1) == 0 )
  {
    if ( (unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v5 + 16)) )
    {
      v6 = qword_1801E3518;
      goto LABEL_7;
    }
LABEL_33:
    __fastfail(0xDu);
  }
LABEL_7:
  if ( (((unsigned __int64)qword_1801E3508 >> 60) & 3) != 1 )
  {
    v7 = *(_QWORD *)(v5 + 80);
    Key = 0;
    if ( v6 )
    {
      if ( (dword_1801E34FC & 1) == 0 )
      {
        v18 = 0LL;
        v17 = 0LL;
        if ( v7 < *((_QWORD *)&xmmword_1801E0450 + 1)
          || v7 >= *((_QWORD *)&xmmword_1801E0450 + 1) + (unsigned __int64)(unsigned int)qword_1801E0460 )
        {
          RtlpxLookupFunctionTable(v7, (__int64)&v17);
        }
        else
        {
          v17 = xmmword_1801E0450;
        }
        v8 = DWORD2(v17);
        if ( *((_QWORD *)&v17 + 1) )
        {
          Config = LdrImageDirectoryEntryToLoadConfigEx(*((_QWORD *)&v17 + 1));
          if ( Config )
          {
            if ( *(_DWORD *)Config >= 0xC0u && (*(_DWORD *)(Config + 144) & 0x10000) != 0 )
            {
              Key = v7 - v8;
              v10 = *(_QWORD *)(Config + 184);
              if ( !v10
                || !bsearch_s(
                      &Key,
                      *(const void **)(Config + 176),
                      v10,
                      (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
                      RtlpTargetCompare,
                      0LL) )
              {
                goto LABEL_36;
              }
            }
          }
        }
        else
        {
          if ( !RtlpProtectedPolicies )
            goto LABEL_36;
          RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
          v15 = bsearch(
                  &unk_180179A38,
                  RtlpProtectedPolicies,
                  (unsigned int)RtlpProtectedPoliciesActiveCount,
                  0x18uLL,
                  RtlpCompareProtectedPolicyEntry);
          if ( !v15 )
          {
            RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
            goto LABEL_36;
          }
          v16 = v15[2];
          RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
          if ( !v16 )
LABEL_36:
            RtlFailFast2(38LL, v7);
        }
      }
    }
  }
LABEL_26:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
