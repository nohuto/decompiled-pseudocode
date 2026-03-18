/*
 * XREFs of ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180095980
 * Callers:
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x180096F40 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C64 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C80 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x180095C9C (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095CC8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180095D24 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095E0C (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095E5C (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@45555543AEBU?$_tlgWrapperByVal@$00@@3333333@Z @ 0x1801C3CB0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_1801C3CB0.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::TemporaryInteractionConfigurationUpdate(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  int v2; // ebx
  const struct _tlgProvider_t *v3; // rax
  const char *v4; // rax
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  int v10; // ecx
  int v11; // ecx
  const char *v12; // rax
  __int64 v13; // rcx
  __int64 updated; // rax
  __int64 v15; // r8
  const struct CInteraction *v16; // rdx
  __int64 v17; // rax
  const struct CInteraction *v18; // rdx
  const struct CInteraction *v19; // rdx
  __int64 v20; // rdx
  void *v21; // r8
  char v22; // r10
  unsigned __int8 v23; // al
  const struct CInteraction *v24; // rdx
  const char *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // r8d
  int v29; // r9d
  BOOL v30; // [rsp+D0h] [rbp-80h] BYREF
  int v31; // [rsp+D4h] [rbp-7Ch] BYREF
  int v32; // [rsp+D8h] [rbp-78h] BYREF
  void *InputHandle; // [rsp+E0h] [rbp-70h] BYREF
  const char *v34; // [rsp+E8h] [rbp-68h] BYREF
  const char *v35; // [rsp+F0h] [rbp-60h] BYREF
  const char *v36; // [rsp+F8h] [rbp-58h] BYREF
  const char *v37; // [rsp+100h] [rbp-50h] BYREF
  const char *v38; // [rsp+108h] [rbp-48h] BYREF
  const char *v39; // [rsp+110h] [rbp-40h] BYREF
  const char *v40; // [rsp+118h] [rbp-38h] BYREF
  __int64 v41; // [rsp+120h] [rbp-30h] BYREF
  __int64 v42; // [rsp+128h] [rbp-28h] BYREF
  const char *v43; // [rsp+130h] [rbp-20h] BYREF
  const char *v44; // [rsp+138h] [rbp-18h] BYREF
  __int64 v45; // [rsp+140h] [rbp-10h] BYREF
  __int64 v46; // [rsp+148h] [rbp-8h] BYREF
  __int64 v47[4]; // [rsp+150h] [rbp+0h] BYREF
  char v48; // [rsp+180h] [rbp+30h] BYREF
  int v49; // [rsp+188h] [rbp+38h] BYREF
  BOOL v50; // [rsp+190h] [rbp+40h] BYREF
  BOOL v51; // [rsp+198h] [rbp+48h] BYREF

  v2 = **((_DWORD **)a1 + 7);
  v3 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v3 > 4u
    && (*((_DWORD *)v3 + 4) & 0x800LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x800LL) == *((_QWORD *)v3 + 3) )
  {
    v4 = "Zoom-";
    if ( (v2 & 0x20) == 0 )
      v4 = word_1802F327A;
    v34 = v4;
    v5 = "Zoom+";
    if ( (v2 & 0x10) == 0 )
      v5 = word_1802F327A;
    v35 = v5;
    v6 = "PanY-";
    if ( (v2 & 8) == 0 )
      v6 = word_1802F327A;
    v36 = v6;
    v7 = "PanY+";
    if ( (v2 & 4) == 0 )
      v7 = word_1802F327A;
    v37 = v7;
    v8 = "PanX-";
    if ( (v2 & 2) == 0 )
      v8 = word_1802F327A;
    v38 = v8;
    v9 = "PanX+";
    if ( (v2 & 1) == 0 )
      v9 = word_1802F327A;
    v10 = *((_DWORD *)a1 + 11);
    v39 = v9;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          v12 = "Scale";
        else
          v12 = "UNKNOWN";
      }
      else
      {
        v12 = "Y";
      }
    }
    else
    {
      v12 = "X";
    }
    v13 = *((unsigned int *)a1 + 10);
    v40 = v12;
    v48 = *((_BYTE *)a1 + 64) & 1;
    updated = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v13);
    v16 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
    v41 = updated;
    if ( v16 )
      v17 = *((_QWORD *)v16 + 214);
    else
      v17 = v15;
    v42 = v17;
    v50 = InputTraceLogging::InteractionHoverSource(v16);
    v51 = InputTraceLogging::InteractionInputTransparency(v18);
    v30 = InputTraceLogging::InteractionFurtherProcessingForInput(v19);
    if ( v20 )
      v23 = v22 & *(_BYTE *)(v20 + 200);
    else
      v23 = (unsigned __int8)v21;
    v31 = v23;
    if ( v20 )
    {
      v49 = *(_DWORD *)(v20 + 196);
      InputHandle = CInteraction::GetInputHandle((CInteraction *)v20);
      LODWORD(v21) = *(_DWORD *)(v20 + 1720);
    }
    else
    {
      v49 = (int)v21;
      InputHandle = v21;
    }
    v32 = (int)v21;
    v43 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v20);
    v25 = InputTraceLogging::InteractionSourceTypeToString(v24);
    v26 = *(unsigned int *)a1;
    v44 = v25;
    v45 = v27;
    v46 = v27;
    v47[0] = InputTraceLogging::MidManipulationUpdateTypeToString(v26);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
      v29,
      (unsigned int)&unk_1803AFCEC,
      v28,
      v29,
      (__int64)v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v32,
      (__int64)&InputHandle,
      (__int64)&v49,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v48,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34);
  }
}
