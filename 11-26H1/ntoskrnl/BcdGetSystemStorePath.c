/*
 * XREFs of BcdGetSystemStorePath @ 0x1409D39D8
 * Callers:
 *     BiLoadSystemStore @ 0x1409CFE10 (BiLoadSystemStore.c)
 * Callees:
 *     wcscat_s @ 0x14053CA60 (wcscat_s.c)
 *     wcscpy_s @ 0x14053CB00 (wcscpy_s.c)
 *     BiGetSystemPartition @ 0x140771324 (BiGetSystemPartition.c)
 *     BiGetFirmwareType @ 0x1409D4680 (BiGetFirmwareType.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     RtlIsStateSeparationEnabled @ 0x140AF47C0 (RtlIsStateSeparationEnabled.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdGetSystemStorePath(wchar_t **a1)
{
  wchar_t *Pool2; // rdi
  wchar_t *v3; // rsi
  __int64 FirmwareType; // rdx
  __int64 v5; // rcx
  int v6; // edx
  const wchar_t *v7; // rbp
  int SystemPartition; // eax
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r14d
  wchar_t *v13; // rax
  char IsStateSeparationEnabled; // bp
  rsize_t v15; // rbx
  const wchar_t *v16; // r8
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  FirmwareType = (unsigned int)BiGetFirmwareType(&v19);
  if ( (v19 & 0x10000) != 0 )
  {
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled(v5, FirmwareType);
    v15 = IsStateSeparationEnabled != 0 ? 44LL : 36LL;
    Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v16 = L"\\OSDataRoot\\Windows\\";
    if ( !IsStateSeparationEnabled )
      v16 = L"\\SystemRoot\\";
    wcscpy_s(Pool2, v15, v16);
    wcscat_s(Pool2, v15, L"system32\\config\\BootBCD");
    BiLogMessage(2LL, L"Using cached BCD path: %s", Pool2);
    v9 = 0;
    goto LABEL_14;
  }
  v6 = FirmwareType - 1;
  if ( v6 )
  {
    if ( (unsigned int)(v6 - 1) >= 2 )
    {
      v9 = -1073741637;
      BiLogMessage(4LL, L"Failed to get system store path. Status: %x", 3221225659LL);
      return (unsigned int)v9;
    }
    v7 = L"\\EFI\\Microsoft\\Boot\\BCD";
  }
  else
  {
    v7 = L"\\Boot\\BCD";
  }
  BiLogMessage(2LL, L"System store path: %s", v7);
  SystemPartition = BiGetSystemPartition(&P);
  v9 = SystemPartition;
  if ( SystemPartition < 0 )
  {
    BiLogMessage(4LL, L"Failed to get system partition. Status: %x", (unsigned int)SystemPartition);
    v3 = (wchar_t *)P;
    goto LABEL_15;
  }
  v3 = (wchar_t *)P;
  BiLogMessage(2LL, L"System partition: %s", P);
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( v7[v11] );
  do
    ++v10;
  while ( v3[v10] );
  v12 = v11 + v10 + 1;
  v13 = (wchar_t *)ExAllocatePool2(0x102uLL);
  Pool2 = v13;
  if ( v13 )
  {
    wcscpy_s(v13, v12, v3);
    wcscat_s(Pool2, v12, v7);
LABEL_14:
    *a1 = Pool2;
    goto LABEL_15;
  }
  v9 = -1073741801;
LABEL_15:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v9 < 0 && Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  return (unsigned int)v9;
}
