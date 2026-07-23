/*
 * XREFs of MmCheckForSafeExecution @ 0x14087B208
 * Callers:
 *     KiEmulateAtlThunk @ 0x1403D5600 (KiEmulateAtlThunk.c)
 * Callees:
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MmValidateUserCallTarget @ 0x140B48CA8 (MmValidateUserCallTarget.c)
 */

bool __fastcall MmCheckForSafeExecution(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v7; // bl
  char v9; // di
  __int64 Process; // r14
  struct _LIST_ENTRY *Address; // rbx
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rax

  CurrentThread = KeGetCurrentThread();
  v7 = (char)a4;
  v9 = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process, a3, a4);
  if ( !v7
    && ((Address = MiLocateAddress(a1), v12 = MiLocateAddress(a2), !Address)
     || !v12
     || Address == v12
     || (MiReadVadFlags((__int64)Address) & 0x1C) == 8)
    || (v13 = MiLocateAddress(a3)) == 0LL
    || (MiReadVadFlags((__int64)v13) & 0x1C) != 8 )
  {
    v9 = 0;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( v9 )
    return (unsigned int)MmValidateUserCallTarget(a3, 1LL) != 0;
  return v9;
}
