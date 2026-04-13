/*
 * XREFs of ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18003C0D0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180021CDC (_CxxThrowException_0.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18003B294 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn wil::details::ThrowResultExceptionInternal(
        wil::details *this,
        const struct wil::FailureInfo *a2)
{
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v4[152]; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v5; // [rsp+D0h] [rbp-28h]
  __int128 v6; // [rsp+E0h] [rbp-18h]

  exception::exception((exception *)pExceptionObject);
  pExceptionObject[0] = &wil::ResultException::`vftable';
  v5 = 0LL;
  wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)v4, this);
  v6 = 0LL;
  throw (wil::ResultException *)pExceptionObject;
}
