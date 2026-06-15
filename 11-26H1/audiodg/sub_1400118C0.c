/*
 * XREFs of sub_1400118C0 @ 0x1400118C0
 * Callers:
 *     sub_140011660 @ 0x140011660 (sub_140011660.c)
 *     sub_14001189C @ 0x14001189C (sub_14001189C.c)
 *     sub_140019E50 @ 0x140019E50 (sub_140019E50.c)
 *     sub_140029B30 @ 0x140029B30 (sub_140029B30.c)
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 *     sub_140046D40 @ 0x140046D40 (sub_140046D40.c)
 *     sub_14004846C @ 0x14004846C (sub_14004846C.c)
 *     sub_1400518C0 @ 0x1400518C0 (sub_1400518C0.c)
 *     sub_14005334C @ 0x14005334C (sub_14005334C.c)
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 *     sub_14005A55C @ 0x14005A55C (sub_14005A55C.c)
 *     sub_14005A8C4 @ 0x14005A8C4 (sub_14005A8C4.c)
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 *     sub_14006B61C @ 0x14006B61C (sub_14006B61C.c)
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 *     sub_140072BD0 @ 0x140072BD0 (sub_140072BD0.c)
 *     sub_140072EF0 @ 0x140072EF0 (sub_140072EF0.c)
 *     sub_140075868 @ 0x140075868 (sub_140075868.c)
 *     sub_14008E414 @ 0x14008E414 (sub_14008E414.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 */

__int64 __fastcall sub_1400118C0(void **a1, void *a2)
{
  void *v2; // rdi
  __int64 result; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    sub_1400257E4(&v6);
    CoTaskMemFree(v2);
    result = sub_14001FC40(&v6);
  }
  *a1 = a2;
  return result;
}
