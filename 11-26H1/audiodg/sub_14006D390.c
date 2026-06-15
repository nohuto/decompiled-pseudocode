/*
 * XREFs of sub_14006D390 @ 0x14006D390
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140039654 @ 0x140039654 (sub_140039654.c)
 *     sub_14003DFA0 @ 0x14003DFA0 (sub_14003DFA0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 */

__int64 __fastcall sub_14006D390(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // edx
  __int64 v12; // rdx
  _BYTE v14[176]; // [rsp+20h] [rbp-1D8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+D0h] [rbp-128h] BYREF
  _UNKNOWN *retaddr; // [rsp+1F8h] [rbp+0h]

  v8 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v8, "SrvStreamGroup_Initialize", 0LL);
  *(_BYTE *)(a1 + 337) = a2[1] != 0;
  v9 = sub_14003DFA0(a2);
  v10 = v9;
  if ( v9 >= 0 )
  {
    memset(v14, 0, sizeof(v14));
    v9 = sub_140039654((__int64)a2, v12, (__int64)v14);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v9 = sub_14006E6C0(a1 + 24, v14, a3, a4);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v10 = 0;
        goto LABEL_9;
      }
      v11 = 70;
    }
    else
    {
      v11 = 67;
    }
  }
  else
  {
    v11 = 63;
  }
  sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp", v9);
LABEL_9:
  sub_1400066EC(&PerformanceCount);
  return v10;
}
