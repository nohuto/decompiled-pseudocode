/*
 * XREFs of ??$try_com_query_to@UIAudioSessionDuckingControl@@AEAPEAUIAudioSessionInfo@@@wil@@YA_NAEAPEAUIAudioSessionInfo@@PEAPEAUIAudioSessionDuckingControl@@@Z @ 0x180028C98
 * Callers:
 *     _lambda_0c78973abdeec707a919cb58eec6a57e_::operator() @ 0x18003F150 (_lambda_0c78973abdeec707a919cb58eec6a57e_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall wil::try_com_query_to<IAudioSessionDuckingControl,IAudioSessionInfo * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c, a2) >= 0;
}
