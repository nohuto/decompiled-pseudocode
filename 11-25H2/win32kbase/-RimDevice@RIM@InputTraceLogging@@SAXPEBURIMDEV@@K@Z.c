/*
 * XREFs of ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14017E400
 * Callers:
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     _lambda_c51e6e2186cc259f124bbf87b89b0c07_::_lambda_invoker_cdecl_ @ 0x1401D5D80 (_lambda_c51e6e2186cc259f124bbf87b89b0c07_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U2@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U1@U?$_tlgWrapperByVal@$03@@U7@U7@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@443AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@883AEBU?$_tlgWrapperByVal@$03@@9933@Z @ 0x140003D78 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U2@U1@U-$_tlgWrapBuffer@U_UNICODE_STRING@@.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400794CC (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14007ADF0 (-RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x1400B7BF4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400D0030 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1400D68C8 (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14015B540 (-RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D5E2C (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D61A8 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevice(const struct RIMDEV *a1)
{
  __int64 v2; // r9
  unsigned int v3; // r10d
  unsigned __int128 v4; // rax
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ecx
  const char *v10; // rax
  int v11; // ecx
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  const char *v17; // rax
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // r9d
  char v24[4]; // [rsp+C0h] [rbp-80h] BYREF
  int v25; // [rsp+C4h] [rbp-7Ch] BYREF
  int v26; // [rsp+C8h] [rbp-78h] BYREF
  int v27; // [rsp+CCh] [rbp-74h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-58h] BYREF
  const WCHAR *v32; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-48h] BYREF
  const char *v34; // [rsp+100h] [rbp-40h] BYREF
  unsigned __int16 *v35; // [rsp+108h] [rbp-38h] BYREF
  __int64 v36; // [rsp+110h] [rbp-30h] BYREF
  const char *v37; // [rsp+118h] [rbp-28h] BYREF
  const char *v38; // [rsp+120h] [rbp-20h] BYREF
  const char *v39; // [rsp+128h] [rbp-18h] BYREF
  const struct RIMDEV *v40; // [rsp+130h] [rbp-10h] BYREF
  char v41; // [rsp+160h] [rbp+20h] BYREF
  char v42; // [rsp+168h] [rbp+28h] BYREF

  if ( InputTraceLogging::Enabled(256, 0) )
  {
    v4 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    v5 = *((_QWORD *)&v4 + 1);
    if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, v3) )
    {
      v6 = *((_DWORD *)a1 + 534);
      v7 = v5 - *((_QWORD *)a1 + 9);
      v8 = v5 - *((_QWORD *)a1 + 8);
      v28 = v7;
      v25 = *((_DWORD *)a1 + 34);
      v26 = *((_DWORD *)a1 + 64);
      v27 = *((_DWORD *)a1 + 68);
      v30 = *((_QWORD *)a1 + 29);
      v41 = *((_BYTE *)a1 + 190);
      v42 = *((_BYTE *)a1 + 189);
      v24[0] = *((_BYTE *)a1 + 188);
      v31 = *((_QWORD *)a1 + 22);
      v32 = (const WCHAR *)((char *)a1 + 2140);
      v33 = (__int64)a1 + 2120;
      v29 = v8;
      if ( v6 )
      {
        v9 = v6 - 1;
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
      v34 = v10;
      v35 = (unsigned __int16 *)((char *)a1 + 192);
      v36 = *((_QWORD *)a1 + 164);
      v37 = InputTraceLogging::InputModeToString(v11);
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( v16 == 1 )
                v17 = "Reset";
              else
                v17 = (const char *)&unk_14025EF20;
            }
            else
            {
              v17 = "Destroyed";
            }
          }
          else
          {
            v17 = "Closed";
          }
        }
        else
        {
          v17 = "Opened";
        }
      }
      else
      {
        v17 = "Created";
      }
      v18 = *((_DWORD *)a1 + 12);
      v38 = v17;
      v39 = InputTraceLogging::RimDevTypeToString(v18);
      v40 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_14027AADC,
        v19,
        v20,
        (__int64)&v40,
        (void **)&v39,
        (void **)&v38,
        (void **)&v37,
        (__int64)&v36,
        &v35,
        (void **)&v34,
        &v33,
        &v32,
        (__int64)&v31,
        (__int64)v24,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v30,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v29,
        (__int64)&v28);
    }
    InputTraceLogging::RIM::RimDeviceFlags(a1, *((__int64 *)&v4 + 1), v5, v2);
    if ( (*((_DWORD *)a1 + 46) & 0x80u) == 0 )
    {
      if ( *((_DWORD *)a1 + 12) == 2 )
        InputTraceLogging::RIM::RimDeviceHidData(a1, v21, v22, v23);
    }
    else
    {
      InputTraceLogging::RIM::RimDevicePointerData(a1, v21, v22, v23);
    }
    if ( *((_DWORD *)a1 + 334) )
      InputTraceLogging::RIM::RimDeviceMonitorMapping(a1);
    InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
  }
}
