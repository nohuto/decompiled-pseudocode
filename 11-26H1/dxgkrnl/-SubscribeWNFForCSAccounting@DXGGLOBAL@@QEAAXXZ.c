/*
 * XREFs of ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1401C18A4
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401DD97C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x14006D930 (McGenEventRegister_EtwRegister.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall DXGGLOBAL::SubscribeWNFForCSAccounting(DXGGLOBAL *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF

  v1 = (__int64 *)((char *)this + 2088);
  v5 = WNF_PO_SCENARIO_CHANGE;
  if ( (int)ExSubscribeWnfStateChange((char *)this + 2088, &v5, 1LL) >= 0 )
  {
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           PDCIdleResiliencyEngagedCallBackFn,
           0LL,
           (PVOID *)this + 262) >= 0 )
    {
      McGenEventRegister_EtwRegister(
        &SLEEPSTUDY_ETW_PROVIDER,
        v3,
        SLEEPSTUDY_ETW_PROVIDER_Context,
        SLEEPSTUDY_ETW_PROVIDER_Context);
      *((_DWORD *)this + 527) = 1;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      v4 = *v1;
      WdLogGlobalForLineNumber = 161;
      ExUnsubscribeWnfStateChange(v4);
      *v1 = 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 146;
  }
}
