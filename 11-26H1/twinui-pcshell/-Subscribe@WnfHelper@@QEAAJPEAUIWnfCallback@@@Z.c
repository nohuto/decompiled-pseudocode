/*
 * XREFs of ?Subscribe@WnfHelper@@QEAAJPEAUIWnfCallback@@@Z @ 0x18022EBAC
 * Callers:
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1800D6AD4 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall WnfHelper::Subscribe(WnfHelper *this, struct IWnfCallback *a2)
{
  int result; // eax
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF

  result = 0;
  if ( !*((_QWORD *)this + 1) )
  {
    *(_QWORD *)this = a2;
    v4 = 0;
    result = RtlQueryWnfStateData(&v4, WNF_ACC_EC_ENABLED, WnfHelper::s_WnfCallback, 0LL, 0LL) | 0x10000000;
    if ( result >= 0 )
      return RtlSubscribeWnfStateChangeNotification((char *)this + 8, WNF_ACC_EC_ENABLED, v4, WnfHelper::s_WnfCallback) | 0x10000000;
  }
  return result;
}
