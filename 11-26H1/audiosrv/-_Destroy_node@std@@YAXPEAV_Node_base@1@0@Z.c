/*
 * XREFs of ?_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z @ 0x18014CD4C
 * Callers:
 *     ??1?$_Tidy_guard@V?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@@std@@QEAA@XZ @ 0x18014A5CC (--1-$_Tidy_guard@V-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@@std@@QEAA@XZ.c)
 *     ??1_Node_assert@std@@UEAA@XZ @ 0x18014A804 (--1_Node_assert@std@@UEAA@XZ.c)
 *     ??1_Node_if@std@@UEAA@XZ @ 0x18014A83C (--1_Node_if@std@@UEAA@XZ.c)
 *     ?_Tidy@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014DEA8 (-_Tidy@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Destroy_node(struct std::_Node_base *a1, struct std::_Node_base *a2)
{
  struct std::_Node_base *v3; // rbx
  struct std::_Node_base *v4; // rcx
  _QWORD *v5; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( !v3 )
        break;
      v4 = v3;
      v5 = (_QWORD *)((char *)v3 + 16);
      v3 = (struct std::_Node_base *)*((_QWORD *)v3 + 2);
      *v5 = 0LL;
      (**(void (__fastcall ***)(struct std::_Node_base *, __int64))v4)(v4, 1LL);
    }
    while ( v3 != a2 );
  }
}
