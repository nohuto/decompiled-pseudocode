/*
 * XREFs of PfpRpControlRequestUpdate @ 0x140B04C68
 * Callers:
 *     PfpRpControlRequestPerform @ 0x140B04BF0 (PfpRpControlRequestPerform.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     PfpRpCHashDeleteEntries @ 0x140AA9288 (PfpRpCHashDeleteEntries.c)
 *     PfpRpCHashAddEntries @ 0x140B04DEC (PfpRpCHashAddEntries.c)
 */

__int64 __fastcall PfpRpControlRequestUpdate(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r15
  _DWORD *v3; // r13
  unsigned int v4; // esi
  unsigned int *v7; // r14
  _QWORD *i; // r12
  unsigned int v9; // eax
  __int64 v10; // rbp
  PEPROCESS v11; // rcx
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  struct _KLOCK_ENTRIES *v14; // r9
  PEPROCESS Process; // [rsp+60h] [rbp+8h] BYREF

  v2 = (unsigned int)(a2[2] + a2[1]);
  v3 = a2 + 6;
  v4 = 0;
  Process = 0LL;
  v7 = a2 + 6;
  for ( i = (_QWORD *)(((unsigned __int64)&a2[2 * v2 + 7] + 3) & 0xFFFFFFFFFFFFFFF8uLL); v4 < (unsigned int)v2; ++v4 )
  {
    v9 = v7[1];
    v10 = *v7;
    *(_QWORD *)v7 = v10;
    v7 += 2;
    if ( v9 && PsLookupProcessByProcessId((HANDLE)v9, &Process) >= 0 )
    {
      v11 = Process;
      if ( HIDWORD(Process[1].CpuPartitionList.Blink) == (_DWORD)v10 )
      {
        if ( v4 < a2[1] )
          _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x4000u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFFBFFF);
      }
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    }
  }
  result = PfpRpCHashAddEntries(a1, a1 + 96, a1 + 120, v3, a2[1]);
  if ( (int)result >= 0 )
  {
    v13 = (struct _KLOCK_ENTRIES *)(unsigned int)a2[2];
    if ( !(_DWORD)v13
      || !*(_DWORD *)(a1 + 112)
      || (result = PfpRpCHashDeleteEntries(a1, a1 + 96, a1 + 120, v13, &v3[2 * a2[1]]), (int)result >= 0) )
    {
      PfpRpCHashAddEntries(a1, a1 + 56, a1 + 88, &i[a2[3]], a2[4]);
      v14 = (struct _KLOCK_ENTRIES *)(unsigned int)a2[3];
      if ( !(_DWORD)v14 || !*(_DWORD *)(a1 + 72) )
        return 0LL;
      result = PfpRpCHashDeleteEntries(a1, a1 + 56, a1 + 88, v14, i);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(a1 + 80) = 0LL;
        return 0LL;
      }
    }
  }
  return result;
}
