/*
 * XREFs of sub_140024540 @ 0x140024540
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140022784 @ 0x140022784 (sub_140022784.c)
 *     sub_14002385C @ 0x14002385C (sub_14002385C.c)
 *     sub_14002487C @ 0x14002487C (sub_14002487C.c)
 *     sub_1400249A8 @ 0x1400249A8 (sub_1400249A8.c)
 *     sub_140024F64 @ 0x140024F64 (sub_140024F64.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140024540(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rbx
  int v4; // r14d
  _QWORD *v5; // r15
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // eax
  int v12; // r13d
  __int64 v13; // [rsp+50h] [rbp-19h] BYREF
  void *v14; // [rsp+58h] [rbp-11h] BYREF
  int v15; // [rsp+60h] [rbp-9h] BYREF
  __int64 v16; // [rsp+68h] [rbp-1h]
  __int64 v17; // [rsp+70h] [rbp+7h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v19; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+6Fh]
  __int64 v21; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  if ( *(_DWORD *)(a1 + 256) )
  {
    v19 = 0LL;
    sub_1400249A8(a1, &v19);
    v3 = v19;
    if ( *(_QWORD *)(a1 + 368) && v19 )
    {
      sub_1400B6010(v19);
      *(_QWORD *)(a1 + 368) = 0LL;
    }
    v4 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
    v5 = *(_QWORD **)(a1 + 168);
    while ( v5 )
    {
      v10 = v5[2];
      v5 = (_QWORD *)*v5;
      v11 = sub_140024F64(v10);
      v12 = v11;
      if ( v11 < 0 )
      {
        sub_140007934((int)retaddr, 746, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v11);
        v4 = v12;
      }
    }
    if ( a1 != -216 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
    v6 = sub_1400B6010(*(_QWORD *)(a1 + 152));
    if ( v6 < 0 )
    {
      v4 = v6;
      if ( v6 != -2005139433 )
        sub_140007934((int)retaddr, 762, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v6);
    }
    sub_14002487C(*(_QWORD *)(a1 + 160));
    if ( v3 )
      sub_1400B6010(v3);
    if ( v4 == -2005139433 )
    {
      if ( v3 )
        sub_1400B6010(v3);
      if ( v2 )
        LeaveCriticalSection(v2);
      return 2289827863LL;
    }
    else if ( v4 < 0 )
    {
      sub_14000C2A8((int)retaddr, 774, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v4);
      if ( v3 )
        sub_1400B6010(v3);
      if ( v2 )
        LeaveCriticalSection(v2);
      return (unsigned int)v4;
    }
    else
    {
      sub_140022784(a1 + 80, (__int64)&v15);
      v20 = 0LL;
      sub_1400B6010(*(_QWORD *)(a1 + 152));
      v9 = sub_140006470(v8);
      if ( *(_DWORD *)v9 > 4u
        && (*(_QWORD *)(v9 + 16) & 0x400000000001LL) != 0
        && (*(_QWORD *)(v9 + 24) & 0x400000000001LL) == *(_QWORD *)(v9 + 24) )
      {
        v21 = v20;
        v22 = v17;
        v13 = v16;
        LODWORD(v19) = v15;
        v14 = *(void **)(a1 + 384);
        sub_14002385C(
          v9,
          (int)&unk_1400D1A74,
          a1 + 344,
          v9,
          &v14,
          (__int64)&v19,
          (__int64)&v13,
          (__int64)&v22,
          (__int64)&v21);
      }
      if ( v3 )
        sub_1400B6010(v3);
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0LL;
    }
  }
  else
  {
    sub_14000C2A8((int)retaddr, 724, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", -2005139437);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2289827859LL;
  }
}
