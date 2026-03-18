/*
 * XREFs of ?NotifyOwner@CAtlasEntry@@AEBAXXZ @ 0x180105C34
 * Callers:
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x180105BE4 (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801DEABC (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAtlasEntry::NotifyOwner(CAtlasEntry *this)
{
  void (***v2)(void); // rcx
  void (**v3)(void); // rdx
  void (*v4)(void); // rax

  v2 = (void (***)(void))*((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *v2;
    if ( *(_QWORD *)this )
      v4 = *v3;
    else
      v4 = v3[1];
    v4();
  }
}
