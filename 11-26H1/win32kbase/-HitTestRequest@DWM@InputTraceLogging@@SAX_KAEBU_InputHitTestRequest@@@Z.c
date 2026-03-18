/*
 * XREFs of ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x140070D74
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140070610 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@U?$_tlgWrapSz@G@@U4@U4@U4@U4@U4@U4@U4@U4@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@44AEBU?$_tlgWrapSz@G@@666666664344@Z @ 0x140002450 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U2@U-$_tlgWrapSz@.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400F4E24 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::DWM::HitTestRequest(__int64 a1, const struct _InputHitTestRequest *a2)
{
  int v2; // ecx
  const WCHAR *v3; // rax
  const WCHAR *v4; // rax
  const WCHAR *v5; // rax
  const WCHAR *v6; // rax
  const WCHAR *v7; // rax
  const WCHAR *v8; // rax
  const WCHAR *v9; // rax
  const WCHAR *v10; // rax
  bool v11; // zf
  unsigned int v12; // ecx
  const WCHAR *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // [rsp+B0h] [rbp-80h] BYREF
  int v18; // [rsp+B4h] [rbp-7Ch] BYREF
  int v19; // [rsp+B8h] [rbp-78h] BYREF
  int v20; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-70h] BYREF
  const WCHAR *v22; // [rsp+C8h] [rbp-68h] BYREF
  const WCHAR *v23; // [rsp+D0h] [rbp-60h] BYREF
  const WCHAR *v24; // [rsp+D8h] [rbp-58h] BYREF
  const WCHAR *v25; // [rsp+E0h] [rbp-50h] BYREF
  const WCHAR *v26; // [rsp+E8h] [rbp-48h] BYREF
  const WCHAR *v27; // [rsp+F0h] [rbp-40h] BYREF
  const WCHAR *v28; // [rsp+F8h] [rbp-38h] BYREF
  const WCHAR *v29; // [rsp+100h] [rbp-30h] BYREF
  const WCHAR *v30; // [rsp+108h] [rbp-28h] BYREF
  const char *v31; // [rsp+110h] [rbp-20h] BYREF
  __int64 v32; // [rsp+118h] [rbp-18h] BYREF
  int v33; // [rsp+140h] [rbp+10h] BYREF
  int v34; // [rsp+148h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 2) != 0 && (qword_1402A9E58 & 2) == qword_1402A9E58 )
  {
    v2 = *((_DWORD *)a2 + 16);
    v33 = *((_DWORD *)a2 + 14);
    v34 = *((_DWORD *)a2 + 19);
    v21 = *(_QWORD *)((char *)a2 + 68);
    v3 = L"ControlDown";
    if ( (v2 & 0x100) == 0 )
      v3 = &word_14026AF94;
    v17 = v2;
    v22 = v3;
    v4 = L"EraserDown";
    if ( (v2 & 0x80u) == 0 )
      v4 = &word_14026AF94;
    v23 = v4;
    v5 = L"BarrelButtonDown";
    if ( (v2 & 0x40) == 0 )
      v5 = &word_14026AF94;
    v24 = v5;
    v6 = L"NoHoverPointer";
    if ( (v2 & 0x20) == 0 )
      v6 = &word_14026AF94;
    v25 = v6;
    v7 = L"TouchTargeting";
    if ( (v2 & 0x10) == 0 )
      v7 = &word_14026AF94;
    v26 = v7;
    v8 = L"ButtonDown";
    if ( (v2 & 8) == 0 )
      v8 = &word_14026AF94;
    v27 = v8;
    v9 = L"WheelHorizontal";
    if ( (v2 & 4) == 0 )
      v9 = &word_14026AF94;
    v28 = v9;
    v10 = L"WheelIncreasing";
    if ( (v2 & 2) == 0 )
      v10 = &word_14026AF94;
    v11 = (v2 & 1) == 0;
    v12 = *(_DWORD *)a2;
    v29 = v10;
    v13 = L"MouseWheel";
    if ( v11 )
      v13 = &word_14026AF94;
    v30 = v13;
    v18 = *((_DWORD *)a2 + 6);
    v19 = *((_DWORD *)a2 + 5);
    v31 = InputTraceLogging::PointerTypeToString(v12);
    v20 = *(_DWORD *)(v14 + 12);
    v32 = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1402A9E40,
      (__int64)&unk_14028BD93,
      v16,
      v15,
      (__int64)&v32,
      (__int64)&v20,
      (void **)&v31,
      (__int64)&v19,
      (__int64)&v18,
      &v30,
      &v29,
      &v28,
      &v27,
      &v26,
      &v25,
      &v24,
      &v23,
      &v22,
      (__int64)&v17,
      (__int64)&v21,
      (__int64)&v34,
      (__int64)&v33);
  }
}
