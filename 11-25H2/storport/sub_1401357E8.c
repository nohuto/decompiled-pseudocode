/*
 * XREFs of sub_1401357E8 @ 0x1401357E8
 * Callers:
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140085F28 @ 0x140085F28 (sub_140085F28.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_1401373B8 @ 0x1401373B8 (sub_1401373B8.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1401357E8(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r15
  __int64 v9; // rdx
  int v10; // ebx
  __int64 *v11; // r10
  char v12; // r11
  __int64 *v13; // r9
  __int64 v14; // r8
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF

  v7 = a3;
  v16 = 0LL;
  if ( a3 > *(_DWORD *)(a1 + 48) || !a6 || !a3 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055930((__int64)off_140168120->AttachedDevice, 0x17u, (__int64)&unk_140154D78);
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = sub_140136180(a1, a2);
    if ( v10 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x18u, (__int64)&unk_140154D78, v10);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), 1, 0) == 1 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x19u, (__int64)&unk_140154D78);
      return (unsigned int)-2147483631;
    }
    else
    {
      v13 = &v16;
      if ( v11 )
        v13 = v11;
      if ( v12 )
        v14 = 0x900010001LL;
      else
        v14 = v7 + 0x900030001LL;
      v10 = sub_14013A37C(a1, v9, v14, v13);
      if ( v10 < 0 || (v10 = sub_1401373B8(a1, a2, (unsigned int)v7, a6), v10 < 0) )
        v10 = sub_1401361CC(a1, a2, (unsigned int)v10);
      else
        sub_140085F28(*(int **)a1, "TcglibSetBandLocationEx success", v7, *(_QWORD *)(a6 + 8), *(_QWORD *)(a6 + 16));
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v10;
}
