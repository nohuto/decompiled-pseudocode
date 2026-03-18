/*
 * XREFs of ?BreakLinksForCyclicResources@CResourceTable@@AEAAXXZ @ 0x1801AA2DC
 * Callers:
 *     ??1CResourceTable@@UEAA@XZ @ 0x1801AA29C (--1CResourceTable@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResourceTable::BreakLinksForCyclicResources(CResourceTable *this)
{
  unsigned __int64 *v1; // rbx
  unsigned __int64 v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // rdx

  v1 = (unsigned __int64 *)((char *)this + 64);
  while ( 1 )
  {
    v2 = *v1;
    if ( (unsigned __int64 *)*v1 == v1 )
      break;
    if ( *(unsigned __int64 **)(v2 + 8) != v1 || (v3 = *(_QWORD **)v2, *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *v1 = (unsigned __int64)v3;
    v3[1] = v1;
    v4 = v2 & ((unsigned __int128)-(__int128)(v2 - 8) >> 64);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v2 + 8) = v4;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(v2 - 8) + 8LL))(v2 - 8);
  }
}
