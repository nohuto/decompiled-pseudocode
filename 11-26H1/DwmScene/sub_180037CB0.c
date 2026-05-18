/*
 * XREFs of sub_180037CB0 @ 0x180037CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180037CB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD *v3; // rax
  __int64 (__fastcall *v4)(__int64, _QWORD *); // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp+8h]

  v10 = sub_180012C40(&v8, a2);
  v3 = sub_180012C40(v9, (_QWORD *)(v2 + 8));
  result = v4(v5, v3);
  v7 = v10[1];
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
