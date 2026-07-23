/*
 * XREFs of MdlInvariantPreProcessing1 @ 0x140646934
 * Callers:
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMdlPageContentsState @ 0x140477C60 (MmMdlPageContentsState.c)
 *     RtlpComputeCrcInternal @ 0x140481430 (RtlpComputeCrcInternal.c)
 *     MdlInvariantFindMdlInfo @ 0x140646650 (MdlInvariantFindMdlInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

unsigned __int64 __fastcall MdlInvariantPreProcessing1(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  ULONG_PTR v11; // rsi
  _QWORD *MdlInfo; // rdi
  __int64 v13; // r11
  char v14; // al
  ULONG_PTR v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int i; // edx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  ULONG_PTR v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  ULONG_PTR v26; // rdx
  __int128 v27; // [rsp+40h] [rbp-38h]
  __int128 v28; // [rsp+50h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = 0LL;
  *(_WORD *)((char *)&v28 + 13) = 0;
  HIBYTE(v28) = 0;
  v9 = *(_QWORD *)(v4 + 8);
  if ( !*(_QWORD *)v9 )
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result >= 2u || *(_DWORD *)(v9 + 40) != -1 )
    {
      result = MmMdlPageContentsState(v9, 2u);
      if ( (_DWORD)result == 1 )
      {
        result = *(_QWORD *)(a1 + 168);
        v10 = *(_QWORD *)(result + 8);
        if ( (*(_BYTE *)(v10 + 10) & 5) != 0 )
        {
          v11 = *(_QWORD *)(v10 + 24);
        }
        else
        {
          result = (unsigned __int64)MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000020u);
          v11 = result;
        }
        if ( v11 )
        {
          MdlInfo = MdlInvariantFindMdlInfo(a2, *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL));
          if ( MdlInfo )
          {
            v14 = *(_BYTE *)(v13 + 67);
            if ( v14 == *(_BYTE *)(v13 + 66) || *((_BYTE *)MdlInfo + 28) == v14 )
            {
              *(_OWORD *)MdlInfo = 0LL;
              *((_OWORD *)MdlInfo + 1) = 0LL;
              MdlInfo = 0LL;
              *(_QWORD *)(*(_QWORD *)(a2 + 224) + 16LL) = 0LL;
            }
          }
          v15 = *(_QWORD *)(a1 + 168);
          v16 = *(_QWORD *)(v15 + 8);
          if ( MdlInfo )
          {
            result = *(unsigned int *)(v16 + 40);
            v22 = *((unsigned int *)MdlInfo + 6);
            if ( (_DWORD)v22 == (_DWORD)result )
            {
              v24 = result;
            }
            else
            {
              v23 = MdlInfo[2];
              if ( v11 < v23 || (v24 = (unsigned int)result, result += v11, result > v23 + v22) )
              {
                LOBYTE(v5) = *(_BYTE *)a3 != 4;
                return CarReportRuleViolationFromNt(
                         0xC4u,
                         v5 + 4112,
                         *(_QWORD *)(a3 + 40),
                         v15,
                         v11,
                         14,
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 8LL) + 24LL));
              }
            }
            if ( (MmVerifierData & 0x4000) != 0 )
            {
              result = RtlpComputeCrcInternal(v11, v24, 0LL);
              v25 = result;
              if ( MdlInfo[1] != result )
              {
                if ( *(_BYTE *)a3 == 4 )
                {
                  v26 = 4112LL;
                }
                else
                {
                  result = *(unsigned int *)(a3 + 8);
                  if ( *(_DWORD *)(*(_QWORD *)(v4 + 184) + 8LL) != (_DWORD)result )
                  {
                    MdlInfo[1] = v25;
                    return result;
                  }
                  v26 = 4113LL;
                }
                return CarReportRuleViolationFromNt(
                         0xC4u,
                         v26,
                         *(_QWORD *)(a3 + 40),
                         *(_QWORD *)(a1 + 168),
                         v11,
                         14,
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 8LL) + 24LL));
              }
            }
          }
          else
          {
            v17 = RtlpComputeCrcInternal(v11, *(unsigned int *)(v16 + 40), 0LL);
            v18 = *(_QWORD *)(a1 + 168);
            *((_QWORD *)&v27 + 1) = v17;
            *(_QWORD *)&v28 = v11;
            *(_QWORD *)&v27 = *(_QWORD *)(v18 + 8);
            DWORD2(v28) = *(_DWORD *)(v27 + 40);
            BYTE12(v28) = *(_BYTE *)(v18 + 67);
            result = *(_QWORD *)(a2 + 224);
            if ( !result )
            {
              result = ExAllocatePool2(0x40uLL);
              if ( !result )
                return result;
              *(_DWORD *)result = 2;
              *(_QWORD *)(result + 8) = result + 24;
              *(_QWORD *)(a2 + 224) = result;
            }
            for ( i = 0; i < *(_DWORD *)result; ++i )
            {
              v20 = *(_QWORD *)(result + 8);
              v21 = 32LL * i;
              if ( !*(_QWORD *)(v21 + v20) )
              {
                *(_OWORD *)(v21 + v20) = v27;
                *(_OWORD *)(v21 + v20 + 16) = v28;
                return result;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
