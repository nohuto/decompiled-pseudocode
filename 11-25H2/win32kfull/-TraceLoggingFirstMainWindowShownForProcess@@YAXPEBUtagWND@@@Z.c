/*
 * XREFs of ?TraceLoggingFirstMainWindowShownForProcess@@YAXPEBUtagWND@@@Z @ 0x1401E5C00
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U1@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@33AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x1401E5D0C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@U1@U-$_tlgWrapperByVal@$07@@U3@@-$_tlgWrit.c)
 */

void __fastcall TraceLoggingFirstMainWindowShownForProcess(const struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  PEPROCESS v5; // rcx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // [rsp+50h] [rbp-18h] BYREF
  __int64 ProcessImageFileName; // [rsp+58h] [rbp-10h] BYREF
  int v11; // [rsp+90h] [rbp+28h] BYREF
  int v12; // [rsp+98h] [rbp+30h] BYREF
  int v13; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+40h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
  v3 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
     - *(_QWORD *)(v2 + 1088);
  v4 = (unsigned __int64)PsGetProcessId(*(PEPROCESS *)v2) & 0xFFFFFFFC;
  if ( (unsigned int)dword_14039BBC0 > 5
    && (qword_14039BBD0 & 0x400000000000LL) != 0
    && (qword_14039BBD8 & 0x400000000000LL) == qword_14039BBD8 )
  {
    v5 = *(PEPROCESS *)v2;
    v14 = 0x1000000LL;
    v9 = v3;
    v11 = v4;
    v12 = v4;
    ProcessImageFileName = PsGetProcessImageFileName(v5);
    v13 = *(_DWORD *)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v6,
      (unsigned int)&unk_14036996C,
      v7,
      v8,
      (__int64)&v13,
      (__int64)&ProcessImageFileName,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v9,
      (__int64)&v14);
  }
}
