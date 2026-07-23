/*
 * XREFs of HalpMcaSetProcessorConfig @ 0x140BEF1B8
 * Callers:
 *     HalpMceInitProcessor @ 0x140C10478 (HalpMceInitProcessor.c)
 *     HalpMcaResumeProcessorConfig @ 0x140C109F0 (HalpMcaResumeProcessorConfig.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     HalpWheaWriteMsrControl @ 0x14044B274 (HalpWheaWriteMsrControl.c)
 *     HalpWheaWriteMsrStatus @ 0x14044B2BC (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankConfig @ 0x14044CC28 (HalpMcaProcessorBankConfig.c)
 *     HalpIsLmceSupported @ 0x140531E44 (HalpIsLmceSupported.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaSetProcessorConfig(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // r8
  unsigned int i; // edi
  __int64 v9; // r8
  char v10; // cl
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 result; // rax

  if ( HalpMcaEnabled )
  {
    v4 = a1 + 40;
    if ( (guard_dispatch_icall_no_overrides(a2, 377LL) & 0x100) != 0 )
      guard_dispatch_icall_no_overrides(a2, 379LL);
    if ( HalpIsLmceSupported() )
    {
      ++HalpLmceSupportedCount;
      guard_dispatch_icall_no_overrides(a2, 1232LL);
      guard_dispatch_icall_no_overrides(a2, 1232LL);
    }
    else
    {
      ++HalpLmceNotSupportedCount;
    }
    if ( !HalpMcaNumberOfBanks )
    {
      v5 = __readmsr(0x179u);
      HalpMcaNumberOfBanks = v5;
    }
    v6 = (unsigned __int8)HalpMcaNumberOfBanks;
    DbgPrintEx(
      0x88u,
      2u,
      "%s: BankCount:0x%08x ErrorSource->Flags:0x%08x, MceDescriptor->NumberOfBanks:0x%02x\n",
      "HalpMcaSetProcessorConfig",
      (unsigned __int8)HalpMcaNumberOfBanks,
      *(_DWORD *)(a1 + 36),
      *(unsigned __int8 *)(v4 + 3));
    for ( i = 0; i < v6; ++i )
    {
      if ( !HalpMcaBanksValidOnBoot || PshedIsSystemWheaEnabled() )
        HalpWheaWriteMsrStatus(a2, i, v7);
      if ( v6 > *(unsigned __int8 *)(v4 + 3) )
        v9 = v4;
      else
        v9 = v4 + 28LL * i;
      HalpWheaWriteMsrControl(a2, i, *(_QWORD *)(v9 + 44));
      HalpMcaProcessorBankConfig();
    }
  }
  v10 = HalpMceEnabled;
  v11 = __readcr4();
  v12 = v11;
  v13 = v11 | 0x40;
  result = v12 ^ 0x40;
  if ( !v10 )
    v13 = result;
  __writecr4(v13);
  return result;
}
