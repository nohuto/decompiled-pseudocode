/*
 * XREFs of ??0QueryFontFileRequest@@QEAA@_KKKPEAK@Z @ 0x14010A314
 * Callers:
 *     UmfdQueryFontFile @ 0x140109450 (UmfdQueryFontFile.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x14010A208 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

QueryFontFileRequest *__fastcall QueryFontFileRequest::QueryFontFileRequest(
        QueryFontFileRequest *this,
        __int64 a2,
        int a3,
        int a4,
        unsigned int *a5)
{
  QueryFontFileRequest *result; // rax

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)this, 6);
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 16) = -1;
  *(_QWORD *)this = &QueryFontFileRequest::`vftable';
  *((_QWORD *)this + 7) = a5;
  result = this;
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 12) = a3;
  *((_DWORD *)this + 13) = a4;
  return result;
}
