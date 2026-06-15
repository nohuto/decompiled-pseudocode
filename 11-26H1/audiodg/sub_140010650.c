/*
 * XREFs of sub_140010650 @ 0x140010650
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140003834 @ 0x140003834 (sub_140003834.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_1400109C4 @ 0x1400109C4 (sub_1400109C4.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_140010650(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // [rsp+20h] [rbp-158h] BYREF
  __int64 v14; // [rsp+28h] [rbp-150h]
  _QWORD v15[4]; // [rsp+30h] [rbp-148h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-128h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v4 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v4, "SrvSubmixImpl_OnConnectedToStream", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v15[0] = a1 + 176;
  v13 = 0LL;
  try
  {
    v5 = sub_1400B6010(a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1110, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v5);
      if ( a1 != -176 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
      sub_1400066EC(&PerformanceCount);
      result = v6;
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
      v15[1] = a1 + 32;
      v7 = a1 + 72;
      v15[2] = v13;
      v14 = *(_QWORD *)(a1 + 72);
      sub_1400109C4(a1 + 72);
      v8 = *(__int64 **)(a1 + 104);
      v9 = *v8;
      sub_140010994(v8 + 2, v13);
      *(_QWORD *)(a1 + 104) = v9;
      v8[1] = 0LL;
      *v8 = v14;
      ++*(_QWORD *)(a1 + 88);
      if ( *(_QWORD *)(a1 + 72) )
        *(_QWORD *)(*(_QWORD *)v7 + 8LL) = v8;
      else
        *(_QWORD *)(a1 + 80) = v8;
      *(_QWORD *)v7 = v8;
      if ( a1 != -32 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
      if ( (unsigned __int8)sub_1400B6010(v13) && (v11 = sub_140003834(a1, 1), v12 = v11, v11 < 0) )
      {
        sub_14000C2A8((int)retaddr, 1120, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v11);
        sub_140003238(&v13);
        sub_140018FF0(v15);
        sub_1400066EC(&PerformanceCount);
        result = v12;
      }
      else
      {
        sub_140007CC0();
        if ( v13 )
          sub_1400B6010(v13);
        if ( a1 != -176 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
        sub_1400066EC(&PerformanceCount);
        result = 0LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(retaddr, 1126LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp");
  }
  return result;
}
