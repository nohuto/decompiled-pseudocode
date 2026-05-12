/*
 * XREFs of sub_140135B20 @ 0x140135B20
 * Callers:
 *     sub_14008E63C @ 0x14008E63C (sub_14008E63C.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140085F28 @ 0x140085F28 (sub_140085F28.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_14013981C @ 0x14013981C (sub_14013981C.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140135B20(int **a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 *v9; // r10
  __int64 v10; // r11
  __int64 *v11; // r9
  __int64 v12; // r15
  __int64 *v13; // r9
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF

  v15 = 0LL;
  v8 = sub_140136180(a1, a2);
  if ( v8 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x26u, (__int64)&unk_140154D78);
      return (unsigned int)-2147483631;
    }
    else
    {
      v11 = &v15;
      if ( v9 )
        v11 = v9;
      v12 = v10;
      v8 = sub_14013A37C(a1, v7, v10 + 0x900030001LL, v11);
      if ( v8 < 0 )
        goto LABEL_17;
      v13 = &v15;
      if ( a5 )
        v13 = a5;
      v8 = sub_14013981C(a1, a2, v12 + 0xB00030001LL, v13);
      if ( v8 < 0 )
LABEL_17:
        v8 = sub_1401361CC(a1, a2, (unsigned int)v8);
      else
        sub_140085F28(*a1, "TcglibSetBandPin success", v12, 0, 0LL);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x25u, (__int64)&unk_140154D78, v8);
  }
  return (unsigned int)v8;
}
