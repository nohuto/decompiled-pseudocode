/*
 * XREFs of IoCheckRedirectionTrustLevel @ 0x1404A3AD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1404BBBB0 (SeTokenGetRedirectionTrustPolicy.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140831560 (EtwTimLogRedirectionTrustPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall IoCheckRedirectionTrustLevel(
        int a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        int a4,
        __int64 a5)
{
  int v5; // r12d
  char v6; // bp
  char v7; // r14
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *PrimaryToken; // rbx
  int v14; // r15d
  int v15; // ebx
  int v16; // r15d
  bool v17; // bl
  bool v18; // al
  char v19[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-50h] BYREF
  char v21; // [rsp+98h] [rbp+10h] BYREF

  v5 = 1;
  v21 = 1;
  v6 = 1;
  v19[0] = 1;
  v7 = 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a2 || (a4 & 0xFFFFFFFD) == 0 )
    return 0LL;
  if ( a3 )
  {
    p_SubjectContext = a3;
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    p_SubjectContext = &SubjectContext;
  }
  CurrentThread = KeGetCurrentThread();
  PrimaryToken = (PERESOURCE *)p_SubjectContext->PrimaryToken;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(PrimaryToken[6], 1u);
  v14 = *((_DWORD *)PrimaryToken + 50);
  ExReleaseResourceLite(PrimaryToken[6]);
  KeLeaveCriticalRegion();
  v15 = v14 & 0x400000;
  v16 = v14 & 0x800000;
  if ( p_SubjectContext->ClientToken && p_SubjectContext->ImpersonationLevel >= SecurityImpersonation )
  {
    SeTokenGetRedirectionTrustPolicy(p_SubjectContext->ClientToken, &v21, v19);
    v6 = v21;
    v5 = 2;
    v7 = v19[0];
  }
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectContext);
  v17 = v15 && v6;
  v18 = v16 && v7;
  if ( (v17 || v18)
    && (EtwTimLogRedirectionTrustPolicy(v17 + 1, KeGetCurrentThread()->ApcState.Process, a1, a5, v5 == 2, 0), v17) )
  {
    return 3221226684LL;
  }
  else
  {
    return 0LL;
  }
}
