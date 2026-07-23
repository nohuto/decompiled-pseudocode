/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x140478A34
 * Callers:
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiCopyHeaderIfResident @ 0x1404AE5F4 (MiCopyHeaderIfResident.c)
 *     MiCopyFileOnlyPage @ 0x1404AF42C (MiCopyFileOnlyPage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiWriteValidPteVolatile @ 0x140443050 (MiWriteValidPteVolatile.c)
 *     MiTryLockLeafPage @ 0x140478BFC (MiTryLockLeafPage.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned __int64 v7; // r9
  volatile signed __int64 *v8; // rsi
  volatile unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rdi
  int v14; // ecx
  unsigned __int64 ContainingPageTable; // rax

  *a3 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter4) == 4 )
  {
    ContainingPageTable = MiGetContainingPageTable(BugCheckParameter4);
    LOBYTE(v9) = CLFS_LSN_NULL_EXT;
    v10 = ContainingPageTable;
    v8 = 0LL;
  }
  else
  {
    v8 = (volatile signed __int64 *)(((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v9 = *v8;
    if ( (*v8 & 1) == 0 )
      return 3221435187LL;
    v10 = ((unsigned __int64)*v8 >> 12) & 0xFFFFFFFFFFLL;
    if ( v10 > qword_140E2D920 || ((*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      return 3221225557LL;
  }
  v11 = 0;
  v12 = 0xFFFFDE0000000000uLL;
  v13 = 48 * v10 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    return 3221225557LL;
  if ( (*(_QWORD *)(v13 + 24) & 0x4000000000000000LL) != 0
    || v8 && ((v9 = *v8, (*v8 & 1) == 0) || (v9 & 0x200) != 0 || v10 != ((v9 >> 12) & 0xFFFFFFFFFFLL))
    || (*(_BYTE *)(v13 + 34) & 0x20) != 0 )
  {
    v11 = -1073741739;
  }
  else
  {
    if ( v8 && (v9 & 0x20) == 0 )
      MiWriteValidPteVolatile(v8, 1, 0);
    if ( !a4 || (v11 = MiTryLockLeafPage(BugCheckParameter4, 1LL, a4), v11 >= 0) )
    {
      if ( v8 )
        MiAddLockedPageCharge(v13, 1, v12, v7);
      v14 = *(_DWORD *)(v13 + 32);
      *a3 = v13;
      *(_DWORD *)(v13 + 32) = v14 | 0x200000;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (unsigned int)v11;
}
