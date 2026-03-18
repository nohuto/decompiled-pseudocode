/*
 * XREFs of ??1?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x14011AA80
 * Callers:
 *     ?Destroy@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AA54 (-Destroy@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ??1?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA@XZ @ 0x14019C270 (--1-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA@XZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AB08 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<81920,160>::~CTypeIsolation<81920,160>(__int64 a1)
{
  struct _PAGED_LOOKASIDE_LIST *v2; // rcx
  void *v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax

  v2 = *(struct _PAGED_LOOKASIDE_LIST **)(a1 + 24);
  if ( v2 )
  {
    ExDeletePagedLookasideList(v2);
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  while ( 1 )
  {
    v4 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    NSInstrumentation::CSectionEntry<49152,192>::Destroy(v4);
  }
}
