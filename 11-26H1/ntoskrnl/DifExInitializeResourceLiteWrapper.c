/*
 * XREFs of DifExInitializeResourceLiteWrapper @ 0x140652410
 * Callers:
 *     <none>
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall DifExInitializeResourceLiteWrapper(struct _SINGLE_LIST_ENTRY *a1)
{
  __int128 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int128 *v4; // r15
  int v5; // ecx
  BOOLEAN v6; // si
  __int128 *i; // rdi
  struct _SINGLE_LIST_ENTRY *v8; // rax
  KSPIN_LOCK *p_Policy; // rdi
  unsigned __int16 *v10; // rax
  __int64 *v11; // rbp
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v13; // si
  __int64 v14; // rdx
  BOOLEAN v15; // di
  __int128 *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]

  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(395);
  v4 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v5 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v5 & 0x18) != 0 )
    {
      *(_QWORD *)&v18 = retaddr;
    }
    else if ( (v5 & 4) != 0 )
    {
      *(_QWORD *)&v18 = DifGetReturnAddressForWrappers();
    }
    v6 = 0;
    *((_QWORD *)&v18 + 1) = a1;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v4 + 4); i != v4 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v18, v3);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  if ( (unsigned __int64)a1 < 0xFFFF800000000000uLL || MmDeterminePoolType((unsigned __int64)a1) == 256 )
    ExpTraceLogBadResourceAddress((unsigned __int64)a1, retaddr);
  memset_0(a1, 0, 0x68uLL);
  v8 = 0LL;
  a1[1].Next = a1;
  a1->Next = a1;
  a1[4].Next = 0LL;
  a1[5].Next = 0LL;
  a1[12].Next = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup
      && (v10 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1),
          (v11 = (__int64 *)v10) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v10);
      v13 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)p_Policy, v11);
    }
    else
    {
      v13 = 0;
    }
    v8 = (struct _SINGLE_LIST_ENTRY *)v13;
  }
  a1[11].Next = v8;
  HIDWORD(a1[10].Next) = -1;
  ExpAddResourceToSystemResourceList(a1);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)a1, 0, 0);
  LODWORD(v19) = 0;
  if ( v4 )
  {
    if ( (v15 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v4 + 6); j != v4 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v18, v14);
      }
      if ( v15 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v19;
}
