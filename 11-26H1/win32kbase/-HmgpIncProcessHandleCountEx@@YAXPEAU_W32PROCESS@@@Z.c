/*
 * XREFs of ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1400CF650
 * Callers:
 *     HmgIncProcessHandleCountEx @ 0x1400C5508 (HmgIncProcessHandleCountEx.c)
 *     GreIncQuotaCount @ 0x1400CF610 (GreIncQuotaCount.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140182EFC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall HmgpIncProcessHandleCountEx(struct _W32PROCESS *a1)
{
  unsigned int v1; // r9d
  int v2; // r8d
  int v3; // edi
  int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 16);
  v2 = *((_DWORD *)a1 + 15) + 1;
  *((_DWORD *)a1 + 15) = v2;
  v3 = v1;
  if ( v2 > v1 )
    v3 = v2;
  if ( v2 == 1000 * (v2 / 1000)
    && v1 != v3
    && (unsigned int)dword_1402A9F58 > 5
    && (qword_1402A9F68 & 0x400000000000LL) != 0
    && (qword_1402A9F70 & 0x400000000000LL) == qword_1402A9F70 )
  {
    v6 = 0x1000000LL;
    v5 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1402A9F58,
      (unsigned int)&unk_140283B89,
      v2,
      v1,
      (__int64)&v5,
      (__int64)&v6);
  }
  *((_DWORD *)a1 + 16) = v3;
}
