/*
 * XREFs of ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1401A0000
 * Callers:
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x14015C72C (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B77F0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x140008CF4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14007B6DC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x1400B7BF4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 */

void __fastcall InputTraceLogging::Mouse::SetShellClip(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  LONG *p_right; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v11[5]; // [rsp+44h] [rbp-14h] BYREF
  LONG v12; // [rsp+70h] [rbp+18h] BYREF
  LONG v13; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  if ( InputTraceLogging::Enabled(64, 0) )
  {
    if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, v4) )
    {
      v12 = v2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_14029EE20,
        byte_140280431,
        v5,
        v6,
        (__int64)&v12);
    }
    if ( (_DWORD)v2 )
    {
      p_right = &a1->right;
      do
      {
        if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 64LL) )
        {
          v12 = p_right[1];
          v13 = *p_right;
          v10 = *(p_right - 1);
          v11[0] = *(p_right - 2);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_14029EE20,
            (__int64)&unk_14028045F,
            v8,
            v9,
            (__int64)v11,
            (__int64)&v10,
            (__int64)&v13,
            (__int64)&v12);
        }
        p_right += 4;
        --v2;
      }
      while ( v2 );
    }
  }
}
