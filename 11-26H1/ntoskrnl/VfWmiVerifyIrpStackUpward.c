/*
 * XREFs of VfWmiVerifyIrpStackUpward @ 0x140C41510
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     ViErrorReport10 @ 0x140649300 (ViErrorReport10.c)
 */

__int64 __fastcall VfWmiVerifyIrpStackUpward(const void **a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  const void *v7; // rsi
  const void *v8; // rbp
  bool v9; // di
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    v7 = *a1;
    v8 = *(const void **)(a4 + 40);
    if ( a5 )
    {
      result = *(unsigned int *)(a4 + 4);
      if ( (int)result >= 0 && (*(_DWORD *)(a4 + 4) & 0x10000000) == 0 && *(_QWORD *)(a2 + 8) != *(_QWORD *)(a2 + 40) )
      {
        v9 = 1;
        v12 = 0LL;
        v13 = 0LL;
        VfAvlInitializeLockContext((__int64)&v12, 1);
        v11 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v12, v10, 0LL);
        if ( v11 )
          v9 = (*(_BYTE *)(v11 + 16) & 2) != 0;
        result = VfAvlCleanupLockContext((__int64)&v12);
        if ( !v9 )
        {
          result = (unsigned int)VfIoSwitchedOffNoReboot;
          if ( !VfIoSwitchedOffNoReboot )
            return ViErrorReport10(0x220u, v8, v7, *(const void **)(a2 + 8));
        }
      }
    }
  }
  return result;
}
