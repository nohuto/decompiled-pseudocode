/*
 * XREFs of ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1402FDD54
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x140229240 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?TerminateActiveCommand@HideInkCursorProvider@@UEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1402FDEF0 (-TerminateActiveCommand@HideInkCursorProvider@@UEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1402457E4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 *     ?ForceHidePenCursor@@YAXH@Z @ 0x14026B58C (-ForceHidePenCursor@@YAXH@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStop(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_STOP_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  const char *v7; // [rsp+50h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+8h] BYREF
  const struct IFC_HIDE_INK_CURSOR_STOP_DATA *v9; // [rsp+78h] [rbp+10h] BYREF
  HideInkCursorProvider *v10; // [rsp+80h] [rbp+18h] BYREF
  void *v11; // [rsp+88h] [rbp+20h] BYREF

  v9 = a2;
  if ( (*((_DWORD *)this + 14))-- == 1 )
    ForceHidePenCursor(0LL, (__int64)a2);
  if ( (unsigned int)dword_1403AAAD8 > 4 )
  {
    LODWORD(v9) = *((_DWORD *)this + 14);
    v11 = (void *)*((_QWORD *)this + 6);
    v7 = "Removed hide cursor request";
    v10 = this;
    v8 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)this,
      byte_140379802,
      a3,
      a4,
      (__int64)&v8,
      (void **)&v7,
      &v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  return 0LL;
}
