/*
 * XREFs of ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800B0E88
 * Callers:
 *     _lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_::operator() @ 0x1800807A8 (_lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_--operator().c)
 *     ?ApplicationClosed@CApplicationTracker@@EEAAJPEBG@Z @ 0x1800BDED0 (-ApplicationClosed@CApplicationTracker@@EEAAJPEBG@Z.c)
 *     ?ApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBGW4AppInteractivity@@@Z @ 0x1800BE050 (-ApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBGW4AppInteractivity@@@Z.c)
 *     ??1DialogSession@@EEAA@XZ @ 0x180102AE8 (--1DialogSession@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x180102DB0 (-RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z.c)
 *     ?SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z @ 0x180113854 (-SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z.c)
 *     _lambda_c62c83e01cc3e23635c1b77cef32058b_::operator() @ 0x1801173B8 (_lambda_c62c83e01cc3e23635c1b77cef32058b_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>(
        __int64 a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64))g_PolicyManager)(
           g_PolicyManager,
           &GUID_7cd77114_b031_4a63_bf09_9fd46c7629d0,
           a2);
}
