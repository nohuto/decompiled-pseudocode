/*
 * XREFs of LdrpLoadWow64 @ 0x180086710
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     LdrGetProcedureAddress @ 0x180085BA0 (LdrGetProcedureAddress.c)
 *     LdrpInitializeDllPath @ 0x18009B960 (LdrpInitializeDllPath.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadWow64(const void **a1)
{
  int Dll; // ebx
  __int64 v3; // r14
  unsigned int i; // edi
  int ProcedureAddress; // eax
  int v7; // [rsp+30h] [rbp-D0h]
  int v8; // [rsp+38h] [rbp-C8h]
  char v9[8]; // [rsp+40h] [rbp-C0h] BYREF
  char *v10; // [rsp+48h] [rbp-B8h]
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v12[128]; // [rsp+60h] [rbp-A0h] BYREF
  char v13; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)v9 = 34078720LL;
  memset_thunk_772440563353939046(v12, 0, 0x80uLL);
  v11 = 0LL;
  v10 = &v13;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v9, a1);
  RtlAppendUnicodeToString((unsigned __int16 *)v9, L"wow64.dll");
  LdrpInitializeDllPath(v10, 16385LL, v12);
  Dll = LdrpLoadDll((unsigned __int16 *)v9, (__int64)v12, 2048, (__int64)&v11);
  LdrpReleaseDllPath((__int64)v12);
  if ( Dll < 0 )
  {
    v7 = Dll;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      4537,
      (__int64)"LdrpLoadWow64",
      0,
      "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      v9,
      v7);
  }
  else
  {
    LdrProtectMrdata(0);
    v3 = v11;
    for ( i = 0; i < 6; ++i )
    {
      ProcedureAddress = LdrGetProcedureAddress(
                           *(_QWORD *)(v3 + 48),
                           (int)*(&off_1801719F0 + 2 * i),
                           0,
                           (int)*(&off_1801719F0 + 2 * i + 1));
      Dll = ProcedureAddress;
      if ( ProcedureAddress < 0 )
      {
        v8 = ProcedureAddress;
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrinit.c",
          4560,
          (__int64)"LdrpLoadWow64",
          0,
          "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
          *(&off_1801719F0 + 2 * i),
          v9,
          v8);
        break;
      }
    }
    LdrProtectMrdata(1);
    LdrpDereferenceModule(v3);
  }
  return (unsigned int)Dll;
}
