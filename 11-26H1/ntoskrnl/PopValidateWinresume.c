/*
 * XREFs of PopValidateWinresume @ 0x1407D3AA4
 * Callers:
 *     PopInitializeHibernateGlobals @ 0x1407D3434 (PopInitializeHibernateGlobals.c)
 *     PopWnfHibernateRevocationCheckCallback @ 0x1407D3F10 (PopWnfHibernateRevocationCheckCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     MinCrypK_ParseRevocationList @ 0x1407216F8 (MinCrypK_ParseRevocationList.c)
 *     MinCryptK_GetBootAppSvnFromRevocationList @ 0x140721824 (MinCryptK_GetBootAppSvnFromRevocationList.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     BiOpenStoreWithHash @ 0x140776404 (BiOpenStoreWithHash.c)
 *     PopLoadFileInMemory @ 0x1407CBD28 (PopLoadFileInMemory.c)
 *     PopDiagTraceHibernateRevoked @ 0x1407D68FC (PopDiagTraceHibernateRevoked.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E6744 (PopBcdGetApplicationPathFromResumeObject.c)
 *     I_MincryptFreeChainInfo @ 0x1408AA068 (I_MincryptFreeChainInfo.c)
 *     BcdCloseStore @ 0x1409A1068 (BcdCloseStore.c)
 *     LdrResSearchResource @ 0x1409E5F50 (LdrResSearchResource.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopValidateWinresume(_BYTE *a1)
{
  HANDLE v2; // rsi
  unsigned int v3; // r14d
  void *v4; // r12
  void *v5; // r15
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v7; // r13
  int SystemInformation; // ebx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  int BootAppSvnFromRevocationList; // eax
  __int64 v17; // [rsp+40h] [rbp-99h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-91h]
  unsigned int *v19; // [rsp+50h] [rbp-89h] BYREF
  void *v20; // [rsp+58h] [rbp-81h] BYREF
  HANDLE BcdStoreHandle; // [rsp+60h] [rbp-79h] BYREF
  void *v22; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-59h] BYREF
  __int64 v25; // [rsp+90h] [rbp-49h]
  __int64 v26; // [rsp+98h] [rbp-41h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-39h] BYREF
  UNICODE_STRING v28; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v30; // [rsp+C8h] [rbp-11h]
  __int128 v31; // [rsp+D8h] [rbp-1h]
  ULONG v32; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v33; // [rsp+148h] [rbp+6Fh] BYREF
  int v34; // [rsp+150h] [rbp+77h] BYREF
  unsigned int v35; // [rsp+158h] [rbp+7Fh]

  *a1 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  v26 = 0LL;
  v32 = 0;
  DestinationString = 0LL;
  v27 = 0LL;
  v2 = 0LL;
  v34 = 0;
  v3 = 0;
  *(_QWORD *)&v28.Length = 0LL;
  v4 = 0LL;
  BcdStoreHandle = 0LL;
  v5 = 0LL;
  v18 = 0;
  Destination.Buffer = 0LL;
  v33 = 0;
  v20 = 0LL;
  v35 = 0;
  v17 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v28.Buffer = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( !Pool2 )
    goto LABEL_2;
  SystemInformation = ZwQuerySystemInformation(SystemSystemPartitionInformation, Pool2, 0x218u, 0LL);
  if ( SystemInformation < 0 )
    goto LABEL_27;
  RtlInitUnicodeString(&DestinationString, L"\\EFI\\Microsoft\\Boot\\boot.stl");
  Destination.MaximumLength = v7->Length + DestinationString.Length;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( !Destination.Buffer )
  {
LABEL_2:
    SystemInformation = -1073741670;
    goto LABEL_27;
  }
  RtlAppendUnicodeStringToString(&Destination, v7);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  v9 = PopLoadFileInMemory(&Destination, &v22, (ULONG *)&v34);
  v5 = v22;
  SystemInformation = v9;
  if ( v9 < 0 )
    goto LABEL_27;
  SystemInformation = MinCrypK_ParseRevocationList((int)v22, v34, v10, (__int64)&v27, (__int64)&v29, (__int64)&v26);
  if ( SystemInformation < 0 )
    goto LABEL_27;
  v13 = BiOpenStoreWithHash(v11, 2u, v12, (__int64)&BcdStoreHandle);
  v2 = BcdStoreHandle;
  SystemInformation = v13;
  if ( v13 < 0 )
    goto LABEL_27;
  SystemInformation = PopBcdGetApplicationPathFromResumeObject(BcdStoreHandle, &v28);
  if ( SystemInformation < 0 )
    goto LABEL_27;
  SystemInformation = PopLoadFileInMemory(&v28, &v20, &v32);
  if ( SystemInformation < 0 )
  {
    v4 = v20;
    goto LABEL_27;
  }
  DestinationString.Buffer = L"OS_RELEASE_VERSION";
  v17 = v32;
  v25 = 0LL;
  v4 = v20;
  *(_QWORD *)&DestinationString.Length = 10LL;
  SystemInformation = LdrResSearchResource(
                        (_DWORD)v20,
                        (unsigned int)&DestinationString,
                        3,
                        4608,
                        (__int64)&v19,
                        (__int64)&v17,
                        0LL,
                        0LL);
  if ( SystemInformation >= 0 )
  {
    if ( v19 && v17 == 4 )
    {
      v35 = *v19;
      if ( v35 != 167772178 )
      {
        SystemInformation = -1073700860;
        goto LABEL_11;
      }
      if ( (__int64)BootAppSvnInfo < v26 )
      {
        BootAppSvnFromRevocationList = MinCryptK_GetBootAppSvnFromRevocationList(v27, v14, 167772178, &v33);
        v3 = v33;
        SystemInformation = BootAppSvnFromRevocationList;
        if ( BootAppSvnFromRevocationList < 0 )
          goto LABEL_27;
      }
      else
      {
        v3 = DWORD2(BootAppSvnInfo);
      }
      *(_QWORD *)&DestinationString.Length = 10LL;
      DestinationString.Buffer = L"SECURITY_VERSION_NUMBER";
      v17 = v32;
      v25 = 0LL;
      SystemInformation = LdrResSearchResource(
                            (_DWORD)v4,
                            (unsigned int)&DestinationString,
                            3,
                            4608,
                            (__int64)&v19,
                            (__int64)&v17,
                            0LL,
                            0LL);
      if ( SystemInformation < 0 )
        goto LABEL_11;
      if ( !v19 || v17 != 4 )
      {
        *a1 = 1;
        SystemInformation = -1073741687;
        goto LABEL_28;
      }
      v18 = *v19;
      if ( v18 < v3 )
      {
        *a1 = 1;
        SystemInformation = -1073741790;
        goto LABEL_28;
      }
    }
    else
    {
      SystemInformation = -1073741687;
      *a1 = 1;
    }
LABEL_27:
    if ( !*a1 )
      goto LABEL_29;
    goto LABEL_28;
  }
LABEL_11:
  *a1 = 1;
LABEL_28:
  PopDiagTraceHibernateRevoked(v3, v18, v35);
LABEL_29:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x206D654Du);
  if ( v28.Buffer )
    ExFreePoolWithTag(v28.Buffer, 0);
  if ( v2 )
    BcdCloseStore(v2);
  if ( (_QWORD)v30 && (_DWORD)v29 )
  {
    I_MincryptFreeChainInfo();
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x206D654Du);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x72626968u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72626968u);
  return (unsigned int)SystemInformation;
}
