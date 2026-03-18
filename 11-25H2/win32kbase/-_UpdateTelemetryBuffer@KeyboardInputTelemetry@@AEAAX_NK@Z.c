/*
 * XREFs of ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1400C1E60
 * Callers:
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@SAXPEAUtagQMSG@@_N@Z @ 0x1400C1D40 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@SAXPEAUtagQMSG@@_N@Z.c)
 * Callees:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400C1FCC (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1400C2974 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall KeyboardInputTelemetry::_UpdateTelemetryBuffer(
        KeyboardInputTelemetry *this,
        unsigned __int8 a2,
        unsigned int a3,
        int a4)
{
  int v6; // r8d
  int v7; // eax
  unsigned int *v8; // rcx
  __int64 v9; // r14
  unsigned int v10; // edx
  __int64 v11; // rbx
  unsigned int v12; // [rsp+40h] [rbp-40h] BYREF
  int v13; // [rsp+44h] [rbp-3Ch] BYREF
  int v14; // [rsp+48h] [rbp-38h] BYREF
  char *v15; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v16[8]; // [rsp+58h] [rbp-28h] BYREF

  v16[7] = -1;
  v6 = a2;
  v7 = 0;
  v16[0] = 10;
  v16[1] = 20;
  v8 = v16;
  v16[2] = 30;
  v16[3] = 40;
  v16[4] = 50;
  v16[5] = 60;
  v16[6] = 100;
  while ( (unsigned __int64)v7 < 8 )
  {
    if ( a3 <= *v8 )
    {
      v9 = v7 + 8LL * a2;
      v10 = *((_DWORD *)this + 2 * v9 + 14);
      v11 = 8 * v9;
      if ( v10 + 1 < v10
        || (LODWORD(v8) = *(_DWORD *)((char *)this + v11 + 60), (unsigned int)v8 + a3 < (unsigned int)v8)
        || v10 >= 0x3E8 )
      {
        KeyboardInputTelemetry::_UploadTelemetryData(this);
      }
      ++*((_DWORD *)this + 2 * v9 + 14);
      *(_DWORD *)((char *)this + v11 + 60) += a3;
      break;
    }
    ++v7;
    ++v8;
  }
  if ( a3 > 0xC8
    && (unsigned int)dword_14029EF38 > 5
    && (qword_14029EF48 & 0x400000000000LL) != 0
    && (qword_14029EF50 & 0x400000000000LL) == qword_14029EF50 )
  {
    v13 = *((_DWORD *)this + 46);
    v14 = v13;
    v15 = (char *)this + 24;
    v12 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)v8,
      (unsigned int)&unk_1402793C4,
      v6,
      a4,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
}
