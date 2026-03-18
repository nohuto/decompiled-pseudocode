/*
 * XREFs of DpiInitializeEx @ 0x14023E988
 * Callers:
 *     DpiInitializeInternal @ 0x140085C18 (DpiInitializeInternal.c)
 *     DpiKmdDodInitialize @ 0x140085D10 (DpiKmdDodInitialize.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiGetDriverDataSizeFromVersion @ 0x140195588 (DpiGetDriverDataSizeFromVersion.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403EF980 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DpiInitializeEx(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        PCUNICODE_STRING SourceString,
        unsigned int *Src,
        __int64 a4,
        char a5)
{
  int DriverDataSizeFromVersion; // ebx
  unsigned int v10; // edx
  _WORD *v11; // rcx
  __int64 Pool2; // rax
  void *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  PVOID DriverObjectExtension; // [rsp+30h] [rbp-81h] BYREF
  size_t Size; // [rsp+38h] [rbp-79h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-71h] BYREF
  __int64 v21; // [rsp+50h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-49h] BYREF
  _OWORD v24[2]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+7h]

  v24[0] = *(_OWORD *)L"\\Driver\\IndirectKmd";
  v25 = *(_QWORD *)L"Kmd";
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  v24[1] = *(_OWORD *)L"IndirectKmd";
  *(_QWORD *)&String1.Length = 2621478LL;
  String1.Buffer = (wchar_t *)v24;
  DriverDataSizeFromVersion = IoAllocateDriverObjectExtension(
                                ClientIdentificationAddress,
                                ClientIdentificationAddress,
                                0x698u,
                                &DriverObjectExtension);
  if ( DriverDataSizeFromVersion < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3377;
    goto LABEL_31;
  }
  *((_DWORD *)DriverObjectExtension + 4) = 1953656900;
  *((_DWORD *)DriverObjectExtension + 5) = 1;
  *((_DWORD *)DriverObjectExtension + 6) = 2;
  *((_QWORD *)DriverObjectExtension + 4) = ClientIdentificationAddress;
  *((_BYTE *)DriverObjectExtension + 132) = a5;
  *((_BYTE *)DriverObjectExtension + 134) = 0;
  if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
    *((_BYTE *)DriverObjectExtension + 134) = 1;
  if ( Src )
  {
    *((_BYTE *)DriverObjectExtension + 133) = 0;
    v10 = *Src;
    *((_DWORD *)DriverObjectExtension + 7) = *Src;
    DriverDataSizeFromVersion = DpiGetDriverDataSizeFromVersion(0, v10, 1544, &Size);
    if ( DriverDataSizeFromVersion < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3418;
      goto LABEL_31;
    }
    memmove((char *)DriverObjectExtension + 136, Src, (unsigned int)Size);
    *((_QWORD *)DriverObjectExtension + 210) = 0LL;
    goto LABEL_18;
  }
  *((_BYTE *)DriverObjectExtension + 133) = 1;
  memset((char *)DriverObjectExtension + 136, 0, 0x610uLL);
  *((_DWORD *)DriverObjectExtension + 7) = *(_DWORD *)a4;
  *((_DWORD *)DriverObjectExtension + 34) = *(_DWORD *)a4;
  *((_QWORD *)DriverObjectExtension + 18) = *(_QWORD *)(a4 + 8);
  *((_QWORD *)DriverObjectExtension + 19) = *(_QWORD *)(a4 + 16);
  *((_QWORD *)DriverObjectExtension + 20) = *(_QWORD *)(a4 + 24);
  *((_QWORD *)DriverObjectExtension + 21) = *(_QWORD *)(a4 + 32);
  *((_QWORD *)DriverObjectExtension + 22) = *(_QWORD *)(a4 + 40);
  *((_QWORD *)DriverObjectExtension + 23) = *(_QWORD *)(a4 + 48);
  *((_QWORD *)DriverObjectExtension + 24) = *(_QWORD *)(a4 + 56);
  *((_QWORD *)DriverObjectExtension + 25) = *(_QWORD *)(a4 + 64);
  *((_QWORD *)DriverObjectExtension + 26) = *(_QWORD *)(a4 + 72);
  *((_QWORD *)DriverObjectExtension + 27) = *(_QWORD *)(a4 + 80);
  *((_QWORD *)DriverObjectExtension + 28) = *(_QWORD *)(a4 + 88);
  *((_QWORD *)DriverObjectExtension + 29) = *(_QWORD *)(a4 + 96);
  *((_QWORD *)DriverObjectExtension + 30) = *(_QWORD *)(a4 + 104);
  *((_QWORD *)DriverObjectExtension + 31) = *(_QWORD *)(a4 + 112);
  *((_QWORD *)DriverObjectExtension + 32) = *(_QWORD *)(a4 + 120);
  *((_QWORD *)DriverObjectExtension + 33) = *(_QWORD *)(a4 + 128);
  *((_QWORD *)DriverObjectExtension + 34) = *(_QWORD *)(a4 + 136);
  *((_QWORD *)DriverObjectExtension + 46) = *(_QWORD *)(a4 + 144);
  *((_QWORD *)DriverObjectExtension + 47) = *(_QWORD *)(a4 + 152);
  *((_QWORD *)DriverObjectExtension + 48) = *(_QWORD *)(a4 + 160);
  *((_QWORD *)DriverObjectExtension + 51) = *(_QWORD *)(a4 + 168);
  *((_QWORD *)DriverObjectExtension + 52) = *(_QWORD *)(a4 + 176);
  *((_QWORD *)DriverObjectExtension + 54) = *(_QWORD *)(a4 + 184);
  *((_QWORD *)DriverObjectExtension + 55) = *(_QWORD *)(a4 + 192);
  *((_QWORD *)DriverObjectExtension + 56) = *(_QWORD *)(a4 + 200);
  *((_QWORD *)DriverObjectExtension + 58) = *(_QWORD *)(a4 + 208);
  *((_QWORD *)DriverObjectExtension + 59) = *(_QWORD *)(a4 + 216);
  *((_QWORD *)DriverObjectExtension + 60) = *(_QWORD *)(a4 + 224);
  *((_QWORD *)DriverObjectExtension + 61) = *(_QWORD *)(a4 + 232);
  *((_QWORD *)DriverObjectExtension + 63) = *(_QWORD *)(a4 + 240);
  *((_QWORD *)DriverObjectExtension + 87) = *(_QWORD *)(a4 + 248);
  *((_QWORD *)DriverObjectExtension + 210) = *(_QWORD *)(a4 + 256);
  *((_QWORD *)DriverObjectExtension + 92) = *(_QWORD *)(a4 + 264);
  *((_QWORD *)DriverObjectExtension + 93) = *(_QWORD *)(a4 + 272);
  *((_QWORD *)DriverObjectExtension + 94) = *(_QWORD *)(a4 + 280);
  if ( *(_DWORD *)a4 >= 0x3005u )
    *((_QWORD *)DriverObjectExtension + 96) = *(_QWORD *)(a4 + 288);
  if ( *(_DWORD *)a4 < 0x3007u )
    *((_QWORD *)DriverObjectExtension + 63) = 0LL;
  else
    *((_QWORD *)DriverObjectExtension + 65) = *(_QWORD *)(a4 + 296);
  if ( *(_DWORD *)a4 >= 0x3009u )
  {
    *((_QWORD *)DriverObjectExtension + 88) = *(_QWORD *)(a4 + 304);
    *((_QWORD *)DriverObjectExtension + 97) = *(_QWORD *)(a4 + 312);
  }
  v11 = DriverObjectExtension;
  if ( *((_DWORD *)DriverObjectExtension + 7) >= 0x5006u )
  {
    *((_QWORD *)DriverObjectExtension + 118) = *(_QWORD *)(a4 + 328);
LABEL_18:
    v11 = DriverObjectExtension;
  }
  v11[21] = SourceString->Length + 2;
  *((_WORD *)DriverObjectExtension + 20) = SourceString->Length;
  Pool2 = ExAllocatePool2(256LL, *((unsigned __int16 *)DriverObjectExtension + 21), 1953656900LL);
  *((_QWORD *)DriverObjectExtension + 6) = Pool2;
  v13 = (void *)*((_QWORD *)DriverObjectExtension + 6);
  if ( !v13 )
  {
    DriverDataSizeFromVersion = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3530;
LABEL_31:
    if ( DriverObjectExtension && *((_QWORD *)DriverObjectExtension + 6) )
      RtlFreeUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40));
    DxgCreateLiveDumpWithWdLogs(403LL, 2048LL);
    return (unsigned int)DriverDataSizeFromVersion;
  }
  memset(v13, 0, *((unsigned __int16 *)DriverObjectExtension + 21));
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40), SourceString);
  KeInitializeMutex((PRKMUTEX)((char *)DriverObjectExtension + 72), 0);
  v14 = (char *)DriverObjectExtension + 56;
  *((_QWORD *)DriverObjectExtension + 8) = (char *)DriverObjectExtension + 56;
  *v14 = v14;
  AcquireMiniportListMutex();
  v15 = (_QWORD *)qword_140168E10;
  v16 = DriverObjectExtension;
  if ( *(__int64 **)qword_140168E10 != &qword_140168E08 )
    __fastfail(3u);
  *(_QWORD *)DriverObjectExtension = &qword_140168E08;
  v16[1] = v15;
  *v15 = v16;
  qword_140168E10 = (__int64)v16;
  ReleaseMiniportListMutex();
  WdLogSingleEntry1(4LL);
  WdLogGlobalForLineNumber = 3556;
  if ( *((_BYTE *)DriverObjectExtension + 134) == 1 )
    memset64(ClientIdentificationAddress->MajorFunction, (unsigned __int64)DpiDispatchDefault, 0x1CuLL);
  ClientIdentificationAddress->MajorFunction[0] = (PDRIVER_DISPATCH)&DpiDispatchCreate;
  ClientIdentificationAddress->MajorFunction[27] = (PDRIVER_DISPATCH)&DpiDispatchPnp;
  ClientIdentificationAddress->MajorFunction[22] = (PDRIVER_DISPATCH)&DpiDispatchPower;
  ClientIdentificationAddress->MajorFunction[14] = (PDRIVER_DISPATCH)&DpiDispatchIoctl;
  ClientIdentificationAddress->MajorFunction[15] = (PDRIVER_DISPATCH)&DpiDispatchInternalIoctl;
  ClientIdentificationAddress->MajorFunction[23] = (PDRIVER_DISPATCH)DpiDispatchSystemControl;
  ClientIdentificationAddress->MajorFunction[2] = (PDRIVER_DISPATCH)&DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->MajorFunction[18] = (PDRIVER_DISPATCH)&DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)DpiAddDevice;
  ClientIdentificationAddress->DriverUnload = (PDRIVER_UNLOAD)DpiDriverUnload;
  v21 = 0LL;
  if ( (int)KsrGetFirmwareInformation(&v21) >= 0 && !qword_140169370 )
  {
    Size = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback((PCALLBACK_OBJECT *)&Size, &ObjectAttributes, 0, 1u) >= 0 )
    {
      qword_140169370 = (__int64)ExRegisterCallback((PCALLBACK_OBJECT)Size, DpiKsrCallback, &DpGlobals);
      ObfDereferenceObject((PVOID)Size);
      word_140169378 = 0;
      dword_14016938C = 0;
    }
    if ( !qword_140169370 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3625;
    }
  }
  return (unsigned int)DriverDataSizeFromVersion;
}
