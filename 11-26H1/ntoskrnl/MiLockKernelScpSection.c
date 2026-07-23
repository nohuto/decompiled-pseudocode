/*
 * XREFs of MiLockKernelScpSection @ 0x140D010A8
 * Callers:
 *     MiInitializeKernelScp @ 0x140D00EA8 (MiInitializeKernelScp.c)
 * Callees:
 *     MmCreateMdl @ 0x140398B10 (MmCreateMdl.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 MiLockKernelScpSection()
{
  PMDL Mdl; // rax
  PMDL v1; // rbx
  int v3; // edi
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = 0LL;
  Mdl = MmCreateMdl(
          0LL,
          *(PVOID *)&stru_140E2D2D0.WaitBlockFill11[64],
          (unsigned int)(*(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] << 12));
  v1 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  v4[0] = 0LL;
  v3 = MiProbeAndLockPages((__int64)Mdl, v4);
  if ( v3 < 0 )
    ExFreePoolWithTag(v1, 0);
  else
    stru_140E2D2D0.WaitBlock[1].Object = v1;
  return (unsigned int)v3;
}
