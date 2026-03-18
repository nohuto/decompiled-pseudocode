/*
 * XREFs of ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x18018EA5C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180003D24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessUpdatePlaybackState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rdi
  char v10; // dl
  __int64 v11; // rax
  bool v12; // zf
  CComposition *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  void *v17; // [rsp+50h] [rbp+8h] BYREF
  struct CResourceTable *v18; // [rsp+58h] [rbp+10h] BYREF
  CKeyframeAnimation *v19; // [rsp+68h] [rbp+20h] BYREF

  v18 = a2;
  if ( *((_QWORD *)this + 38) )
  {
    v8 = *((_DWORD *)a3 + 2);
    v9 = 1LL;
    if ( v8 && v8 - 1 > 1 )
    {
      v15 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x1A0u, 0LL);
      return v15;
    }
    v10 = *((_BYTE *)a3 + 24);
    v11 = *((_QWORD *)a3 + 2);
    if ( v8 > 2 )
    {
      v15 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x304u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1A7u, 0LL);
      return v15;
    }
    v12 = *((_DWORD *)this + 111) == 0;
    *((_DWORD *)this + 112) = v8;
    if ( v12 && v8 )
    {
      if ( v10 )
        v11 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 312LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 312LL))
                        + 24);
      *((_QWORD *)this + 47) = v11;
      *((_QWORD *)this + 48) = v11;
    }
    v13 = g_pComposition;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 816LL) + 417LL) = 1;
    v14 = *((_QWORD *)v13 + 110);
    if ( v14 == *((_QWORD *)v13 + 111) )
    {
      if ( v14 != -1 )
        v9 = v14 + 1;
      if ( v9 != v14 )
        ScheduleCompositionPass(0, 8u);
    }
  }
  else if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
  {
    v6 = *((_QWORD *)this + 7);
    if ( v6 )
    {
      v17 = *(void **)(v6 + 72);
      v7 = *(_DWORD *)(v6 + 28);
    }
    else
    {
      v17 = &unk_1802F34A8;
      v7 = 0;
    }
    LODWORD(v18) = v7;
    v19 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v6,
      (__int64)&unk_1803B4FCA,
      v4,
      v5,
      (__int64)&v19,
      (__int64)&v18,
      &v17);
  }
  return 0;
}
