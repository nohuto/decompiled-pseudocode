/*
 * XREFs of ?OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z @ 0x18012AED0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z @ 0x18012B2FC (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z.c)
 */

void __fastcall DynamicAudioEndpointManager::OnProcessTerminated(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct IUnknown *a3)
{
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]

  v3 = 0LL;
  v4 = 0;
  DynamicAudioEndpointManager::RemoveRule(this, a2, a3, 1, (bool (*const)[6])&v3);
}
