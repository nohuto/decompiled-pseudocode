/*
 * XREFs of IoCheckRedirectionTrustLevel2 @ 0x1404F5590
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenGetRedirectionTrustPolicy @ 0x1404BBBB0 (SeTokenGetRedirectionTrustPolicy.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140831560 (EtwTimLogRedirectionTrustPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall IoCheckRedirectionTrustLevel2(
        int a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // edi
  char v7; // r15
  char v8; // r13
  _DWORD *v11; // rcx
  int v12; // eax
  char v13; // r14
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  bool v15; // bl
  bool v16; // cl
  char v17; // al
  char v19; // [rsp+30h] [rbp-30h] BYREF
  bool v20; // [rsp+31h] [rbp-2Fh] BYREF
  bool v21; // [rsp+32h] [rbp-2Eh] BYREF
  int v22; // [rsp+34h] [rbp-2Ch]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-28h] BYREF
  char v25; // [rsp+A8h] [rbp+48h] BYREF

  v20 = 0;
  v6 = 1;
  v22 = 1;
  v25 = 1;
  v7 = 1;
  v19 = 1;
  v8 = 1;
  v21 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a2 )
    return 0LL;
  v13 = ((v11 = *(_DWORD **)(a6 + 8), v12 = v11[18], v12 == 2) || v12 == 7)
     && (v11[13] & 0x40001) != 0
     && (v11[12] & 0x600100) == 0;
  if ( (a4 & 0xFFFFFFFD) == 0 && !v13 )
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
  SeTokenGetRedirectionTrustPolicy((__int64)p_SubjectContext->PrimaryToken, &v20, &v21);
  if ( p_SubjectContext->ClientToken && p_SubjectContext->ImpersonationLevel >= SecurityImpersonation )
  {
    SeTokenGetRedirectionTrustPolicy((__int64)p_SubjectContext->ClientToken, (bool *)&v25, (bool *)&v19);
    v7 = v25;
    v8 = v19;
    v22 = 2;
  }
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectContext);
  v15 = v20 && v7;
  v16 = v21 && v8;
  if ( a4 == 2 || (v17 = v16, !a4) )
  {
    v17 = v16;
    if ( v13 )
    {
      if ( v15 || v16 )
        v17 = 1;
      v15 = 0;
    }
  }
  if ( v15 )
  {
    v6 = 2;
  }
  else if ( !v17 )
  {
    return 0LL;
  }
  EtwTimLogRedirectionTrustPolicy(v6, KeGetCurrentThread()->ApcState.Process, a1, a5, v22 == 2, v13);
  return v15 ? 0xC00004BC : 0;
}
