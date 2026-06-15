/*
 * XREFs of sub_1400732C4 @ 0x1400732C4
 * Callers:
 *     sub_140005E9C @ 0x140005E9C (sub_140005E9C.c)
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 *     sub_1400734AC @ 0x1400734AC (sub_1400734AC.c)
 *     sub_140074720 @ 0x140074720 (sub_140074720.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140072EF0 @ 0x140072EF0 (sub_140072EF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1400732C4(__int64 a1, int a2, int a3, unsigned __int8 a4, __int64 a5, float a6)
{
  int Instance; // ebx
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+38h] [rbp-10h] BYREF

  ppv[0] = 0LL;
  v11 = 0LL;
  if ( (unsigned int)MMDevAPI_7() == 3 )
  {
    Instance = 0;
  }
  else
  {
    Instance = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, ppv);
    if ( Instance >= 0 )
    {
      Instance = sub_1400B6010(ppv[0]);
      if ( Instance >= 0 )
        Instance = sub_140072EF0(v11, a2, a3, a4, a5, a6);
    }
  }
  sub_140003238(&v11);
  sub_140003238((__int64 *)ppv);
  return (unsigned int)Instance;
}
