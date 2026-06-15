/*
 * XREFs of sub_140064B44 @ 0x140064B44
 * Callers:
 *     sub_140065450 @ 0x140065450 (sub_140065450.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400081C4 @ 0x1400081C4 (sub_1400081C4.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C7BC @ 0x14000C7BC (sub_14000C7BC.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DC7C @ 0x14000DC7C (sub_14000DC7C.c)
 *     sub_14000DD04 @ 0x14000DD04 (sub_14000DD04.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_1400313EC @ 0x1400313EC (sub_1400313EC.c)
 *     sub_140041E74 @ 0x140041E74 (sub_140041E74.c)
 *     sub_140066978 @ 0x140066978 (sub_140066978.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_140064B44(_OWORD **a1)
{
  _OWORD **v1; // r14
  unsigned __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rax
  IUnknown *v5; // r10
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // rdi
  __int64 v14; // rdx
  __int64 v16; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v17; // [rsp+58h] [rbp-60h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-58h]
  IUnknown *v19; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v20[2]; // [rsp+70h] [rbp-48h] BYREF
  ATL::CAtlException *v21; // [rsp+80h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v24; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+20h] BYREF

  v1 = a1;
  v19 = 0LL;
  v2 = sub_14000DA4C();
  v4 = sub_14000DF30(0x68uLL, v2, v3);
  if ( v4 )
    v5 = (IUnknown *)sub_140041E74(v4);
  else
    v5 = 0LL;
  v19 = v5;
  if ( !v5 )
  {
    v6 = -2147024882;
    sub_14000C2A8(
      (int)retaddr,
      233,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      -2147024882);
    goto LABEL_26;
  }
  v25 = 0LL;
  v16 = 0LL;
  v24 = 0LL;
  v7 = sub_140066978(
         v5,
         (IID *)*v1,
         *(_QWORD *)v1[3],
         *((_QWORD *)v1[4] + 7),
         (__int64)&v24,
         (__int64)&v16,
         (__int64)&v25);
  v6 = v7;
  if ( v7 < 0 )
  {
    sub_14000C2A8((int)retaddr, 238, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v7);
LABEL_8:
    sub_140003238(&v25);
    sub_140003238(&v16);
    sub_140003238(&v24);
    goto LABEL_26;
  }
  v9 = (_QWORD *)sub_14000C7BC(v8);
  v20[0] = v9;
  if ( v9 )
    v10 = sub_1400081C4(v9, *v1, *(_QWORD *)v1[1], v24, v16, v25, *((_QWORD *)v1[4] + 13));
  else
    v10 = 0LL;
  v17 = v10;
  if ( !v10 )
  {
    v6 = -2147024882;
    sub_14000C2A8(
      (int)retaddr,
      243,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      -2147024882);
    goto LABEL_8;
  }
  v11 = sub_1400313EC(v10);
  v6 = v11;
  if ( v11 < 0 )
  {
    sub_14000C2A8((int)retaddr, 246, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v11);
    v12 = (__int64)v10;
LABEL_16:
    sub_14000DC7C(v12);
    goto LABEL_8;
  }
  *(_BYTE *)v1[5] = v10[3] != 0LL;
  *(_BYTE *)v1[6] = v10[4] != 0LL;
  v13 = (struct _RTL_CRITICAL_SECTION *)(v1[4] + 4);
  lpCriticalSection = v13;
  EnterCriticalSection(v13);
  try
  {
    v20[1] = v13;
    v20[0] = v10;
    sub_14000DD04((_QWORD *)v1[4] + 14, v20);
  }
  catch ( ATL::CAtlException *v21 )
  {
    if ( *(_DWORD *)v21 == -1073741571 )
      o__resetstkoflw();
    v6 = (unsigned int)v10;
    if ( (int)v10 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        256,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
        (int)v10);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      v12 = (__int64)v17;
      goto LABEL_16;
    }
    v1 = a1;
    v13 = lpCriticalSection;
  }
  if ( v13 )
    LeaveCriticalSection(v13);
  v14 = v24;
  v24 = 0LL;
  **(_QWORD **)v1[7] = v14;
  sub_140003238(&v25);
  sub_140003238(&v16);
  sub_140003238(&v24);
  v6 = 0;
LABEL_26:
  sub_140003238((__int64 *)&v19);
  return v6;
}
