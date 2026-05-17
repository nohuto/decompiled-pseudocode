/*
 * XREFs of RtlDeleteElementGenericTable @ 0x1800B7870
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x1800B7940 (RtlDelete.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlDeleteElementGenericTable(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  void (__fastcall *v10)(__int64, _QWORD *); // rax

  v2 = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  while ( 1 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(a1 + 40))(a1, a2, v2 + 5);
    if ( v5 )
      break;
    v6 = (_QWORD *)v2[1];
LABEL_4:
    v2 = v6;
    if ( !v6 )
      return 0;
  }
  if ( v5 == 1 )
  {
    v6 = (_QWORD *)v2[2];
    goto LABEL_4;
  }
  *(_QWORD *)a1 = RtlDelete(v2);
  v8 = v2[3];
  if ( *(_QWORD **)(v8 + 8) != v2 + 3 || (v9 = (_QWORD *)v2[4], (_QWORD *)*v9 != v2 + 3) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  --*(_DWORD *)(a1 + 36);
  *(_QWORD *)(a1 + 24) = a1 + 8;
  v10 = *(void (__fastcall **)(__int64, _QWORD *))(a1 + 56);
  *(_DWORD *)(a1 + 32) = 0;
  v10(a1, v2);
  return 1;
}
