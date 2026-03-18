/*
 * XREFs of ?Initialize@NetworkedFontFileTable@@YA_NXZ @ 0x14030540C
 * Callers:
 *     InitializeGdiSiloGlobals @ 0x140229660 (InitializeGdiSiloGlobals.c)
 * Callees:
 *     <none>
 */

char __fastcall NetworkedFontFileTable::Initialize(NetworkedFontFileTable *this, __int64 a2)
{
  __int64 *SiloGlobals; // rbx
  __int64 Semaphore; // rax
  struct _RTL_AVL_TABLE *v5; // rax

  SiloGlobals = (__int64 *)UserGetSiloGlobals(this, a2);
  Semaphore = GreCreateSemaphore();
  *SiloGlobals = Semaphore;
  if ( !Semaphore )
    return 0;
  v5 = (struct _RTL_AVL_TABLE *)Win32AllocPoolNonPaged(104LL, 1717988935LL);
  SiloGlobals[1] = (__int64)v5;
  if ( !v5 )
  {
    *SiloGlobals = 0LL;
    return 0;
  }
  RtlInitializeGenericTableAvl(
    v5,
    (PRTL_AVL_COMPARE_ROUTINE)GDINetworkedFontFileNodeCompare,
    (PRTL_AVL_ALLOCATE_ROUTINE)GDINetworkedFontFileNodeAlloc,
    (PRTL_AVL_FREE_ROUTINE)HwndLookupFreeTableData,
    0LL);
  return 1;
}
