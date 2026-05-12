/*
 * XREFs of sub_1400293C8 @ 0x1400293C8
 * Callers:
 *     sub_1400292A8 @ 0x1400292A8 (sub_1400292A8.c)
 *     sub_1400F157C @ 0x1400F157C (sub_1400F157C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400293C8(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD *); // r15
  __int64 (__fastcall *v4)(__int64, __int64); // r12
  unsigned int v6; // edi
  _QWORD **v7; // r14
  _QWORD *i; // rbx
  __int64 v9; // rax
  int v10; // eax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax

  v2 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 24);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 32);
  v6 = -1073741275;
  v7 = (_QWORD **)(*(_QWORD *)(a1 + 16)
                 + 16LL * ((*(unsigned int (__fastcall **)(__int64))(a1 + 40))(a2) % *(_DWORD *)(a1 + 4)));
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    v9 = v2(i);
    v10 = v4(v9, a2);
    if ( !v10 )
    {
      v11 = (_QWORD *)*i;
      v6 = 0;
      if ( *(_QWORD **)(*i + 8LL) != i || (v12 = (_QWORD *)i[1], (_QWORD *)*v12 != i) )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = v12;
      --*(_DWORD *)a1;
      return v6;
    }
    if ( v10 < 0 )
      return v6;
  }
  return v6;
}
