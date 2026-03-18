/*
 * XREFs of PspOneDirectionSecurityDomainCombine @ 0x1409FE890
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1409EB314 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1404425E0 (SepCreateAccessStateFromSubjectContext.c)
 *     PspIsParentProcess @ 0x14047F71C (PspIsParentProcess.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x1404C6128 (PspSynchronizeThreadIsolationDomains.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     SeCaptureSubjectContextEx @ 0x140920670 (SeCaptureSubjectContextEx.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 */

char __fastcall PspOneDirectionSecurityDomainCombine(__int64 Object)
{
  void *v2; // rcx
  int v3; // eax
  PEPROCESS v4; // rsi
  _DWORD *v5; // rbx
  signed __int64 v6; // rax
  signed __int32 v8[8]; // [rsp+8h] [rbp-100h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE SubjectContext[5]; // [rsp+50h] [rbp-B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v12[28]; // [rsp+118h] [rbp+10h] BYREF

  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v12, 0, sizeof(v12));
  v2 = *(void **)(Object + 720);
  Process = 0LL;
  SubjectContext[0] = 0LL;
  v3 = PsLookupProcessByProcessId(v2, &Process);
  v4 = Process;
  if ( v3 >= 0 )
  {
    LOBYTE(v3) = PspIsParentProcess((__int64)Process, Object);
    if ( (_BYTE)v3 )
    {
      if ( (v4[3].ActiveGroupsMask.Masks[1] & 0x40000000000000LL) != 0 )
      {
        _InterlockedOr(v8, 0);
        if ( *(int *)(Object + 1872) >= 0 && SLODWORD(v4[4].ThreadListHead.Flink) >= 0 )
        {
          v5 = (_DWORD *)PsProcessType + 19;
          memset(&SubjectContext[1], 0, 32);
          SeCaptureSubjectContextEx(0LL, v4, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
          v3 = SepCreateAccessStateFromSubjectContext(&SubjectContext[1], &PassedAccessState, v12, 40, v5);
          if ( v3 >= 0 )
          {
            if ( ObOpenObjectByPointer(
                   (PVOID)Object,
                   0x600u,
                   &PassedAccessState,
                   0,
                   (POBJECT_TYPE)PsProcessType,
                   0,
                   SubjectContext) >= 0 )
            {
              *(_QWORD *)(Object + 1896) = *(_QWORD *)&v4[4].ProcessLock;
              if ( (*(_DWORD *)(Object + 1872) | LODWORD(v4[4].ThreadListHead.Flink)) < 0 )
              {
                _InterlockedOr((volatile signed __int32 *)(Object + 1532), 0x200000u);
                v6 = _InterlockedIncrement64(&PsNextSecurityDomain);
                *(_QWORD *)(Object + 1888) = v6;
                *(_QWORD *)(Object + 1896) = v6;
                PspSynchronizeThreadIsolationDomains(Object);
              }
            }
            LOBYTE(v3) = SeDeleteAccessState((__int64)&PassedAccessState);
            if ( SubjectContext[0] )
              LOBYTE(v3) = ObCloseHandle(SubjectContext[0], 0);
          }
        }
      }
    }
  }
  if ( v4 )
    LOBYTE(v3) = ObfDereferenceObject(v4);
  return v3;
}
