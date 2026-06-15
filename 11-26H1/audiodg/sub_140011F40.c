/*
 * XREFs of sub_140011F40 @ 0x140011F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C428 @ 0x14000C428 (sub_14000C428.c)
 *     sub_140012180 @ 0x140012180 (sub_140012180.c)
 *     sub_1400121EC @ 0x1400121EC (sub_1400121EC.c)
 *     sub_1400122B4 @ 0x1400122B4 (sub_1400122B4.c)
 *     sub_140012430 @ 0x140012430 (sub_140012430.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140011F40(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r12
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // eax
  __int64 **v13; // rdi
  __int64 v14; // r14
  __int64 *v15; // rcx
  __int64 *v16; // rax
  int *v17; // rbx
  ATL::CAtlException *v18; // [rsp+20h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  int v20; // [rsp+70h] [rbp+8h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+78h] [rbp+10h]
  __int64 v23; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  lpCriticalSection = v6;
  if ( !a2 || *(_DWORD *)(a2 + 32) != 1094927443 || !*(_DWORD *)(a2 + 16) )
  {
    v7 = -2147024809;
LABEL_3:
    sub_14000C2A8((int)retaddr, 465, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v7);
LABEL_4:
    if ( v6 )
      LeaveCriticalSection(v6);
    return (unsigned int)v7;
  }
  v7 = sub_1400121EC(*(_QWORD *)(a2 + 24));
  if ( v7 < 0 )
    goto LABEL_3;
  v9 = sub_14000C428();
  if ( !v9 || (v10 = sub_140012180(v9), v11 = v10, (v23 = v10) == 0) )
  {
    v7 = -2147024882;
    sub_14000C2A8(
      (int)retaddr,
      470,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      -2147024882);
    goto LABEL_4;
  }
  v12 = sub_1400122B4(v10, a2, a1 & -(__int64)(a1 != 8));
  v7 = v12;
  if ( v12 < 0 )
  {
    sub_14000C2A8((int)retaddr, 473, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v12);
    sub_1400B6010(v11);
    goto LABEL_4;
  }
  try
  {
    v13 = (__int64 **)(a1 + 152);
    v14 = *(_QWORD *)(a1 + 152);
    sub_140012430(a1 + 152);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v17 = (int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      o__resetstkoflw();
    v20 = *v17;
    if ( v20 >= 0 )
    {
      v3 = a3;
      v6 = lpCriticalSection;
      v11 = v23;
      goto LABEL_18;
    }
    sub_14000C2A8((int)retaddr, 484, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v20);
    sub_1400B6010(v23);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)v20;
  }
  v15 = v13[4];
  v16 = (__int64 *)*v15;
  v15[2] = v11;
  v13[4] = v16;
  v15[1] = 0LL;
  *v15 = v14;
  v13[2] = (__int64 *)((char *)v13[2] + 1);
  if ( *v13 )
    (*v13)[1] = (__int64)v15;
  else
    v13[1] = v15;
  *v13 = v15;
LABEL_18:
  *v3 = *(_QWORD *)(v11 + 16);
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
