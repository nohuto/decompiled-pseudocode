/*
 * XREFs of sub_180051130 @ 0x180051130
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C72C @ 0x18001C72C (sub_18001C72C.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180051130()
{
  _QWORD v0[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+40h] [rbp-48h] BYREF

  sub_180011CC4(v0, "Not implemented");
  sub_18001C72C(pExceptionObject, (__int64)v0, 0);
  throw (Spectre::Utils::SpectreException *)pExceptionObject;
}
