/*
 * XREFs of ?UnregisterWithRegistry@CFlipManager@@AEAAXXZ @ 0x1400A4798
 * Callers:
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1400A44D0 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x1400A4570 (-Delete@CFlipManager@@MEAAJPEAX@Z.c)
 * Callees:
 *     DxgkGetSessionFlipManagerRegistry @ 0x1400651E4 (DxgkGetSessionFlipManagerRegistry.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::UnregisterWithRegistry(CFlipManager *this)
{
  struct IFlipManagerRegistry *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (int)DxgkGetSessionFlipManagerRegistry(&v2) >= 0 )
    (*(void (__fastcall **)(struct IFlipManagerRegistry *, char *))(*(_QWORD *)v2 + 8LL))(v2, (char *)this + 344);
}
