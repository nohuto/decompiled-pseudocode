/*
 * XREFs of sub_1800BDC60 @ 0x1800BDC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180038C44 @ 0x180038C44 (sub_180038C44.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BDC60(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 272);
  sub_180038C44(*(_QWORD ***)(a1 + 272));
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 48LL))(*v1);
  *(_OWORD *)v4 = 0LL;
  sub_180011F5C(v1, v4);
  if ( v4[1] )
    sub_180010EC8(v4[1]);
  sub_18000F938((__int64 *)(a1 + 4256));
  *(_DWORD *)(a1 + 4248) = 6;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4264) + 880LL))(*(_QWORD *)(a1 + 4264));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4264) + 888LL))(*(_QWORD *)(a1 + 4264));
  sub_18000F938((__int64 *)(a1 + 4264));
  sub_18000F938((__int64 *)(a1 + 4272));
  sub_18000F938((__int64 *)(a1 + 4280));
  return sub_18000F938((__int64 *)(a1 + 4640));
}
