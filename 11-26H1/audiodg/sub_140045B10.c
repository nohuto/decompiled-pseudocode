/*
 * XREFs of sub_140045B10 @ 0x140045B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400383F4 @ 0x1400383F4 (sub_1400383F4.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_140048600 @ 0x140048600 (sub_140048600.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140075E54 @ 0x140075E54 (sub_140075E54.c)
 *     sub_140075EEC @ 0x140075EEC (sub_140075EEC.c)
 *     sub_140076CA0 @ 0x140076CA0 (sub_140076CA0.c)
 *     sub_140077080 @ 0x140077080 (sub_140077080.c)
 *     sub_1400796FC @ 0x1400796FC (sub_1400796FC.c)
 *     sub_14007B100 @ 0x14007B100 (sub_14007B100.c)
 *     sub_14007D4B0 @ 0x14007D4B0 (sub_14007D4B0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_140045B10(__int64 a1, __int64 a2, __int64 a3)
{
  RTL_SRWLOCK *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // edx
  HSTRING string; // [rsp+28h] [rbp-71h]
  __int64 v11; // [rsp+30h] [rbp-69h] BYREF
  __int64 v12; // [rsp+38h] [rbp-61h] BYREF
  __int64 v13; // [rsp+40h] [rbp-59h] BYREF
  __int64 v14; // [rsp+48h] [rbp-51h] BYREF
  __int64 v15; // [rsp+50h] [rbp-49h] BYREF
  __int64 v16; // [rsp+58h] [rbp-41h] BYREF
  __int64 v17; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+68h] [rbp-31h]
  __int64 v19; // [rsp+70h] [rbp-29h] BYREF
  void *v20; // [rsp+78h] [rbp-21h] BYREF
  RTL_SRWLOCK *v21; // [rsp+90h] [rbp-9h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+5Fh]

  v5 = (RTL_SRWLOCK *)(a1 + 64);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 64));
  v21 = v5;
  v17 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  string = 0LL;
  v18 = 0;
  if ( *(_BYTE *)(a1 + 128) && *(_QWORD *)(a1 + 112) )
  {
    v15 = 0LL;
    v6 = sub_1400B6010(a3);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v6 = sub_1400B6010(v15);
      v7 = v6;
      if ( v6 >= 0 )
      {
        v7 = 0;
LABEL_9:
        WindowsDeleteString(string);
        string = 0LL;
        sub_140008C08(&v20, 0LL);
        sub_140048600(&v19);
        sub_140003238(&v11);
        sub_140003238(&v12);
        sub_140003238(&v14);
        sub_140003238(&v15);
        sub_140003238(&v13);
        sub_140003238(&v16);
        sub_140003238(&v17);
        sub_14003A998(&v21);
        return v7;
      }
      v8 = 884;
    }
    else
    {
      v8 = 883;
    }
    sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v6);
    goto LABEL_9;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return 0LL;
}
