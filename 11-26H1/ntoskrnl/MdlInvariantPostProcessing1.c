/*
 * XREFs of MdlInvariantPostProcessing1 @ 0x140646724
 * Callers:
 *     IovpCompleteRequest2 @ 0x140C4B8AC (IovpCompleteRequest2.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMdlPageContentsState @ 0x140477C60 (MmMdlPageContentsState.c)
 *     RtlpComputeCrcInternal @ 0x140481430 (RtlpComputeCrcInternal.c)
 *     MdlInvariantFindMdlInfo @ 0x140646650 (MdlInvariantFindMdlInfo.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall MdlInvariantPostProcessing1(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v9; // dl
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  ULONG_PTR v18; // rdx
  unsigned __int64 v19; // rbx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( !*(_QWORD *)v6 )
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result >= 2u || *(_DWORD *)(v6 + 40) != -1 )
    {
      result = (unsigned int)MmVerifierData;
      v9 = *(_BYTE *)(a2 + 67);
      if ( (MmVerifierData & 0x2000) == 0 || (MmVerifierData & 0x4000) != 0 || v9 == *(_BYTE *)(a2 + 66) )
      {
        result = MmMdlPageContentsState(v6, 2u);
        if ( (_DWORD)result == 1 )
        {
          v10 = *(_QWORD *)(a1 + 224);
          if ( v10 )
            *(_QWORD *)(v10 + 16) = *(_QWORD *)(a2 + 8);
          result = (__int64)MdlInvariantFindMdlInfo(a1, *(_QWORD *)(a2 + 8));
          v12 = result;
          if ( result || *(_BYTE *)a3 != 4 )
          {
            if ( (*(_BYTE *)(v11 + 10) & 5) != 0 )
            {
              v13 = *(_QWORD *)(v11 + 24);
            }
            else
            {
              result = (__int64)MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, 0x40000020u);
              v13 = result;
            }
            if ( v13 )
            {
              if ( !v12
                || (v14 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                    v15 = *(unsigned int *)(v12 + 24),
                    (_DWORD)v15 == (_DWORD)v14) )
              {
                if ( *(_BYTE *)a3 == 4 )
                {
                  result = RtlpComputeCrcInternal(v13, *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL), 0LL);
                  if ( result == *(_QWORD *)(v12 + 8) )
                    return result;
                  v18 = 4112LL;
                  return CarReportRuleViolationFromNt(
                           0xC4u,
                           v18,
                           *(_QWORD *)(a3 + 40),
                           a2,
                           v13,
                           14,
                           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 8LL) + 24LL));
                }
              }
              else
              {
                v16 = *(_QWORD *)(v12 + 16);
                if ( v13 < v16 || (v17 = v16 + v15, result = v13 + v14, v13 + v14 > v17) )
                {
                  LOBYTE(v5) = *(_BYTE *)a3 != 4;
                  return CarReportRuleViolationFromNt(
                           0xC4u,
                           v5 + 4112,
                           *(_QWORD *)(a3 + 40),
                           a2,
                           v13,
                           14,
                           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 8LL) + 24LL));
                }
              }
              if ( *(_BYTE *)a3 == 3 )
              {
                result = KeGetCurrentIrql();
                if ( (unsigned __int8)result < 2u )
                {
                  v19 = RtlpComputeCrcInternal(v13, *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL), 0LL);
                  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&IovMdlInvariant10Milliseconds);
                  result = RtlpComputeCrcInternal(v13, *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL), 0LL);
                  if ( v19 != result )
                  {
                    v18 = 4113LL;
                    return CarReportRuleViolationFromNt(
                             0xC4u,
                             v18,
                             *(_QWORD *)(a3 + 40),
                             a2,
                             v13,
                             14,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 8LL) + 24LL));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
