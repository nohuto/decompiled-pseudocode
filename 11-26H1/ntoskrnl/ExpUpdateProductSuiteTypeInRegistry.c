/*
 * XREFs of ExpUpdateProductSuiteTypeInRegistry @ 0x140CEACDC
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140CEB28C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExVerifySuite @ 0x140529E40 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 */

NTSTATUS ExpUpdateProductSuiteTypeInRegistry()
{
  struct _LIST_ENTRY *Blink; // r12
  unsigned int v1; // edi
  NTSTATUS result; // eax
  __int64 v3; // r14
  __int64 v4; // rax
  ULONG v5; // eax
  const WCHAR *v6; // rdx
  NTSTATUS v7; // eax
  _BYTE *v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // r15d
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // rax
  unsigned int v22; // r15d
  __int64 v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // rax
  unsigned int v26; // r15d
  __int64 v27; // rax
  unsigned int v28; // r15d
  __int64 v29; // rax
  unsigned int v30; // r15d
  __int64 v31; // rax
  unsigned int v32; // r15d
  __int64 v33; // rax
  unsigned int v34; // r15d
  __int64 v35; // rax
  unsigned int v36; // r15d
  unsigned int v37; // r14d
  UNICODE_STRING Data; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v40[768]; // [rsp+58h] [rbp-B0h] BYREF

  Blink = ExpSysDbgLock.ApcState.ApcListHead[0].Blink;
  v1 = 758;
  DestinationString_8 = 0LL;
  Data = 0LL;
  result = (unsigned int)memset_0(v40, 0, 0x2F6uLL);
  if ( ExpSysDbgLock.WaitRegister.Flags )
    return result;
  RtlInitUnicodeString(&DestinationString_8, L"ProductType");
  v3 = -1LL;
  if ( MEMORY[0xFFFFF78000000264] == 2 )
  {
    v6 = L"LanmanNT";
  }
  else
  {
    if ( MEMORY[0xFFFFF78000000264] != 3 )
    {
      RtlInitUnicodeString(&Data, L"WinNT");
      v4 = -1LL;
      do
        ++v4;
      while ( aWinnt_0[v4] );
      v5 = 2 * v4 + 2;
      goto LABEL_10;
    }
    v6 = L"ServerNT";
  }
  RtlInitUnicodeString(&Data, v6);
  v5 = 18;
LABEL_10:
  v7 = NtSetValueKey(Blink, &DestinationString_8, 0, 1u, Data.Buffer, v5);
  if ( v7 < 0 )
    KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v7, 1uLL, 0LL);
  RtlInitUnicodeString(&DestinationString_8, L"ProductSuite");
  v8 = v40;
  if ( ExVerifySuite(SmallBusiness) )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( aSmallBusiness[v9] );
    v10 = 2 * v9 + 2;
    if ( v10 < 0x2F6 )
    {
      memmove(v40, L"Small Business", v10);
      v8 = &v40[v10];
      v1 = 758 - v10;
    }
  }
  if ( ExVerifySuite(Enterprise) )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( aEnterprise[v11] );
    v12 = 2 * v11 + 2;
    if ( v1 > v12 )
    {
      memmove(v8, L"Enterprise", v12);
      v8 += v12;
      v1 -= v12;
    }
  }
  if ( ExVerifySuite(BackOffice) )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( aBackoffice[v13] );
    v14 = 2 * v13 + 2;
    if ( v1 > v14 )
    {
      memmove(v8, L"BackOffice", v14);
      v8 += v14;
      v1 -= v14;
    }
  }
  if ( ExVerifySuite(CommunicationServer) )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( aCommunications[v15] );
    v16 = 2 * v15 + 2;
    if ( v1 > v16 )
    {
      memmove(v8, L"CommunicationServer", v16);
      v8 += v16;
      v1 -= v16;
    }
  }
  if ( ExVerifySuite(TerminalServer) )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( aTerminalServer_0[v17] );
    v18 = 2 * v17 + 2;
    if ( v1 > v18 )
    {
      memmove(v8, L"Terminal Server", v18);
      v8 += v18;
      v1 -= v18;
    }
  }
  if ( ExVerifySuite(SmallBusinessRestricted) )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( aSmallBusinessR[v19] );
    v20 = 2 * v19 + 2;
    if ( v1 > v20 )
    {
      memmove(v8, L"Small Business(Restricted)", v20);
      v8 += v20;
      v1 -= v20;
    }
  }
  if ( ExVerifySuite(EmbeddedNT) )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( aEmbeddednt[v21] );
    v22 = 2 * v21 + 2;
    if ( v1 > v22 )
    {
      memmove(v8, L"EmbeddedNT", v22);
      v8 += v22;
      v1 -= v22;
    }
  }
  if ( ExVerifySuite(DataCenter) )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( aDatacenter[v23] );
    v24 = 2 * v23 + 2;
    if ( v1 > v24 )
    {
      memmove(v8, L"DataCenter", v24);
      v8 += v24;
      v1 -= v24;
    }
  }
  if ( ExVerifySuite(Personal) )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( aPersonal[v25] );
    v26 = 2 * v25 + 2;
    if ( v1 > v26 )
    {
      memmove(v8, L"Personal", v26);
      v8 += v26;
      v1 -= v26;
    }
  }
  if ( ExVerifySuite(Blade) )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( aBlade[v27] );
    v28 = 2 * v27 + 2;
    if ( v1 > v28 )
    {
      memmove(v8, L"Blade", v28);
      v8 += v28;
      v1 -= v28;
    }
  }
  if ( ExVerifySuite(EmbeddedRestricted) )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( aEmbeddedRestri[v29] );
    v30 = 2 * v29 + 2;
    if ( v1 > v30 )
    {
      memmove(v8, L"Embedded(Restricted)", v30);
      v8 += v30;
      v1 -= v30;
    }
  }
  if ( ExVerifySuite(SecurityAppliance) )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( aSecurityApplia[v31] );
    v32 = 2 * v31 + 2;
    if ( v1 > v32 )
    {
      memmove(v8, L"Security Appliance", v32);
      v8 += v32;
      v1 -= v32;
    }
  }
  if ( ExVerifySuite(StorageServer) )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( aStorageServer[v33] );
    v34 = 2 * v33 + 2;
    if ( v1 > v34 )
    {
      memmove(v8, L"Storage Server", v34);
      v8 += v34;
      v1 -= v34;
    }
  }
  if ( ExVerifySuite(ComputeServer) )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( aComputeServer[v35] );
    v36 = 2 * v35 + 2;
    if ( v1 > v36 )
    {
      memmove(v8, L"Compute Server", v36);
      v8 += v36;
      v1 -= v36;
    }
  }
  if ( ExVerifySuite(PhoneNT) )
  {
    do
      ++v3;
    while ( aPhonent[v3] );
    v37 = 2 * v3 + 2;
    if ( v1 > v37 )
    {
      memmove(v8, L"PhoneNT", v37);
      v1 -= v37;
    }
  }
  result = NtSetValueKey(Blink, &DestinationString_8, 0, 7u, v40, 760 - v1);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)result, 2uLL, 0LL);
  return result;
}
