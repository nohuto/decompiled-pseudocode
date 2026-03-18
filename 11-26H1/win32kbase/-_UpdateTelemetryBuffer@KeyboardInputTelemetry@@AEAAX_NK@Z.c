/*
 * XREFs of ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1400E3EEC
 * Callers:
 *     ?_EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXPEAUtagQMSG@@_N@Z @ 0x1400E3CF8 (-_EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXPEAUtagQMSG@@_N@Z.c)
 * Callees:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400E4028 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1400E4430 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall KeyboardInputTelemetry::_UpdateTelemetryBuffer(
        KeyboardInputTelemetry *this,
        unsigned __int8 a2,
        unsigned int a3,
        int a4)
{
  unsigned int *v5; // rcx
  unsigned int v7; // eax
  __int64 v8; // r14
  unsigned int v9; // edx
  __int64 v10; // rbx
  char *v11; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v12[10]; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+A8h] [rbp+38h] BYREF
  int v14; // [rsp+B0h] [rbp+40h] BYREF
  int v15; // [rsp+B8h] [rbp+48h] BYREF

  v12[0] = 10;
  v5 = v12;
  v12[1] = 20;
  v12[2] = 30;
  v12[3] = 40;
  v7 = 0;
  v12[4] = 50;
  v12[5] = 60;
  v12[6] = 100;
  v12[7] = -1;
  while ( v7 < 8 )
  {
    if ( a3 <= *v5 )
    {
      v8 = (int)v7 + 8LL * a2;
      v9 = *((_DWORD *)this + 2 * v8 + 14);
      v10 = 8 * v8;
      if ( v9 + 1 < v9
        || (LODWORD(v5) = *(_DWORD *)((char *)this + v10 + 60), (unsigned int)v5 + a3 < (unsigned int)v5)
        || v9 >= 0x3E8 )
      {
        KeyboardInputTelemetry::_UploadTelemetryData(this);
      }
      ++*((_DWORD *)this + 2 * v8 + 14);
      *(_DWORD *)((char *)this + v10 + 60) += a3;
      break;
    }
    ++v7;
    ++v5;
  }
  if ( a3 > 0xC8
    && (unsigned int)dword_1402A9F58 > 5
    && (qword_1402A9F68 & 0x400000000000LL) != 0
    && (qword_1402A9F70 & 0x400000000000LL) == qword_1402A9F70 )
  {
    v14 = *((_DWORD *)this + 46);
    v15 = v14;
    v11 = (char *)this + 24;
    v13 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)v5,
      (unsigned int)&unk_140283313,
      a3,
      a4,
      (__int64)&v11,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
}
