/*
 * XREFs of NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x140025970
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 */

__int64 __fastcall NVMeGetCloudSSDErrorRecoveryLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v4; // r8
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+58h] [rbp+18h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_BYTE *)(v4 + 3) == 1;
  v6 = SrbExtension;
  v7 = *(_QWORD *)(SrbExtension + 4160);
  v9 = v7;
  if ( !v5 )
    goto LABEL_6;
  result = *(_QWORD *)(v7 + 496) + 0x51CBCF01DECE26BCLL;
  if ( *(_QWORD *)(v7 + 496) == 0xAE3430FE2131D944uLL )
    result = *(_QWORD *)(v7 + 504) - 0x5A1983BA3DFD4DABLL;
  if ( result )
  {
LABEL_6:
    result = NVMeFreeDmaBufferEx(a1, 0, 1, 512LL, &v9, *(_QWORD *)(a1 + 3952));
    *(_DWORD *)(a1 + 12) |= 8u;
    *(_QWORD *)(a1 + 3952) = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 3936) = v7;
  }
  *(_BYTE *)(v6 + 4225) |= 8u;
  return result;
}
