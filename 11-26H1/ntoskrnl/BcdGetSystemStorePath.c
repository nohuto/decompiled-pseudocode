/*
 * XREFs of BcdGetSystemStorePath @ 0x1409A49B8
 * Callers:
 *     BiLoadSystemStore @ 0x1409A0DF0 (BiLoadSystemStore.c)
 * Callees:
 *     wcscat_s @ 0x14053EEE0 (wcscat_s.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     BiGetSystemPartition @ 0x140774324 (BiGetSystemPartition.c)
 *     BiGetFirmwareType @ 0x1409A5660 (BiGetFirmwareType.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     RtlIsStateSeparationEnabled @ 0x140AF6E60 (RtlIsStateSeparationEnabled.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdGetSystemStorePath(PWSTR *BcdSystemStorePath)
{
  wchar_t *Pool2; // rdi
  wchar_t *v3; // rsi
  int FirmwareType; // edx
  int v5; // edx
  const wchar_t *v6; // rbp
  int SystemPartition; // eax
  NTSTATUS v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // r14d
  wchar_t *v12; // rax
  BOOLEAN IsStateSeparationEnabled; // bp
  rsize_t v14; // rbx
  const wchar_t *v15; // r8
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  FirmwareType = BiGetFirmwareType(&v18);
  if ( (v18 & 0x10000) != 0 )
  {
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v14 = IsStateSeparationEnabled != 0 ? 44LL : 36LL;
    Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
    if ( !Pool2 )
      return -1073741801;
    v15 = L"\\OSDataRoot\\Windows\\";
    if ( !IsStateSeparationEnabled )
      v15 = L"\\SystemRoot\\";
    wcscpy_s(Pool2, v14, v15);
    wcscat_s(Pool2, v14, L"system32\\config\\BootBCD");
    BiLogMessage(2LL, L"Using cached BCD path: %s", Pool2);
    v8 = 0;
    goto LABEL_14;
  }
  v5 = FirmwareType - 1;
  if ( v5 )
  {
    if ( (unsigned int)(v5 - 1) >= 2 )
    {
      v8 = -1073741637;
      BiLogMessage(4LL, L"Failed to get system store path. Status: %x", 3221225659LL);
      return v8;
    }
    v6 = L"\\EFI\\Microsoft\\Boot\\BCD";
  }
  else
  {
    v6 = L"\\Boot\\BCD";
  }
  BiLogMessage(2LL, L"System store path: %s", v6);
  SystemPartition = BiGetSystemPartition(&P);
  v8 = SystemPartition;
  if ( SystemPartition < 0 )
  {
    BiLogMessage(4LL, L"Failed to get system partition. Status: %x", (unsigned int)SystemPartition);
    v3 = (wchar_t *)P;
    goto LABEL_15;
  }
  v3 = (wchar_t *)P;
  BiLogMessage(2LL, L"System partition: %s", P);
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( v6[v10] );
  do
    ++v9;
  while ( v3[v9] );
  v11 = v10 + v9 + 1;
  v12 = (wchar_t *)ExAllocatePool2(0x102uLL);
  Pool2 = v12;
  if ( v12 )
  {
    wcscpy_s(v12, v11, v3);
    wcscat_s(Pool2, v11, v6);
LABEL_14:
    *BcdSystemStorePath = Pool2;
    goto LABEL_15;
  }
  v8 = -1073741801;
LABEL_15:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v8 < 0 && Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  return v8;
}
