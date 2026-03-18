/*
 * XREFs of ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x140229454
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x140229240 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1402FEB90 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x140229520 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$00@@U1@U_ea_140229520.c)
 */

void __fastcall InkFeedbackProviderBase::AddActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2,
        __int64 a3,
        int a4)
{
  InkFeedbackProviderBase **v4; // r8
  int v5; // [rsp+60h] [rbp-20h] BYREF
  __int64 v6; // [rsp+68h] [rbp-18h] BYREF
  __int64 v7; // [rsp+70h] [rbp-10h] BYREF
  const char *v8; // [rsp+78h] [rbp-8h] BYREF
  char v9; // [rsp+90h] [rbp+10h] BYREF
  int v10; // [rsp+A0h] [rbp+20h] BYREF
  int v11; // [rsp+A8h] [rbp+28h] BYREF

  ++*((_DWORD *)this + 10);
  v4 = (InkFeedbackProviderBase **)*((_QWORD *)this + 4);
  if ( *v4 != (InkFeedbackProviderBase *)((char *)this + 24) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 24;
  *((_QWORD *)a2 + 1) = v4;
  *v4 = a2;
  *((_QWORD *)this + 4) = a2;
  if ( (unsigned int)dword_1403AAAD8 > 4 )
  {
    v10 = *((_DWORD *)this + 10);
    v6 = *((_QWORD *)a2 + 3);
    v11 = *((_DWORD *)a2 + 5);
    v9 = *((_BYTE *)a2 + 16);
    v7 = *((_QWORD *)this + 6);
    v8 = "Added active command";
    v5 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (_DWORD)this,
      (unsigned int)&unk_140379876,
      (_DWORD)v4,
      a4,
      (__int64)&v5,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v9,
      (__int64)&v11,
      (__int64)&v6,
      (__int64)&v10);
  }
}
