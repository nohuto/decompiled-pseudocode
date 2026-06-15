/*
 * XREFs of ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800079B4
 * Callers:
 *     ?RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z @ 0x1800052BC (-RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180005674 (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 *     ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180007200 (-RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18000734C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18001B958 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001C288 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBGHHW4_AudioSessionState@@@Z @ 0x1800454C4 (-RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBGHHW4_AudioSessionSt.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180049894 (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18004A120 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 * Callees:
 *     memset_0 @ 0x180030A1C (memset_0.c)
 */

__int64 __fastcall _AllocString<CTCoAllocPolicy>(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rdi
  _BYTE *v6; // r14
  unsigned __int64 v7; // rsi
  _WORD *v8; // rax
  _WORD *v9; // rcx
  unsigned int v10; // ebx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  signed __int64 v14; // r14
  __int64 v15; // r8
  _WORD *v16; // r9
  __int16 v17; // ax
  _WORD *v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rsi

  v4 = -1LL;
  v6 = a3;
  do
    ++v4;
  while ( *(_WORD *)&a3[2 * v4] );
  v7 = v4 + 1;
  *a4 = 0LL;
  if ( v4 + 1 >= v4 && is_mul_ok(v7, 2uLL) )
  {
    v8 = CoTaskMemAlloc(2 * v7);
    *a4 = v8;
    v9 = v8;
    if ( v8 )
    {
      if ( v7 > 0x7FFFFFFF )
      {
        *v8 = 0;
        return 0;
      }
      else if ( v4 >= 0x7FFFFFFF )
      {
        v10 = 0;
        if ( v4 != -1LL )
          *v8 = 0;
      }
      else
      {
        if ( !v6 )
        {
          v6 = &unk_180056CEC;
          v4 = 0LL;
        }
        v10 = 0;
        if ( v7 )
        {
          v12 = v4 - v7;
          v13 = v7;
          v14 = v6 - (_BYTE *)v8;
          v15 = 0LL;
          v16 = v8;
          do
          {
            if ( !(v12 + v13) )
              break;
            v17 = *(_WORD *)((char *)v9 + v14);
            if ( !v17 )
              break;
            *v9 = v17;
            ++v15;
            ++v9;
            --v13;
          }
          while ( v13 );
          v18 = v9 - 1;
          if ( v13 )
            v18 = v9;
          *v18 = 0;
          v19 = v15 - 1;
          if ( v13 )
            v19 = v15;
          v20 = v7 - v19;
          if ( v13 && v20 > 1 && 2 * v20 > 2 )
            memset_0(&v16[v19 + 1], 0, 2 * v20 - 2);
        }
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v10;
}
