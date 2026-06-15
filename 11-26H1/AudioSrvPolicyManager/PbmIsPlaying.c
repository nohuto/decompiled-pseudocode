/*
 * XREFs of PbmIsPlaying @ 0x180041C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800089A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18003BF68 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 */

__int64 __fastcall PbmIsPlaying(void *a1, _DWORD *a2)
{
  int Process; // ebx
  CApplicationManager *v5; // rcx
  CApplicationManager *v6; // rcx
  struct CProcess *v8; // [rsp+38h] [rbp+10h] BYREF

  Process = 0;
  v8 = 0LL;
  if ( a2 )
  {
    v5 = g_ApplicationManager;
    *a2 = 0;
    if ( v5 )
    {
      Process = CApplicationManager::RpcGetProcess(v5, a1, &v8);
      if ( Process >= 0 )
        *a2 = CApplicationManager::IsPlaying(v6, v8);
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v8);
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)Process;
}
