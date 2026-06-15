/*
 * XREFs of sub_140005E9C @ 0x140005E9C
 * Callers:
 *     sub_140009D00 @ 0x140009D00 (sub_140009D00.c)
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000655C @ 0x14000655C (sub_14000655C.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140069574 @ 0x140069574 (sub_140069574.c)
 *     sub_1400695A0 @ 0x1400695A0 (sub_1400695A0.c)
 *     sub_1400732C4 @ 0x1400732C4 (sub_1400732C4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_140005E9C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // xmm6
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edi
  int v11; // edx
  int v12; // eax
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v17[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v18[240]; // [rsp+78h] [rbp-90h] BYREF
  void *retaddr; // [rsp+1B0h] [rbp+A8h]

  v16 = a2;
  v3 = *(_QWORD *)(a1 + 24);
  while ( 1 )
  {
    do
    {
      if ( !v3 )
        return 0LL;
      v4 = *(_QWORD *)(v3 + 16);
      v3 = *(_QWORD *)(v3 + 8);
    }
    while ( *(_DWORD *)(v4 + 40) != 2 );
    v5 = *(_QWORD *)(v4 + 32);
    v15 = v5;
    v14 = 0LL;
    v14 = *(_QWORD *)(v5 + 40);
    v6 = *(_QWORD *)(v5 + 40);
    if ( v6 )
    {
      sub_1400B6010(v6);
      v5 = v15;
    }
    v7 = *(_OWORD *)(v5 + 8);
    v8 = sub_140006470();
    v17[0] = v7;
    sub_14000655C(v18, v8, "ActivateApo", v17);
    v9 = sub_140069574((unsigned int)v17, a1, (unsigned int)&v16, (unsigned int)&v14, (__int64)&v15);
    v10 = sub_1400695A0(v9);
    sub_1400066EC(v18);
    v11 = *(_DWORD *)(v15 + 4);
    if ( v11 )
    {
      v12 = sub_1400732C4(*(_QWORD *)(a1 + 192), v11, v10, 0, v15 + 8, 1065353216);
      if ( v12 < 0 )
        sub_140007934(retaddr, 3111LL, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v12);
    }
    if ( v10 < 0 )
      break;
    if ( v14 )
      sub_1400B6010(v14);
  }
  sub_14000C2A8(retaddr, 3113LL, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v10);
  if ( v14 )
    sub_1400B6010(v14);
  return (unsigned int)v10;
}
