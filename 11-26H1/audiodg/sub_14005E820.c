/*
 * XREFs of sub_14005E820 @ 0x14005E820
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140021954 @ 0x140021954 (sub_140021954.c)
 *     sub_14002EDE0 @ 0x14002EDE0 (sub_14002EDE0.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14005DB34 @ 0x14005DB34 (sub_14005DB34.c)
 *     sub_14005DC30 @ 0x14005DC30 (sub_14005DC30.c)
 *     sub_14005DFF0 @ 0x14005DFF0 (sub_14005DFF0.c)
 *     sub_14005E604 @ 0x14005E604 (sub_14005E604.c)
 *     sub_14005F24C @ 0x14005F24C (sub_14005F24C.c)
 *     sub_140086DE8 @ 0x140086DE8 (sub_140086DE8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 __fastcall sub_14005E820(RTL_SRWLOCK *a1, __int64 a2, _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rsi
  RTL_SRWLOCK *v7; // r12
  RTL_SRWLOCK *v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  GUID v15; // xmm6
  RTL_SRWLOCK *v16; // rax
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rsi
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-B8h] BYREF
  RTL_SRWLOCK *v23; // [rsp+28h] [rbp-B0h] BYREF
  RTL_SRWLOCK *v24; // [rsp+30h] [rbp-A8h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-A0h] BYREF
  GUID v26; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-80h]
  GUID v28; // [rsp+60h] [rbp-78h] BYREF
  __int64 v29[3]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h]

  v6 = a1 + 8;
  AcquireSRWLockShared(a1 + 8);
  v24 = v6;
  v7 = a1 + 9;
  sub_140021954((__int64)&v26, a2);
  sub_14005F24C(&a1[9], &v25, &v26);
  if ( v27 > 7 )
    sub_1400453E4(*(__int64 *)&v26.Data1, 2 * v27 + 2);
  if ( v25 != a1[10].Ptr )
  {
    sub_14005DC30(v25 + 6, &v23);
    v8 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      *a3 = v8;
      sub_140056130((__int64 *)&v23);
      sub_14002EDE0(&v24);
      return 0LL;
    }
    sub_140056130((__int64 *)&v23);
  }
  sub_14002EDE0(&v24);
  AcquireSRWLockExclusive(v6);
  v23 = v6;
  sub_140021954((__int64)&v26, a2);
  sub_14005F24C(&a1[9], &v24, &v26);
  v10 = v27;
  if ( v27 > 7 )
    sub_1400453E4(*(__int64 *)&v26.Data1, 2 * v27 + 2);
  if ( v24 != a1[10].Ptr )
  {
    sub_14005DC30((__int64 *)&v24[6], &v22);
    v11 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      *a3 = v11;
      sub_140056130(&v22);
      sub_14003A998(&v23);
      return 0LL;
    }
    sub_140056130(&v22);
  }
  v28 = 0LL;
  v12 = sub_14005E604(a2, v10, &v28);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v15 = v28;
    v16 = (RTL_SRWLOCK *)sub_140006470(v13);
    v22 = 0LL;
    v26 = v15;
    v24 = v16;
    v17 = sub_140086DE8(&v22, &v24, &v26);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v25 = 0LL;
      v19 = v22;
      v24 = 0LL;
      v20 = sub_1400B6010(v22);
      if ( v20 >= 0 )
        v20 = sub_1400B6010(v24);
      sub_140003238((__int64 *)&v24);
      if ( v20 >= 0 )
      {
        sub_140021954((__int64)v29, a2);
        v21 = sub_14005DB34(v7, (__int64)&v26, v29);
        sub_14005DFF0((__int64 *)(*(_QWORD *)v21 + 48LL), (__int64)v25);
        if ( v30 > 7 )
          sub_1400453E4(v29[0], 2 * v30 + 2);
        v22 = 0LL;
        *a3 = v19;
        sub_140003238((__int64 *)&v25);
        sub_140056130(&v22);
        sub_14003A998(&v23);
        return 0LL;
      }
      else
      {
        sub_14000C2A8((int)retaddr, 119, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopumpdspmanager.cpp", v20);
        sub_140003238((__int64 *)&v25);
        sub_140056130(&v22);
        sub_14003A998(&v23);
        return (unsigned int)v20;
      }
    }
    else
    {
      sub_14000C2A8((int)retaddr, 116, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopumpdspmanager.cpp", v17);
      sub_140056130(&v22);
      sub_14003A998(&v23);
      return v18;
    }
  }
  else
  {
    sub_14000C2A8((int)retaddr, 113, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopumpdspmanager.cpp", v12);
    sub_14003A998(&v23);
    return v14;
  }
}
