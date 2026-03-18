/*
 * XREFs of ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x14018DDE0
 * Callers:
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x14018DCD0 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ?TraceCurrentState@CCursorClip@@SAXXZ @ 0x14018DD60 (-TraceCurrentState@CCursorClip@@SAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400F3420 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1401993CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall InputTraceLogging::Mouse::SetShellClip(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v4; // rdi
  __int64 v5; // r8
  LONG *p_right; // rbx
  int v7; // r8d
  int v8; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v9[5]; // [rsp+44h] [rbp-14h] BYREF
  LONG v10; // [rsp+70h] [rbp+18h] BYREF
  LONG v11; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v2) = dword_1402A9E40;
  v4 = a2;
  if ( dword_1402A9E40 && (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
  {
    if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 64LL) )
    {
      v10 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_1402A9E40,
        (__int64)&unk_14028AA76,
        v5,
        v2,
        (__int64)&v10);
      LODWORD(v2) = dword_1402A9E40;
    }
    if ( (_DWORD)v4 )
    {
      p_right = &a1->right;
      do
      {
        if ( (unsigned int)v2 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 64LL) )
        {
          v10 = p_right[1];
          v11 = *p_right;
          v8 = *(p_right - 1);
          v9[0] = *(p_right - 2);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1402A9E40,
            (unsigned int)&unk_14028AA2D,
            v7,
            v2,
            (__int64)v9,
            (__int64)&v8,
            (__int64)&v11,
            (__int64)&v10);
          LODWORD(v2) = dword_1402A9E40;
        }
        p_right += 4;
        --v4;
      }
      while ( v4 );
    }
  }
}
