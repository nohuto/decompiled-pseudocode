/*
 * XREFs of sub_1400240A0 @ 0x1400240A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140024510 @ 0x140024510 (sub_140024510.c)
 *     sub_1400249A8 @ 0x1400249A8 (sub_1400249A8.c)
 *     sub_140024B0C @ 0x140024B0C (sub_140024B0C.c)
 *     sub_140024E0C @ 0x140024E0C (sub_140024E0C.c)
 *     sub_140044BB0 @ 0x140044BB0 (sub_140044BB0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400240A0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // esi
  _QWORD *v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-50h]
  _QWORD v19[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int16 *v20; // [rsp+50h] [rbp-30h] BYREF
  int v21; // [rsp+58h] [rbp-28h]
  int v22; // [rsp+5Ch] [rbp-24h]
  void *v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+6Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+38h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  if ( *(_DWORD *)(a1 + 256) )
  {
    v3 = *(_QWORD *)sub_140044BB0(v19, a1);
    v19[0] = 0LL;
    v4 = sub_1400249A8(a1, v19);
    if ( v4 < 0 )
      sub_140007934((int)retaddr, 630, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v4);
    v5 = v19[0];
    if ( v19[0] )
    {
      sub_1400B6010(a1 + 16);
      sub_1400B6010(v5);
    }
    v6 = *(_QWORD **)(*(_QWORD *)sub_140024510(*(_QWORD *)(a1 + 160) + 16LL) + 32LL);
    v19[0] = 0LL;
    v7 = sub_1400B6010(*v6);
    if ( v7 < 0 )
      sub_140007934((int)retaddr, 651, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v7);
    v8 = v19[0];
    if ( v19[0] && v5 )
    {
      v15 = sub_1400B6010(v19[0]);
      if ( v15 < 0 )
        sub_140007934((int)retaddr, 658, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v15);
      v8 = v19[0];
    }
    if ( v8 )
      sub_1400B6010(v8);
    v19[2] = 0LL;
    v9 = sub_1400B6010(*(_QWORD *)(a1 + 152));
    v10 = v9;
    if ( v9 < 0 )
    {
      sub_14000C2A8((int)retaddr, 670, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v9);
      if ( v5 )
        sub_1400B6010(v5);
      sub_1400B6010(v3);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v10;
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
      v11 = *(_QWORD **)(a1 + 168);
      do
      {
        if ( !v11 )
        {
          if ( a1 != -216 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
          sub_140024E0C(a1 + 80);
          v13 = sub_140006470(v12);
          if ( *(_DWORD *)v13 > 4u
            && (*(_BYTE *)(v13 + 16) & 1) != 0
            && (*(_QWORD *)(v13 + 24) & 1LL) == *(_QWORD *)(v13 + 24) )
          {
            v19[0] = 0x40B000000LL;
            v19[1] = 1LL;
            v20 = *(unsigned __int16 **)(v13 + 8);
            v21 = *v20;
            v22 = 2;
            v23 = &unk_1400D1A3D;
            v24 = 20;
            v25 = 1;
            ((void (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
              *(_QWORD *)(v13 + 32),
              v19,
              a1 + 344,
              0LL,
              2,
              &v20,
              (unsigned int)&unk_1400D4619 - (unsigned int)&unk_1400D1550);
          }
          if ( v5 )
            sub_1400B6010(v5);
          if ( v2 )
            LeaveCriticalSection(v2);
          return 0LL;
        }
        v16 = v11[2];
        v11 = (_QWORD *)*v11;
        v17 = sub_140024B0C(v16);
        v18 = v17;
      }
      while ( v17 >= 0 );
      sub_14000C2A8((int)retaddr, 678, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v17);
      if ( a1 != -216 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
      if ( v5 )
        sub_1400B6010(v5);
      sub_1400B6010(v3);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v18;
    }
  }
  else
  {
    sub_14000C2A8((int)retaddr, 624, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", -2005139437);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2289827859LL;
  }
}
