/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x180001080
 * Callers:
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180011340 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180020290 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  _BYTE v14[32]; // [rsp+30h] [rbp-51h] BYREF
  _WORD *v15; // [rsp+50h] [rbp-31h]
  int v16; // [rsp+58h] [rbp-29h]
  int v17; // [rsp+5Ch] [rbp-25h]
  __int64 v18; // [rsp+60h] [rbp-21h]
  __int64 v19; // [rsp+68h] [rbp-19h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  __int64 v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  __int64 v25; // [rsp+98h] [rbp+17h]

  v24 = a9;
  v22 = a8;
  v20 = a7;
  v18 = a6;
  v25 = 4LL;
  v23 = 4LL;
  v21 = 4LL;
  v10 = *a5;
  v19 = 8LL;
  if ( v10 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &unk_180056CEC;
    v12 = 2;
  }
  v16 = v12;
  v15 = v10;
  v17 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 7, v14);
}
