/*
 * XREFs of ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x180092F10
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800944C4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180093EA0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180093FF8 (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C64 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C80 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095CC8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095E0C (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095E5C (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U4@U4@U4@U4@U1@U1@U3@U4@U3@U3@U3@U3@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@444444444AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@66663356555556@Z @ 0x1801A671C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@$03@@U.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1801B3240 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::DWM::HitTestTreeWalkResult(
        unsigned int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct CInteraction *a6)
{
  __int64 v10; // rax
  struct CInteraction *v11; // rbx
  __int64 v12; // r10
  __int64 v13; // rax
  void *v14; // rdx
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  const wchar_t *v22; // rax
  const wchar_t *v23; // rax
  const wchar_t *v24; // rax
  int v25; // r8d
  int v26; // r9d
  int v27; // r10d
  void *InputHandle; // rax
  int v29; // [rsp+100h] [rbp-80h] BYREF
  BOOL v30; // [rsp+104h] [rbp-7Ch] BYREF
  BOOL v31; // [rsp+108h] [rbp-78h] BYREF
  BOOL v32; // [rsp+10Ch] [rbp-74h] BYREF
  int v33; // [rsp+110h] [rbp-70h] BYREF
  int v34; // [rsp+114h] [rbp-6Ch] BYREF
  void *v35; // [rsp+118h] [rbp-68h] BYREF
  __int64 v36; // [rsp+120h] [rbp-60h] BYREF
  const char *v37; // [rsp+128h] [rbp-58h] BYREF
  const char *v38; // [rsp+130h] [rbp-50h] BYREF
  struct CInteraction *v39; // [rsp+138h] [rbp-48h] BYREF
  struct CInteraction *v40; // [rsp+140h] [rbp-40h] BYREF
  __int64 v41; // [rsp+148h] [rbp-38h] BYREF
  __int64 v42; // [rsp+150h] [rbp-30h] BYREF
  __int64 v43; // [rsp+158h] [rbp-28h] BYREF
  const wchar_t *v44; // [rsp+160h] [rbp-20h] BYREF
  const wchar_t *v45; // [rsp+168h] [rbp-18h] BYREF
  const wchar_t *v46; // [rsp+170h] [rbp-10h] BYREF
  const wchar_t *v47; // [rsp+178h] [rbp-8h] BYREF
  const wchar_t *v48; // [rsp+180h] [rbp+0h] BYREF
  const wchar_t *v49; // [rsp+188h] [rbp+8h] BYREF
  const wchar_t *v50; // [rsp+190h] [rbp+10h] BYREF
  const wchar_t *v51; // [rsp+198h] [rbp+18h] BYREF
  const wchar_t *v52; // [rsp+1A0h] [rbp+20h] BYREF
  const wchar_t *v53; // [rsp+1A8h] [rbp+28h] BYREF
  const char *v54; // [rsp+1B0h] [rbp+30h] BYREF

  v10 = wil::details::static_lazy<InputTraceLogging>::get();
  v11 = a6;
  v12 = *(_QWORD *)(v10 + 8);
  if ( *(_DWORD *)v12 > 4u && (*(_BYTE *)(v12 + 16) & 2) != 0 && (*(_QWORD *)(v12 + 24) & 2LL) == *(_QWORD *)(v12 + 24) )
  {
    if ( a6 )
      v13 = *((_QWORD *)a6 + 214);
    else
      v13 = 0LL;
    v36 = v13;
    v30 = InputTraceLogging::InteractionHoverSource(a6);
    v31 = InputTraceLogging::InteractionInputTransparency(v11);
    v32 = InputTraceLogging::InteractionFurtherProcessingForInput(v11);
    if ( v11 )
    {
      LODWORD(a6) = *((_BYTE *)v11 + 200) & 1;
      v29 = *((_DWORD *)v11 + 49);
      InputHandle = CInteraction::GetInputHandle(v11);
      LODWORD(v14) = *((_DWORD *)v11 + 430);
      v35 = InputHandle;
    }
    else
    {
      LODWORD(a6) = (_DWORD)v14;
      v29 = (int)v14;
      v35 = v14;
    }
    v33 = (int)v14;
    v37 = InputTraceLogging::InteractionDefaultToString(v11);
    v38 = InputTraceLogging::InteractionSourceTypeToString(v11);
    v41 = a5;
    v15 = L"HasCapture";
    if ( (a2 & 0x200) == 0 )
      v15 = (const wchar_t *)&unk_1802F34A8;
    v39 = v11;
    v44 = v15;
    v16 = L"ControlDown";
    v40 = v11;
    if ( (a2 & 0x100) == 0 )
      v16 = (const wchar_t *)&unk_1802F34A8;
    v42 = a4;
    v45 = v16;
    v17 = L"EraserDown";
    v43 = a3;
    if ( (a2 & 0x80u) == 0 )
      v17 = (const wchar_t *)&unk_1802F34A8;
    v34 = a2;
    v46 = v17;
    v18 = L"BarrelButtonDown";
    if ( (a2 & 0x40) == 0 )
      v18 = (const wchar_t *)&unk_1802F34A8;
    v47 = v18;
    v19 = L"NoHoverPointer";
    if ( (a2 & 0x20) == 0 )
      v19 = (const wchar_t *)&unk_1802F34A8;
    v48 = v19;
    v20 = L"TouchTargeting";
    if ( (a2 & 0x10) == 0 )
      v20 = (const wchar_t *)&unk_1802F34A8;
    v49 = v20;
    v21 = L"ButtonDown";
    if ( (a2 & 8) == 0 )
      v21 = (const wchar_t *)&unk_1802F34A8;
    v50 = v21;
    v22 = L"WheelHorizontal";
    if ( (a2 & 4) == 0 )
      v22 = (const wchar_t *)&unk_1802F34A8;
    v51 = v22;
    v23 = L"WheelIncreasing";
    if ( (a2 & 2) == 0 )
      v23 = (const wchar_t *)&unk_1802F34A8;
    v52 = v23;
    v24 = L"MouseWheel";
    if ( (a2 & 1) == 0 )
      v24 = (const wchar_t *)&unk_1802F34A8;
    v53 = v24;
    v54 = InputTraceLogging::PointerTypeToString(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v27,
      (unsigned int)&unk_1803B287B,
      v25,
      v26,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v34,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v33,
      (__int64)&v35,
      (__int64)&v29,
      (__int64)&a6,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v36);
  }
  if ( v11 )
    InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(v11);
}
