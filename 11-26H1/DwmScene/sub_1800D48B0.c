/*
 * XREFs of sub_1800D48B0 @ 0x1800D48B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18001C72C @ 0x18001C72C (sub_18001C72C.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_1800D48B0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  _QWORD v4[4]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+48h] [rbp-50h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  sub_180012AC4(a1 + 8);
  if ( *(_BYTE *)(a1 + 112) )
  {
    sub_180011CC4(v4, "Operation was cancelled");
    sub_18001C72C(pExceptionObject, (__int64)v4, 0);
    sub_1800129D0((__int64)v4);
    pExceptionObject[0] = &Spectre::Utils::CancelledException::`vftable';
    throw (Spectre::Utils::CancelledException *)pExceptionObject;
  }
  return Mtx_unlock(v2);
}
