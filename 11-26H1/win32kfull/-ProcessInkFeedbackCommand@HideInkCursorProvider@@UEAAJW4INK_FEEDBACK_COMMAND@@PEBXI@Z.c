/*
 * XREFs of ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x140229240
 * Callers:
 *     <none>
 * Callees:
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x140229454 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x14022963C (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1402457E4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x140296E5C (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ??_GActiveCommand@InkFeedbackProviderBase@@QEAAPEAXI@Z @ 0x1402FDCF4 (--_GActiveCommand@InkFeedbackProviderBase@@QEAAPEAXI@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1402FDD54 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1402FDEB8 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ProcessInkFeedbackCommand(char *a1, int a2, unsigned int *a3, int a4)
{
  int v6; // edx
  int v7; // ebx
  __int64 v9; // rax
  const struct IFC_HIDE_INK_CURSOR_START_DATA *v10; // rdx
  InkFeedbackProviderBase::ActiveCommand *v11; // rsi
  unsigned int v12; // edx
  const struct IFC_HIDE_INK_CURSOR_STOP_DATA *v13; // rdx
  int v14; // [rsp+50h] [rbp-20h] BYREF
  const char *v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+68h] [rbp-8h] BYREF
  int v18; // [rsp+88h] [rbp+18h] BYREF

  v6 = a2 - 3;
  if ( v6 )
  {
    if ( v6 != 1 )
      return (unsigned int)-1073741637;
    if ( a4 == 4 )
    {
      if ( (unsigned int)dword_1403AAAD8 > 4 )
      {
        v18 = *a3;
        v16 = *((_QWORD *)a1 + 6);
        ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)"Processing ink feedback comman"
                                                                                          "d: IFC_HIDE_INK_CURSOR_STOP...";
        v15 = a1;
        v14 = 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (_DWORD)a1,
          (unsigned int)&unk_140379720,
          (_DWORD)a3,
          4,
          (__int64)&v14,
          (__int64)&ActiveCommandByTargetPointerId,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v18);
      }
      ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                          a1,
                                                                                          3LL,
                                                                                          *a3);
      if ( ActiveCommandByTargetPointerId )
      {
        v7 = HideInkCursorProvider::DoHideInkCursorStop((HideInkCursorProvider *)a1, v13);
        InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
          (InkFeedbackProviderBase *)a1,
          &ActiveCommandByTargetPointerId);
        return (unsigned int)v7;
      }
      return (unsigned int)-1073741823;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4 != 4 )
    return (unsigned int)-1073741811;
  if ( (unsigned int)dword_1403AAAD8 > 4 )
  {
    v18 = *a3;
    v16 = *((_QWORD *)a1 + 6);
    v15 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_START...";
    ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)a1;
    v14 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (_DWORD)a1,
      (unsigned int)&unk_1403796B2,
      (_DWORD)a3,
      4,
      (__int64)&v14,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)&ActiveCommandByTargetPointerId,
      (__int64)&v18);
  }
  if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(a1, 3LL, *a3) )
    return (unsigned int)-1073741823;
  v9 = Win32AllocPoolZInit(32LL, 1349217865LL);
  v11 = (InkFeedbackProviderBase::ActiveCommand *)v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 16) = 3LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)v9 = 0LL;
    *(_DWORD *)(v9 + 20) = *a3;
    *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
    v7 = HideInkCursorProvider::DoHideInkCursorStart((HideInkCursorProvider *)a1, v10);
    if ( v7 < 0 )
      InkFeedbackProviderBase::ActiveCommand::`scalar deleting destructor'(v11, v12);
    else
      InkFeedbackProviderBase::AddActiveCommand((InkFeedbackProviderBase *)a1, v11);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
