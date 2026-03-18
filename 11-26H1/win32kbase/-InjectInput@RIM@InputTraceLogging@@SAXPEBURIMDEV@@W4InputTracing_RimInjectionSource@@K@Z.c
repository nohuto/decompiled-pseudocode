/*
 * XREFs of ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401557FC
 * Callers:
 *     RIMIDE_InjectGenericHidInput @ 0x14005FCEC (RIMIDE_InjectGenericHidInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1401546A0 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectDeviceInput @ 0x140154A10 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x140154EE8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     SynthesizeMitTouchInput @ 0x140220114 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1402204A8 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140002CBC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@44AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140002D80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWrit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140005CC0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?PointerInjectionType@InputTraceLogging@@CAPEBDW4tagPOINTER_INJECTION_TYPE@@@Z @ 0x1400F3A50 (-PointerInjectionType@InputTraceLogging@@CAPEBDW4tagPOINTER_INJECTION_TYPE@@@Z.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400F4F78 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z @ 0x140155D18 (-InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z.c)
 */

char __fastcall InputTraceLogging::RIM::InjectInput(__int64 a1, unsigned int a2, int a3)
{
  int v3; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  const char *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // r10d
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // r8d
  __int64 v14; // r9
  unsigned int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rdx
  __int64 v20; // r9
  unsigned int v21; // r10d
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r8
  const char *v26; // [rsp+50h] [rbp-20h] BYREF
  const char *v27; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h] BYREF
  __int64 v29; // [rsp+68h] [rbp-8h] BYREF
  int v30; // [rsp+80h] [rbp+10h] BYREF
  __int64 v31; // [rsp+98h] [rbp+28h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  if ( v3 == 2 )
  {
    v3 = *(_DWORD *)(a1 + 184);
    if ( (v3 & 0x80u) == 0 )
    {
      if ( (unsigned int)dword_1402A9E40 > 4 )
      {
        LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1402A9E40, 256LL);
        if ( (_BYTE)v3 )
        {
          v22 = *(_QWORD *)(v20 + 448);
          v30 = *(unsigned __int16 *)(v22 + 18);
          LODWORD(v31) = *(unsigned __int16 *)(v22 + 16);
          v29 = InputTraceLogging::InjectionSourceToString(v21);
          v28 = v23;
          LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                         (__int64)&dword_1402A9E40,
                         (__int64)&unk_1402859AA,
                         v24,
                         v23,
                         (__int64)&v28,
                         (void **)&v29,
                         (__int64)&v31,
                         (__int64)&v30);
        }
      }
    }
    else if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x100) != 0 )
    {
      LOBYTE(v3) = 0;
      if ( (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
      {
        v5 = *(_QWORD *)(a1 + 448);
        v6 = *(_QWORD *)(a1 + 456);
        v30 = *(unsigned __int16 *)(v5 + 18);
        LODWORD(v31) = *(unsigned __int16 *)(v5 + 16);
        v7 = InputTraceLogging::PointerInjectionType(*(_DWORD *)(v6 + 364));
        v9 = *(_DWORD *)(v8 + 24);
        v26 = v7;
        v27 = InputTraceLogging::PointerDeviceTypeToString(v9);
        v28 = InputTraceLogging::InjectionSourceToString(v10);
        v29 = v11;
        LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                       (__int64)&dword_1402A9E40,
                       (__int64)&unk_14028593E,
                       v12,
                       v11,
                       (__int64)&v29,
                       (void **)&v28,
                       (void **)&v27,
                       (void **)&v26,
                       (__int64)&v31,
                       (__int64)&v30);
      }
    }
  }
  else
  {
    if ( !v3 )
    {
      if ( (unsigned int)dword_1402A9E40 <= 4 )
        return v3;
      if ( (qword_1402A9E50 & 0x100) == 0 )
        return v3;
      LOBYTE(v3) = 0;
      if ( (qword_1402A9E58 & 0x100) != qword_1402A9E58 )
        return v3;
      v30 = a3;
      v31 = a1;
      v16 = InputTraceLogging::InjectionSourceToString(a2);
      v19 = &unk_1402859F0;
LABEL_16:
      v29 = v16;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                     (__int64)&dword_1402A9E40,
                     (__int64)v19,
                     v17,
                     v18,
                     (void **)&v29,
                     (__int64)&v31,
                     (__int64)&v30);
      return v3;
    }
    if ( v3 == 1 && (unsigned int)dword_1402A9E40 > 4 )
    {
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1402A9E40, 256LL);
      if ( (_BYTE)v3 )
      {
        v30 = v13;
        v31 = v14;
        v16 = InputTraceLogging::InjectionSourceToString(v15);
        v19 = &unk_140285A2D;
        goto LABEL_16;
      }
    }
  }
  return v3;
}
