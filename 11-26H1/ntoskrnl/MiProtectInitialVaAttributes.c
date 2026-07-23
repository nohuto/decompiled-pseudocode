/*
 * XREFs of MiProtectInitialVaAttributes @ 0x140313660
 * Callers:
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiFaultInPagedPool @ 0x1402E8708 (MiFaultInPagedPool.c)
 */

__int64 __fastcall MiProtectInitialVaAttributes(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  ULONG_PTR v4; // rcx
  int PageProtection; // eax
  __int64 v7; // rdx
  __int16 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a2;
  v4 = *(_QWORD *)a1;
  v9 = 0LL;
  if ( !v2 )
  {
    PageProtection = (*(_DWORD *)(v4 + 48) >> 5) & 0x1F;
    goto LABEL_3;
  }
  PageProtection = MiGetPageProtection(v4, (ULONG_PTR)a2, &v9, &v8);
  if ( !v9 )
  {
LABEL_3:
    *(_DWORD *)(a1 + 32) = MmProtectToValue[PageProtection];
    return 1LL;
  }
  MiUnlockPageTableInternal(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 56));
  LOBYTE(v7) = *(_BYTE *)(a1 + 16);
  MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 8), v7);
  MiFaultInPagedPool((unsigned __int64)v9);
  return 0LL;
}
