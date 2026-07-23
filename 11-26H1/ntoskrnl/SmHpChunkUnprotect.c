/*
 * XREFs of SmHpChunkUnprotect @ 0x14024EF10
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140641BA8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
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

__int64 __fastcall SmHpChunkUnprotect(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  ULONG_PTR v4; // rbp
  unsigned int v6; // ebx
  __int64 v7; // r10
  __int64 v9; // rcx
  unsigned __int64 *v10; // rdi
  unsigned int v12; // eax
  __int64 v13; // r13
  unsigned int v14; // r14d
  unsigned __int8 *v15; // r12
  ULONG_PTR BugCheckParameter4; // r15
  __int64 Pool3; // rax
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v18; // rsi
  _QWORD *v19; // rcx
  int v20; // eax

  v4 = a4;
  v6 = 1;
  v7 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v9, v7);
  v10 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8 * v9) + 16 * (v7 ^ (unsigned int)(1 << v9)));
  if ( *((_DWORD *)v10 + 3) )
  {
    if ( (a3 & 3) != 0 )
    {
      v12 = rapidhash_internal((unsigned __int8 *)*v10, 0x1000uLL, 0LL);
      v13 = *((unsigned int *)v10 + 3);
      v14 = v12;
      if ( !v12 )
        v14 = 1;
      if ( v14 == (_DWORD)v13 )
      {
        if ( (a3 & 1) != 0 )
        {
          ExProtectPoolEx(*v10, *v10, 4096LL, 4u);
          *((_DWORD *)v10 + 3) = 0;
        }
      }
      else
      {
        if ( (a3 & 4) == 0 )
        {
          v15 = (unsigned __int8 *)*v10;
          BugCheckParameter4 = MmStoreGetPhysicalAddress(*v10) / 4096;
          Pool3 = ExAllocatePool3(64LL, 4192LL, 1348627827LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
          v18 = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)Pool3;
          if ( Pool3 )
          {
            *(_BYTE *)(Pool3 + 44) = 0;
            v19 = (_QWORD *)((Pool3 + 55) & 0xFFFFFFFFFFFFFFF8uLL);
            *v19 = 1LL;
            v19[6] = 0LL;
            v19[4] = v14;
            v19[1] = v15;
            v19[2] = 4096LL;
            v19[3] = v13;
            v19[5] = BugCheckParameter4;
            memmove(v19 + 6, v15, 0x1000uLL);
            if ( !KeRegisterBugCheckReasonCallback(
                    v18,
                    SmFatalHeapCorruptionDumpCallback,
                    KbCallbackSecondaryDumpData,
                    (PUCHAR)"nt!store memory compression") )
              ExFreePoolWithTag(v18, 0);
          }
          KeBugCheckEx(0x1C7u, v4, *v10, *((unsigned int *)v10 + 3), BugCheckParameter4);
        }
        return 0;
      }
    }
  }
  else if ( (a3 & 3) == 0 )
  {
    ExProtectPoolEx(*v10, *v10, 4096LL, 2u);
    v20 = rapidhash_internal((unsigned __int8 *)*v10, 0x1000uLL, 0LL);
    *((_DWORD *)v10 + 3) = v20;
    if ( !v20 )
      *((_DWORD *)v10 + 3) = 1;
  }
  return v6;
}
