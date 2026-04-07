/*
 * XREFs of ?CanCoexist@CStoryboard@@SA_NPEAV1@0@Z @ 0x1800C69DC
 * Callers:
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x18008C1B0 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CStoryboard::CanCoexist(struct CStoryboard *a1, struct CStoryboard *a2)
{
  char v3; // di
  int v4; // esi
  int *v5; // rax
  unsigned int v6; // edx
  int v7; // r8d
  _DWORD *v8; // rcx

  v3 = 0;
  v4 = *(_DWORD *)(*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1);
  v5 = (int *)(*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a2 + 16LL))(a2);
  v6 = 0;
  v7 = *v5;
  while ( v6 < 0xC )
  {
    v8 = &dword_1800FE680[2 * v6];
    if ( v4 == *v8 && v7 == v8[1] || v4 == v8[1] && v7 == dword_1800FE680[2 * v6] )
      return 1;
    ++v6;
  }
  return v3;
}
