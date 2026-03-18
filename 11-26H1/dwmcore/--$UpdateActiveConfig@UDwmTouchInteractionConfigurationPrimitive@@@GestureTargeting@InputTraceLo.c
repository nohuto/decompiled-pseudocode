/*
 * XREFs of ??$UpdateActiveConfig@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXAEBUDwmTouchInteractionConfigurationPrimitive@@@Z @ 0x1801A5748
 * Callers:
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAXAEBUDwmTouchInteractionConfigurationPrimitive@@@Z @ 0x1801A5614 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlags.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3333333333333AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@D@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall InputTraceLogging::GestureTargeting::UpdateActiveConfig<DwmTouchInteractionConfigurationPrimitive>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  int v5; // edx
  int v6; // ecx
  const char *v7; // rax
  const char *v8; // rax
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
  const char *v21; // [rsp+A0h] [rbp-80h] BYREF
  const char *v22; // [rsp+A8h] [rbp-78h] BYREF
  const char *v23; // [rsp+B0h] [rbp-70h] BYREF
  const char *v24; // [rsp+B8h] [rbp-68h] BYREF
  const char *v25; // [rsp+C0h] [rbp-60h] BYREF
  const char *v26; // [rsp+C8h] [rbp-58h] BYREF
  const char *v27; // [rsp+D0h] [rbp-50h] BYREF
  const char *v28; // [rsp+D8h] [rbp-48h] BYREF
  const char *v29; // [rsp+E0h] [rbp-40h] BYREF
  const char *v30; // [rsp+E8h] [rbp-38h] BYREF
  const char *v31; // [rsp+F0h] [rbp-30h] BYREF
  const char *v32; // [rsp+F8h] [rbp-28h] BYREF
  const char *v33; // [rsp+100h] [rbp-20h] BYREF
  const char *v34; // [rsp+138h] [rbp+18h] BYREF

  result = (__int64)InputTraceLogging::Provider();
  v4 = result;
  if ( *(_DWORD *)result > 4u )
  {
    v5 = *(_DWORD *)(result + 16);
    result = 2048LL;
    if ( (v5 & 0x800) != 0 && (*(_QWORD *)(v4 + 24) & 0x800LL) == *(_QWORD *)(v4 + 24) )
    {
      v6 = *(_DWORD *)(a1 + 8);
      v7 = "StopInertia";
      if ( (v6 & 0x20000000) == 0 )
        v7 = word_1802F327A;
      v34 = v7;
      v8 = "DisableGestures";
      if ( (v6 & 0x10000000) == 0 )
        v8 = word_1802F327A;
      v21 = v8;
      v9 = "Wheel";
      if ( (v6 & 0x8000) == 0 )
        v9 = word_1802F327A;
      v22 = v9;
      v10 = "Hover";
      if ( (v6 & 0x400) == 0 )
        v10 = word_1802F327A;
      v23 = v10;
      v11 = "Eraser";
      if ( (v6 & 0x200) == 0 )
        v11 = word_1802F327A;
      v24 = v11;
      v12 = "Button";
      if ( (v6 & 0x100) == 0 )
        v12 = word_1802F327A;
      v25 = v12;
      v13 = "Hold";
      if ( (v6 & 0x80u) == 0 )
        v13 = word_1802F327A;
      v26 = v13;
      v14 = "Tap";
      if ( (v6 & 0x40) == 0 )
        v14 = word_1802F327A;
      v27 = v14;
      v15 = "Zoom-";
      if ( (v6 & 0x20) == 0 )
        v15 = word_1802F327A;
      v28 = v15;
      v16 = "Zoom+";
      if ( (v6 & 0x10) == 0 )
        v16 = word_1802F327A;
      v29 = v16;
      v17 = "PanY-";
      if ( (v6 & 8) == 0 )
        v17 = word_1802F327A;
      v30 = v17;
      v18 = "PanY+";
      if ( (v6 & 4) == 0 )
        v18 = word_1802F327A;
      v31 = v18;
      v19 = "PanX-";
      if ( (v6 & 2) == 0 )
        v19 = word_1802F327A;
      v32 = v19;
      v20 = "PanX+";
      if ( (v6 & 1) == 0 )
        v20 = word_1802F327A;
      v33 = v20;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               v4,
               (__int64)&unk_1803B0EFA,
               v4,
               v3,
               &v33,
               &v32,
               &v31,
               &v30,
               &v29,
               &v28,
               &v27,
               &v26,
               &v25,
               &v24,
               &v23,
               &v22,
               &v21,
               &v34);
    }
  }
  return result;
}
