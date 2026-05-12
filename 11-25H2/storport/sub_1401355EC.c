/*
 * XREFs of sub_1401355EC @ 0x1401355EC
 * Callers:
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x14008E3B0 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140085F28 @ 0x140085F28 (sub_140085F28.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140136FA4 @ 0x140136FA4 (sub_140136FA4.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1401355EC(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, char a6, char a7, __int64 a8)
{
  __int64 v11; // r12
  __int64 v12; // rdx
  int v13; // ebx
  __int64 *v14; // r10
  __int64 *v15; // r9
  __int64 v17; // [rsp+48h] [rbp-50h] BYREF

  v11 = a3;
  v17 = 0LL;
  if ( a3 > *(_DWORD *)(a1 + 48) || (unsigned int)(a4 - 1) > 2 || (unsigned int)(a5 - 1) > 2 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055930((__int64)off_140168120->AttachedDevice, 0x1Du, (__int64)&unk_140154D78);
    return (unsigned int)-1073741811;
  }
  else
  {
    v13 = sub_140136180(a1, a2);
    if ( v13 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x1Eu, (__int64)&unk_140154D78, v13);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 28), 1, 0) == 1 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x1Fu, (__int64)&unk_140154D78);
      return (unsigned int)-2147483631;
    }
    else
    {
      v15 = &v17;
      if ( v14 )
        v15 = v14;
      v13 = sub_14013A37C(a1, v12, v11 + 0x900030001LL, v15);
      if ( v13 < 0 || (v13 = sub_140136FA4(a1, a2, v11, a4, a5, a6, a7, a8), v13 < 0) )
        v13 = sub_1401361CC(a1, a2, (unsigned int)v13);
      else
        sub_140085F28(*(int **)a1, "TcglibSetBand success", v11, a4, a5);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v13;
}
