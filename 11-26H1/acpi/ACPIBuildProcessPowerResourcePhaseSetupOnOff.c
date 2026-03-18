/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x140058720
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteGeneric @ 0x140034A40 (ACPIBuildCompleteGeneric.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053384 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseSetupOnOff(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 **v5; // rdi
  volatile signed __int64 *v6; // r15
  __int64 *v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // r14
  __int64 v14; // rcx
  __int64 *v15; // rcx

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 80;
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 6;
  v5 = (__int64 **)(v1 + 4);
  v6 = v1 + 2;
  if ( *(_WORD *)(a1 + 82) )
  {
    ACPIVerifyAndCopyFirmwareDependencies(*v5, v2, v1 + 12);
    _InterlockedOr64(v6, 0x1000uLL);
  }
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  v7 = AMLIGetNamedChild(*v5, 1179012959);
  if ( !v7 )
    KeBugCheckEx(0xA5u, 0xEuLL, (ULONG_PTR)*v5, 0x46464F5FuLL, 0LL);
  v8 = *v5;
  v1[10] = v7;
  v9 = AMLIGetNamedChild(v8, 1598967647);
  if ( !v9 )
    KeBugCheckEx(0xA5u, 0xEuLL, (ULONG_PTR)*v5, 0x5F4E4F5FuLL, 0LL);
  v10 = *v5;
  v1[9] = v9;
  v11 = AMLIGetNamedChild(v10, 1414746719);
  v12 = *v5;
  v1[11] = v11;
  v13 = AMLIGetNamedChild(v12, 1096045407);
  if ( !v13 )
    KeBugCheckEx(0xA5u, 0xEuLL, (ULONG_PTR)*v5, 0x4154535FuLL, 0LL);
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  if ( (*(_DWORD *)v6 & 0x1000LL) != 0 )
    goto LABEL_13;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
    AMLIDereferenceHandleEx(v14);
  *(_QWORD *)(a1 + 56) = v13;
  AMLIReferenceHandleEx((__int64)v13);
  v3 = AMLIAsyncEvalObject(v15, v2, 0, 0LL, ACPIBuildCompleteGeneric, a1);
  if ( v3 != 259 )
LABEL_13:
    ACPIBuildCompleteGeneric((__int64)v13, v3, v2, a1);
  AMLIDereferenceHandleEx((__int64)v13);
  return v3;
}
