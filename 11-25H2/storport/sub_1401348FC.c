/*
 * XREFs of sub_1401348FC @ 0x1401348FC
 * Callers:
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140085F28 @ 0x140085F28 (sub_140085F28.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_1401369E0 @ 0x1401369E0 (sub_1401369E0.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1401348FC(int **a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 *v10; // r10
  __int64 *v11; // r9
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF

  v13 = 0LL;
  if ( a3 && a5 )
  {
    v9 = sub_140136180(a1, a2);
    if ( v9 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x21u, (__int64)&unk_140154D78, v9);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x22u, (__int64)&unk_140154D78);
      return (unsigned int)-2147483631;
    }
    else
    {
      v11 = &v13;
      if ( v10 )
        v11 = v10;
      v9 = sub_14013A37C(a1, v8, 0x900010001LL, v11);
      if ( v9 < 0 || (v9 = sub_1401369E0(a1, a2, a3, a5), v9 < 0) )
        v9 = sub_1401361CC(a1, a2, (unsigned int)v9);
      else
        sub_140085F28(*a1, "TcglibAssignNamespaceLocking success", a3, *a5, 0LL);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055930((__int64)off_140168120->AttachedDevice, 0x20u, (__int64)&unk_140154D78);
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
