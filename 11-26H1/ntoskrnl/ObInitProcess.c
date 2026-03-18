/*
 * XREFs of ObInitProcess @ 0x140971938
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     SepAuditingForSubCategory @ 0x1404C210C (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140813628 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     ExEnumHandleTable @ 0x1408FBBA0 (ExEnumHandleTable.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     ExSweepHandleTable @ 0x140958F4C (ExSweepHandleTable.c)
 *     ExDestroyHandleTable @ 0x140959168 (ExDestroyHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x1409717D0 (ObReferenceProcessHandleTable.c)
 *     ExCreateHandleTable @ 0x140971AEC (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x140971D40 (ExDupHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, struct _KPROCESS *a2, int a3, int a4)
{
  unsigned __int64 v8; // rsi
  unsigned int *HandleTable; // r14
  char v10; // al
  int v12; // r14d
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  PACCESS_TOKEN PrimaryToken; // r9
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+80h] [rbp+20h] BYREF

  P = 0LL;
  v18 = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (unsigned int *)ExCreateHandleTable(a2, 1LL);
    goto LABEL_3;
  }
  v8 = ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v12 = ExDupHandleTable((_DWORD)a2, v8, a3, a4, (__int64)&P);
  if ( v12 >= 0 )
  {
    HandleTable = (unsigned int *)P;
LABEL_3:
    if ( HandleTable )
    {
      a2[1].KernelTime = (unsigned __int64)HandleTable;
      v10 = SepAuditingForSubCategory(124, 1);
      LOBYTE(P) = v10;
      if ( *(_DWORD *)&SepRmCapTableLock.WaitBlockFill11[24] )
      {
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        SeCaptureSubjectContext(&SubjectContext);
        PrimaryToken = SubjectContext.PrimaryToken;
        if ( SubjectContext.ClientToken )
          PrimaryToken = SubjectContext.ClientToken;
        SepAdtIncorporatePerUserPolicy(0x18u, 1, 0, (__int64)PrimaryToken, &P);
        SeReleaseSubjectContext(&SubjectContext);
        v10 = (char)P;
      }
      if ( v10 )
      {
        *(_QWORD *)&v18 = a2;
        *((_QWORD *)&v18 + 1) = a1;
        ExEnumHandleTable(HandleTable, (__int64)ObAuditInheritedHandleProcedure, (__int64)&v18, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 61);
      return 0LL;
    }
    else
    {
      a2[1].KernelTime = 0LL;
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 61);
      return 3221225626LL;
    }
  }
  ExReleaseRundownProtection_0(a1 + 61);
  v13 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, (__int64)P, 0);
    ExDestroyHandleTable(v13, v14, v15, v16);
  }
  return (unsigned int)v12;
}
