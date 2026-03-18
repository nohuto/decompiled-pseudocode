/*
 * XREFs of ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D5E2C
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14017E400 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMMarkSiblingMouseDevice @ 0x14017F7BC (RIMMarkSiblingMouseDevice.c)
 *     RIMApiSetCheckForLegacyTouchPad @ 0x140180798 (RIMApiSetCheckForLegacyTouchPad.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1401EC504 (RIMSetExtendedPointerDeviceProperty.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444444444444@Z @ 0x140004174 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_140004174.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1400043D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140079F08 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?LegacyFlagsToString@InputTraceLogging@@CAPEBDG@Z @ 0x1401D5DB8 (-LegacyFlagsToString@InputTraceLogging@@CAPEBDG@Z.c)
 *     Feature_TouchpadProps__private_IsEnabledDeviceUsageNoInline @ 0x1401D6590 (Feature_TouchpadProps__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall InputTraceLogging::RIM::RimDeviceExtendedProps(const struct RIMDEV *a1)
{
  _DWORD *v2; // r8
  __int64 v3; // r9
  int v4; // eax
  char v5; // cf
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+F0h] [rbp-80h] BYREF
  int v11; // [rsp+F4h] [rbp-7Ch] BYREF
  int v12; // [rsp+F8h] [rbp-78h] BYREF
  int v13; // [rsp+FCh] [rbp-74h] BYREF
  int v14; // [rsp+100h] [rbp-70h] BYREF
  int v15; // [rsp+104h] [rbp-6Ch] BYREF
  int v16; // [rsp+108h] [rbp-68h] BYREF
  int v17; // [rsp+10Ch] [rbp-64h] BYREF
  int v18; // [rsp+110h] [rbp-60h] BYREF
  int v19; // [rsp+114h] [rbp-5Ch] BYREF
  int v20; // [rsp+118h] [rbp-58h] BYREF
  int v21; // [rsp+11Ch] [rbp-54h] BYREF
  int v22; // [rsp+120h] [rbp-50h] BYREF
  int v23; // [rsp+124h] [rbp-4Ch] BYREF
  int v24; // [rsp+128h] [rbp-48h] BYREF
  int v25; // [rsp+12Ch] [rbp-44h] BYREF
  int v26; // [rsp+130h] [rbp-40h] BYREF
  int v27; // [rsp+134h] [rbp-3Ch] BYREF
  int v28; // [rsp+138h] [rbp-38h] BYREF
  int v29; // [rsp+13Ch] [rbp-34h] BYREF
  int v30; // [rsp+140h] [rbp-30h] BYREF
  const struct RIMDEV *v31; // [rsp+148h] [rbp-28h] BYREF
  int v32; // [rsp+168h] [rbp-8h] BYREF
  const struct RIMDEV *v33; // [rsp+170h] [rbp+0h] BYREF
  const char *v34; // [rsp+178h] [rbp+8h] BYREF

  if ( (unsigned int)Feature_TouchpadProps__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (*((_DWORD *)a1 + 46) & 0x80u) == 0 )
    {
      v4 = *((_DWORD *)a1 + 12);
      if ( v4 )
      {
        if ( v4 == 1 && (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
        {
          v5 = *((_DWORD *)a1 + 119) & 1;
          v33 = a1;
          v32 = -v5;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (__int64)&dword_14029EE20,
            byte_14027AC15,
            v8,
            v9,
            (__int64)&v33,
            (__int64)&v32);
        }
      }
      else if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
      {
        LOWORD(v32) = *((_WORD *)a1 + 432);
        v34 = InputTraceLogging::LegacyFlagsToString(v32);
        v5 = *((_DWORD *)a1 + 222) & 1;
        v31 = a1;
        LODWORD(v33) = -v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>>(
          (__int64)&dword_14029EE20,
          (__int64)&unk_14027A8FF,
          v6,
          v7,
          (__int64)&v31,
          (__int64)&v33,
          (void **)&v34,
          (__int64)&v32);
      }
    }
    else if ( *(_DWORD *)(*((_QWORD *)a1 + 57) + 24LL) == 7
           && (unsigned int)dword_14029EE20 > 4
           && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
    {
      v32 = v2[90];
      LODWORD(v33) = v2[89];
      LODWORD(v34) = v2[88];
      v10 = v2[87];
      v11 = v2[86];
      v12 = v2[85];
      v13 = v2[84];
      v14 = v2[83];
      v15 = v2[82];
      v16 = v2[81];
      v17 = v2[80];
      v18 = v2[79];
      v19 = v2[78];
      v20 = v2[77];
      v21 = v2[76];
      v22 = v2[75];
      v23 = v2[74];
      v24 = v2[73];
      v25 = v2[72];
      v26 = v2[71];
      v27 = v2[70];
      v28 = v2[69];
      v29 = v2[68];
      v30 = v2[67];
      v31 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_14027A96C,
        (__int64)v2,
        v3,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
  }
}
