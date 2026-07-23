/*
 * XREFs of MiDiscardVirtualMemory @ 0x1406F3E98
 * Callers:
 *     MiProcessVaRangesInfoClass @ 0x140B6E518 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiDiscardVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  _KPROCESS *Process; // rsi
  __int64 p_Blink; // rsi
  ULONG *v11; // rax
  char v12; // bl
  __int64 v13; // rdx
  __int128 v15; // [rsp+28h] [rbp-89h] BYREF
  __int64 v16; // [rsp+38h] [rbp-79h]
  _DWORD v17[2]; // [rsp+48h] [rbp-69h] BYREF
  char v18; // [rsp+51h] [rbp-60h]
  __int64 v19; // [rsp+68h] [rbp-49h]
  unsigned __int64 v20; // [rsp+70h] [rbp-41h]
  __int64 v21; // [rsp+78h] [rbp-39h]
  __int64 (__fastcall *v22)(__int64, unsigned __int64, int); // [rsp+F0h] [rbp+3Fh]
  __int64 (__fastcall *v23)(); // [rsp+F8h] [rbp+47h]
  __int128 *v24; // [rsp+100h] [rbp+4Fh]

  memset_0(v17, 0, 0xC0uLL);
  v16 = 0LL;
  v15 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v22 = MiDiscardPte;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v17[0] = 23;
  v23 = MiDiscardVirtualMemoryTail;
  v24 = &v15;
  v20 = a1;
  v21 = a2;
  v19 = p_Blink;
  if ( (*(_DWORD *)(p_Blink + 184) & 0xF) == 1 )
    v11 = &MiSystemPartition;
  else
    v11 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(p_Blink + 174));
  if ( v11[4539] )
    HIDWORD(v16) |= 1u;
  v18 = MiLockWorkingSetShared(p_Blink, v7, v8);
  v12 = v18;
  MiWalkPageTables((__int64)v17);
  LOBYTE(v13) = v12;
  MiUnlockWorkingSetShared(p_Blink, v13);
  *a4 = ((__int64)(*((_QWORD *)&v15 + 1) - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL) >> 3) + 1;
  return (unsigned int)v16;
}
