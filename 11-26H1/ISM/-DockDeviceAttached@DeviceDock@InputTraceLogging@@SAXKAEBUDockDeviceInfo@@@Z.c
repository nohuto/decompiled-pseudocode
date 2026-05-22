/*
 * XREFs of ?DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z @ 0x1800DCDA0
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DCFF0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$01@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$01@@3333@Z @ 0x1800040C0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByV.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::DeviceDock::DockDeviceAttached(int a1, const struct DockDeviceInfo *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  _WORD v8[2]; // [rsp+70h] [rbp+37h] BYREF
  int v9; // [rsp+74h] [rbp+3Bh] BYREF
  int v10; // [rsp+78h] [rbp+3Fh] BYREF
  int v11; // [rsp+7Ch] [rbp+43h] BYREF
  int v12; // [rsp+80h] [rbp+47h] BYREF
  int v13; // [rsp+84h] [rbp+4Bh] BYREF
  const WCHAR *v14; // [rsp+88h] [rbp+4Fh] BYREF
  char v15; // [rsp+B0h] [rbp+77h] BYREF
  char v16; // [rsp+B8h] [rbp+7Fh] BYREF

  v4 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 512LL) )
  {
    v7 = *((_DWORD *)a2 + 420);
    v11 = *((_DWORD *)a2 + 418);
    v12 = *((_DWORD *)a2 + 417);
    v8[0] = *((_WORD *)a2 + 832);
    v15 = *((_BYTE *)a2 + 1663);
    v16 = *((_BYTE *)a2 + 1662);
    v14 = (const WCHAR *)((char *)a2 + 1548);
    v9 = v7;
    v10 = *((_DWORD *)a2 + 419);
    v13 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      (__int64)&unk_180215E5A,
      v5,
      v6,
      (__int64)&v13,
      &v14,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)v8,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
