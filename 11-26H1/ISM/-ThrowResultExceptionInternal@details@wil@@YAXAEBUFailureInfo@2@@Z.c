/*
 * XREFs of ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800A0C30
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18009B336 (_CxxThrowException_0.c)
 *     ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x18009DBC4 (--0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 */

void __fastcall __noreturn wil::details::ThrowResultExceptionInternal(
        wil::details *this,
        const struct wil::FailureInfo *a2)
{
  void **pExceptionObject; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v3; // [rsp+28h] [rbp-D0h]
  _BYTE v4[168]; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v5; // [rsp+E0h] [rbp-18h]

  pExceptionObject = &wil::ResultException::`vftable';
  v3 = 0LL;
  wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v4, this);
  v5 = 0LL;
  throw (wil::ResultException *)&pExceptionObject;
}
