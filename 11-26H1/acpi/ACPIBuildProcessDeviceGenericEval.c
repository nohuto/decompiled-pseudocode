/*
 * XREFs of ACPIBuildProcessDeviceGenericEval @ 0x1400348C0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteGeneric @ 0x140034A40 (ACPIBuildCompleteGeneric.c)
 *     WPP_RECORDER_SF_LLqss @ 0x140035D8C (WPP_RECORDER_SF_LLqss.c)
 *     _ACPIInternalError @ 0x14004B798 (_ACPIInternalError.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEval(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r14
  __int64 v3; // rbp
  unsigned int v4; // esi
  __int64 *v6; // rdi
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rax
  const char *v10; // rcx
  const char *v11; // rdx
  __int64 *v13; // rcx
  int v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 28);
  v2 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0;
  if ( v1 >= 0x22 )
    ACPIInternalError(0x101267uLL);
  v6 = AMLIGetNamedChild(*(__int64 **)(v3 + 760), AcpiBuildDevicePowerNameLookup[v1]);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    AMLIDereferenceHandleEx(v7);
  *(_QWORD *)(a1 + 56) = v6;
  if ( v6
    && (AMLIReferenceHandleEx((__int64)v6),
        v4 = AMLIAsyncEvalObject(v13, v2, 0, 0LL, ACPIBuildCompleteGeneric, a1),
        v4 == 259)
    || (ACPIBuildCompleteGeneric(v6, v4, v2, a1), v6) )
  {
    AMLIDereferenceHandleEx((__int64)v6);
  }
  v9 = *(_QWORD *)(v3 + 8);
  v10 = byte_140075A82;
  v11 = byte_140075A82;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(v3 + 608);
    if ( (v9 & 0x400000000000LL) != 0 )
      v11 = *(const char **)(v3 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = (__int64)v11;
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_LLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v11,
      v8,
      27,
      v14,
      *(_DWORD *)(a1 + 28) - 3,
      v4,
      v3,
      (__int64)v10,
      v15);
  }
  return 0LL;
}
