/*
 * XREFs of MiCopyVmWriteBytes @ 0x140A2C1D0
 * Callers:
 *     MiCopyVirtualMemory @ 0x140A2B990 (MiCopyVirtualMemory.c)
 * Callees:
 *     MiGetExceptionInfo @ 0x1406F413C (MiGetExceptionInfo.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     VslDebugReadWriteSecureProcess @ 0x140A2C2D8 (VslDebugReadWriteSecureProcess.c)
 *     MiDbgReadWriteEnclave @ 0x140B492C4 (MiDbgReadWriteEnclave.c)
 */

__int64 __fastcall MiCopyVmWriteBytes(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // ecx
  int v4; // eax
  size_t v5; // r8
  void *v6; // rdx
  bool v7; // zf
  void *v8; // rcx

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 108);
  if ( (v3 & 8) != 0 )
    return (unsigned int)VslDebugReadWriteSecureProcess(
                           *(_QWORD *)(a1 + 8),
                           *(_QWORD *)(a1 + 40),
                           *(_QWORD *)(a1 + 168),
                           *(_QWORD *)(a1 + 56),
                           0,
                           a1 + 72);
  v4 = *(_DWORD *)(a1 + 104);
  if ( v4 == 2 )
    return (unsigned int)VslDebugReadWriteSecureProcess(
                           *(_QWORD *)(a1 + 8),
                           *(_QWORD *)(a1 + 40),
                           *(_QWORD *)(a1 + 168),
                           *(_QWORD *)(a1 + 56),
                           0,
                           a1 + 72);
  if ( v4 == 1 )
    return (unsigned int)MiDbgReadWriteEnclave(
                           *(_QWORD *)(a1 + 40),
                           *(_QWORD *)(a1 + 168),
                           *(_QWORD *)(a1 + 56),
                           0,
                           a1 + 72);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(void **)(a1 + 168);
  v7 = (v3 & 0x20) == 0;
  v8 = *(void **)(a1 + 40);
  if ( v7 )
    RtlCopyToUser(v8, v6, v5);
  else
    RtlCopyVolatileMemory(v8, v6, v5);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 56);
  return v2;
}
