/*
 * XREFs of sub_1400191A0 @ 0x1400191A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140019980 @ 0x140019980 (sub_140019980.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400191A0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+38h] [rbp-130h] BYREF
  __int64 v13; // [rsp+40h] [rbp-128h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-118h] BYREF
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+0h]

  v4 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v4, "SrvStreamGroup_DisconnectFromSaDevice", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  if ( *(_BYTE *)(a1 + 337) )
  {
LABEL_4:
    sub_140019444(a1 + 328);
    if ( a1 != -200 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
    v6 = 0;
    goto LABEL_7;
  }
  v5 = sub_1400B6010(a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    sub_1400B6010(a1 + 24);
    v8 = sub_140006470(v7);
    if ( *(_DWORD *)v8 > 4u
      && (*(_DWORD *)(v8 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v8 + 24) & 0x200LL) == *(_QWORD *)(v8 + 24) )
    {
      v12 = a2;
      v13 = a1;
      sub_140019980(v8, (unsigned int)&unk_1400D25DE, v9, v10, (__int64)&v13, (__int64)&v12);
    }
    goto LABEL_4;
  }
  sub_14000C2A8((int)retaddr, 201, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp", v5);
  if ( a1 != -200 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
LABEL_7:
  sub_1400066EC(&PerformanceCount);
  return v6;
}
