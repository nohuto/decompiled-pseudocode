/*
 * XREFs of sub_1800CD6D0 @ 0x1800CD6D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800CD6D0(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 12LL);
  v5 = *(_QWORD *)(a1 + 104);
  v9 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  sub_180012A94(a1 + 72, &v7);
  sub_1800CD8D4(a2, &v7, &v9, v4);
  if ( v8 )
    sub_180010EC8(v8);
  return a2;
}
