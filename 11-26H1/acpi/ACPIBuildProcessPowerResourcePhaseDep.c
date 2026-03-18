/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseDep @ 0x140058500
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x140027FA0 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseDep(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 *v6; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 5;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v4 = AMLIGetNamedChild(*(__int64 **)(v2 + 32), 1346716767);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( v5 )
      AMLIDereferenceHandleEx(v5);
    *(_QWORD *)(a1 + 56) = v4;
    AMLIReferenceHandleEx((__int64)v4);
    v3 = AMLIAsyncEvalObject(v6, a1 + 80, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    if ( v3 == 259 )
      goto LABEL_6;
  }
  ACPIBuildCompleteMustSucceed((ULONG_PTR)v4, v3, a1 + 80, a1);
  if ( v4 )
LABEL_6:
    AMLIDereferenceHandleEx((__int64)v4);
  return v3;
}
