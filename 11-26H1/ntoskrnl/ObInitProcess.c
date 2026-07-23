/*
 * XREFs of ObInitProcess @ 0x1409BCC28
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     SepAuditingForSubCategory @ 0x1404BB95C (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140819488 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ExEnumHandleTable @ 0x14092BB30 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 *     ExCreateHandleTable @ 0x1409BCDDC (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x1409BD030 (ExDupHandleTable.c)
 *     ExSweepHandleTable @ 0x1409FE810 (ExSweepHandleTable.c)
 *     ExDestroyHandleTable @ 0x1409FEA2C (ExDestroyHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v8; // rsi
  unsigned int *HandleTable; // r14
  char v10; // al
  int v12; // r14d
  PVOID v13; // rbx
  PACCESS_TOKEN PrimaryToken; // r9
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+80h] [rbp+20h] BYREF

  P = 0LL;
  v15 = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (unsigned int *)ExCreateHandleTable(a2, 1LL);
    goto LABEL_3;
  }
  v8 = ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v12 = ExDupHandleTable(a2, v8, a3, a4, (__int64)&P);
  if ( v12 >= 0 )
  {
    HandleTable = (unsigned int *)P;
LABEL_3:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 768) = HandleTable;
      v10 = SepAuditingForSubCategory(124, 1);
      LOBYTE(P) = v10;
      if ( *(_DWORD *)&SepRmCapTableLock.WaitBlockFill11[56] )
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
        *(_QWORD *)&v15 = a2;
        *((_QWORD *)&v15 + 1) = a1;
        ExEnumHandleTable(HandleTable, (__int64)ObAuditInheritedHandleProcedure, (__int64)&v15, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 61);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 768) = 0LL;
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 61);
      return 3221225626LL;
    }
  }
  ExReleaseRundownProtection_0(a1 + 61);
  v13 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, P, 0LL);
    ExDestroyHandleTable(v13);
  }
  return (unsigned int)v12;
}
