/*
 * XREFs of ??$try_com_query_to@UIApoAcousticEchoCancellation@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIApoAcousticEchoCancellation@@@Z @ 0x1800699B0
 * Callers:
 *     _lambda_58f5fe6b8b017462ecd7bd55353afd95_::operator() @ 0x180136080 (_lambda_58f5fe6b8b017462ecd7bd55353afd95_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall wil::try_com_query_to<IApoAcousticEchoCancellation,IAudioProcessingObject * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_25385759_3236_4101_a943_25693dfb5d2d, a2) >= 0;
}
