/*
 * XREFs of sub_1800C53AC @ 0x1800C53AC
 * Callers:
 *     sub_1800C5470 @ 0x1800C5470 (sub_1800C5470.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_1800C5A00 @ 0x1800C5A00 (sub_1800C5A00.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800C53AC(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  sub_180012A94((__int64)(a1 + 9), &v5);
  if ( v5 && *(_BYTE *)(v5 + 3976) )
  {
    v2 = a1 + 18;
    v3 = a1[18];
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
      sub_1800C5A00(a1, 0LL);
    }
  }
  else
  {
    sub_18001DCFC(&qword_1801BD548, 3);
    v2 = a1 + 18;
  }
  if ( v6 )
    sub_180010EC8(v6);
  sub_18000F938(a1 + 19);
  sub_18000F938(v2);
  return sub_180038A68(a1);
}
