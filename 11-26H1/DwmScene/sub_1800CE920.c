/*
 * XREFs of sub_1800CE920 @ 0x1800CE920
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_1800277A0 @ 0x1800277A0 (sub_1800277A0.c)
 *     sub_1800287AC @ 0x1800287AC (sub_1800287AC.c)
 *     sub_1800CE6C0 @ 0x1800CE6C0 (sub_1800CE6C0.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800CE920(__int64 a1, __int64 a2)
{
  __int64 **v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  int v8; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 *v13; // rax
  __int64 v14; // rcx
  _BYTE *v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h]
  _QWORD *v18; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+70h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(a1 + 536) )
    return 0;
  v3 = (__int64 **)(a1 + 552);
  v4 = **(_QWORD **)(a1 + 552);
  v21 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    **(_BYTE **)(v4 + 40) = 0;
    sub_18001D6F4(&v21, a2);
    v4 = v21;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)(a1 + 536) + 16LL))(*(_QWORD *)(a1 + 536), &v18);
  v6 = v18;
  v7 = v19;
  if ( v18 != v19 )
  {
    do
    {
      v8 = (**(__int64 (__fastcall ***)(_QWORD))*v6)(*v6);
      v9 = (_QWORD *)sub_1800CE6C0(a1, v8);
      sub_180012C40(&v16, v9);
      *v16 = 1;
      sub_1800CEA90(a1, v6, &v16);
      if ( v17 )
        sub_180010EC8(v17);
      v6 += 2;
    }
    while ( v6 != v7 );
    v7 = v19;
    v6 = v18;
  }
  if ( v6 )
  {
    if ( v6 != v7 )
    {
      do
      {
        v10 = v6[1];
        if ( v10 )
          sub_180010EC8(v10);
        v6 += 2;
      }
      while ( v6 != v7 );
      v6 = v18;
    }
    sub_18000E26C(v6, (v20 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  v11 = **v3;
  v21 = v11;
  while ( (__int64 *)v11 != *v3 )
  {
    if ( **(_BYTE **)(v11 + 40) )
    {
      sub_18001D6F4(&v21, v5);
    }
    else
    {
      sub_18001D6F4(&v21, v5);
      v13 = sub_1800287AC(v3, v12);
      sub_1800277A0(v14, v13);
    }
    v11 = v21;
  }
  return 1;
}
