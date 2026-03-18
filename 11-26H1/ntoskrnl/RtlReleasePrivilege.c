/*
 * XREFs of RtlReleasePrivilege @ 0x140AEBFD0
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x1408A614C (VhdiAutoAttachOneVhd.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x140723590 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x140723C10 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlReleasePrivilege(__int64 *P)
{
  void *v2; // rcx
  char *v3; // rcx

  if ( (P[4] & 3) != 1 )
    ZwAdjustPrivilegesToken(*P, 0LL);
  if ( (P[4] & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, P + 1, 8u);
    v2 = (void *)P[1];
    if ( v2 )
      ZwClose(v2);
  }
  v3 = (char *)P[2];
  if ( v3 != (char *)P + 36 )
    ExFreePoolWithTag(v3, 0);
  ZwClose((HANDLE)*P);
  ExFreePoolWithTag(P, 0);
}
