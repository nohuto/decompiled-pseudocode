/*
 * XREFs of UcpGenerateLiveKernelDump @ 0x1406895FC
 * Callers:
 *     UcpLogEventGenerateDump @ 0x14068964C (UcpLogEventGenerateDump.c)
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4B90 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall UcpGenerateLiveKernelDump(_DWORD *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( !KeGetCurrentIrql() )
    return (unsigned int)DbgkWerCaptureLiveKernelDump(
                           (unsigned int)L"UnexpectedCP",
                           514,
                           *a1,
                           a1[1],
                           (unsigned int)a1[2],
                           0LL,
                           0LL,
                           0LL,
                           0);
  return v1;
}
