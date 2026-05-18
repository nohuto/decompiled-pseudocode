/*
 * XREFs of sub_1800CCD60 @ 0x1800CCD60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800BF218 @ 0x1800BF218 (sub_1800BF218.c)
 *     sub_1800C5C48 @ 0x1800C5C48 (sub_1800C5C48.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CCD60(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v4 = sub_1800BF218(&v7, a2);
  sub_180011F5C((_QWORD *)(a1 + 104), v4);
  if ( v8 )
    sub_180010EC8(v8);
  sub_1800C5C48(*(_QWORD *)(a1 + 104), &v9);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 216LL))(v9, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 0;
  result = sub_18000F938(&v9);
  v6 = a2[1];
  if ( v6 )
    return sub_180010EC8(v6);
  return result;
}
