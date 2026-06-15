/*
 * XREFs of sub_140019480 @ 0x140019480
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_140019980 @ 0x140019980 (sub_140019980.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140019480(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  _UNKNOWN *retaddr; // [rsp+178h] [rbp+78h]

  v4 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v4, "SrvStreamGroup_ConnectToDeviceGraph", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v5 = sub_1400B6010(a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_14000C2A8((int)retaddr, 163, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp", v5);
    goto LABEL_3;
  }
  if ( *(_QWORD *)(a1 + 328) )
  {
    v6 = -2005139410;
    sub_14000C2A8((int)retaddr, 166, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp", -2005139410);
    goto LABEL_3;
  }
  if ( !*(_BYTE *)(a1 + 337) )
  {
    v8 = sub_1400B6010(a1 + 24);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v10 = sub_140006470(v9);
      if ( *(_DWORD *)v10 > 4u
        && (*(_DWORD *)(v10 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v10 + 24) & 0x200LL) == *(_QWORD *)(v10 + 24) )
      {
        v13 = a2;
        v14 = a1;
        sub_140019980(v10, (unsigned int)&unk_1400D25A0, v11, v12, (__int64)&v14, (__int64)&v13);
      }
      goto LABEL_13;
    }
    sub_14000C2A8((int)retaddr, 171, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp", v8);
LABEL_3:
    if ( a1 != -200 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
    goto LABEL_5;
  }
  sub_14001821C((__int64 *)(a1 + 328), 0LL);
LABEL_13:
  if ( a1 != -200 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v6 = 0;
LABEL_5:
  sub_1400066EC(&PerformanceCount);
  return v6;
}
