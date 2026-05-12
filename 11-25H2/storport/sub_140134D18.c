/*
 * XREFs of sub_140134D18 @ 0x140134D18
 * Callers:
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140085F28 @ 0x140085F28 (sub_140085F28.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140136A88 @ 0x140136A88 (sub_140136A88.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140134D18(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 *v9; // r10
  __int64 *v10; // r9
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF

  v12 = 0LL;
  v8 = sub_140136180(a1, a2);
  if ( v8 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x23u, (__int64)&unk_140154D78, v8);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055930((__int64)off_140168120->AttachedDevice, 0x24u, (__int64)&unk_140154D78);
    return (unsigned int)-2147483631;
  }
  else
  {
    v10 = &v12;
    if ( v9 )
      v10 = v9;
    v8 = sub_14013A37C(a1, v7, 0x900010001LL, v10);
    if ( v8 < 0 || (v8 = sub_140136A88(a1, a2, a4), v8 < 0) )
      v8 = sub_1401361CC(a1, a2, (unsigned int)v8);
    else
      sub_140085F28(*a1, "TcglibDeassignNamespaceLocking success", a4, 0, 0LL);
    _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
  }
  return (unsigned int)v8;
}
