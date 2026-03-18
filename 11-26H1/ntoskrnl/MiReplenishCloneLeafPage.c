/*
 * XREFs of MiReplenishCloneLeafPage @ 0x14030E9E0
 * Callers:
 *     MiHandleForkValidPteCopy @ 0x14030DAD8 (MiHandleForkValidPteCopy.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockClonePageTable @ 0x14030B67C (MiUnlockClonePageTable.c)
 *     MiComputePreferredNode @ 0x14030EAE0 (MiComputePreferredNode.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     MiWaitForFreePage @ 0x1403D1DB4 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiReplenishCloneLeafPage(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r12
  __int64 v4; // r10
  unsigned int v5; // ebx
  __int64 v6; // r13
  int v7; // edi
  unsigned int v8; // edi
  __int64 Page; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  KIRQL v14; // al
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+10h]

  BugCheckParameter4 = *(_QWORD *)(a1 + 304);
  v1 = 1;
  v15 = 0LL;
  v3 = *(_QWORD *)a1;
  v5 = MiComputePreferredNode(*(_QWORD *)(a1 + 8) + 1024LL, *(_QWORD *)(a1 + 272)) + 1;
  v6 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v4 + 1198));
  MiInitializePageColorBase(v4 + 1024, 3LL, v5, &v15);
  v7 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v15, 1u);
  v8 = DWORD2(v15) & 0xFFFFFF00 | v7;
  Page = MiGetPage(v6, v8, 1u);
  if ( Page == -1 )
  {
    do
    {
      MiUnlockClonePageTable(a1, ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      LOBYTE(v11) = *(_BYTE *)(a1 + 40);
      MiUnlockWorkingSetShared(v3 + 1024, v11);
      MiWaitForFreePage(v6, 0LL);
      v14 = MiLockWorkingSetShared(v3 + 1024, v12, v13);
      *(_BYTE *)(a1 + 40) = v14;
      MiMakeSystemAddressValid(BugCheckParameter4, v5, v14, 0);
      Page = MiGetPage(v6, v8, 1u);
    }
    while ( Page == -1 );
    v1 = 0;
  }
  *(_QWORD *)(a1 + 336) = Page;
  return v1;
}
