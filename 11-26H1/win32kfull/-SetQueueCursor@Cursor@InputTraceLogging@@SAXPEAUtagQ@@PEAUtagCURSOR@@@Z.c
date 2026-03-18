/*
 * XREFs of ?SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z @ 0x1401CAE10
 * Callers:
 *     LockQCursor @ 0x1401CAD90 (LockQCursor.c)
 * Callees:
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1401CAE90 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1401CAF08 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall InputTraceLogging::Cursor::SetQueueCursor(struct tagQ *a1, struct tagCURSOR *a2)
{
  int v2; // r8d
  int v3; // r9d
  const char *v4; // [rsp+40h] [rbp-18h] BYREF
  struct tagQ *v5; // [rsp+70h] [rbp+18h] BYREF
  struct tagCURSOR *v6; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 5 && (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
  {
    v5 = a1;
    v6 = a2;
    v4 = InputTraceLogging::CursorToString(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1403AA9C0,
      (unsigned int)&unk_140373482,
      v2,
      v3,
      (__int64)&v4,
      (__int64)&v6,
      (__int64)&v5);
  }
}
