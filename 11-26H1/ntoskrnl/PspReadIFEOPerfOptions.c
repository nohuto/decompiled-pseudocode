/*
 * XREFs of PspReadIFEOPerfOptions @ 0x140B66284
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1409665B0 (RtlQueryImageFileKeyOption.c)
 */

NTSTATUS __fastcall PspReadIFEOPerfOptions(HANDLE KeyHandle, __int64 a2)
{
  unsigned __int64 v4; // rax
  NTSTATUS result; // eax
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"IoPriority", 4u, (_DWORD *)(a2 + 8), 4u, 0LL) >= 0 )
    *(_DWORD *)a2 |= 1u;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"PagePriority", 4u, (_DWORD *)(a2 + 12), 4u, 0LL) >= 0 )
    *(_DWORD *)a2 |= 2u;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"CpuPriorityClass", 4u, (_DWORD *)(a2 + 16), 4u, 0LL) >= 0 )
    *(_DWORD *)a2 |= 4u;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"WorkingSetLimitInKB", 4u, &v6, 4u, 0LL) >= 0 )
  {
    v4 = (unsigned __int64)v6 >> 2;
    *(_DWORD *)(a2 + 4) |= 1u;
    *(_QWORD *)(a2 + 24) = v4;
  }
  result = RtlQueryImageFileKeyOption(KeyHandle, L"ExpectedConcurrencyCount", 4u, (_DWORD *)(a2 + 32), 4u, 0LL);
  if ( result >= 0 )
    *(_DWORD *)(a2 + 4) |= 2u;
  return result;
}
