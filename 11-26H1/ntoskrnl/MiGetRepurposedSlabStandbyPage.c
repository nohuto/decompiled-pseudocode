/*
 * XREFs of MiGetRepurposedSlabStandbyPage @ 0x14036B420
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x14033C53C (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiLockPageListAndFirstPage @ 0x14036B5A4 (MiLockPageListAndFirstPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x14036BA38 (MiReInitializeFreeSlabPfn.c)
 *     MiReleasePageListLock @ 0x14036BCB0 (MiReleasePageListLock.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiGetRepurposedSlabStandbyPage(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 Page; // rax
  __int64 v7; // rsi
  ULONG_PTR v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[112]; // [rsp+20h] [rbp-98h] BYREF

  v1 = *(_QWORD **)(a1 + 80);
  if ( *v1 == 0x3FFFFFFFFFLL )
    return -1LL;
  memset_0(v14, 0, 0x68uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = 2;
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, v3);
  }
  Page = MiLockPageListAndFirstPage(v1, v14);
  v7 = Page;
  if ( Page == -1 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return -1LL;
  }
  v8 = 48 * Page - 0x220000000000LL;
  MiUnlinkPageFromListEx(v8, (v14[0] != 0) + 1);
  MiReleasePageListLock(v1, v14, v9, v10);
  MiDiscardTransitionPfnEx(v8, 2048LL, v11, v12);
  *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFF8FFFF | 0x10000;
  MiReInitializeFreeSlabPfn(v8, a1);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v7;
}
