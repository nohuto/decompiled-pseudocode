/*
 * XREFs of SmpInitializeKnownDlls @ 0x1400158F0
 * Callers:
 *     SmpInitializeKnownDllsWorker @ 0x140015C10 (SmpInitializeKnownDllsWorker.c)
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmLogFailureInt @ 0x140008078 (SmLogFailureInt.c)
 *     SmpInitializeKnownDllsInternal @ 0x140008F30 (SmpInitializeKnownDllsInternal.c)
 *     SmpEventWriteULONG @ 0x140009890 (SmpEventWriteULONG.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000D6BC (SmpFreeSavedRegistryEntry.c)
 *     SmpOpenKnownDllsHandles @ 0x140017200 (SmpOpenKnownDllsHandles.c)
 */

__int64 __fastcall SmpInitializeKnownDlls(unsigned int a1)
{
  __int64 v1; // rdi
  HANDLE v2; // rsi
  HANDLE v3; // r14
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // r15d
  int v7; // eax
  int v8; // edx
  __int64 *v9; // rdi
  struct _UNICODE_STRING *v10; // rcx
  __int64 *v11; // rdi
  struct _UNICODE_STRING *v12; // rcx
  _QWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-10h] BYREF
  char v16; // [rsp+80h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF
  HANDLE v18; // [rsp+90h] [rbp+40h] BYREF

  v1 = a1;
  v15[1] = L"\\KnownDlls32";
  v15[0] = 1703960LL;
  v2 = 0LL;
  v14[1] = L"\\SysWOW64";
  v3 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v14[0] = 1310738LL;
  v16 = 0;
  if ( (int)RtlWow64IsWowGuestMachineSupported(332LL, &v16) < 0 || !v16 )
    goto LABEL_7;
  v4 = SmpOpenKnownDllsHandles(v15, v14, 0LL, &v18, &Handle);
  v5 = v4;
  if ( v4 < 0 )
  {
    SmLogFailureInt((__int64)"SmpInitializeKnownDlls", 4559, (unsigned int)v1, 0LL, v4);
    goto LABEL_19;
  }
  v2 = v18;
  v3 = Handle;
  if ( v18 )
    v6 = 1;
  else
LABEL_7:
    v6 = 0;
  v7 = SmpInitializeKnownDllsInternal((__int64)SmpKnownDllsObjectDirectory, SmpKnownDllsFileDirectory, 0, v6, v1);
  v5 = v7;
  if ( v7 >= 0 )
  {
    if ( !v2 || (v7 = SmpInitializeKnownDllsInternal((__int64)v2, v3, 1, v6, v1), v5 = v7, v7 >= 0) )
    {
      v5 = 0;
      goto LABEL_15;
    }
    v8 = 4648;
  }
  else
  {
    v8 = 4602;
  }
  SmLogFailureInt((__int64)"SmpInitializeKnownDlls", v8, v1, 0LL, v7);
LABEL_15:
  if ( v3 )
    NtClose(v3);
  if ( v2 )
    NtClose(v2);
LABEL_19:
  if ( (v1 & 3) != 1 )
  {
    if ( SmpKnownDllsFileDirectory )
      NtClose(SmpKnownDllsFileDirectory);
    if ( SmpKnownDllsObjectDirectory )
      NtClose(SmpKnownDllsObjectDirectory);
    v9 = (__int64 *)SmpKnownDllsList;
    while ( v9 != &SmpKnownDllsList )
    {
      v10 = (struct _UNICODE_STRING *)v9;
      v9 = (__int64 *)*v9;
      SmpFreeSavedRegistryEntry(v10);
    }
    v11 = (__int64 *)SmpExcludeKnownDllsList;
    while ( v11 != &SmpExcludeKnownDllsList )
    {
      v12 = (struct _UNICODE_STRING *)v11;
      v11 = (__int64 *)*v11;
      SmpFreeSavedRegistryEntry(v12);
    }
    SmpEventWriteULONG(&SmssEvt_InitializeKnownDlls_Stop, v5);
  }
  return v5;
}
