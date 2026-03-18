/*
 * XREFs of ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401B6820
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1401BF788 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U1@U?$_tlgWrapperByVal@$03@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@53AEBU?$_tlgWrapperByVal@$03@@6@Z @ 0x140001FBC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U1@U-$_tlgWrapperByVal@$0.c)
 */

void __fastcall InputTraceLogging::RIM::RimDeviceMonitorMapping(
        const struct RIMDEV *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  const char *v11; // rax
  const WCHAR *v12; // [rsp+60h] [rbp-20h] BYREF
  const WCHAR *v13; // [rsp+68h] [rbp-18h] BYREF
  const char *v14; // [rsp+70h] [rbp-10h] BYREF
  const struct RIMDEV *v15; // [rsp+78h] [rbp-8h] BYREF
  int v16; // [rsp+98h] [rbp+18h] BYREF
  int v17; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x100) != 0
    && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v5 = *((_DWORD *)a1 + 336);
    v16 = *((_DWORD *)a1 + 468);
    v17 = *((_DWORD *)a1 + 467);
    v18 = *(_QWORD *)((char *)a1 + 1860);
    v12 = (const WCHAR *)((char *)a1 + 1604);
    v13 = (const WCHAR *)((char *)a1 + 1348);
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                if ( v10 == 1 )
                  v11 = "Monitor";
                else
                  v11 = "UNKNOWN";
              }
              else
              {
                v11 = "OEM";
              }
            }
            else
            {
              v11 = "DefaultFallback";
            }
          }
          else
          {
            v11 = "DefaultPrimary";
          }
        }
        else
        {
          v11 = "Automatic";
        }
      }
      else
      {
        v11 = "User";
      }
    }
    else
    {
      v11 = "None";
    }
    v14 = v11;
    v15 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1402A9E40,
      (__int64)&unk_140284B0E,
      (__int64)a1,
      a4,
      (__int64)&v15,
      (void **)&v14,
      &v13,
      &v12,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
}
