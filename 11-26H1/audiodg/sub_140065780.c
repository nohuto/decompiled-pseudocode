/*
 * XREFs of sub_140065780 @ 0x140065780
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     sub_14002F304 @ 0x14002F304 (sub_14002F304.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14006488C @ 0x14006488C (sub_14006488C.c)
 *     sub_140064B08 @ 0x140064B08 (sub_140064B08.c)
 *     sub_140065A28 @ 0x140065A28 (sub_140065A28.c)
 *     sub_140065FB4 @ 0x140065FB4 (sub_140065FB4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140065780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  void *v8; // rax
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  int v13; // r9d
  int v14; // edx
  _DWORD *v15; // rcx
  RTL_SRWLOCK *v16; // rdi
  __int64 *v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // rax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // esi
  __int64 v23; // rax
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  _WORD *v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v29[104]; // [rsp+50h] [rbp-B0h] BYREF
  _UNKNOWN *retaddr; // [rsp+178h] [rbp+78h]

  v28 = a4;
  *a5 = 0LL;
  v25 = 0LL;
  v8 = &unk_1400C97B8;
  if ( !*(_DWORD *)(a3 + 16) )
    v8 = &unk_1400C97BC;
  v9 = sub_14001EB30(v29, 100LL, (__int64)L"%s%s", a2, v8);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = v9;
    v14 = 514;
LABEL_24:
    sub_14000C2A8((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v13);
    goto LABEL_26;
  }
  v15 = *(_DWORD **)(a1 + 96);
  if ( *v15 > 4u )
  {
    v27 = v29;
    v26 = *(_QWORD *)a3;
    sub_14002F304((__int64)v15, byte_1400D2400, v10, v11, (__int64)&v26, (void **)&v27);
  }
  v16 = (RTL_SRWLOCK *)(a1 + 88);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 88));
  v17 = (__int64 *)sub_140065A28(a1, &v26, v29);
  sub_140064B08(&v25, v17);
  sub_140003238(&v26);
  if ( a1 != -88 )
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 88));
  v18 = v25;
  if ( v25 )
  {
LABEL_20:
    v23 = v18 + 48;
    if ( !v18 )
      v23 = 56LL;
    if ( *(_QWORD *)v23 == a4 )
    {
      v25 = 0LL;
      *a5 = v18;
      v12 = 0;
      goto LABEL_26;
    }
    v12 = -2147418113;
    v13 = -2147418113;
    v14 = 548;
    goto LABEL_24;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 88));
  v19 = (__int64 *)sub_140065A28(a1, &v26, v29);
  sub_140064B08(&v25, v19);
  sub_140003238(&v26);
  v18 = v25;
  if ( v25 )
    goto LABEL_18;
  v25 = 0LL;
  v20 = sub_14006488C(&v25, &v28, (_QWORD *)a3, a3 + 8, (_DWORD *)(a3 + 12), (__int64 *)(a1 + 96));
  v12 = v20;
  if ( v20 < 0 )
  {
    sub_14000C2A8((int)retaddr, 542, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v20);
    if ( a1 != -88 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 88));
    goto LABEL_26;
  }
  v18 = v25;
  v21 = sub_140065FB4(a1, v29, v25);
  v22 = v21;
  if ( v21 >= 0 )
  {
LABEL_18:
    if ( v16 )
      ReleaseSRWLockExclusive(v16);
    goto LABEL_20;
  }
  sub_14000C2A8((int)retaddr, 543, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v21);
  if ( v16 )
    ReleaseSRWLockExclusive(v16);
  v12 = v22;
LABEL_26:
  sub_140003238(&v25);
  return v12;
}
