/*
 * XREFs of ?HandleAudioChanged@GamingOverlayExperienceManager@@UEAAJH@Z @ 0x180347960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$DoInvoke@V_lambda_0808a6f2104e0fe6f743d65699099e1d_@@@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_0808a6f2104e0fe6f743d65699099e1d_@@@Z @ 0x18033BF1C (--$DoInvoke@V_lambda_0808a6f2104e0fe6f743d65699099e1d_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::HandleAudioChanged(GamingOverlayExperienceManager *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  char *v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = a2;
  v6 = (char *)this - 136;
  *(_QWORD *)&v5 = &v6;
  *((_QWORD *)&v5 + 1) = &v7;
  v2 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_0808a6f2104e0fe6f743d65699099e1d_>(
         (__int64)this + 1264,
         &v5);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA90,
    (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
