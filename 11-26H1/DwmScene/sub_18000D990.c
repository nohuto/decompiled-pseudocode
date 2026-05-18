/*
 * XREFs of sub_18000D990 @ 0x18000D990
 * Callers:
 *     CreateDwmSceneRenderer @ 0x1800113A0 (CreateDwmSceneRenderer.c)
 * Callees:
 *     sub_18000E3AC @ 0x18000E3AC (sub_18000E3AC.c)
 *     sub_18000E4EC @ 0x18000E4EC (sub_18000E4EC.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_18001A000 @ 0x18001A000 (sub_18001A000.c)
 *     sub_18001C540 @ 0x18001C540 (sub_18001C540.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000D990(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = sub_18001C540(184LL);
  v9 = v4;
  if ( v4 )
  {
    v6 = sub_18000E3AC(v4);
    v8 = v6;
    v9 = 0LL;
    v5 = sub_18001A000(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      sub_18000F938(&v8);
      v5 = 0;
    }
    else
    {
      sub_18000F938(&v8);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  sub_18000E4EC(&v9);
  return (unsigned int)v5;
}
