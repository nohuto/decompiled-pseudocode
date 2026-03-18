/*
 * XREFs of PspEstablishDfssHierarchy @ 0x1407F8254
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1407F836C (PspEstablishJobHierarchy.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeInsertSchedulingGroup @ 0x140444BD0 (KeInsertSchedulingGroup.c)
 *     KeRemoveSchedulingGroup @ 0x1404C61B4 (KeRemoveSchedulingGroup.c)
 *     PspGetSessionObjectByProcess @ 0x140616E28 (PspGetSessionObjectByProcess.c)
 *     PsGetSessionSchedulingGroupByProcess @ 0x140966CF4 (PsGetSessionSchedulingGroupByProcess.c)
 */

LONG_PTR __fastcall PspEstablishDfssHierarchy(__int64 a1, __int64 a2, int a3)
{
  LONG_PTR result; // rax
  struct _KSCHEDULING_GROUP *SessionSchedulingGroupByProcess; // rdi
  __int64 v6; // rcx
  int v7; // r8d
  void *v8; // rsi
  void *v9; // rcx

  result = (unsigned int)(a3 - 1);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    SessionSchedulingGroupByProcess = (struct _KSCHEDULING_GROUP *)PsGetSessionSchedulingGroupByProcess(a2);
    result = PspGetSessionObjectByProcess(v6);
    v8 = (void *)result;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 1240LL)
      || *(struct _KSCHEDULING_GROUP **)(a1 + 1248) == SessionSchedulingGroupByProcess )
    {
      if ( v7 == 1 )
      {
        result = *(_QWORD *)(a1 + 1312);
        if ( result == a1 && *(_QWORD *)(a1 + 1240) && !*(_DWORD *)(a1 + 216) && *(void **)(a1 + 1344) != v8 )
        {
          KeRemoveSchedulingGroup(*(unsigned __int16 **)(a1 + 1248));
          KeInsertSchedulingGroup(
            (struct _KSCHEDULING_GROUP *)(*(_QWORD *)(a1 + 1240) + 128LL),
            *(_KSCHEDULING_GROUP_POLICY *)(*(_QWORD *)(a1 + 1240) + 128LL),
            SessionSchedulingGroupByProcess);
          v9 = *(void **)(a1 + 1344);
          if ( v9 )
            ObfDereferenceObjectWithTag(v9, 0x624A7350u);
          *(_QWORD *)(a1 + 1344) = v8;
          return ObfReferenceObjectWithTag(v8, 0x624A7350u);
        }
      }
    }
    else
    {
      if ( *(struct _KSCHEDULING_GROUP **)(*(_QWORD *)(a1 + 1312) + 1248LL) != SessionSchedulingGroupByProcess )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 1248LL) = SessionSchedulingGroupByProcess;
        result = *(_QWORD *)(a1 + 1312);
        *(_QWORD *)(result + 1344) = v8;
      }
      *(_QWORD *)(a1 + 1248) = SessionSchedulingGroupByProcess;
    }
  }
  return result;
}
