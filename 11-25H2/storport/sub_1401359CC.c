/*
 * XREFs of sub_1401359CC @ 0x1401359CC
 * Callers:
 *     sub_14008E83C @ 0x14008E83C (sub_14008E83C.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_1401374D4 @ 0x1401374D4 (sub_1401374D4.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1401359CC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  int v10; // ebx
  __int64 *v11; // r10
  __int64 *v12; // r9
  int v13; // r9d
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF

  v16 = 0LL;
  v8 = a3;
  v10 = sub_140136180(a1, a2);
  if ( v10 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), 1, 0) == 1 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x2Eu, (__int64)&unk_140154D78);
      return (unsigned int)-2147483631;
    }
    else
    {
      v12 = &v16;
      if ( v11 )
        v12 = v11;
      v10 = sub_14013A37C(a1, v9, v8 + 0x900030001LL, v12);
      if ( v10 >= 0 )
      {
        v14 = sub_1401374D4(a1, a2, v8, v13, a5, a6);
        v10 = v14;
        if ( v14 < 0 )
          v10 = sub_1401361CC(a1, a2, (unsigned int)v14);
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x2Du, (__int64)&unk_140154D78, v10);
  }
  return (unsigned int)v10;
}
