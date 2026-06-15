/*
 * XREFs of sub_140060370 @ 0x140060370
 * Callers:
 *     sub_14005F750 @ 0x14005F750 (sub_14005F750.c)
 * Callees:
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000EE10 @ 0x14000EE10 (sub_14000EE10.c)
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_14005F564 @ 0x14005F564 (sub_14005F564.c)
 *     sub_14005FC08 @ 0x14005FC08 (sub_14005FC08.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_140060370(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // r13
  unsigned __int16 *v9; // rax
  int v10; // ebx
  int v11; // edx
  int v13; // r12d
  __int64 v14; // rsi
  unsigned __int16 *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  char v22; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+B8h] [rbp+58h] BYREF

  v25 = a3;
  v8 = a1 + 72;
  v20 = a1 + 72;
  v21 = 0LL;
  v22 = 1;
  v9 = (unsigned __int16 *)sub_1400B6010(a4);
  v10 = sub_140006BCC(v9, &v21);
  sub_140033E34((__int64)&v20);
  if ( v10 < 0 )
  {
    v11 = 85;
LABEL_3:
    sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp", v10);
    return (unsigned int)v10;
  }
  sub_14001821C((__int64 *)(a1 + 80), a2);
  v13 = a5;
  v14 = *(_QWORD *)(a1 + 80);
  sub_14000EE10((__int64 *)(a1 + 88));
  v10 = sub_1400B6010(v14);
  if ( v10 < 0 )
  {
    v11 = 94;
    goto LABEL_3;
  }
  v20 = v8;
  v21 = 0LL;
  v22 = 1;
  v15 = (unsigned __int16 *)sub_1400B6010(a4);
  v10 = sub_140006BCC(v15, &v21);
  sub_140033E34((__int64)&v20);
  if ( v10 < 0 )
  {
    v11 = 95;
    goto LABEL_3;
  }
  v24 = 0LL;
  v16 = sub_14005F564(a1, &v24);
  v10 = v16;
  if ( v16 < 0 )
  {
    sub_14000C2A8((int)retaddr, 99, (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp", v16);
    v17 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      sub_1400B6010(v17);
    }
    return (unsigned int)v10;
  }
  EnterCriticalSection(&stru_1400E86D8);
  v26 = &stru_1400E86D8;
  sub_14005FC08(v18, &v25, &v24);
  sub_140018FF0(&v26);
  *(_DWORD *)(a1 + 64) = v13;
  v19 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    sub_1400B6010(v19);
  }
  return 0LL;
}
