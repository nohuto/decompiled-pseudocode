/*
 * XREFs of ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x1800224E0
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?GetActiveRenderStreamCount@CApplication@@IEAAIK@Z @ 0x18002D5FC (-GetActiveRenderStreamCount@CApplication@@IEAAIK@Z.c)
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180038CD4 (-IsPlaying@CApplication@@QEAAHH@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18003A890 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall CProcess::GetActiveRenderStreamCount(CProcess *this, unsigned int a2)
{
  int v2; // r10d
  __int64 result; // rax
  CProcess *v4; // r11
  int v5; // r8d
  __int64 v6; // r9

  v2 = *((_DWORD *)this + 68);
  result = 0LL;
  v4 = this;
  v5 = 0;
  if ( v2 > 0 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 < 0 || v5 >= v2 )
      {
        ATL::_AtlRaiseException((unsigned int)this, a2);
        JUMPOUT(0x18002252FLL);
      }
      ++v5;
      this = *(CProcess **)(*((_QWORD *)v4 + 33) + v6);
      v6 += 8LL;
      result = (unsigned int)(*((_DWORD *)this + a2) + result);
    }
    while ( v5 < v2 );
  }
  return result;
}
