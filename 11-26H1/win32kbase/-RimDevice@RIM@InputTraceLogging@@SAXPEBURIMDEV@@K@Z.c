/*
 * XREFs of ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1401BF788
 * Callers:
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     _lambda_c51e6e2186cc259f124bbf87b89b0c07_::_lambda_invoker_cdecl_ @ 0x140196B20 (_lambda_c51e6e2186cc259f124bbf87b89b0c07_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U2@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U1@U?$_tlgWrapperByVal@$03@@U7@U7@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@443AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@883AEBU?$_tlgWrapperByVal@$03@@9933@Z @ 0x14000512C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U2@U1@U-$_tlgWrapBuffer@U_UNICODE_STRING@@.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400A1998 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1400A1D8C (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400F1F18 (-RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400F3A98 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14017FBD0 (-RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevStateToString@InputTraceLogging@@CAPEBDK@Z @ 0x1401AE324 (-RimDevStateToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401AE388 (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401B6820 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevice(const struct RIMDEV *a1, int a2)
{
  int v2; // r9d
  unsigned __int128 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  int v9; // ecx
  const char *v10; // rax
  int v11; // ecx
  int v12; // r9d
  const char *v13; // rax
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20[4]; // [rsp+C0h] [rbp-80h] BYREF
  int v21; // [rsp+C4h] [rbp-7Ch] BYREF
  int v22; // [rsp+C8h] [rbp-78h] BYREF
  int v23; // [rsp+CCh] [rbp-74h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-58h] BYREF
  const WCHAR *v28; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-48h] BYREF
  const char *v30; // [rsp+100h] [rbp-40h] BYREF
  unsigned __int16 *v31; // [rsp+108h] [rbp-38h] BYREF
  __int64 v32; // [rsp+110h] [rbp-30h] BYREF
  const char *v33; // [rsp+118h] [rbp-28h] BYREF
  const char *v34; // [rsp+120h] [rbp-20h] BYREF
  const char *v35; // [rsp+128h] [rbp-18h] BYREF
  const struct RIMDEV *v36; // [rsp+130h] [rbp-10h] BYREF
  char v37; // [rsp+160h] [rbp+20h] BYREF
  char v38; // [rsp+168h] [rbp+28h] BYREF

  v2 = a2;
  if ( dword_1402A9E40 && (qword_1402A9E50 & 0x100) != 0 && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v4 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    v5 = *((_QWORD *)&v4 + 1);
    if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 256LL) )
    {
      v6 = v5 - *((_QWORD *)a1 + 9);
      v7 = v5 - *((_QWORD *)a1 + 8);
      v24 = v6;
      v21 = *((_DWORD *)a1 + 34);
      v22 = *((_DWORD *)a1 + 64);
      v23 = *((_DWORD *)a1 + 68);
      v26 = *((_QWORD *)a1 + 29);
      v37 = *((_BYTE *)a1 + 190);
      v38 = *((_BYTE *)a1 + 189);
      v20[0] = *((_BYTE *)a1 + 188);
      v27 = *((_QWORD *)a1 + 22);
      v29 = (__int64)a1 + 2112;
      v8 = *((_DWORD *)a1 + 532);
      v25 = v7;
      v28 = (const WCHAR *)((char *)a1 + 2132);
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v10 = "Unknown";
          else
            v10 = "UNKNOWN";
        }
        else
        {
          v10 = "External";
        }
      }
      else
      {
        v10 = "Integrated";
      }
      v11 = *((_DWORD *)a1 + 326);
      v30 = v10;
      v31 = (unsigned __int16 *)((char *)a1 + 192);
      v32 = *((_QWORD *)a1 + 164);
      v33 = InputTraceLogging::InputModeToString(v11);
      v13 = InputTraceLogging::RimDevStateToString(v12);
      v14 = *((_DWORD *)a1 + 12);
      v34 = v13;
      v35 = InputTraceLogging::RimDevTypeToString(v14);
      v36 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1402A9E40,
        (__int64)&unk_140284D14,
        v15,
        v16,
        (__int64)&v36,
        (void **)&v35,
        (void **)&v34,
        (void **)&v33,
        (__int64)&v32,
        &v31,
        (void **)&v30,
        &v29,
        &v28,
        (__int64)&v27,
        (__int64)v20,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v26,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v25,
        (__int64)&v24);
    }
    InputTraceLogging::RIM::RimDeviceFlags(a1, *((__int64 *)&v4 + 1), v5, v2);
    if ( (*((_DWORD *)a1 + 46) & 0x80u) == 0 )
    {
      if ( *((_DWORD *)a1 + 12) == 2 )
        InputTraceLogging::RIM::RimDeviceHidData(a1, v17, v18, v19);
    }
    else
    {
      InputTraceLogging::RIM::RimDevicePointerData(a1, v17, v18, v19);
    }
    if ( *((_DWORD *)a1 + 332) )
      InputTraceLogging::RIM::RimDeviceMonitorMapping(a1, v17, v18, v19);
    InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
  }
}
