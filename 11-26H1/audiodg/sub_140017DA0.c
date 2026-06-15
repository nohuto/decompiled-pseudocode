/*
 * XREFs of sub_140017DA0 @ 0x140017DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140017ED8 @ 0x140017ED8 (sub_140017ED8.c)
 *     sub_1400180E8 @ 0x1400180E8 (sub_1400180E8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140054680 @ 0x140054680 (sub_140054680.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_140017DA0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v12 = v3;
  v4 = a1 + 184;
  sub_140054680(a1 + 184, &v10, &v11);
  try
  {
    if ( v10 == *(_QWORD *)(a1 + 192) )
    {
      v10 = 0LL;
      v5 = sub_1400180E8(&v10, &v11);
      v6 = v5;
      if ( v5 < 0 )
      {
        sub_14000C2A8((int)retaddr, 122, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v5);
        sub_140003238(&v10);
        sub_140018FF0(&v12);
        result = v6;
      }
      else
      {
        sub_140017ED8(v4, v8, &v11, &v10);
        if ( v10 )
          sub_1400B6010(v10);
        if ( v3 )
          LeaveCriticalSection(v3);
        result = 0LL;
      }
    }
    else
    {
      sub_14000C2A8(
        (int)retaddr,
        119,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        -2147418113);
      if ( v3 )
        LeaveCriticalSection(v3);
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(retaddr, 126LL, "avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp");
  }
  return result;
}
