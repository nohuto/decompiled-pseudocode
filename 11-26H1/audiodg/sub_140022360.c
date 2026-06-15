/*
 * XREFs of sub_140022360 @ 0x140022360
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140023930 @ 0x140023930 (sub_140023930.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140022360(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r9d
  int v13; // eax
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+188h] [rbp+88h]

  v4 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v4, "SrvStreamInstance_Disconnect", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  v5 = sub_1400B6010(a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_14000C2A8((int)retaddr, 527, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v5);
    if ( a1 != -216 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  }
  else
  {
    if ( (unsigned __int8)sub_1400B6010(a1 - 8) )
    {
      v13 = sub_1400B6010(a1 - 8);
      v8 = v13;
      if ( v13 < 0 )
      {
        sub_14000C2A8((int)retaddr, 532, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v13);
LABEL_14:
        if ( a1 != -216 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
        v6 = v8;
        goto LABEL_11;
      }
    }
    v7 = sub_1400B6010(0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      sub_14000C2A8((int)retaddr, 535, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v7);
      goto LABEL_14;
    }
    sub_140019444((__int64 *)(a1 + 96));
    sub_140007CC0();
    v10 = sub_140006470(v9);
    if ( *(_DWORD *)v10 > 4u
      && (*(_DWORD *)(v10 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v10 + 24) & 0x200LL) == *(_QWORD *)(v10 + 24) )
    {
      v14 = *(_QWORD *)(a1 + 264);
      v15 = a2;
      v16 = a1 - 8;
      sub_140023930(v10, (unsigned int)&unk_1400D2667, v10, v11, (__int64)&v16, (__int64)&v15, (__int64)&v14);
    }
    if ( a1 != -216 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
    v6 = 0;
  }
LABEL_11:
  sub_1400066EC(&PerformanceCount);
  return v6;
}
