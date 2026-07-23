/*
 * XREFs of RtlReleasePrivilege @ 0x140AEEEDC
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x1408AC5BC (VhdiAutoAttachOneVhd.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x140728160 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x1407287E0 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __cdecl RtlReleasePrivilege(PVOID StatePointer)
{
  void *v2; // rcx
  char *v3; // rcx

  if ( (*((_DWORD *)StatePointer + 8) & 3) != 1 )
    ZwAdjustPrivilegesToken(*(HANDLE *)StatePointer, 0, *((PTOKEN_PRIVILEGES *)StatePointer + 2), 0, 0LL, 0LL);
  if ( (*((_DWORD *)StatePointer + 8) & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, (char *)StatePointer + 8, 8u);
    v2 = (void *)*((_QWORD *)StatePointer + 1);
    if ( v2 )
      ZwClose(v2);
  }
  v3 = (char *)*((_QWORD *)StatePointer + 2);
  if ( v3 != (char *)StatePointer + 36 )
    ExFreePoolWithTag(v3, 0);
  ZwClose(*(HANDLE *)StatePointer);
  ExFreePoolWithTag(StatePointer, 0);
}
