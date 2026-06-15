/*
 * XREFs of sub_14001B16C @ 0x14001B16C
 * Callers:
 *     sub_14001B01C @ 0x14001B01C (sub_14001B01C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14001B288 @ 0x14001B288 (sub_14001B288.c)
 *     sub_14001B3C8 @ 0x14001B3C8 (sub_14001B3C8.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001B16C(__int64 a1, __int64 a2)
{
  RTL_SRWLOCK *v3; // rbp
  int v4; // ebx
  __int64 v5; // rsi
  int v6; // eax
  int v8; // edx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v3 = (RTL_SRWLOCK *)(a1 + 64);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 64));
  v10 = v3;
  sub_140019444((__int64 *)(a1 + 104));
  v4 = sub_14001B288(a1 + 104, &v11);
  if ( v4 < 0 )
  {
    v8 = 624;
    goto LABEL_8;
  }
  v4 = sub_14001B3C8(a1);
  if ( v4 < 0 )
  {
    v8 = 625;
LABEL_8:
    sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v4);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    return (unsigned int)v4;
  }
  v5 = *(_QWORD *)(a1 + 104);
  sub_140019444((__int64 *)(a1 + 112));
  v6 = sub_1400B6010(v5);
  v4 = v6;
  if ( v6 < 0 )
  {
    sub_14000C2A8((int)retaddr, 626, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v6);
    sub_14003A998(&v10);
    return (unsigned int)v4;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
