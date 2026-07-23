/*
 * XREFs of MiInitializeVadBitMap @ 0x140A08F10
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     MiExpandVadBitMap @ 0x140A090FC (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiInitializeVadBitMap(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  volatile _KAFFINITY_EX *ActiveProcessors; // rbp
  __int64 *i; // rbx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v9; // rcx
  __int64 Process; // r12
  int v11; // r13d

  v4 = 0;
  v5 = 0LL;
  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  if ( ActiveProcessors[4].StaticBitmap[6] )
  {
    for ( i = (__int64 *)&ActiveProcessors[3].StaticBitmap[14]; ; i += 9 )
    {
      CurrentThread = KeGetCurrentThread();
      v9 = (unsigned __int64)i[6] >> 15 << 12;
      Process = (__int64)CurrentThread->ApcState.Process;
      *i = i[6] & 0x7FFF;
      *(i - 1) = qword_140E2DFC8 + v9;
      *(i - 2) = 0LL;
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, a3, a4);
      v11 = MiExpandVadBitMap(i - 2, 1LL, 0LL, 0LL);
      if ( !v11 )
        *(i - 2) = 0LL;
      i[2] = *i;
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
      if ( !v11 )
        break;
      if ( ++v5 >= ActiveProcessors[4].StaticBitmap[6] )
        return v4;
    }
    return (unsigned int)-1073741801;
  }
  return v4;
}
