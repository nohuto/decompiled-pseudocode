/*
 * XREFs of ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18009F450
 * Callers:
 *     <none>
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x18009D014 (--0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1800EB100 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn wil::details::ThrowResultExceptionInternal(
        wil::details *this,
        const struct wil::FailureInfo *a2)
{
  _QWORD pExceptionObject[2]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v3[168]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v4; // [rsp+D8h] [rbp-20h]

  pExceptionObject[1] = "unknown";
  pExceptionObject[0] = &wil::ResultException::`vftable';
  wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v3, this);
  v4 = 0LL;
  throw (wil::ResultException *)pExceptionObject;
}
