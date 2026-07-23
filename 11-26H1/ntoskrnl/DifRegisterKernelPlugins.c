/*
 * XREFs of DifRegisterKernelPlugins @ 0x14064F5EC
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x14064B744 (VfVolatileSetDifRuleClass.c)
 *     VfInitBootDriversLoaded @ 0x140CE4CB4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     CarRegisterDefaultRuleClassConfiguration @ 0x14064DBB0 (CarRegisterDefaultRuleClassConfiguration.c)
 *     CarSetCustomRuleIdRange @ 0x14064E210 (CarSetCustomRuleIdRange.c)
 *     DifUtilDbgPrint @ 0x14064E930 (DifUtilDbgPrint.c)
 *     DifCallPluginEntry @ 0x14064F0A0 (DifCallPluginEntry.c)
 */

void DifRegisterKernelPlugins()
{
  unsigned int *v0; // rbx
  __int64 v1; // rdi
  int v2; // eax
  unsigned int *v3; // rbx
  __int64 v4; // rdi
  int v5; // [rsp+20h] [rbp-89h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+28h] [rbp-81h]
  int v7; // [rsp+30h] [rbp-79h]
  __int64 (__fastcall *v8)(); // [rsp+38h] [rbp-71h]
  int v9; // [rsp+40h] [rbp-69h]
  __int64 (__fastcall *v10)(); // [rsp+48h] [rbp-61h]
  int v11; // [rsp+50h] [rbp-59h]
  __int64 (*v12)(); // [rsp+58h] [rbp-51h]
  int v13; // [rsp+60h] [rbp-49h]
  __int64 (__fastcall *v14)(); // [rsp+68h] [rbp-41h]
  int v15; // [rsp+70h] [rbp-39h]
  __int64 (*v16)(); // [rsp+78h] [rbp-31h]
  int v17; // [rsp+80h] [rbp-29h]
  __int64 (__fastcall *v18)(__int16 *); // [rsp+88h] [rbp-21h]
  int v19; // [rsp+90h] [rbp-19h]
  __int64 (__fastcall *v20)(); // [rsp+98h] [rbp-11h]
  int v21; // [rsp+A0h] [rbp-9h]
  __int64 (*v22)(); // [rsp+A8h] [rbp-1h]
  int v23; // [rsp+B0h] [rbp+7h]
  __int64 (*v24)(); // [rsp+B8h] [rbp+Fh]
  int v25; // [rsp+C0h] [rbp+17h]
  __int64 (__fastcall *v26)(__int64); // [rsp+C8h] [rbp+1Fh]
  int v27; // [rsp+D0h] [rbp+27h]
  __int64 (*v28)(); // [rsp+D8h] [rbp+2Fh]
  int v29; // [rsp+E0h] [rbp+37h]
  __int64 (__fastcall *v30)(); // [rsp+E8h] [rbp+3Fh]
  int v31; // [rsp+F0h] [rbp+47h]
  __int64 (__fastcall *v32)(); // [rsp+F8h] [rbp+4Fh]

  v5 = 39;
  v6 = VfLwSPEntry;
  v0 = (unsigned int *)&unk_140E0EBBC;
  v7 = 0;
  v8 = VfSpecialPoolEntry;
  v1 = 4LL;
  v9 = 3;
  v10 = VfPoolTrackingEntry;
  v12 = VfSecurityEntry;
  v14 = VfMiscPluginEntry;
  v16 = VfIovPluginEntry;
  v18 = VfIrqlPluginEntry;
  v20 = VfDeadlockPluginEntry;
  v22 = VfDmaPluginEntry;
  v24 = VfRlrsEntry;
  v26 = VfIoPendingEntry;
  v28 = VfBelow4gbPluginEntry;
  v30 = VfIrpTrackingPluginEntry;
  v32 = VfPoolCommitCachingPluginEntry;
  v11 = 8;
  v13 = 11;
  v15 = 4;
  v17 = 1;
  v19 = 5;
  v21 = 7;
  v23 = 2;
  v25 = 9;
  v27 = 26;
  v29 = 10;
  v31 = 54;
  do
  {
    v2 = CarRegisterDefaultRuleClassConfiguration(*(v0 - 2), *(v0 - 3));
    if ( v2 < 0 )
      DifUtilDbgPrint(
        (int)"Failed to register kernel DIF plugin %d for reporting. NTSTATUS code: 0x%x",
        (unsigned int)DifKernelPluginRules,
        (unsigned int)v2);
    else
      CarSetCustomRuleIdRange(*(v0 - 3));
    v0 += 4;
    --v1;
  }
  while ( v1 );
  v3 = (unsigned int *)&v5;
  v4 = 14LL;
  do
  {
    DifCallPluginEntry(*v3);
    v3 += 4;
    --v4;
  }
  while ( v4 );
}
