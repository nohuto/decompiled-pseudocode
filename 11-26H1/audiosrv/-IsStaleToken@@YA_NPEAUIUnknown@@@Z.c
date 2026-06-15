/*
 * XREFs of ?IsStaleToken@@YA_NPEAUIUnknown@@@Z @ 0x1800C207C
 * Callers:
 *     ?AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUIUnknown@@@Z @ 0x1800C19CC (-AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEAUEndpointCharacterist.c)
 *     ?AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEBG0PEAPEAUIUnknown@@@Z @ 0x1800C1BDC (-AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEBG0PEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     _lambda_ad178af92e927515c26622316a1d075b_::operator() @ 0x1800C17C4 (_lambda_ad178af92e927515c26622316a1d075b_--operator().c)
 */

bool __fastcall IsStaleToken(struct IUnknown *a1)
{
  struct IUnknown *v2; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown **v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  v3 = &v2;
  return (int)lambda_ad178af92e927515c26622316a1d075b_::operator()(&v3) < 0;
}
