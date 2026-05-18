/*
 * XREFs of sub_1800577E0 @ 0x1800577E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18005A8BC @ 0x18005A8BC (sub_18005A8BC.c)
 *     sub_18006E9F0 @ 0x18006E9F0 (sub_18006E9F0.c)
 *     sub_18006EAE0 @ 0x18006EAE0 (sub_18006EAE0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800577E0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  int v5; // r8d
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF

  v4 = *(unsigned int *)(a1 + 128);
  if ( (_DWORD)v4 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 440) & 0x100) != 0 )
      v4 = (unsigned int)((*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 280LL))(*a2) != 0) + 2;
    if ( (*(_DWORD *)(a1 + 440) & 0x200) != 0 )
    {
LABEL_11:
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(*(_QWORD *)*a2 + 152LL))(*a2, a2, v4);
      sub_180012C40(v15, v6);
      v7 = sub_18006EAE0(v15[0], v16, 2LL);
      sub_18005A8BC(a1, v7);
      v8 = sub_18006E9F0(v15[0], v16, 2LL);
      sub_18005A750(a1, v8);
      v9 = v15[1];
      goto LABEL_12;
    }
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a2 + 32LL))(*a2, v16);
    sub_18005A8BC(a1, v13);
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a2 + 40LL))(*a2, v16);
    sub_18005A750(a1, v14);
    return;
  }
  v4 = (unsigned int)(v5 - 1);
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
    {
      if ( !*(_QWORD *)(a1 + 136) && !*(_QWORD *)(a1 + 152) )
      {
        sub_1800148EC(a1 + 24);
        sub_18001DCFC(&qword_1801BD388, 4);
      }
      return;
    }
    goto LABEL_11;
  }
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 152LL))(*a2);
  sub_180012C40(v16, v10);
  v11 = v16[0];
  v12 = sub_180012C40(v15, (_QWORD *)(v16[0] + 456LL));
  sub_18005A8BC(a1, v12);
  sub_180012C40(v15, (_QWORD *)(v11 + 472));
  sub_18005A750(a1, v15);
  v9 = v16[1];
LABEL_12:
  if ( v9 )
    sub_180010EC8(v9);
}
