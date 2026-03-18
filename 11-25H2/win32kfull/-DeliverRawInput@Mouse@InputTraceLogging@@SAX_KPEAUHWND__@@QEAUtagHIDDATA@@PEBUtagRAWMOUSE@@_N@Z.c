/*
 * XREFs of ?DeliverRawInput@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@QEAUtagHIDDATA@@PEBUtagRAWMOUSE@@_N@Z @ 0x140120BE0
 * Callers:
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14011F944 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1402386D0 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1401227E8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrapperByVal@$03@@.c)
 */

void __fastcall InputTraceLogging::Mouse::DeliverRawInput(
        __int64 a1,
        HWND a2,
        struct tagHIDDATA *const a3,
        const struct tagRAWMOUSE *a4,
        bool a5)
{
  __int64 v5; // rax
  __int16 v6; // [rsp+70h] [rbp+1Fh] BYREF
  __int16 v7; // [rsp+72h] [rbp+21h] BYREF
  __int16 v8; // [rsp+74h] [rbp+23h] BYREF
  BOOL v9; // [rsp+78h] [rbp+27h] BYREF
  int v10; // [rsp+7Ch] [rbp+2Bh] BYREF
  int v11; // [rsp+80h] [rbp+2Fh] BYREF
  int v12; // [rsp+84h] [rbp+33h] BYREF
  __int64 v13; // [rsp+88h] [rbp+37h] BYREF
  HWND v14; // [rsp+90h] [rbp+3Fh] BYREF
  __int64 v15; // [rsp+98h] [rbp+47h] BYREF

  if ( (unsigned int)dword_14039BB50 > 4 && (qword_14039BB60 & 0x40) != 0 && (qword_14039BB68 & 0x40) == qword_14039BB68 )
  {
    v9 = a5;
    v10 = *((_DWORD *)a4 + 5);
    v11 = *((_DWORD *)a4 + 4);
    v12 = *((_DWORD *)a4 + 3);
    v6 = *((_WORD *)a4 + 3);
    v7 = *((_WORD *)a4 + 2);
    v8 = *(_WORD *)a4;
    v5 = 0LL;
    if ( a3 )
      v5 = *(_QWORD *)a3;
    v13 = v5;
    v14 = a2;
    v15 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14039BB50,
      (unsigned int)&unk_140366DAC,
      (_DWORD)a3,
      (_DWORD)a4,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
