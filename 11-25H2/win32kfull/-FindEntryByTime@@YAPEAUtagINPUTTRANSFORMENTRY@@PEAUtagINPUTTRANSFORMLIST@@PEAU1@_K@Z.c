/*
 * XREFs of ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1401A7294
 * Callers:
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z @ 0x140292204 (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x14027B07C (WPP_RECORDER_AND_TRACE_SF_ii.c)
 */

struct tagINPUTTRANSFORMLIST **__fastcall FindEntryByTime(
        struct tagINPUTTRANSFORMLIST *a1,
        struct tagINPUTTRANSFORMLIST **a2,
        __int64 a3)
{
  struct tagINPUTTRANSFORMLIST **v3; // r9
  struct tagINPUTTRANSFORMLIST *v4; // r10
  struct tagINPUTTRANSFORMLIST *v5; // rdx
  struct tagINPUTTRANSFORMLIST *v8; // rcx
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  bool v11; // bl
  struct tagINPUTTRANSFORMLIST **v12; // r8
  bool v13; // bp
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx

  v3 = a2;
  v4 = (struct tagINPUTTRANSFORMLIST *)((char *)a1 + 8);
  v5 = *a2;
  if ( v5 == (struct tagINPUTTRANSFORMLIST *)((char *)a1 + 8) )
    return v3;
  if ( v3[1] != v4 )
  {
LABEL_11:
    v12 = (struct tagINPUTTRANSFORMLIST **)v3[1];
    if ( v5 != v4 )
    {
      do
      {
        if ( a3 - (__int64)v3[2] < (unsigned __int64)(v12[2] - v3[2]) )
          break;
        v12 = v3;
        v3 = (struct tagINPUTTRANSFORMLIST **)*v3;
      }
      while ( *v3 != v4 );
    }
    return v3;
  }
  v8 = v3[2];
  v9 = *((_QWORD *)v4 + 1);
  v10 = a3 - (_QWORD)v8;
  if ( v10 >= *(_QWORD *)(v9 + 16) - (_QWORD)v8 )
  {
    v3 = (struct tagINPUTTRANSFORMLIST **)v5;
    v5 = *(struct tagINPUTTRANSFORMLIST **)v5;
    goto LABEL_11;
  }
  if ( v10 <= *(_QWORD *)(v9 + 16) - a3 )
    return v3;
  v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v11;
    WPP_RECORDER_AND_TRACE_SF_ii(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69160),
      4);
  }
  return (struct tagINPUTTRANSFORMLIST **)v9;
}
