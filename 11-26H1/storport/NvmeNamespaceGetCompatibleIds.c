/*
 * XREFs of NvmeNamespaceGetCompatibleIds @ 0x1401061A8
 * Callers:
 *     NvmeNamespaceQueryIdIrp @ 0x1401A8648 (NvmeNamespaceQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RtlStringCchPrintfExW @ 0x14004B494 (RtlStringCchPrintfExW.c)
 *     RaFixupIds @ 0x1401BE268 (RaFixupIds.c)
 */

__int64 __fastcall NvmeNamespaceGetCompatibleIds(__int64 a1, wchar_t **a2)
{
  wchar_t *Pool; // rax
  wchar_t *v5; // rbx
  bool v6; // zf
  NTSTATUS v7; // r11d
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  wchar_t *v10; // rcx
  size_t v11; // r10
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+70h] [rbp+30h] BYREF
  size_t pcchRemaining; // [rsp+78h] [rbp+38h] BYREF

  Pool = (wchar_t *)RaidAllocatePool(256LL, 76LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  v5 = Pool;
  if ( !Pool )
  {
    v7 = -1073741801;
    goto LABEL_18;
  }
  v6 = (*(_BYTE *)(a1 + 112) & 4) == 0;
  ppszDestEnd = Pool;
  pcchRemaining = 38LL;
  if ( v6 )
  {
    v7 = RtlStringCchPrintfExW(Pool, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\%hs", "Disk");
    if ( v7 < 0
      || (++ppszDestEnd,
          --pcchRemaining,
          v7 = RtlStringCchPrintfExW(ppszDestEnd, pcchRemaining, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\%hs", "RAW"),
          v7 < 0) )
    {
      v10 = ppszDestEnd;
      v11 = pcchRemaining;
    }
    else
    {
      v10 = ++ppszDestEnd;
      v11 = pcchRemaining - 1;
    }
    v9 = (unsigned int)v7;
    if ( (*(_BYTE *)(a1 + 200) & 1) != 0 )
    {
      if ( v7 >= 0 )
        goto LABEL_16;
      goto LABEL_18;
    }
    if ( v7 < 0 )
      goto LABEL_18;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL) + 256LL) & 1) == 0 )
      goto LABEL_16;
    v8 = RtlStringCchPrintfExW(v10, v11, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "Disk1667");
  }
  else
  {
    v7 = RtlStringCchPrintfExW(Pool, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", "Disk");
    if ( v7 < 0 )
      goto LABEL_18;
    ++ppszDestEnd;
    v8 = RtlStringCchPrintfExW(ppszDestEnd, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", "RAW");
  }
  v7 = v8;
  if ( v8 >= 0 )
  {
    v10 = ppszDestEnd + 1;
LABEL_16:
    *v10 = 0;
    LOBYTE(v9) = 1;
    RaFixupIds(v5, v9, 38LL);
  }
LABEL_18:
  *a2 = v5;
  return (unsigned int)v7;
}
