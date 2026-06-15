/*
 * XREFs of sub_1400747DC @ 0x1400747DC
 * Callers:
 *     sub_140073F98 @ 0x140073F98 (sub_140073F98.c)
 * Callees:
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_14005A8C4 @ 0x14005A8C4 (sub_14005A8C4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1400747DC(__int64 a1, __int64 a2)
{
  int v3; // ebx
  void **v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  void *v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v5 = &v9;
  v6 = 0LL;
  v7 = 1;
  v3 = sub_14005A8C4(a1, &v6);
  sub_140033E34((__int64)&v5);
  if ( v3 >= 0 )
    v3 = CoRegisterDeviceCatalog(v9, a2);
  else
    sub_14000C2A8((int)retaddr, 101, (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp", v3);
  sub_140008C08(&v9, 0LL);
  return (unsigned int)v3;
}
