/*
 * XREFs of HalpMcGetLoadConfiguration @ 0x140595D68
 * Callers:
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmGetSystemRoutineAddress @ 0x140A8B460 (MmGetSystemRoutineAddress.c)
 */

__int64 __fastcall HalpMcGetLoadConfiguration(_BYTE *a1)
{
  bool v2; // sf
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v5[8]; // [rsp+40h] [rbp-19h] BYREF
  int v6; // [rsp+48h] [rbp-11h]
  const wchar_t *v7; // [rsp+50h] [rbp-9h]
  unsigned int *v8; // [rsp+58h] [rbp-1h]
  int v9; // [rsp+60h] [rbp+7h]
  unsigned int v10; // [rsp+C0h] [rbp+67h] BYREF

  v10 = 0;
  memset_0(v5, 0, 0x70uLL);
  v6 = 288;
  v7 = L"ParallelLoad";
  v9 = 0x4000000;
  v8 = &v10;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  MmGetSystemRoutineAddress(&DestinationString);
  v2 = (int)guard_dispatch_icall_no_overrides(2LL, L"McUpdate") < 0;
  result = v10;
  if ( !v2 )
    result = v10 & 1;
  *a1 = result;
  return result;
}
