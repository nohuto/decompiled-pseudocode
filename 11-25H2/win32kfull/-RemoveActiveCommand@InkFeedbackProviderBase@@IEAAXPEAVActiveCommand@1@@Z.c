/*
 * XREFs of ?RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x14023149C
 * Callers:
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1402EE7B4 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1401F0D04 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$00@@U1@U_ea_1401F0D04.c)
 *     ?Unlink@ListEntry@@YAXPEAU_LIST_ENTRY@@@Z @ 0x140266BC4 (-Unlink@ListEntry@@YAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall InkFeedbackProviderBase::RemoveActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  int v6; // [rsp+60h] [rbp-20h] BYREF
  __int64 v7; // [rsp+68h] [rbp-18h] BYREF
  void *v8; // [rsp+70h] [rbp-10h] BYREF
  const char *v9; // [rsp+78h] [rbp-8h] BYREF
  char v10; // [rsp+90h] [rbp+10h] BYREF
  int v11; // [rsp+A0h] [rbp+20h] BYREF
  int v12; // [rsp+A8h] [rbp+28h] BYREF

  --*((_DWORD *)this + 10);
  ListEntry::Unlink(a2, (struct _LIST_ENTRY *)a2);
  if ( (unsigned int)dword_14039BC68 > 4 )
  {
    v5 = *(_DWORD *)(v3 + 40);
    v6 = 0;
    v11 = v5;
    v7 = *(_QWORD *)(v4 + 24);
    v12 = *(_DWORD *)(v4 + 20);
    v10 = *(_BYTE *)(v4 + 16);
    v8 = *(void **)(v3 + 48);
    v9 = "Removed active command";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v2,
      byte_14036B7AF,
      v3,
      v4,
      (__int64)&v6,
      (void **)&v9,
      &v8,
      (__int64)&v10,
      (__int64)&v12,
      (__int64)&v7,
      (__int64)&v11);
  }
}
