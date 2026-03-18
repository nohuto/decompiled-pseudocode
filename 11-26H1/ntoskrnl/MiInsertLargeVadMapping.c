/*
 * XREFs of MiInsertLargeVadMapping @ 0x140510234
 * Callers:
 *     MiInPagePageTable @ 0x1403A4C70 (MiInPagePageTable.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140342108 (MiSanitizeShadowPxe.c)
 *     MiConvertWorkingSetLockExclusiveToShared @ 0x1407034C0 (MiConvertWorkingSetLockExclusiveToShared.c)
 *     MiConvertWorkingSetLockSharedToExclusive @ 0x140703584 (MiConvertWorkingSetLockSharedToExclusive.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        int a3,
        unsigned __int64 *a4,
        int a5,
        int a6)
{
  int v10; // r15d
  _KPROCESS *Process; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 ValidPte; // rbx
  __int64 result; // rax
  int v17; // eax

  v10 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = MiLockProtoPoolPage((ULONG_PTR)a2, 0LL);
  v13 = *a2;
  MiUnlockProtoPoolPage(v12, 0x11u);
  v14 = 0xFFFFFC0000LL;
  if ( a3 != 2 )
    v14 = 0xFFFFFFFE00LL;
  ValidPte = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (v13 >> 12) & v14, a5 | 0x84000000);
  if ( a3 != 1 && !a6 )
  {
    result = MiConvertWorkingSetLockSharedToExclusive(&Process[2].ReadyListHead.Blink);
    if ( !(_DWORD)result )
      return result;
    v10 = 1;
  }
  v17 = 0;
  if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
    v17 = MiSanitizeShadowPxe();
  *a4 = ValidPte;
  if ( v17 )
    MiWritePteShadow();
  if ( v10 )
    MiConvertWorkingSetLockExclusiveToShared(&Process[2].ReadyListHead.Blink);
  return 1LL;
}
