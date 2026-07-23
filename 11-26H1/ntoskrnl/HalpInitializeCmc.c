/*
 * XREFs of HalpInitializeCmc @ 0x140BEFDA8
 * Callers:
 *     HalpInitializeErrSrc @ 0x140BEFE50 (HalpInitializeErrSrc.c)
 * Callees:
 *     HalpCmciInitProcessor @ 0x14044B398 (HalpCmciInitProcessor.c)
 *     HalpCmciInitializeErrorPacket @ 0x14044CC58 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmcInitializePolling @ 0x14057CED4 (HalpCmcInitializePolling.c)
 *     HalpCmcStartPolling @ 0x14057D0BC (HalpCmcStartPolling.c)
 *     HalpIsCmciImplemented @ 0x140BF0724 (HalpIsCmciImplemented.c)
 */

__int64 __fastcall HalpInitializeCmc(int a1, _DWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h]

  HIDWORD(v6) = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      HalpCmcErrorSourceId = a2[7];
      HalpCmcErrorSource = a2;
      if ( (unsigned __int8)HalpIsCmciImplemented() )
      {
        HalpCmciEnabled = 1;
        _InterlockedIncrement(&HalpCmciRevertToPolledMode);
      }
      HalpCmcInitializePolling((__int64)a2);
      HalpCmcStartPolling();
    }
    else
    {
      LODWORD(v6) = KeGetPcr()->Prcb.Number;
      if ( (unsigned __int8)HalpIsCmciImplemented() )
      {
        HalpCmciInitializeErrorPacket((__int64)a2, v6);
        HalpCmciInitProcessor((__int64)a2, v6, v3, v4);
      }
    }
  }
  else
  {
    HalpCmcErrorSourceId = a2[7];
    HalpCmcErrorSource = a2;
  }
  return 0LL;
}
