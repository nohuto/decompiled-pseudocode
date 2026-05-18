/*
 * XREFs of sub_180082258 @ 0x180082258
 * Callers:
 *     sub_180046150 @ 0x180046150 (sub_180046150.c)
 *     sub_1800461F4 @ 0x1800461F4 (sub_1800461F4.c)
 *     sub_180046298 @ 0x180046298 (sub_180046298.c)
 *     sub_18004633C @ 0x18004633C (sub_18004633C.c)
 *     sub_1800463D8 @ 0x1800463D8 (sub_1800463D8.c)
 *     sub_18004647C @ 0x18004647C (sub_18004647C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180029258 @ 0x180029258 (sub_180029258.c)
 *     sub_180038A14 @ 0x180038A14 (sub_180038A14.c)
 *     sub_180038A48 @ 0x180038A48 (sub_180038A48.c)
 *     sub_18004744C @ 0x18004744C (sub_18004744C.c)
 *     sub_180052820 @ 0x180052820 (sub_180052820.c)
 *     sub_180081B78 @ 0x180081B78 (sub_180081B78.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180082258(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbp
  int v9; // esi
  unsigned int v10; // ebx
  const void *v11; // r10
  size_t v12; // r11
  void *v13; // rcx
  unsigned __int64 v14; // r12
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF

  v6 = a1[14];
  if ( v6 )
    LODWORD(v6) = *(_DWORD *)(v6 + 16);
  v9 = a6;
  if ( a6 == 23 || a6 == 24 )
    v10 = ((a3 + 1) & 0xFFFFFFFE) * sub_18004744C(a6);
  else
    v10 = a3 * sub_18004744C(a6);
  v13 = (void *)a1[17];
  if ( v13 )
  {
    if ( v13 == v11 )
      goto LABEL_14;
    if ( (unsigned int)v12 <= (unsigned int)v6 )
    {
      sub_1800114C0(v13, (unsigned int)v6, v11, v10);
      sub_180052820(a1 + 15);
      goto LABEL_14;
    }
  }
  LODWORD(v6) = v12;
  v14 = v12;
  v15 = sub_180081B78(&v18, v12, v11, v10);
  sub_180011F5C(a1 + 17, v15);
  if ( v19 )
    sub_180010EC8(v19);
  sub_180029258((__int64)a1, v14, 15);
LABEL_14:
  v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, _DWORD, int, int))(*a1 + 48))(
                     a1,
                     &v20,
                     a3,
                     v10,
                     v6,
                     a5,
                     v9);
  sub_180038A14(a1 + 14, v16);
  sub_180038A48(&v20);
  return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 40))(a1);
}
