/*
 * XREFs of ??$InteractionConfigurationUpdate@UDwmPenInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18009521C
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

const struct _tlgProvider_t *__fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmPenInteractionConfigurationPrimitive>(
        unsigned int *a1)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // r14
  unsigned int v6; // esi
  const struct _tlgProvider_t *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
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
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 updated; // rax
  const struct CInteraction *v27; // rdx
  __int64 v28; // rax
  const struct CInteraction *v29; // rdx
  const struct CInteraction *v30; // rdx
  __int64 v31; // rdx
  unsigned __int8 v32; // al
  int v33; // eax
  const struct CInteraction *v34; // rdx
  const char *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  const struct CInteraction *v45; // rdx
  __int64 v46; // rax
  const struct CInteraction *v47; // rdx
  const struct CInteraction *v48; // rdx
  __int64 v49; // rdx
  unsigned __int8 v50; // al
  const struct CInteraction *v51; // rdx
  const char *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  int v55; // r8d
  int v56; // r9d
  BOOL v57; // [rsp+130h] [rbp-80h] BYREF
  int v58; // [rsp+134h] [rbp-7Ch] BYREF
  int v59; // [rsp+138h] [rbp-78h] BYREF
  BOOL v60; // [rsp+13Ch] [rbp-74h] BYREF
  void *InputHandle; // [rsp+140h] [rbp-70h] BYREF
  unsigned int v62; // [rsp+148h] [rbp-68h] BYREF
  unsigned int v63; // [rsp+14Ch] [rbp-64h] BYREF
  BOOL v64; // [rsp+150h] [rbp-60h] BYREF
  __int64 v65; // [rsp+158h] [rbp-58h] BYREF
  __int64 v66; // [rsp+160h] [rbp-50h] BYREF
  __int64 v67; // [rsp+168h] [rbp-48h] BYREF
  const char *v68; // [rsp+170h] [rbp-40h] BYREF
  const char *v69; // [rsp+178h] [rbp-38h] BYREF
  __int64 v70; // [rsp+180h] [rbp-30h] BYREF
  __int64 v71; // [rsp+188h] [rbp-28h] BYREF
  __int64 v72; // [rsp+190h] [rbp-20h] BYREF
  const char *v73; // [rsp+198h] [rbp-18h] BYREF
  const char *v74; // [rsp+1A0h] [rbp-10h] BYREF
  const char *v75; // [rsp+1A8h] [rbp-8h] BYREF
  const char *v76; // [rsp+1B0h] [rbp+0h] BYREF
  const char *v77; // [rsp+1B8h] [rbp+8h] BYREF
  const char *v78; // [rsp+1C0h] [rbp+10h] BYREF
  const char *v79; // [rsp+1C8h] [rbp+18h] BYREF
  const char *v80; // [rsp+1D0h] [rbp+20h] BYREF
  const char *v81; // [rsp+1D8h] [rbp+28h] BYREF
  const char *v82; // [rsp+1E0h] [rbp+30h] BYREF
  const char *v83; // [rsp+1E8h] [rbp+38h] BYREF
  const char *v84; // [rsp+1F0h] [rbp+40h] BYREF
  const char *v85; // [rsp+1F8h] [rbp+48h] BYREF
  const char *v86; // [rsp+200h] [rbp+50h] BYREF
  int v87; // [rsp+258h] [rbp+A8h] BYREF
  unsigned int v88; // [rsp+260h] [rbp+B0h] BYREF
  int v89; // [rsp+268h] [rbp+B8h] BYREF

  result = InputTraceLogging::Provider();
  v4 = 0;
  if ( *(_DWORD *)result )
  {
    result = (const struct _tlgProvider_t *)tlgKeywordOn(result, 2048LL, v3);
    if ( (_BYTE)result )
    {
      v5 = *((_QWORD *)a1 + 7);
      if ( a1[12] )
      {
        v6 = 0;
        do
        {
          result = InputTraceLogging::Provider();
          v7 = result;
          if ( *(_DWORD *)result > 4u
            && (*((_DWORD *)result + 4) & 0x800LL) != 0
            && (*((_QWORD *)result + 3) & 0x800LL) == *((_QWORD *)result + 3) )
          {
            v62 = v6;
            v8 = *(unsigned int *)(v5 + 12LL * v6 + 8);
            v88 = *(_DWORD *)(v5 + 12LL * v6 + 4);
            v9 = a1[11];
            v89 = *(_DWORD *)(v5 + 12LL * v6);
            v10 = "StopInertia";
            if ( (v8 & 0x20000000) == 0 )
              v10 = word_1802F327A;
            v73 = v10;
            v11 = "DisableGestures";
            if ( (v8 & 0x10000000) == 0 )
              v11 = word_1802F327A;
            v74 = v11;
            v12 = "Wheel";
            if ( (v8 & 0x8000) == 0 )
              v12 = word_1802F327A;
            v75 = v12;
            v13 = "Hover";
            if ( (v8 & 0x400) == 0 )
              v13 = word_1802F327A;
            v76 = v13;
            v14 = "Eraser";
            if ( (v8 & 0x200) == 0 )
              v14 = word_1802F327A;
            v77 = v14;
            v15 = "Button";
            if ( (v8 & 0x100) == 0 )
              v15 = word_1802F327A;
            v78 = v15;
            v16 = "Hold";
            if ( (v8 & 0x80u) == 0LL )
              v16 = word_1802F327A;
            v79 = v16;
            v17 = "Tap";
            if ( (v8 & 0x40) == 0 )
              v17 = word_1802F327A;
            v80 = v17;
            v18 = "Zoom-";
            if ( (v8 & 0x20) == 0 )
              v18 = word_1802F327A;
            v81 = v18;
            v19 = "Zoom+";
            if ( (v8 & 0x10) == 0 )
              v19 = word_1802F327A;
            v82 = v19;
            v20 = "PanY-";
            if ( (v8 & 8) == 0 )
              v20 = word_1802F327A;
            v83 = v20;
            v21 = "PanY+";
            if ( (v8 & 4) == 0 )
              v21 = word_1802F327A;
            v84 = v21;
            v22 = "PanX-";
            if ( (v8 & 2) == 0 )
              v22 = word_1802F327A;
            v85 = v22;
            v23 = "PanX+";
            if ( (v8 & 1) == 0 )
              v23 = word_1802F327A;
            v86 = v23;
            v63 = a1[12];
            v24 = InputTraceLogging::InteractionInputTypeToString(v9, v8, v7);
            v25 = a1[10];
            v65 = v24;
            updated = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v25);
            v27 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
            v66 = updated;
            if ( v27 )
              v28 = *((_QWORD *)v27 + 214);
            else
              v28 = 0LL;
            v67 = v28;
            v64 = InputTraceLogging::InteractionHoverSource(v27);
            v57 = InputTraceLogging::InteractionInputTransparency(v29);
            v58 = InputTraceLogging::InteractionFurtherProcessingForInput(v30);
            if ( v31 )
              v32 = *(_BYTE *)(v31 + 200) & 1;
            else
              v32 = 0;
            v59 = v32;
            if ( v31 )
            {
              v87 = *(_DWORD *)(v31 + 196);
              InputHandle = CInteraction::GetInputHandle((CInteraction *)v31);
              v33 = *(_DWORD *)(v31 + 1720);
            }
            else
            {
              v87 = 0;
              v33 = 0;
              InputHandle = 0LL;
            }
            v60 = v33;
            v68 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v31);
            v35 = InputTraceLogging::InteractionSourceTypeToString(v34);
            v36 = *a1;
            v69 = v35;
            v70 = v37;
            v71 = v37;
            v72 = InputTraceLogging::MidManipulationUpdateTypeToString(v36);
            result = (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                                      v38,
                                                      (unsigned int)&unk_1803AF07A,
                                                      v38,
                                                      v39,
                                                      (__int64)&v72,
                                                      (__int64)&v71,
                                                      (__int64)&v70,
                                                      (__int64)&v69,
                                                      (__int64)&v68,
                                                      (__int64)&v60,
                                                      (__int64)&InputHandle,
                                                      (__int64)&v87,
                                                      (__int64)&v59,
                                                      (__int64)&v58,
                                                      (__int64)&v57,
                                                      (__int64)&v64,
                                                      (__int64)&v67,
                                                      (__int64)&v66,
                                                      (__int64)&v65,
                                                      (__int64)&v63,
                                                      (__int64)&v62,
                                                      (__int64)&v86,
                                                      (__int64)&v85,
                                                      (__int64)&v84,
                                                      (__int64)&v83,
                                                      (__int64)&v82,
                                                      (__int64)&v81,
                                                      (__int64)&v80,
                                                      (__int64)&v79,
                                                      (__int64)&v78,
                                                      (__int64)&v77,
                                                      (__int64)&v76,
                                                      (__int64)&v75,
                                                      (__int64)&v74,
                                                      (__int64)&v73,
                                                      (__int64)&v89,
                                                      (__int64)&v88);
          }
          ++v6;
        }
        while ( v6 < a1[12] );
      }
      else
      {
        result = InputTraceLogging::Provider();
        if ( *(_DWORD *)result > 4u
          && (*((_DWORD *)result + 4) & 0x800LL) != 0
          && (*((_QWORD *)result + 3) & 0x800LL) == *((_QWORD *)result + 3) )
        {
          v41 = a1[11];
          v88 = a1[12];
          v42 = InputTraceLogging::InteractionInputTypeToString(v41, v40, result);
          v43 = a1[10];
          v72 = v42;
          v44 = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v43);
          v45 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
          v71 = v44;
          if ( v45 )
            v46 = *((_QWORD *)v45 + 214);
          else
            v46 = 0LL;
          v70 = v46;
          v89 = InputTraceLogging::InteractionHoverSource(v45);
          v60 = InputTraceLogging::InteractionInputTransparency(v47);
          v59 = InputTraceLogging::InteractionFurtherProcessingForInput(v48);
          if ( v49 )
            v50 = *(_BYTE *)(v49 + 200) & 1;
          else
            v50 = 0;
          v58 = v50;
          if ( v49 )
          {
            v87 = *(_DWORD *)(v49 + 196);
            InputHandle = CInteraction::GetInputHandle((CInteraction *)v49);
            v4 = *(_DWORD *)(v49 + 1720);
          }
          else
          {
            v87 = 0;
            InputHandle = 0LL;
          }
          v57 = v4;
          v69 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v49);
          v52 = InputTraceLogging::InteractionSourceTypeToString(v51);
          v53 = *a1;
          v68 = v52;
          v67 = v54;
          v66 = v54;
          v65 = InputTraceLogging::MidManipulationUpdateTypeToString(v53);
          return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                                                  v55,
                                                  (unsigned int)&unk_1803AEF59,
                                                  v55,
                                                  v56,
                                                  (__int64)&v65,
                                                  (__int64)&v66,
                                                  (__int64)&v67,
                                                  (__int64)&v68,
                                                  (__int64)&v69,
                                                  (__int64)&v57,
                                                  (__int64)&InputHandle,
                                                  (__int64)&v87,
                                                  (__int64)&v58,
                                                  (__int64)&v59,
                                                  (__int64)&v60,
                                                  (__int64)&v89,
                                                  (__int64)&v70,
                                                  (__int64)&v71,
                                                  (__int64)&v72,
                                                  (__int64)&v88);
        }
      }
    }
  }
  return result;
}
