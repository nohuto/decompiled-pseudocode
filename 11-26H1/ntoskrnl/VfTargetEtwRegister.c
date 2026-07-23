/*
 * XREFs of VfTargetEtwRegister @ 0x140C2F164
 * Callers:
 *     VerifierEtwRegister @ 0x140C46300 (VerifierEtwRegister.c)
 *     VerifierEtwRegisterClassicProvider @ 0x140C46340 (VerifierEtwRegisterClassicProvider.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall VfTargetEtwRegister(__int64 a1, unsigned __int64 a2)
{
  int v4; // edi
  _QWORD *Pool2; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  if ( !VfSafeMode )
  {
    v4 = 0;
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 0x20uLL, 0x54456656u);
    VfAvlInitializeLockContext((__int64)&v10, 0);
    v6 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v10, a2, 1LL);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 64);
      if ( v7 )
      {
        if ( Pool2 )
        {
          v8 = v7 + 16;
          Pool2[2] = a1;
          Pool2[3] = a2;
          v9 = *(_QWORD **)(v8 + 8);
          if ( *v9 != v8 )
            __fastfail(3u);
          *Pool2 = v8;
          v4 = 1;
          Pool2[1] = v9;
          *v9 = Pool2;
          *(_QWORD *)(v8 + 8) = Pool2;
        }
        else
        {
          *(_DWORD *)(v7 + 32) |= 1u;
        }
      }
    }
    VfAvlCleanupLockContext((__int64)&v10);
    if ( !v4 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x54456656u);
    }
  }
}
