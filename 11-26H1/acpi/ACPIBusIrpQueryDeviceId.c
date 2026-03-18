/*
 * XREFs of ACPIBusIrpQueryDeviceId @ 0x1400CC08C
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1400CBDB0 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x14003BAA4 (AMLIGetNSObjectType.c)
 *     RtlStringCbPrintfExW @ 0x14003FED0 (RtlStringCbPrintfExW.c)
 *     RtlStringCbPrintfW @ 0x14005B714 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x14005BA30 (WPP_RECORDER_SF_qdLqss.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     ACPIAllocateBuffer @ 0x1400CC4F4 (ACPIAllocateBuffer.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1400CC5A4 (ACPIValidateStringVendorDeviceIdFormat.c)
 */

__int64 __fastcall ACPIBusIrpQueryDeviceId(wchar_t **a1, size_t *a2, __int64 a3)
{
  void *v6; // r13
  int v7; // esi
  wchar_t *v8; // rax
  NTSTRSAFE_PWSTR v9; // r15
  size_t v10; // rbx
  __int64 v11; // rcx
  size_t v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  void *v16; // rax
  size_t v17; // r8
  char *v18; // rdx
  __int64 v19; // rdx
  void *v20; // rax
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rax
  void *Pool2; // rax
  const char *v25; // rax
  __int64 v26; // rdx
  const char *v27; // rcx
  __int64 v28; // r8
  int dwFlags; // [rsp+20h] [rbp-58h]
  int pszFormat; // [rsp+28h] [rbp-50h]
  int v32; // [rsp+30h] [rbp-48h]
  size_t pcbRemaining; // [rsp+60h] [rbp-18h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd[2]; // [rsp+68h] [rbp-10h] BYREF
  size_t Size; // [rsp+C0h] [rbp+48h] BYREF
  PVOID P; // [rsp+C8h] [rbp+50h] BYREF
  void *Src; // [rsp+D0h] [rbp+58h] BYREF
  unsigned __int64 v38; // [rsp+D8h] [rbp+60h] BYREF

  Src = 0LL;
  v6 = 0LL;
  Size = 0LL;
  v7 = 0;
  P = 0LL;
  v38 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, 660LL);
  *a1 = v8;
  v9 = v8;
  v10 = *a2;
  ppszDestEnd[0] = v8;
  pcbRemaining = v10;
  if ( !v8 )
    goto LABEL_2;
  v11 = *(_QWORD *)(a3 + 760);
  if ( v11 && (unsigned int)AMLIGetNSObjectType(v11) == 12 )
  {
    v7 = ACPIGet(a3, 1145653343, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
    if ( v7 >= 0 )
    {
      if ( v10 >= Size )
      {
        memmove(v9, Src, Size);
        v12 = Size;
        if ( v10 < Size )
          goto LABEL_47;
        goto LABEL_37;
      }
      goto LABEL_2;
    }
LABEL_39:
    v25 = byte_140075A82;
    v26 = 0LL;
    v27 = byte_140075A82;
    if ( a3 )
    {
      v28 = *(_QWORD *)(a3 + 8);
      v26 = a3;
      if ( (v28 & 0x200000000000LL) != 0 )
      {
        v25 = *(const char **)(a3 + 608);
        if ( (v28 & 0x400000000000LL) != 0 )
          v27 = *(const char **)(a3 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v26,
        (__int64)&WPP_RECORDER_INITIALIZED,
        0x28u,
        dwFlags,
        pszFormat,
        v32,
        v7,
        v26,
        v25,
        v27);
LABEL_45:
    if ( !v6 )
      goto LABEL_47;
    goto LABEL_46;
  }
  v13 = -1LL;
  if ( (*(_BYTE *)(a3 + 1008) & 0x18) != 0x18 )
  {
LABEL_26:
    v22 = ACPIGet(a3, 1145653343, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
    v7 = v22;
    if ( v22 == -1073741661 )
    {
      v23 = *(_QWORD *)(a3 + 608);
      if ( !v23 )
        goto LABEL_39;
      do
        ++v13;
      while ( *(_BYTE *)(v23 + v13) );
      Size = 2 * v13 + 2;
      Pool2 = (void *)ExAllocatePool2(256LL, Size, 1399874369LL);
      Src = Pool2;
      if ( !Pool2 )
        goto LABEL_2;
      RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Pool2, Size, L"%S", *(_QWORD *)(a3 + 608));
      v7 = 0;
    }
    else if ( v22 < 0 )
    {
      goto LABEL_39;
    }
    if ( v10 >= Size )
    {
      memmove(v9, Src, Size);
      if ( !v9 || (v12 = Size, v10 < Size) )
      {
LABEL_38:
        if ( v7 >= 0 )
          goto LABEL_45;
        goto LABEL_39;
      }
LABEL_37:
      v7 = RtlStringCbPrintfExW(&v9[v12 >> 1], v10 - v12, ppszDestEnd, &pcbRemaining, 0, &word_140076668);
      goto LABEL_38;
    }
LABEL_2:
    v7 = -1073741670;
    goto LABEL_39;
  }
  v14 = *(_QWORD *)(a3 + 608);
  if ( !v14 )
  {
    v7 = ACPIGet(a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v38);
    if ( v7 >= 0 )
      goto LABEL_47;
    goto LABEL_39;
  }
  v15 = -1LL;
  do
    ++v15;
  while ( *(_BYTE *)(v14 + v15) );
  v38 = v15;
  v16 = (void *)ExAllocatePool2(256LL, v15, 1114661697LL);
  P = v16;
  if ( v16 )
  {
    v17 = v38;
    v18 = *(char **)(a3 + 608);
    if ( v38 >= 5 )
    {
      v17 = v38 - 5;
      v38 -= 5LL;
      v18 += 5;
    }
    memmove(v16, v18, v17);
    if ( !(unsigned __int8)ACPIValidateStringVendorDeviceIdFormat(P, v38) )
      goto LABEL_26;
    v20 = (void *)ExAllocatePool2(256LL, v19, 1114661697LL);
    v6 = v20;
    if ( !v20 )
      goto LABEL_47;
    if ( v38 == 7 )
    {
      v21 = 3LL;
    }
    else
    {
      v21 = 4LL;
      if ( v38 <= 4 )
      {
LABEL_22:
        v32 = (int)P;
        v7 = RtlStringCbPrintfExW(v9, v10, ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X");
        if ( v7 < 0 )
          goto LABEL_39;
        if ( !ppszDestEnd[0] || pcbRemaining < 2 )
        {
LABEL_46:
          ExFreePoolWithTag(v6, 0x53706341u);
          goto LABEL_47;
        }
        v9 = ppszDestEnd[0] + 1;
        v10 = pcbRemaining - 2;
        goto LABEL_26;
      }
    }
    memmove(v20, (char *)P + v21, v38 - v21);
    *((_BYTE *)P + v21) = 0;
    goto LABEL_22;
  }
LABEL_47:
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v7;
}
