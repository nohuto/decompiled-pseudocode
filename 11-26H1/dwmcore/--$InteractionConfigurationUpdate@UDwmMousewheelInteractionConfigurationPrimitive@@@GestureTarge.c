/*
 * XREFs of ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180097E80
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800971D8 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C64 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C80 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x180095C9C (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095CC8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180095D24 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z @ 0x180095DB4 (-InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095E0C (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095E5C (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U1@U3@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@455555433553333333333333355@Z @ 0x1800966B8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_1800966B8.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554335@Z @ 0x180096CD0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_180096CD0.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 */

const struct _tlgProvider_t *__fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMousewheelInteractionConfigurationPrimitive>(
        __int64 a1)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // r14
  unsigned int v6; // esi
  int v7; // edx
  int v8; // ecx
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  const char *v20; // rax
  const char *v21; // rax
  const char *v22; // rax
  const char *v23; // rax
  int v24; // ecx
  const char *updated; // rax
  const struct CInteraction *v26; // rdx
  const char *v27; // rax
  const struct CInteraction *v28; // rdx
  const struct CInteraction *v29; // rdx
  __int64 v30; // rdx
  unsigned __int8 v31; // al
  int v32; // eax
  const struct CInteraction *v33; // rdx
  const char *v34; // rax
  int v35; // ecx
  const char *v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  const char *v39; // rax
  int v40; // ecx
  const char *v41; // rax
  const struct CInteraction *v42; // rdx
  const char *v43; // rax
  const struct CInteraction *v44; // rdx
  const struct CInteraction *v45; // rdx
  __int64 v46; // rdx
  unsigned __int8 v47; // al
  const struct CInteraction *v48; // rdx
  const char *v49; // rax
  int v50; // ecx
  const char *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  BOOL v54; // [rsp+130h] [rbp-80h] BYREF
  int v55; // [rsp+134h] [rbp-7Ch] BYREF
  int v56; // [rsp+138h] [rbp-78h] BYREF
  BOOL v57; // [rsp+13Ch] [rbp-74h] BYREF
  _QWORD *InputHandle; // [rsp+140h] [rbp-70h] BYREF
  unsigned int v59; // [rsp+148h] [rbp-68h] BYREF
  int v60; // [rsp+14Ch] [rbp-64h] BYREF
  BOOL v61; // [rsp+150h] [rbp-60h] BYREF
  const char *v62; // [rsp+158h] [rbp-58h] BYREF
  const char *v63; // [rsp+160h] [rbp-50h] BYREF
  const char *v64; // [rsp+168h] [rbp-48h] BYREF
  const char *v65; // [rsp+170h] [rbp-40h] BYREF
  const char *v66; // [rsp+178h] [rbp-38h] BYREF
  const char *v67; // [rsp+180h] [rbp-30h] BYREF
  const char *v68; // [rsp+188h] [rbp-28h] BYREF
  const char *v69; // [rsp+190h] [rbp-20h] BYREF
  const char *v70; // [rsp+198h] [rbp-18h] BYREF
  const char *v71; // [rsp+1A0h] [rbp-10h] BYREF
  const char *v72; // [rsp+1A8h] [rbp-8h] BYREF
  const char *v73; // [rsp+1B0h] [rbp+0h] BYREF
  const char *v74; // [rsp+1B8h] [rbp+8h] BYREF
  const char *v75; // [rsp+1C0h] [rbp+10h] BYREF
  const char *v76; // [rsp+1C8h] [rbp+18h] BYREF
  const char *v77; // [rsp+1D0h] [rbp+20h] BYREF
  const char *v78; // [rsp+1D8h] [rbp+28h] BYREF
  const char *v79; // [rsp+1E0h] [rbp+30h] BYREF
  const char *v80; // [rsp+1E8h] [rbp+38h] BYREF
  const char *v81; // [rsp+1F0h] [rbp+40h] BYREF
  const char *v82; // [rsp+1F8h] [rbp+48h] BYREF
  const char *v83; // [rsp+200h] [rbp+50h] BYREF
  int v84; // [rsp+258h] [rbp+A8h] BYREF
  int v85; // [rsp+260h] [rbp+B0h]
  int v86; // [rsp+268h] [rbp+B8h] BYREF

  result = InputTraceLogging::Provider();
  v4 = 0;
  if ( *(_DWORD *)result )
  {
    result = (const struct _tlgProvider_t *)tlgKeywordOn(result, 2048LL, v3);
    if ( (_BYTE)result )
    {
      v5 = *(_QWORD *)(a1 + 56);
      if ( *(_DWORD *)(a1 + 48) )
      {
        v6 = 0;
        do
        {
          result = InputTraceLogging::Provider();
          if ( *(_DWORD *)result > 4u
            && (*((_DWORD *)result + 4) & 0x800LL) != 0
            && (*((_QWORD *)result + 3) & 0x800LL) == *((_QWORD *)result + 3) )
          {
            v59 = v6;
            v7 = *(_DWORD *)(v5 + 12LL * v6 + 8);
            v85 = *(_DWORD *)(v5 + 12LL * v6 + 4);
            v8 = *(_DWORD *)(a1 + 44);
            v86 = *(_DWORD *)(v5 + 12LL * v6);
            v9 = "StopInertia";
            if ( (v7 & 0x20000000) == 0 )
              v9 = word_1802F327A;
            v70 = v9;
            v10 = "DisableGestures";
            if ( (v7 & 0x10000000) == 0 )
              v10 = word_1802F327A;
            v71 = v10;
            v11 = "Wheel";
            if ( (v7 & 0x8000) == 0 )
              v11 = word_1802F327A;
            v72 = v11;
            v12 = "Hover";
            if ( (v7 & 0x400) == 0 )
              v12 = word_1802F327A;
            v73 = v12;
            v13 = "Eraser";
            if ( (v7 & 0x200) == 0 )
              v13 = word_1802F327A;
            v74 = v13;
            v14 = "Button";
            if ( (v7 & 0x100) == 0 )
              v14 = word_1802F327A;
            v75 = v14;
            v15 = "Hold";
            if ( (v7 & 0x80u) == 0 )
              v15 = word_1802F327A;
            v76 = v15;
            v16 = "Tap";
            if ( (v7 & 0x40) == 0 )
              v16 = word_1802F327A;
            v77 = v16;
            v17 = "Zoom-";
            if ( (v7 & 0x20) == 0 )
              v17 = word_1802F327A;
            v78 = v17;
            v18 = "Zoom+";
            if ( (v7 & 0x10) == 0 )
              v18 = word_1802F327A;
            v79 = v18;
            v19 = "PanY-";
            if ( (v7 & 8) == 0 )
              v19 = word_1802F327A;
            v80 = v19;
            v20 = "PanY+";
            if ( (v7 & 4) == 0 )
              v20 = word_1802F327A;
            v81 = v20;
            v21 = "PanX-";
            if ( (v7 & 2) == 0 )
              v21 = word_1802F327A;
            v82 = v21;
            v22 = "PanX+";
            if ( (v7 & 1) == 0 )
              v22 = word_1802F327A;
            v83 = v22;
            v60 = *(_DWORD *)(a1 + 48);
            v23 = InputTraceLogging::InteractionInputTypeToString(v8);
            v24 = *(_DWORD *)(a1 + 40);
            v62 = v23;
            updated = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v24);
            v26 = *(const struct CInteraction **)(a1 + 16);
            v63 = updated;
            if ( v26 )
              v27 = (const char *)*((_QWORD *)v26 + 214);
            else
              v27 = 0LL;
            v64 = v27;
            v61 = InputTraceLogging::InteractionHoverSource(v26);
            v54 = InputTraceLogging::InteractionInputTransparency(v28);
            v55 = InputTraceLogging::InteractionFurtherProcessingForInput(v29);
            if ( v30 )
              v31 = *(_BYTE *)(v30 + 200) & 1;
            else
              v31 = 0;
            v56 = v31;
            if ( v30 )
            {
              v84 = *(_DWORD *)(v30 + 196);
              InputHandle = CInteraction::GetInputHandle((CInteraction *)v30);
              v32 = *(_DWORD *)(v30 + 1720);
            }
            else
            {
              v84 = 0;
              v32 = 0;
              InputHandle = 0LL;
            }
            v57 = v32;
            v65 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v30);
            v34 = InputTraceLogging::InteractionSourceTypeToString(v33);
            v35 = *(_DWORD *)a1;
            v66 = v34;
            v67 = v36;
            v68 = v36;
            v69 = InputTraceLogging::MidManipulationUpdateTypeToString(v35);
            result = (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                                      v37,
                                                      (__int64)&unk_1803AEA3C,
                                                      v37,
                                                      v38,
                                                      &v69,
                                                      (__int64)&v68,
                                                      (__int64)&v67,
                                                      &v66,
                                                      &v65,
                                                      (__int64)&v57,
                                                      (__int64)&InputHandle,
                                                      (__int64)&v84,
                                                      (__int64)&v56,
                                                      (__int64)&v55,
                                                      (__int64)&v54,
                                                      (__int64)&v61,
                                                      (__int64)&v64,
                                                      &v63,
                                                      &v62,
                                                      (__int64)&v60,
                                                      (__int64)&v59,
                                                      &v83,
                                                      &v82,
                                                      &v81,
                                                      &v80,
                                                      &v79,
                                                      &v78,
                                                      &v77,
                                                      &v76,
                                                      &v75,
                                                      &v74,
                                                      &v73,
                                                      &v72,
                                                      &v71,
                                                      &v70);
          }
          ++v6;
        }
        while ( v6 < *(_DWORD *)(a1 + 48) );
      }
      else
      {
        result = InputTraceLogging::Provider();
        if ( *(_DWORD *)result > 4u )
        {
          result = (const struct _tlgProvider_t *)tlgKeywordOn(result, 2048LL, result);
          if ( (_BYTE)result )
          {
            v85 = *(_DWORD *)(a1 + 48);
            v39 = InputTraceLogging::InteractionInputTypeToString(*(_DWORD *)(a1 + 44));
            v40 = *(_DWORD *)(a1 + 40);
            v69 = v39;
            v41 = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v40);
            v42 = *(const struct CInteraction **)(a1 + 16);
            v68 = v41;
            if ( v42 )
              v43 = (const char *)*((_QWORD *)v42 + 214);
            else
              v43 = 0LL;
            v67 = v43;
            v86 = InputTraceLogging::InteractionHoverSource(v42);
            v57 = InputTraceLogging::InteractionInputTransparency(v44);
            v56 = InputTraceLogging::InteractionFurtherProcessingForInput(v45);
            if ( v46 )
              v47 = *(_BYTE *)(v46 + 200) & 1;
            else
              v47 = 0;
            v55 = v47;
            if ( v46 )
            {
              v84 = *(_DWORD *)(v46 + 196);
              InputHandle = CInteraction::GetInputHandle((CInteraction *)v46);
              v4 = *(_DWORD *)(v46 + 1720);
            }
            else
            {
              v84 = 0;
              InputHandle = 0LL;
            }
            v54 = v4;
            v66 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v46);
            v49 = InputTraceLogging::InteractionSourceTypeToString(v48);
            v50 = *(_DWORD *)a1;
            v65 = v49;
            v64 = v51;
            v63 = v51;
            v62 = InputTraceLogging::MidManipulationUpdateTypeToString(v50);
            return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                                                    v52,
                                                    (__int64)&unk_1803AE91B,
                                                    v52,
                                                    v53,
                                                    &v62,
                                                    (__int64)&v63,
                                                    (__int64)&v64,
                                                    &v65,
                                                    &v66,
                                                    (__int64)&v54,
                                                    (__int64)&InputHandle,
                                                    (__int64)&v84,
                                                    (__int64)&v55,
                                                    (__int64)&v56,
                                                    (__int64)&v57,
                                                    (__int64)&v86,
                                                    (__int64)&v67,
                                                    &v68,
                                                    &v69);
          }
        }
      }
    }
  }
  return result;
}
