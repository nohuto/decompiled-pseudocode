/*
 * XREFs of PiDqQueryEnumObject @ 0x140968E04
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqEnumQueryObjectsCallback @ 0x140968DE0 (PiDqEnumQueryObjectsCallback.c)
 * Callees:
 *     PiDqQueryAddObjectToResultSet @ 0x14094E98C (PiDqQueryAddObjectToResultSet.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x1409683B0 (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryAppendActionEntry @ 0x140968F98 (PiDqQueryAppendActionEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqQueryEnumObject(struct _SECURITY_SUBJECT_CONTEXT *a1, __int64 a2)
{
  _DWORD *ProcessAuditId; // rdx
  int v5; // edx
  int v6; // eax
  unsigned int AddObjectToResultSet; // ebx
  char v8; // al
  int EvaluateFilter; // eax
  char v10; // al
  __int64 Pool2; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(v13) = 1;
  ProcessAuditId = a1->ProcessAuditId;
  if ( !ProcessAuditId[5] )
  {
    v5 = ProcessAuditId[4] - 1;
    if ( !v5 || (unsigned int)(v5 - 1) <= 1 )
    {
      v6 = PiPnpRtlApplyMandatoryFilters(
             *(__int64 *)&PiPnpRtlCtx,
             *(_QWORD *)(a2 + 16),
             *(_DWORD *)(a2 + 28),
             0LL,
             a1 + 1,
             &v13);
      AddObjectToResultSet = v6;
      if ( v6 == -1073741772 || v6 == -1073741275 )
      {
        v8 = 0;
        LOBYTE(v13) = 0;
        AddObjectToResultSet = 0;
      }
      else
      {
        if ( v6 < 0 )
          return AddObjectToResultSet;
        v8 = v13;
      }
      if ( !v8 )
        return AddObjectToResultSet;
    }
  }
  if ( *((_QWORD *)a1->ProcessAuditId + 11) )
  {
    EvaluateFilter = PiDqQueryEvaluateFilter((__int64)a1, *(_QWORD *)(a2 + 16), (bool *)&v13);
    AddObjectToResultSet = EvaluateFilter;
    if ( EvaluateFilter == -1073741772 )
    {
      v10 = 0;
      AddObjectToResultSet = 0;
    }
    else
    {
      if ( EvaluateFilter < 0 )
        return AddObjectToResultSet;
      v10 = v13;
    }
    if ( !v10 )
      return AddObjectToResultSet;
  }
  if ( (*((_DWORD *)a1->ProcessAuditId + 10) & 1) == 0
    || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet((__int64)a1, a2), (AddObjectToResultSet & 0x80000000) == 0) )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 32) = 1;
      *(_QWORD *)(Pool2 + 16) = a2;
      if ( a2 )
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      AddObjectToResultSet = 0;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      PiDqQueryAppendActionEntry(a1, Pool2);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return AddObjectToResultSet;
}
