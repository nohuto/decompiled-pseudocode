/*
 * XREFs of RaidUnitGetHardwareIds @ 0x1400A7A78
 * Callers:
 *     RaUnitQueryIdIrp @ 0x14018A458 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x1400480C8 (RaUnitIsSMRDisabled.c)
 *     RtlStringCchPrintfExW @ 0x14004B494 (RtlStringCchPrintfExW.c)
 *     StorCopyNVMeFirmwareRevision @ 0x14004FCB8 (StorCopyNVMeFirmwareRevision.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     PortGetDeviceType @ 0x1401B5A5C (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1401BE268 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetHardwareIds(__int64 a1, wchar_t **a2)
{
  wchar_t *Pool; // rax
  wchar_t *v5; // rdi
  wchar_t *v6; // r10
  int v7; // eax
  NTSTATUS v8; // eax
  wchar_t *v9; // r10
  size_t v10; // rdx
  unsigned __int16 *v11; // rbx
  unsigned __int64 v12; // rcx
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  _BYTE *v15; // r14
  _QWORD *DeviceType; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  _BYTE *v21; // r12
  _BYTE *v22; // r15
  _BYTE *v23; // r14
  NTSTATUS v24; // eax
  wchar_t v25; // r8
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  unsigned int v29; // r11d
  _BYTE *v31; // [rsp+40h] [rbp-89h]
  _BYTE *v32; // [rsp+48h] [rbp-81h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-79h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-71h] BYREF
  __int128 v35; // [rsp+60h] [rbp-69h] BYREF
  char v36; // [rsp+70h] [rbp-59h]
  __int128 v37; // [rsp+78h] [rbp-51h] BYREF
  char v38; // [rsp+88h] [rbp-41h]
  _OWORD v39[4]; // [rsp+90h] [rbp-39h] BYREF
  char v40; // [rsp+D0h] [rbp+7h]

  Pool = (wchar_t *)RaidAllocatePool(256LL, 718LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  v5 = Pool;
  pcchRemaining = 359LL;
  if ( !Pool )
  {
    v29 = -1073741801;
    goto LABEL_27;
  }
  v6 = Pool;
  ppszDestEnd = Pool;
  v7 = *(_DWORD *)(a1 + 1952);
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x20) != 0 )
    {
      v11 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 24) + 6064LL);
      v35 = 0LL;
      v36 = 0;
      memset_0(v39, 0, 0x41uLL);
      v38 = 0;
      v37 = 0LL;
      v12 = *v11;
      BYTE3(v35) = `RaidHexFromUshort'::`2'::hexDigits[*v11 & 0xF];
      BYTE2(v35) = `RaidHexFromUshort'::`2'::hexDigits[(unsigned __int8)v12 >> 4];
      BYTE1(v35) = `RaidHexFromUshort'::`2'::hexDigits[((unsigned int)v12 >> 8) & 0xF];
      LOBYTE(v35) = `RaidHexFromUshort'::`2'::hexDigits[v12 >> 12];
      v39[0] = *(_OWORD *)(v11 + 12);
      v39[1] = *(_OWORD *)(v11 + 20);
      v39[2] = *(_OWORD *)(v11 + 28);
      v39[3] = *(_OWORD *)(v11 + 36);
      v40 = *((_BYTE *)v11 + 88);
      StorCopyNVMeFirmwareRevision((__int64)v11, (__int64)&v37, 0x11u);
      v13 = RtlStringCchPrintfExW(
              v5,
              0x167uLL,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"NVME\\%hs_%8.8hs%40.40hs%8.8hs",
              "ZNSDisk",
              &v35,
              v39,
              &v37);
      v9 = ppszDestEnd + 1;
      v10 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      if ( v13 < 0 )
        goto LABEL_24;
      v14 = RtlStringCchPrintfExW(
              v9,
              v10,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"NVME\\%hs_%8.8hs%40.40hs",
              "ZNSDisk",
              &v35,
              v39);
      v9 = ppszDestEnd + 1;
      v10 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      if ( v14 < 0 )
        goto LABEL_24;
      if ( RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\%hs_%8.8hs", "ZNSDisk", &v35) >= 0 )
      {
        ++ppszDestEnd;
        RtlStringCchPrintfExW(ppszDestEnd, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "GenNvmeDisk");
        goto LABEL_5;
      }
    }
    else
    {
      v15 = *(_BYTE **)(a1 + 112);
      DeviceType = (_QWORD *)PortGetDeviceType(*v15 & 0x1F);
      v17 = DeviceType;
      if ( *(_DWORD *)(a1 + 3432) == 17 )
      {
        v18 = *(_QWORD *)(a1 + 160);
        if ( v18 )
        {
          v19 = RtlStringCchPrintfExW(
                  v5,
                  v10,
                  &ppszDestEnd,
                  &pcchRemaining,
                  0,
                  L"SCSI\\%hs%8.8hs%40.40hs%8.8hs",
                  *DeviceType,
                  v15 + 8,
                  v18 + 25,
                  v18 + 90);
          v9 = ppszDestEnd + 1;
          v10 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
          if ( v19 < 0 )
            goto LABEL_24;
          v20 = RtlStringCchPrintfExW(
                  v9,
                  v10,
                  &ppszDestEnd,
                  &pcchRemaining,
                  0,
                  L"SCSI\\%hs%8.8hs%40.40hs",
                  *v17,
                  v15 + 8,
                  *(_QWORD *)(a1 + 160) + 25LL);
          v9 = ppszDestEnd + 1;
          v10 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
          if ( v20 < 0 )
            goto LABEL_24;
        }
      }
      v21 = v15 + 32;
      v32 = v15 + 32;
      v22 = v15 + 16;
      v31 = v15 + 16;
      v23 = v15 + 8;
      v24 = RtlStringCchPrintfExW(
              v9,
              v10,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"SCSI\\%hs%8.8hs%16.16hs%4.4hs",
              *v17,
              v23,
              v31,
              v32);
      v25 = 0;
      v9 = ppszDestEnd + 1;
      v10 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      if ( v24 < 0 )
        goto LABEL_25;
      v26 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs%16.16hs", *v17, v23, v22);
      v25 = 0;
      v9 = ppszDestEnd + 1;
      v10 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      if ( v26 < 0 )
        goto LABEL_25;
      if ( RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs", *v17, v23) >= 0 )
      {
        ++ppszDestEnd;
        --pcchRemaining;
        v27 = RtlStringCchPrintfExW(
                ppszDestEnd,
                pcchRemaining,
                &ppszDestEnd,
                &pcchRemaining,
                0,
                L"SCSI\\%8.8hs%16.16hs%1.1hs",
                v23,
                v22,
                v21);
        v25 = 0;
        v9 = ppszDestEnd + 1;
        v10 = pcchRemaining - 1;
        ++ppszDestEnd;
        --pcchRemaining;
        if ( v27 < 0 )
          goto LABEL_25;
        v28 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"%8.8hs%16.16hs%1.1hs", v23, v22, v21);
        v25 = 0;
        v9 = ppszDestEnd + 1;
        v10 = pcchRemaining - 1;
        ++ppszDestEnd;
        if ( v28 < 0 || (unsigned int)RaUnitIsSMRDisabled(a1) )
          goto LABEL_25;
        RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"%hs", v17[1]);
        goto LABEL_5;
      }
    }
    v9 = ppszDestEnd;
    goto LABEL_24;
  }
  v8 = RtlStringCchPrintfExW(
         v6,
         0x167uLL,
         &ppszDestEnd,
         &pcchRemaining,
         0,
         L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
         *(_QWORD *)(a1 + 112) + 8LL,
         *(_QWORD *)(a1 + 112) + 16LL,
         *(_QWORD *)(a1 + 112) + 32LL);
  v9 = ppszDestEnd + 1;
  v10 = pcchRemaining - 1;
  ++ppszDestEnd;
  if ( v8 >= 0 )
  {
    RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
LABEL_5:
    v9 = ppszDestEnd + 1;
  }
LABEL_24:
  v25 = 0;
LABEL_25:
  *v9 = v25;
  LOBYTE(v10) = 1;
  RaFixupIds(v5, v10, 359LL);
LABEL_27:
  *a2 = v5;
  return v29;
}
