/*
 * XREFs of SmHpBufferProtectEx @ 0x14024E610
 * Callers:
 *     SmHpChunkFree @ 0x140211300 (SmHpChunkFree.c)
 *     SmHpBufferUpdateFullness @ 0x14024F400 (SmHpBufferUpdateFullness.c)
 *     SmHpUnprotectListNeighbors @ 0x14024F5F4 (SmHpUnprotectListNeighbors.c)
 *     SmHpChunkAlloc @ 0x14024FF10 (SmHpChunkAlloc.c)
 * Callees:
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 *     ExProtectPoolEx @ 0x14024E7DC (ExProtectPoolEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     MmStoreGetPhysicalAddress @ 0x1405321B8 (MmStoreGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmHpBufferProtectEx(__int64 a1, _QWORD *a2, char a3, unsigned int a4)
{
  ULONG_PTR v4; // rbp
  unsigned int v7; // ebx
  unsigned int v9; // eax
  __int64 v10; // r12
  unsigned int v11; // r14d
  unsigned __int8 *v12; // r13
  ULONG_PTR BugCheckParameter4; // r15
  __int64 Pool3; // rax
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v15; // rsi
  _QWORD *v16; // rcx
  int v17; // eax

  v4 = a4;
  v7 = 1;
  if ( *((_DWORD *)a2 + 3) )
  {
    if ( (a3 & 3) != 0 )
    {
      v9 = rapidhash_internal((unsigned __int8 *)*a2, 0x1000uLL, 0LL);
      v10 = *((unsigned int *)a2 + 3);
      v11 = v9;
      if ( !v9 )
        v11 = 1;
      if ( v11 == (_DWORD)v10 )
      {
        if ( (a3 & 1) != 0 )
        {
          ExProtectPoolEx(*a2, *a2, 4096LL, 4LL);
          *((_DWORD *)a2 + 3) = 0;
        }
      }
      else
      {
        if ( (a3 & 4) == 0 )
        {
          v12 = (unsigned __int8 *)*a2;
          BugCheckParameter4 = MmStoreGetPhysicalAddress(*a2) / 4096;
          Pool3 = ExAllocatePool3(64LL, 4192LL, 1348627827LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
          v15 = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)Pool3;
          if ( Pool3 )
          {
            *(_BYTE *)(Pool3 + 44) = 0;
            v16 = (_QWORD *)((Pool3 + 55) & 0xFFFFFFFFFFFFFFF8uLL);
            *v16 = 1LL;
            v16[6] = 0LL;
            v16[4] = v11;
            v16[1] = v12;
            v16[2] = 4096LL;
            v16[3] = v10;
            v16[5] = BugCheckParameter4;
            memmove(v16 + 6, v12, 0x1000uLL);
            if ( !KeRegisterBugCheckReasonCallback(
                    v15,
                    SmFatalHeapCorruptionDumpCallback,
                    KbCallbackSecondaryDumpData,
                    (PUCHAR)"nt!store memory compression") )
              ExFreePoolWithTag(v15, 0);
          }
          KeBugCheckEx(0x1C7u, v4, *a2, *((unsigned int *)a2 + 3), BugCheckParameter4);
        }
        return 0;
      }
    }
  }
  else if ( (a3 & 3) == 0 )
  {
    ExProtectPoolEx(*a2, *a2, 4096LL, 2LL);
    v17 = rapidhash_internal((unsigned __int8 *)*a2, 0x1000uLL, 0LL);
    *((_DWORD *)a2 + 3) = v17;
    if ( !v17 )
      *((_DWORD *)a2 + 3) = 1;
  }
  return v7;
}
