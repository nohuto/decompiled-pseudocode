/*
 * XREFs of LdrpLoadWow64 @ 0x18007DAB0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     RtlAppendUnicodeStringToString @ 0x180043340 (RtlAppendUnicodeStringToString.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     LdrGetProcedureAddress @ 0x18007CF40 (LdrGetProcedureAddress.c)
 *     LdrpInitializeDllPath @ 0x18009AA90 (LdrpInitializeDllPath.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadWow64(PCUNICODE_STRING Source)
{
  int v2; // ebx
  PVOID *v3; // r14
  unsigned int i; // edi
  NTSTATUS ProcedureAddress; // eax
  int v7; // [rsp+30h] [rbp-D0h]
  NTSTATUS v8; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddress[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[128]; // [rsp+60h] [rbp-A0h] BYREF
  char v12; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&Destination.Length = 34078720LL;
  memset_thunk_772440563353939046(v11, 0, 0x80uLL);
  BaseAddress[0] = 0LL;
  Destination.Buffer = (wchar_t *)&v12;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeToString(&Destination, L"wow64.dll");
  LdrpInitializeDllPath(Destination.Buffer, 16385LL, v11);
  v2 = LdrpLoadDll(&Destination, (__int64)v11, 2048, (__int64)BaseAddress);
  LdrpReleaseDllPath((__int64)v11);
  if ( v2 < 0 )
  {
    v7 = v2;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      4537,
      (__int64)"LdrpLoadWow64",
      0,
      "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      &Destination,
      v7);
  }
  else
  {
    LdrProtectMrdata(0);
    v3 = (PVOID *)BaseAddress[0];
    for ( i = 0; i < 6; ++i )
    {
      ProcedureAddress = LdrGetProcedureAddress(
                           v3[6],
                           (PANSI_STRING)*(&off_1801708D0 + 2 * i),
                           0,
                           (PVOID *)*(&off_1801708D0 + 2 * i + 1));
      v2 = ProcedureAddress;
      if ( ProcedureAddress < 0 )
      {
        v8 = ProcedureAddress;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          4560,
          (__int64)"LdrpLoadWow64",
          0,
          "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
          *(&off_1801708D0 + 2 * i),
          &Destination,
          v8);
        break;
      }
    }
    LdrProtectMrdata(1);
    LdrpDereferenceModule((char *)v3);
  }
  return (unsigned int)v2;
}
