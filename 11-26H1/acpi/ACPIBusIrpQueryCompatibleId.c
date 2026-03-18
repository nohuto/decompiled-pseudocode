/*
 * XREFs of ACPIBusIrpQueryCompatibleId @ 0x1400CB6B0
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1400CBDB0 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x14003BAA4 (AMLIGetNSObjectType.c)
 *     RtlStringCbPrintfExW @ 0x14003FED0 (RtlStringCbPrintfExW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x14005BA30 (WPP_RECORDER_SF_qdLqss.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 *     ACPIAllocateBuffer @ 0x1400CC4F4 (ACPIAllocateBuffer.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1400CC5A4 (ACPIValidateStringVendorDeviceIdFormat.c)
 */

__int64 __fastcall ACPIBusIrpQueryCompatibleId(wchar_t **a1, size_t *a2, __int64 a3)
{
  void *v6; // r15
  __int64 v7; // rdi
  wchar_t *v8; // rax
  wchar_t *v9; // rsi
  size_t v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  size_t v14; // rdx
  void *Pool2; // rax
  size_t v16; // r8
  char *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  void *v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  const char *v23; // rax
  __int64 v24; // rdx
  const char *v25; // rcx
  __int64 v26; // r8
  int dwFlags; // [rsp+20h] [rbp-58h]
  int pszFormat; // [rsp+28h] [rbp-50h]
  int v30; // [rsp+30h] [rbp-48h]
  size_t Size; // [rsp+60h] [rbp-18h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-10h] BYREF
  size_t pcbRemaining; // [rsp+C0h] [rbp+48h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C8h] [rbp+50h] BYREF
  PVOID P; // [rsp+D0h] [rbp+58h] BYREF
  size_t v36; // [rsp+D8h] [rbp+60h] BYREF

  v36 = 0LL;
  P = 0LL;
  Src[0] = 0LL;
  Size = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, 660LL);
  *a1 = v8;
  v9 = v8;
  v10 = *a2;
  v11 = 0x200000000000LL;
  pcbRemaining = *a2;
  ppszDestEnd = v8;
  if ( !v8 )
  {
    LODWORD(v7) = -1073741670;
    goto LABEL_56;
  }
  v12 = *(_QWORD *)(a3 + 760);
  if ( !v12 || (unsigned int)AMLIGetNSObjectType(v12) != 12 )
  {
    if ( (*(_QWORD *)(a3 + 8) & 0xA00000000000LL) == v11 )
    {
      v13 = *(_QWORD *)(a3 + 608);
      if ( !v13 )
      {
        LODWORD(v7) = ACPIGet(a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v36);
        if ( (int)v7 >= 0 )
          goto LABEL_62;
        goto LABEL_55;
      }
      v14 = -1LL;
      do
        ++v14;
      while ( *(_BYTE *)(v13 + v14) );
      v36 = v14;
      Pool2 = (void *)ExAllocatePool2(256LL, v14, 1114661697LL);
      P = Pool2;
      if ( !Pool2 )
        goto LABEL_62;
      v16 = v36;
      v17 = *(char **)(a3 + 608);
      if ( v36 >= 5 )
      {
        v16 = v36 - 5;
        v36 -= 5LL;
        v17 += 5;
      }
      memmove(Pool2, v17, v16);
      if ( !(unsigned __int8)ACPIValidateStringVendorDeviceIdFormat(P, v36) )
      {
        v19 = *(_QWORD *)(a3 + 1008);
        if ( (v19 & 0x18) == 0 && (v19 & 4) == 0 )
          goto LABEL_49;
      }
      v20 = (void *)ExAllocatePool2(256LL, v18, 1114661697LL);
      v6 = v20;
      if ( !v20 )
        goto LABEL_62;
      LOBYTE(v7) = v36 != 7;
      v21 = v7 + 3;
      memset(v20, 0, v36);
      if ( v36 > v21 )
      {
        memmove(v6, (char *)P + v21, v36 - v21);
        *((_BYTE *)P + v21) = 0;
      }
      v22 = *(_QWORD *)(a3 + 1008);
      if ( (v22 & 0x10) != 0 )
      {
        if ( (v22 & 8) != 0 )
        {
          v30 = (int)P;
          LODWORD(v7) = RtlStringCbPrintfExW(v9, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&REV_%04X");
          if ( (int)v7 < 0 )
            goto LABEL_55;
          if ( !ppszDestEnd || pcbRemaining < 2 )
            goto LABEL_62;
          v9 = ppszDestEnd + 1;
          v10 = pcbRemaining - 2;
          ++ppszDestEnd;
          pcbRemaining -= 2LL;
        }
        v30 = (int)P;
        LODWORD(v7) = RtlStringCbPrintfExW(v9, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S");
        if ( (int)v7 < 0 )
        {
LABEL_55:
          if ( (_DWORD)v7 == -1073741772 )
            goto LABEL_62;
          goto LABEL_56;
        }
        if ( !ppszDestEnd || pcbRemaining < 2 )
          goto LABEL_62;
        v9 = ppszDestEnd + 1;
        v10 = pcbRemaining - 2;
        ++ppszDestEnd;
        pcbRemaining -= 2LL;
      }
    }
    if ( (*(_BYTE *)(a3 + 1008) & 4) != 0 )
    {
      v30 = (int)P;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      v9,
                      v10,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
      if ( (int)v7 < 0 )
        goto LABEL_55;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_62;
      v30 = (int)P;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X");
      if ( (int)v7 < 0 )
        goto LABEL_55;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_62;
      v30 = (int)P;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(ppszDestEnd, pcbRemaining, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S");
      if ( (int)v7 < 0 )
        goto LABEL_55;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_62;
      v30 = *(unsigned __int16 *)(a3 + 646);
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
      if ( (int)v7 < 0 )
        goto LABEL_55;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_62;
      v30 = *(unsigned __int16 *)(a3 + 646);
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X");
      if ( (int)v7 < 0 )
        goto LABEL_55;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_62;
      v9 = ppszDestEnd + 1;
      v10 = pcbRemaining - 2;
    }
LABEL_49:
    LODWORD(v7) = ACPIGet(a3, 1145652063, 268960023, 0LL, 0, 0LL, 0LL, (__int64)Src, (__int64)&Size);
    if ( (int)v7 >= 0 || v10 != *a2 )
    {
      LODWORD(v7) = 0;
      if ( v10 < Size )
        goto LABEL_7;
      memmove(v9, Src[0], Size);
      if ( !v9 )
        goto LABEL_62;
      goto LABEL_53;
    }
    goto LABEL_55;
  }
  LODWORD(v7) = ACPIGet(a3, 1145652063, 268960023, 0LL, 0, 0LL, 0LL, (__int64)Src, (__int64)&Size);
  if ( (int)v7 < 0 )
    goto LABEL_55;
  if ( v10 >= Size )
  {
    memmove(v9, Src[0], Size);
LABEL_53:
    if ( v10 < Size )
      goto LABEL_62;
    LODWORD(v7) = RtlStringCbPrintfExW(&v9[Size >> 1], v10 - Size, &ppszDestEnd, &pcbRemaining, 0, &word_140076668);
    if ( (int)v7 >= 0 )
      goto LABEL_62;
    goto LABEL_55;
  }
LABEL_7:
  LODWORD(v7) = -1073741670;
LABEL_56:
  v23 = byte_140075A82;
  v24 = 0LL;
  v25 = byte_140075A82;
  if ( a3 )
  {
    v26 = *(_QWORD *)(a3 + 8);
    v24 = a3;
    if ( (v26 & 0x200000000000LL) != 0 )
    {
      v23 = *(const char **)(a3 + 608);
      if ( (v26 & 0x400000000000LL) != 0 )
        v25 = *(const char **)(a3 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v24,
      (__int64)&WPP_RECORDER_INITIALIZED,
      0x26u,
      dwFlags,
      pszFormat,
      v30,
      v7,
      v24,
      v23,
      v25);
LABEL_62:
  if ( Src[0] )
    ExFreePoolWithTag(Src[0], 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  return (unsigned int)v7;
}
