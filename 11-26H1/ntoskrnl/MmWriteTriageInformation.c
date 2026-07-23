/*
 * XREFs of MmWriteTriageInformation @ 0x1406FB990
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1404490A0 (RtlGetNtProductType.c)
 *     ExVerifySuite @ 0x140529E40 (ExVerifySuite.c)
 */

__int64 __fastcall MmWriteTriageInformation(__int64 a1)
{
  int v1; // r14d
  int v3; // ebp
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  _KPROCESS *Process; // r10
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // rdx
  volatile __int64 WaitStatus; // r9
  __int64 result; // rax
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = MmSpecialPoolTag;
  v3 = VerifierTriageActionTaken;
  v14 = 0;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)&v14);
  if ( v14 != 1 || ExVerifySuite(EmbeddedNT) || ExVerifySuite(EmbeddedRestricted) || ExVerifySuite(SecurityAppliance) )
    v3 |= 0x80000000;
  v4 = MiFlags;
  v5 = qword_140E2C708;
  Process = stru_140E366D8.ApcState.Process;
  v7 = qword_140E3D880;
  v8 = qword_140E3C180;
  v9 = qword_140E3C188;
  v10 = MmVerifierData;
  v11 = *(_QWORD *)&stru_140E366D8.ApcStateFill[40];
  WaitStatus = stru_140E366D8.WaitStatus;
  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 4) = 80;
  *(_DWORD *)(a1 + 8) = v1;
  *(_DWORD *)(a1 + 12) = v3;
  *(_DWORD *)(a1 + 16) = v10;
  result = (v4 >> 1) & 1;
  *(_DWORD *)(a1 + 20) = result;
  *(_QWORD *)(a1 + 24) = v11;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = WaitStatus;
  *(_QWORD *)(a1 + 48) = Process;
  *(_QWORD *)(a1 + 56) = v7;
  *(_QWORD *)(a1 + 64) = v8;
  *(_QWORD *)(a1 + 72) = v9;
  return result;
}
