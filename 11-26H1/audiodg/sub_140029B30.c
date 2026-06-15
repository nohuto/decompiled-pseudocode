/*
 * XREFs of sub_140029B30 @ 0x140029B30
 * Callers:
 *     sub_140029590 @ 0x140029590 (sub_140029590.c)
 *     sub_140029734 @ 0x140029734 (sub_140029734.c)
 *     sub_140041440 @ 0x140041440 (sub_140041440.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14002C450 @ 0x14002C450 (sub_14002C450.c)
 *     sub_140033344 @ 0x140033344 (sub_140033344.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_140029B30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, void *a6)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // r9d
  int v11; // edx
  __int64 v13; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+88h] [rbp-80h] BYREF
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h]

  memset(a6, 0, 0x58uLL);
  v14 = 0LL;
  v7 = sub_1400B6010(a1);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v13 = 0LL;
    v9 = sub_1400B6010(a1);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v8 = -2147418113;
      v10 = -2147418113;
      v11 = 49;
    }
    else
    {
      v10 = v9;
      v11 = 48;
    }
    sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp", v10);
    sub_140003238(&v13);
  }
  else
  {
    sub_14000C2A8((int)retaddr, 44, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp", v7);
  }
  sub_140003238(&v14);
  return v8;
}
