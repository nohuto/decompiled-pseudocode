/*
 * XREFs of HalpCmciInitProcessor @ 0x14044B398
 * Callers:
 *     HalpInitializeCmc @ 0x140BEFDA8 (HalpInitializeCmc.c)
 *     HalpCmciInit @ 0x140C0F0DC (HalpCmciInit.c)
 *     HalpMcaResumeProcessorConfig @ 0x140C109F0 (HalpMcaResumeProcessorConfig.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfig @ 0x14044BB50 (HalpCmciSetProcessorConfig.c)
 *     HalpGetMcaPcrContext @ 0x14044BB84 (HalpGetMcaPcrContext.c)
 *     HalpCmciPollProcessor @ 0x14044BC14 (HalpCmciPollProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIsCmciImplementedAMD @ 0x140BF078C (HalpIsCmciImplementedAMD.c)
 */

unsigned __int8 __fastcall HalpCmciInitProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // si
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rdx
  __int64 McaPcrContext; // rax
  __int64 v11; // rdi
  unsigned __int8 result; // al

  v6 = 1;
  if ( (unsigned __int8)HalpGetCpuVendor(a1, a2, a3, a4) == 1 && !(unsigned __int8)HalpIsCmciImplementedAMD() )
  {
    HalpMcaPollForCmc = 1;
    v6 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  v9 = 15LL;
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v7, 15LL);
  }
  if ( !HalpCmciRevertToPolledMode )
  {
    if ( *(_BYTE *)(a1 + 48) == 5 )
      goto LABEL_8;
    HalpMcaPollForCmc = 1;
  }
  v6 = 0;
LABEL_8:
  LOBYTE(v9) = v6;
  HalpCmciSetProcessorConfig(a1, v9, a2);
  McaPcrContext = HalpGetMcaPcrContext(a2);
  v11 = McaPcrContext;
  if ( McaPcrContext && v6 )
  {
    *(_DWORD *)(McaPcrContext + 120) = 0;
    *(_BYTE *)(McaPcrContext + 128) = 0;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v6 )
  {
    result = HalpMcaWheaReady;
    if ( HalpMcaWheaReady )
    {
      result = KeGetCurrentIrql();
      if ( result > 2u )
      {
        if ( v11 && *(_QWORD *)(v11 + 16) )
        {
          if ( *(_QWORD *)(v11 + 24) )
            return KiInsertQueueDpc(v11 + 48, 0LL, 0LL, 0LL, 0);
        }
      }
      else
      {
        return HalpCmciPollProcessor(a2);
      }
    }
  }
  return result;
}
