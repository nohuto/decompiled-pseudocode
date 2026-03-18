/*
 * XREFs of ??0GetTrueTypeFileRequest@@QEAA@_KPEAK@Z @ 0x140223FE8
 * Callers:
 *     UmfdGetTrueTypeFile @ 0x140223FA0 (UmfdGetTrueTypeFile.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1400FD4AC (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

GetTrueTypeFileRequest *__fastcall GetTrueTypeFileRequest::GetTrueTypeFileRequest(
        GetTrueTypeFileRequest *this,
        __int64 a2,
        unsigned int *a3)
{
  GetTrueTypeFileRequest *result; // rax

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)this, 12);
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)this = &GetTrueTypeFileRequest::`vftable';
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = a3;
  *((_QWORD *)this + 7) = 0LL;
  return result;
}
