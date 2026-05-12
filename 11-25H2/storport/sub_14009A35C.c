/*
 * XREFs of sub_14009A35C @ 0x14009A35C
 * Callers:
 *     sub_14017F720 @ 0x14017F720 (sub_14017F720.c)
 * Callees:
 *     sub_140033D74 @ 0x140033D74 (sub_140033D74.c)
 *     sub_14003E598 @ 0x14003E598 (sub_14003E598.c)
 *     sub_14005A4F0 @ 0x14005A4F0 (sub_14005A4F0.c)
 *     sub_14009E340 @ 0x14009E340 (sub_14009E340.c)
 *     sub_1400A2018 @ 0x1400A2018 (sub_1400A2018.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     sub_1401AF864 @ 0x1401AF864 (sub_1401AF864.c)
 */

__int64 __fastcall sub_14009A35C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r15
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *i; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rbx
  void (__fastcall *v15)(_QWORD); // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v21; // [rsp+58h] [rbp+10h] BYREF
  PVOID v22; // [rsp+60h] [rbp+18h] BYREF

  v21 = a2;
  v4 = *(_QWORD *)(a2[6] + 16LL);
  v5 = a2 + 1;
  v6 = a2[1];
  if ( *(_QWORD **)(v6 + 8) != a2 + 1 )
    goto LABEL_24;
  v7 = (_QWORD *)a2[2];
  if ( (_QWORD *)*v7 != v5 )
    goto LABEL_24;
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = (_QWORD *)a2[7];
  if ( v8 )
  {
    v9 = (_QWORD *)(a1 + 24);
    a2[7] = 0LL;
    v22 = v8;
    for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)i[6] == v8 )
        goto LABEL_16;
    }
    v8[7] = 0LL;
    v11 = v8[1];
    if ( *(_QWORD **)(v11 + 8) != v8 + 1 || (v12 = (_QWORD *)v8[2], (_QWORD *)*v12 != v8 + 1) )
LABEL_24:
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = v8[6];
    v14 = *(_QWORD *)(v13 + 16);
    if ( (int)sub_140033D74(v14) >= 0 )
    {
      sub_1401AF864(v14, v8);
      sub_1400A2018(v14 + 880, v13 + 72);
      if ( *(_WORD *)(v14 + 5026) )
      {
        v15 = *(void (__fastcall **)(_QWORD))(v14 + 5048);
        if ( v15 )
          v15(*(_QWORD *)(v14 + 5032));
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v14 + 336));
    }
    ObfDereferenceObject(*(PVOID *)(v14 + 8));
    sub_14003E598(&v22);
  }
LABEL_16:
  v16 = (_QWORD *)a2[8];
  a2[8] = 0LL;
  v17 = *(_QWORD **)(a1 + 24);
  v22 = v16;
  while ( v17 != (_QWORD *)(a1 + 24) )
  {
    if ( (_QWORD *)v17[7] == v16 )
      goto LABEL_23;
    v17 = (_QWORD *)*v17;
  }
  v18 = v16[1];
  if ( *(_QWORD **)(v18 + 8) != v16 + 1 )
    goto LABEL_24;
  v19 = (_QWORD *)v16[2];
  if ( (_QWORD *)*v19 != v16 + 1 )
    goto LABEL_24;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  sub_14005A4F0(&v22);
LABEL_23:
  ObfDereferenceObject(*(PVOID *)(v4 + 8));
  sub_14009E340(&v21);
  return 0LL;
}
