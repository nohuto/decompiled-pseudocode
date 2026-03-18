/*
 * XREFs of ?SetProperty@CKeyframeAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801850D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18010C918 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x180160120 (-SetProgress@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z @ 0x18016D2F0 (-SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18019275C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x180279B04 (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z @ 0x180279F60 (-SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  __int64 v5; // rax
  int updated; // eax
  unsigned int v8; // ebx
  float v9; // xmm6_4
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 *v15; // rdx
  int v16; // r11d
  float v17; // xmm4_4
  int v18[4]; // [rsp+30h] [rbp-28h] BYREF
  float v19; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 == 18 )
  {
    switch ( a2 )
    {
      case 24:
        v5 = *(_QWORD *)(a1 + 336);
        *(float *)(a1 + 440) = fminf(fmaxf(*a4, 0.0), 1.0);
        if ( *(_BYTE *)(v5 + 294) )
        {
          if ( *(_DWORD *)(a1 + 444) )
          {
            updated = CKeyframeAnimation::UpdatePlaybackState(a1, 0LL, 0LL, 0LL);
            v8 = updated;
            if ( updated < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x82Cu, 0LL);
              return v8;
            }
          }
        }
        return 0LL;
      case 31:
        CKeyframeAnimation::SetPlaybackRate((CKeyframeAnimation *)a1, *a4);
        return 0LL;
      case 33:
        CKeyframeAnimation::SetProgress((CKeyframeAnimation *)a1, *a4);
        return 0LL;
    }
    goto LABEL_28;
  }
  if ( a3 == 42 )
  {
    if ( a2 == 16 )
    {
      v9 = *a4;
      if ( *a4 <= 0.0 )
        return 0LL;
      v10 = CKeyframeAnimation::SetInitialDelay((CKeyframeAnimation *)a1, *a4);
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x835u, 0LL);
        return v11;
      }
      if ( !*(_DWORD *)(a1 + 220) || (unsigned int)dword_1803DC880 <= 4 || !tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
        return 0LL;
      v19 = v9;
      v15 = (unsigned __int8 *)&unk_1803B4CF4;
      v18[0] = v13;
LABEL_27:
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        v15,
        v13,
        v14,
        (__int64)v18,
        (__int64)&v19);
      return 0LL;
    }
    if ( a2 == 30 )
    {
      if ( *a4 < 1.0 )
        return 0LL;
      CKeyframeAnimation::AdjustAllKeyframeTime((CKeyframeAnimation *)a1, *a4);
      if ( !*(_DWORD *)(a1 + 220) || (unsigned int)dword_1803DC880 <= 4 || !tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
        return 0LL;
      v19 = v17;
      v15 = (unsigned __int8 *)&unk_1803B4D36;
      v18[0] = v16;
      goto LABEL_27;
    }
  }
LABEL_28:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x865u, 0LL);
  return 2147942487LL;
}
