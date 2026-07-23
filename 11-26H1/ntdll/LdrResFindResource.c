/*
 * XREFs of LdrResFindResource @ 0x18013C1A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrResFindResource(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  _QWORD v10[3]; // [rsp+40h] [rbp-28h] BYREF

  if ( (a9 & 0xC02) != 0 )
    return -1073741811;
  v10[0] = a2;
  v10[1] = a3;
  v10[2] = a4;
  return LdrResSearchResource(a1, v10, 3u, a9, a5, a6, a7, a8);
}
