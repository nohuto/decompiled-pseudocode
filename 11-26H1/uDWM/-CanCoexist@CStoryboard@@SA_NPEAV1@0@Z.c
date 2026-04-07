/*
 * XREFs of ?CanCoexist@CStoryboard@@SA_NPEAV1@0@Z @ 0x1800C0780
 * Callers:
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x18007AD0C (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CStoryboard::CanCoexist(struct CStoryboard *a1, struct CStoryboard *a2)
{
  char v3; // di
  int v4; // esi
  int *v5; // rax
  unsigned int v6; // ecx
  int v7; // r9d
  int v8; // r8d

  v3 = 0;
  v4 = *(_DWORD *)(*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1);
  v5 = (int *)(*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a2 + 16LL))(a2);
  v6 = 0;
  v7 = *v5;
  while ( v6 < 0xC )
  {
    v8 = *((_DWORD *)&unk_1800F9BF0 + 2 * v6);
    if ( v4 == v8 && v7 == *((_DWORD *)&unk_1800F9BF0 + 2 * v6 + 1) || v4 == dword_1800F9BF4[2 * v6] && v7 == v8 )
      return 1;
    ++v6;
  }
  return v3;
}
