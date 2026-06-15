/*
 * XREFs of sub_14006CF50 @ 0x14006CF50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400108EC @ 0x1400108EC (sub_1400108EC.c)
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14006DE1C @ 0x14006DE1C (sub_14006DE1C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_14006CF50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  __int64 v12; // r8
  ATL::CAtlException *v14; // rbx
  __int64 v15; // [rsp+50h] [rbp-178h] BYREF
  __int64 v16; // [rsp+58h] [rbp-170h] BYREF
  struct _RTL_CRITICAL_SECTION *v17[2]; // [rsp+60h] [rbp-168h] BYREF
  __int128 v18; // [rsp+70h] [rbp-158h] BYREF
  __int64 v19; // [rsp+80h] [rbp-148h]
  ATL::CAtlException *v20; // [rsp+88h] [rbp-140h] BYREF
  __int128 v21; // [rsp+90h] [rbp-138h]
  __int128 v22; // [rsp+A0h] [rbp-128h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B0h] [rbp-118h] BYREF
  _UNKNOWN *retaddr; // [rsp+1C8h] [rbp+0h]

  v4 = a4;
  v19 = a4;
  v21 = *(_OWORD *)(a2 + 48);
  v22 = v21;
  EtwEventActivityIdControl(4LL, &v22);
  v8 = sub_140006470(v7);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v8, "SrvStreamGroup_CreateStream", 0LL);
  if ( !*(_BYTE *)(a1 + 337) )
  {
    v10 = -2147418113;
    sub_14000C2A8((int)retaddr, 114, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp", -2147418113);
    goto LABEL_11;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v17[0] = (struct _RTL_CRITICAL_SECTION *)(a1 + 200);
  v15 = 0LL;
  v18 = xmmword_1400C5548;
  v9 = sub_14006DE1C((unsigned int)&v15, *(_QWORD *)(a2 + 112), *(_DWORD *)(a2 + 12), *(_DWORD *)a2, a1);
  v10 = v9;
  if ( v9 >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    *(_QWORD *)&v18 = a1 + 56;
    v11 = v15;
    sub_140010994(&v16, v15);
    try
    {
      sub_1400108EC((__int64 *)(a1 + 96), (__int64)&v16, v12);
      sub_140003238(&v16);
    }
    catch ( ATL::CAtlException *v20 )
    {
      v14 = v20;
      if ( *(_DWORD *)v20 == -1073741571 )
        o__resetstkoflw();
      LODWORD(v16) = *(_DWORD *)v14;
      v10 = v16;
      if ( (int)v16 < 0 )
      {
        sub_14000C2A8((int)retaddr, 105, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp", v16);
        sub_140018FF0((struct _RTL_CRITICAL_SECTION **)&v18);
        goto LABEL_7;
      }
      v11 = v15;
      v4 = v19;
    }
    sub_140018FF0((struct _RTL_CRITICAL_SECTION **)&v18);
    *(_QWORD *)(v4 + 32) = sub_1400B6010(v11);
    sub_140003238(&v15);
    sub_140018FF0(v17);
    sub_1400066EC(&PerformanceCount);
    EtwEventActivityIdControl(4LL, &v22);
    return 0LL;
  }
  sub_14000C2A8((int)retaddr, 99, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp", v9);
LABEL_7:
  sub_140003238(&v15);
  sub_140018FF0(v17);
LABEL_11:
  sub_1400066EC(&PerformanceCount);
  EtwEventActivityIdControl(4LL, &v22);
  return v10;
}
