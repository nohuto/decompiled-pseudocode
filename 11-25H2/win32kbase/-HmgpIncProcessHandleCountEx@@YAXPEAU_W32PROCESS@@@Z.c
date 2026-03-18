/*
 * XREFs of ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x14003B440
 * Callers:
 *     GreIncQuotaCount @ 0x14003B400 (GreIncQuotaCount.c)
 *     HmgIncProcessHandleCountExFast @ 0x1401C83D4 (HmgIncProcessHandleCountExFast.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1401461C8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall HmgpIncProcessHandleCountEx(struct _W32PROCESS *a1)
{
  unsigned int v1; // r9d
  __int64 v2; // r8
  unsigned int v3; // edi
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 16);
  v2 = (unsigned int)(*((_DWORD *)a1 + 15) + 1);
  *((_DWORD *)a1 + 15) = v2;
  v3 = v1;
  if ( (unsigned int)v2 > v1 )
    v3 = v2;
  if ( (_DWORD)v2 == 1000 * ((int)v2 / 1000)
    && v1 != v3
    && (unsigned int)dword_14029EF38 > 5
    && (unsigned __int8)tlgKeywordOn(&dword_14029EF38, 0x400000000000LL, v2) )
  {
    v8 = 0x1000000LL;
    v7 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_14029EF38,
      (unsigned int)&unk_1402798CF,
      v5,
      v6,
      (__int64)&v7,
      (__int64)&v8);
  }
  *((_DWORD *)a1 + 16) = v3;
}
