/*
 * XREFs of MiDeleteEmptyPageTables @ 0x140317278
 * Callers:
 *     MiDeleteAwePageTables @ 0x140705E80 (MiDeleteAwePageTables.c)
 *     MiFreeVirtualMemory @ 0x140A05050 (MiFreeVirtualMemory.c)
 * Callees:
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiDecommitInitializePacket @ 0x140363928 (MiDecommitInitializePacket.c)
 *     MiDeleteVaDirect @ 0x140363C90 (MiDeleteVaDirect.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiDeleteEmptyPageTables(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rsi
  __int64 Address; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  _OWORD v21[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v24; // [rsp+94h] [rbp-6Ch]
  char v25; // [rsp+99h] [rbp-67h]
  int v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v29; // [rsp+C0h] [rbp-40h]
  __int64 (*v30)(); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v31)(); // [rsp+140h] [rbp+40h]
  _QWORD *v32; // [rsp+148h] [rbp+48h]
  _BYTE v33[116]; // [rsp+150h] [rbp+50h] BYREF
  int v34; // [rsp+1C4h] [rbp+C4h]
  _QWORD v35[10]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v36; // [rsp+240h] [rbp+140h]

  v22 = 0LL;
  memset(v21, 0, sizeof(v21));
  memset_0(v35, 0, 0x80uLL);
  memset_0(v33, 0, 0x98uLL);
  memset_0(&v23, 0, 0xC0uLL);
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE(CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 500) & 0x20) == 0 )
  {
    Address = MiLocateAddress(a1);
    v10 = Address;
    if ( Address )
    {
      v11 = *(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32);
      if ( a2 >> 12 <= v11 )
      {
        MiLockVad((__int64)CurrentThread, Address, v11, v9);
        v12 = *(unsigned int *)(v10 + 48);
        if ( (v12 & 0x80000) != 0
          && (unsigned int)MiVadPureReserve(v10, v12)
          && (v13 & 0x880000) != 0x880000
          && (*(unsigned int *)(v10 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 32)) != 0x7FFFFFFFDLL
          && (*(_DWORD *)(v10 + 48) & 1) == 0
          && ((*(unsigned int *)(v10 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 32)) < 0x7FFFFFFFDLL
           || (*(unsigned int *)(v10 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 32)) == 0x7FFFFFFFELL) )
        {
          v14 = v36;
          if ( (a3 & 1) == 0 )
            v14 = v10;
          v36 = v14;
          MiDecommitInitializePacket(
            (unsigned int)v33,
            (a1 >> 9) & 0xFFFFFFF8,
            ((__int64)(((a2 >> 9) & 0x7FFFFFFFF8LL) - ((a1 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1,
            0,
            Process,
            v10,
            33,
            0LL,
            (__int64)v21);
          v34 = 128;
          v35[0] = v33;
          v23 = 7;
          v35[1] = v21;
          v28 = a1;
          v29 = a2;
          v24 = v24 & 0xFFFFFE3F | 0x40;
          v32 = v35;
          v30 = MiDeleteEmptyPageTable;
          v31 = MiDeleteEmptyPageTableTail;
          v26 = 0;
          v27 = Process + 1024;
          LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process, v15, v16);
          v25 = MiLockWorkingSetShared(Process + 1024, v17, v18);
          if ( !(unsigned __int8)MiDeleteVaDirect(&v23) )
            MiWalkPageTables(&v23);
          LOBYTE(v19) = v25;
          MiUnlockWorkingSetShared(Process + 1024, v19);
          UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
        }
        MiUnlockVad((__int64)CurrentThread, v10);
      }
    }
  }
  return UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, Process);
}
