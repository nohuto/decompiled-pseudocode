/*
 * XREFs of MiGetExceptionInfo @ 0x1406F413C
 * Callers:
 *     MiDecommitRemoveEnclavePageForce @ 0x140343E60 (MiDecommitRemoveEnclavePageForce.c)
 *     MiCopyVmWriteBytes @ 0x140A2C1D0 (MiCopyVmWriteBytes.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 */

__int64 __fastcall MiGetExceptionInfo(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR v3; // rcx
  int v4; // eax

  *(_BYTE *)(a2 + 2) = 0;
  v3 = *a1;
  v4 = *(_DWORD *)v3;
  if ( (*(_DWORD *)v3 == -1073741819 || v4 == -2147483647 || v4 == -1073741818) && *(_DWORD *)(v3 + 24) > 1u )
  {
    *(_BYTE *)(a2 + 2) = 1;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v3 + 40);
  }
  if ( *(_BYTE *)a2 )
    MiModeCopyExceptionFilterEx(a1, *(_BYTE *)(a2 + 1), MiZeroedModeCopyFlags);
  return 1LL;
}
