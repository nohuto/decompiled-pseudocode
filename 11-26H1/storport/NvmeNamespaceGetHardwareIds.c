/*
 * XREFs of NvmeNamespaceGetHardwareIds @ 0x140106680
 * Callers:
 *     NvmeNamespaceQueryIdIrp @ 0x1401A8648 (NvmeNamespaceQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RtlStringCchPrintfExW @ 0x14004B494 (RtlStringCchPrintfExW.c)
 *     StorCopyNVMeFirmwareRevision @ 0x14004FCB8 (StorCopyNVMeFirmwareRevision.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaFixupIds @ 0x1401BE268 (RaFixupIds.c)
 */

__int64 __fastcall NvmeNamespaceGetHardwareIds(__int64 a1, wchar_t **a2)
{
  __int64 v3; // rax
  unsigned __int16 *v5; // rsi
  __int64 v6; // r9
  wchar_t *Pool; // rax
  wchar_t *v8; // rdi
  unsigned __int64 v9; // rdx
  NTSTATUS v10; // r11d
  const char *v11; // rax
  __int64 v12; // rdx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-69h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-61h] BYREF
  __int128 v16; // [rsp+60h] [rbp-59h] BYREF
  char v17; // [rsp+70h] [rbp-49h]
  __int128 v18; // [rsp+78h] [rbp-41h] BYREF
  char v19; // [rsp+88h] [rbp-31h]
  _OWORD v20[2]; // [rsp+90h] [rbp-29h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-9h]

  v19 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v18 = 0LL;
  v5 = *(unsigned __int16 **)(v3 + 592);
  memset_0(v20, 0, 0x41uLL);
  v6 = *(_QWORD *)(a1 + 8);
  v17 = 0;
  v16 = 0LL;
  Pool = (wchar_t *)RaidAllocatePool(256LL, 718LL, 1229218130LL, v6);
  v8 = Pool;
  if ( !Pool )
  {
    v10 = -1073741801;
    goto LABEL_16;
  }
  v9 = *v5;
  ppszDestEnd = Pool;
  pcchRemaining = 359LL;
  BYTE3(v16) = `RaidHexFromUshort'::`2'::hexDigits[v9 & 0xF];
  BYTE2(v16) = `RaidHexFromUshort'::`2'::hexDigits[(unsigned __int8)v9 >> 4];
  BYTE1(v16) = `RaidHexFromUshort'::`2'::hexDigits[((unsigned int)v9 >> 8) & 0xF];
  LOBYTE(v16) = `RaidHexFromUshort'::`2'::hexDigits[v9 >> 12];
  v20[0] = *(_OWORD *)(v5 + 12);
  v20[1] = *(_OWORD *)(v5 + 20);
  v21 = *((_QWORD *)v5 + 7);
  StorCopyNVMeFirmwareRevision((__int64)v5, (__int64)&v18, 0x11u);
  if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
  {
    v10 = RtlStringCchPrintfExW(
            v8,
            0x167uLL,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"SCSI\\%hs%8.8hs%40.40hs%8.8hs",
            "Disk",
            "NVMe",
            v20,
            &v18);
    if ( v10 < 0 )
      goto LABEL_16;
    ++ppszDestEnd;
    --pcchRemaining;
    v10 = RtlStringCchPrintfExW(
            ppszDestEnd,
            pcchRemaining,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"SCSI\\%hs%8.8hs%40.40hs",
            "Disk",
            "NVMe",
            v20);
    if ( v10 < 0 )
      goto LABEL_16;
    ++ppszDestEnd;
    --pcchRemaining;
    v10 = RtlStringCchPrintfExW(
            ppszDestEnd,
            pcchRemaining,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"SCSI\\%hs%8.8hs",
            "Disk",
            "NVMe");
    if ( v10 < 0 )
      goto LABEL_16;
    ++ppszDestEnd;
    --pcchRemaining;
    v10 = RtlStringCchPrintfExW(
            ppszDestEnd,
            pcchRemaining,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"SCSI\\%8.8hs%40.40hs%8.8hs",
            "NVMe",
            v20,
            &v18);
    if ( v10 < 0 )
      goto LABEL_16;
    ++ppszDestEnd;
    --pcchRemaining;
    v10 = RtlStringCchPrintfExW(
            ppszDestEnd,
            pcchRemaining,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"%8.8hs%40.40hs%8.8hs",
            "NVMe",
            v20,
            &v18);
    if ( v10 < 0 )
      goto LABEL_16;
    v11 = "GenDisk";
  }
  else
  {
    v10 = RtlStringCchPrintfExW(
            v8,
            0x167uLL,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"NVME\\%hs%8.8hs%40.40hs%8.8hs",
            "Disk",
            &v16,
            v20,
            &v18);
    if ( v10 < 0 )
      goto LABEL_16;
    ++ppszDestEnd;
    --pcchRemaining;
    v10 = RtlStringCchPrintfExW(
            ppszDestEnd,
            pcchRemaining,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"NVME\\%hs%8.8hs%40.40hs",
            "Disk",
            &v16,
            v20);
    if ( v10 < 0 )
      goto LABEL_16;
    ++ppszDestEnd;
    --pcchRemaining;
    v10 = RtlStringCchPrintfExW(
            ppszDestEnd,
            pcchRemaining,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"NVME\\%hs%8.8hs",
            "Disk",
            &v16);
    if ( v10 < 0 )
      goto LABEL_16;
    v11 = "NVMeDisk";
  }
  ++ppszDestEnd;
  v10 = RtlStringCchPrintfExW(ppszDestEnd, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", v11);
  if ( v10 >= 0 )
  {
    LOBYTE(v12) = 1;
    ppszDestEnd[1] = 0;
    RaFixupIds(v8, v12, 359LL);
  }
LABEL_16:
  *a2 = v8;
  return (unsigned int)v10;
}
