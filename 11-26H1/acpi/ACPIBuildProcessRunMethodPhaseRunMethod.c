/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRunMethod @ 0x140027900
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x140027FA0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qss @ 0x14003C56C (WPP_RECORDER_SF_qss.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRunMethod(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  _OWORD *v3; // rsi
  __int64 *v4; // r15
  int v5; // r12d
  __int64 v6; // r13
  const char *v8; // rcx
  int v9; // edx
  int v10; // edx
  const char *v11; // r8
  const char *v12; // rax
  __int64 v13; // rcx
  char v15; // r8
  const char *v16; // rdx
  __int64 v17; // rax
  int v18; // r14d
  int v19; // r14d
  __int64 v20; // rcx
  __int64 *v21; // rcx
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  __int64 v26; // [rsp+38h] [rbp-39h]
  char v27; // [rsp+38h] [rbp-39h]
  _OWORD v28[5]; // [rsp+58h] [rbp-19h] BYREF

  v1 = *(_DWORD *)(a1 + 84);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v8 = byte_140075A82;
  if ( (v1 & 0x40) != 0 && *(_DWORD *)(a1 + 128) )
  {
    v15 = 0;
    v16 = byte_140075A82;
    if ( v2 )
    {
      v17 = *(_QWORD *)(v2 + 8);
      v15 = v2;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v16 = *(const char **)(v2 + 608);
        if ( (v17 & 0x400000000000LL) != 0 )
          v8 = *(const char **)(v2 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = (__int64)v16;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v16,
        6,
        66,
        (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
        v15,
        v26,
        (__int64)v8);
    }
    *(_DWORD *)(a1 + 32) = 0;
    goto LABEL_3;
  }
  v9 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 9;
  v4 = AMLIGetNamedChild(*(__int64 **)(v2 + 760), v9);
  if ( !v4 )
    goto LABEL_3;
  v18 = *(_DWORD *)(a1 + 84);
  if ( (v18 & 2) != 0 )
  {
    _m_prefetchw((const void *)(v2 + 8));
    v24 = *(_QWORD *)(v2 + 8);
    do
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8), v24 | 0x20000000000000LL, v24);
    }
    while ( v25 != v24 );
    if ( (v24 & 0x20000000000000LL) != 0 )
      goto LABEL_3;
    goto LABEL_27;
  }
  if ( (v18 & 8) != 0 )
  {
    if ( !*(_DWORD *)(v2 + 552) )
      goto LABEL_3;
    v28[0] = 0LL;
    *(_QWORD *)&v28[2] = 0LL;
    v5 = 1;
    v28[1] = 1uLL;
    WORD1(v28[0]) = 1;
  }
  else
  {
    if ( (v18 & 0x30) == 0 )
    {
      if ( (v18 & 0x80u) != 0 )
      {
        _m_prefetchw((const void *)(v2 + 1008));
        v22 = *(_QWORD *)(v2 + 1008);
        do
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 1008), v22 | 0x4000, v22);
        }
        while ( v23 != v22 );
        if ( (v22 & 0x4000) != 0 )
          goto LABEL_3;
        v6 = a1 + 88;
        *(_OWORD *)(a1 + 88) = 0LL;
        *(_OWORD *)(a1 + 104) = 0LL;
        *(_QWORD *)(a1 + 120) = 0LL;
        v3 = 0LL;
        *(_DWORD *)(a1 + 32) = 8;
      }
      goto LABEL_27;
    }
    v19 = v18 | 0x40;
    *(_DWORD *)(a1 + 84) = v19;
    memset(v28, 0, sizeof(v28));
    *(_QWORD *)&v28[1] = 2LL;
    WORD1(v28[0]) = 1;
    WORD5(v28[2]) = 1;
    v5 = 2;
    *((_QWORD *)&v28[3] + 1) = ((unsigned __int64)(unsigned __int8)v19 >> 4) & 1;
  }
  v3 = v28;
LABEL_27:
  v20 = *(_QWORD *)(a1 + 56);
  if ( v20 )
    AMLIDereferenceHandleEx(v20);
  *(_QWORD *)(a1 + 56) = v4;
  AMLIReferenceHandleEx((__int64)v4);
  LODWORD(v3) = AMLIAsyncEvalObject(v21, v6, v5, (__int64)v3, ACPIBuildCompleteMustSucceed, a1);
LABEL_3:
  v10 = 0;
  v11 = byte_140075A82;
  v12 = byte_140075A82;
  if ( v2 )
  {
    v13 = *(_QWORD *)(v2 + 8);
    v10 = v2;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(v2 + 608);
      if ( (v13 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v2 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = v10;
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      6,
      67,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      (char)v3,
      v27,
      (__int64)v11,
      (__int64)v12);
  }
  if ( (_DWORD)v3 == 259 )
    LODWORD(v3) = 0;
  else
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v4);
  if ( v4 )
    AMLIDereferenceHandleEx((__int64)v4);
  return (unsigned int)v3;
}
