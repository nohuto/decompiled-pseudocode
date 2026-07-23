/*
 * XREFs of MiWriteEnclavePte @ 0x140342CF8
 * Callers:
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiUpdateAwePageTable @ 0x140342494 (MiUpdateAwePageTable.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 */

void __fastcall MiWriteEnclavePte(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v7; // rbx
  struct _LIST_ENTRY **p_Blink; // rbp
  __int64 *v10; // rsi
  __int64 v11; // r11
  KIRQL v12; // r14
  __int64 v13; // r10
  int v14; // ecx
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v7 = a2;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v10 = (__int64 *)(((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = 0LL;
  if ( a5 )
  {
    v12 = MiLockWorkingSetShared((__int64)p_Blink, a2, a3);
    MiMakeSystemAddressValid(BugCheckParameter4, (*(_DWORD *)(a3 + 48) >> 10) & 0x7F, v12, 0);
    v11 = 0LL;
  }
  else
  {
    v12 = 17;
  }
  if ( a4 )
  {
    MiWriteValidPteNewProtection((__int64 *)BugCheckParameter4, v7);
    goto LABEL_12;
  }
  v13 = *(_QWORD *)BugCheckParameter4;
  if ( BugCheckParameter4 < 0xFFFFF6FB7DBED000uLL || BugCheckParameter4 > 0xFFFFF6FB7DBED7F8uLL )
  {
    v21 = v7;
    v14 = 0;
  }
  else
  {
    MiReadPteShadow(BugCheckParameter4, *(_QWORD *)BugCheckParameter4);
    v21 = v7;
    v20 = MiSanitizeShadowPxe(v18, &v21, v19);
    v7 = v21;
    v14 = v20;
  }
  *(_QWORD *)BugCheckParameter4 = v7;
  if ( v14 )
    MiWritePteShadow();
  v15 = 1LL;
  v16 = v11;
  if ( v13 )
  {
    if ( (v13 & 0xC00) == 0x800 )
      v15 = v11;
  }
  else
  {
    v16 = 1;
  }
  if ( v15 | v16 )
  {
    MiUpdateAwePageTable(v10, v15, v16);
LABEL_12:
    LODWORD(v11) = 0;
  }
  if ( a5 != (_DWORD)v11 )
  {
    MiUnlockPageTableInternal((__int64)p_Blink, (unsigned __int64)v10);
    LOBYTE(v17) = v12;
    MiUnlockWorkingSetShared((__int64)p_Blink, v17);
  }
}
